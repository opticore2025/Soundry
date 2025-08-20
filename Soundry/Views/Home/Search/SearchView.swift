import SwiftUI
import Factory
import APIClient

struct SearchView: View {
    @Environment(\.dismiss) private var dismiss
    @InjectedObject(\.musicApiViewModel) private var musicApiViewModel: MusicApiViewModel

    @State private var searchText: String = ""
    @State private var isSearching: Bool = false
    @State private var hasSearched: Bool = false
    @FocusState private var isSearchFieldFocused: Bool

    var body: some View {
        ZStack {
            Color.black.ignoresSafeArea()

            VStack(spacing: 0) {
                searchBar
                    .frame(height: 60)
                    .background(Color.black)

                contentView
                    .frame(maxWidth: .infinity, maxHeight: .infinity)
            }
        }
        .navigationBarHidden(true)
        .ignoresSafeArea(.keyboard, edges: .bottom)
    }

    // MARK: - 搜索栏
    private var searchBar: some View {
        HStack(spacing: 12) {
            HStack(spacing: 12) {
                TextField("Search", text: $searchText)
                    .font(.system(size: 16))
                    .foregroundColor(.white)
                    .focused($isSearchFieldFocused)
                    .textFieldStyle(PlainTextFieldStyle())
                // 添加键盘工具栏：包含完成按钮
                    .toolbar {
                    ToolbarItem(placement: .keyboard) {
                            HStack {
                                Spacer()
                                    Button("Done") {
                                        // 收起键盘
                                        isSearchFieldFocused = false
                                    // 可选：点击完成时自动执行搜索
                                    performSearch()
                                    }
                                            .foregroundColor(.white)
                                            .font(.system(size: 16, weight: .semibold))
                                        }
                                    }
                                }
                                .navigationBarTitleDisplayMode(.inline)

                Button(action: {
                    performSearch()
                    isSearchFieldFocused = false
                }) {
                    Image(systemName: "magnifyingglass")
                        .font(.system(size: 16))
                        .foregroundColor(.white)
                        .opacity(searchText.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty ? 0.5 : 1.0)
                }
                .disabled(searchText.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty)
                .buttonStyle(PlainButtonStyle())
            }
            .padding(.horizontal, 16)
            .padding(.vertical, 12)
            .background(
                RoundedRectangle(cornerRadius: 12)
                    .fill(Color.white.opacity(0.1))
            )

            Button("Cancel") { dismiss() }
                .font(.system(size: 16))
                .foregroundColor(.white)
        }
        .padding(.horizontal, 20)
        .padding(.top, 12)
        .padding(.bottom, 8)
    }

    // MARK: - 内容
    private var contentView: some View {
        Group {
            if isSearching {
                loadingView
            } else if hasSearched, musicApiViewModel.musicHallSearchData.isEmpty {
                nothingFoundView
            } else if hasSearched, !musicApiViewModel.musicHallSearchData.isEmpty {
                resultsView(musicApiViewModel.musicHallSearchData)
            } else {
                Spacer()
            }
        }
    }

    private var loadingView: some View {
        VStack(spacing: 16) {
            ProgressView().progressViewStyle(CircularProgressViewStyle(tint: .white))
            Text("Searching...").foregroundColor(.white.opacity(0.8))
        }
    }

    private var nothingFoundView: some View {
        VStack(spacing: 16) {
            Image(systemName: "magnifyingglass")
                .font(.system(size: 40))
                .foregroundColor(.white.opacity(0.8))
            Text("nothing found").foregroundColor(.white.opacity(0.9))
        }
        .frame(maxWidth: .infinity, maxHeight: .infinity)
    }

    private func resultsView(_ list: [MusicHallItem]) -> some View {
        // 过滤掉缺少用户信息的项，保证网格闭包总能返回有效视图
        let filtered = list.filter { item in
            guard let uid = item.uid else { return false }
            return musicApiViewModel.musicHallSearchUserInfoMap["\(uid)"] != nil
        }

        return ScrollView {
            LazyVGrid(columns: [
                GridItem(.flexible(), spacing: 15),
                GridItem(.flexible(), spacing: 15)
            ], spacing: 15) {
                ForEach(filtered, id: \.id) { item in
                    MusicItemView(
                        musicItem: item,
                        userItem: musicApiViewModel.musicHallSearchUserInfoMap["\(item.uid!)"]!
                    )
                }
            }
            .padding(.horizontal)
            .padding(.bottom, 80)
        }
    }

    // MARK: - 动作
    private func performSearch() {
        let query = searchText.trimmingCharacters(in: .whitespacesAndNewlines)
        guard !query.isEmpty else { return }
        isSearching = true
        hasSearched = true
        Task { @MainActor in
            await musicApiViewModel.searchMusicHall(searchText: query)
            isSearching = false
        }
    }
}

#Preview {
    SearchView()
        .preferredColorScheme(.dark)
}


