//
//  ResourceUtils.swift
//  SonarMusic
//
//  Created by Zhuanz密码0000 on 2025/8/19.
//
import Foundation

class ResourceUtils {
    static let shared = ResourceUtils()
    private init() {}
    
    func imageURL(_ releativePath: String) -> URL? {
        return URL(string: AppConfig.picURL + releativePath)
    }
    
    func mediaURL(_ relativePath: String) -> URL? {
        return URL(string: AppConfig.s3URL + relativePath)
    }
}
