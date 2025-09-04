//
//  BlackListView.swift
//  Soundry
//
//  Created by Zhuanz密码0000 on 2025/8/27.
//

import SwiftUI
import Factory
import SDWebImageSwiftUI
import APIClient
import SVProgressHUD

// MARK: - 拉黑用户 Cell 组件
struct BlockedUserCell: View {
    let userInfo: APIClient.UserInfo
    let onUnblock: () -> Void
    
    @State private var showBlockAlert: Bool = false
    
    var body: some View {
        HStack(spacing: 12) {
            // 用户头像
            if let avatar = userInfo.avatar, !avatar.isEmpty,
               let url = ResourceUtils.shared.imageURL(avatar) {
                WebImage(url: url) { image in
                    image.resizable()
                } placeholder: {
                    Image(systemName: "person.circle.fill")
                        .resizable()
                        .foregroundColor(.gray)
                }
                .frame(width: 50, height: 50)
                .clipShape(Circle())
            } else {
                Image(systemName: "person.circle.fill")
                    .resizable()
                    .frame(width: 50, height: 50)
                    .foregroundColor(.gray)
            }
            
            // 用户名
            Text(userInfo.nickname ?? "Unknown User")
                .font(.system(size: 16, weight: .medium))
                .foregroundColor(.white)
            
            Spacer()
            
            // 取消拉黑按钮
            Button(action: {
                showBlockAlert = true
            }) {
                Image(systemName: "xmark")
                    .font(.system(size: 18, weight: .medium))
                    .foregroundColor(.white)
                    .frame(width: 30, height: 30)
            }
        }
        .padding(.horizontal, 16)
        .padding(.vertical, 12)
        .background(
            RoundedRectangle(cornerRadius: 12)
                .fill(Color.white.opacity(0.1))
        )
        .alert("Are you sure you want to cancel the block?", isPresented: $showBlockAlert) {
            Button("OK") {
                onUnblock()
            }
            Button("Cancel", role: .cancel) {
                
            }
        }
    }
    
}

struct BlackListView: View {
    @Environment(\.dismiss) var dismiss
    @InjectedObject(\.blackListApiViewModel) var blackListApiViewModel : BlackListApiViewModel
    
    var body: some View {
        ZStack{
            Color.black
                .ignoresSafeArea()
            VStack(spacing: 0){
                // 顶部导航栏
                HStack {
                    Button(action: {
                        dismiss()
                    }) {
                        Image(systemName: "chevron.left")
                            .font(.system(size: 22, weight: .medium))
                            .foregroundColor(.white)
                    }
                    
                    Spacer()
                    
                    Text("Blocklist")
                        .font(.system(size: 18, weight: .semibold))
                        .foregroundColor(.white)
                    
                    Spacer()
                    
                    Image(systemName: "chevron.left")
                        .font(.system(size: 22))
                        .foregroundColor(.clear)
                }
                .padding(.horizontal, 20)
                .padding(.top, 12)
                .frame(height: 44)
                
                // 主要内容区域
                if let userList = blackListApiViewModel.blockList, !userList.isEmpty {
                    
                    
                    ScrollView {
                        LazyVStack(spacing: 12) {
                            ForEach(Array(userList.enumerated()), id: \.offset) { index, blockedRecord in
                                BlockedUserCell(
                                    userInfo: blockedRecord.userInfo,
                                    onUnblock: {
                                        Task {
                                            print("unblock ----- ")
                                            SVProgressHUD.show()
                                            await blackListApiViewModel.unblockUser(uid: Int64(blockedRecord.blackUID) ?? 0)
                                            // 取消拉黑后刷新列表
                                            await blackListApiViewModel.pageblockUser()
                                            DispatchQueue.main.async {
                                                SVProgressHUD.dismiss()
                                            }
                                        }
                                    }
                                )
                            }
                        }
                        .padding(.horizontal, 20)
                        .padding(.top, 20)
                        .padding(.bottom,blackListApiViewModel.blockListHasMore ? 20 : 80)
                        
                        // 上拉加载更多区域
                        if blackListApiViewModel.blockListHasMore{
                            VStack(spacing: 10){
                                HStack{
                                    Spacer()
                                    if blackListApiViewModel.blockListHasMore
                                    {
                                        //正在加载
                                        HStack{
                                            ProgressView()
                                                .scaleEffect(0.8)
                                            Text("Loading...")
                                                .font(.caption)
                                                .foregroundColor(.gray)
                                        }
                                        .padding(.bottom,40)
                                    }else{
                                        //显示上拉加载提示
                                        HStack{
                                            Image(systemName: "arrow.down.circle")
                                                .foregroundColor(.gray)
                                            Text("Pull to loading more..")
                                                .font(.caption)
                                                .foregroundColor(.gray)
                                        }
                                        .padding(.bottom,10)
                                    }
                                    Spacer()
                                }
                            }
                            .onAppear{
                                //当加载更多指示器出现，自动加载下一页
                                if !blackListApiViewModel.isBlockListLoadingMore{
                                    Task{
                                        let nextPage = blackListApiViewModel.currentblockListPage + 1
                                        await blackListApiViewModel.pageblockUser(page: nextPage)
                                    }
                                }
                            }
                        }
                    }
                } else {
                    // 空状态
                    VStack(spacing: 16) {
                        Image(systemName: "person.slash")
                            .font(.system(size: 60))
                            .foregroundColor(.gray)
                        
                        Text("No blocked users")
                            .font(.system(size: 18, weight: .medium))
                            .foregroundColor(.gray)
                        
                        Text("Users you block will appear here")
                            .font(.system(size: 14))
                            .foregroundColor(.gray.opacity(0.7))
                            .multilineTextAlignment(.center)
                    }
                    .frame(maxWidth: .infinity, maxHeight: .infinity)
                }
            }
        }
        .onAppear {
            Task {
                await blackListApiViewModel.pageblockUser()
            }
        }
        .navigationBarHidden(true)
        .navigationBarBackButtonHidden(true)
    }
}

    




#Preview {
    BlackListView()
}
