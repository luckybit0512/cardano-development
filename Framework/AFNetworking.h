// AFNetworking.h
// Copyright (c) 2011–2016 Alamofire Software Foundation
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

// Project versioning
FOUNDATION_EXPORT double AFNetworkingVersionNumber;
FOUNDATION_EXPORT const unsigned char AFNetworkingVersionString[];

// Public headers
#import <AFNetworking/AFURLRequestSerialization.h>
#import <AFNetworking/AFURLResponseSerialization.h>
#import <AFNetworking/AFSecurityPolicy.h>
#import <AFNetworking/AFCompatibilityMacros.h>

// Reachability (exclude for watchOS)
#if !TARGET_OS_WATCH
#import <AFNetworking/AFNetworkReachabilityManager.h>
#endif

// Session management
#import <AFNetworking/AFURLSessionManager.h>
#import <AFNetworking/AFHTTPSessionManager.h>

// iOS and tvOS specific imports
#if TARGET_OS_IOS || TARGET_OS_TV
#import <AFNetworking/AFAutoPurgingImageCache.h>
#import <AFNetworking/AFImageDownloader.h>
#import <AFNetworking/UIActivityIndicatorView+AFNetworking.h>
#import <AFNetworking/UIButton+AFNetworking.h>
#import <AFNetworking/UIImageView+AFNetworking.h>
#import <AFNetworking/UIProgressView+AFNetworking.h>
#endif

// iOS specific imports
#if TARGET_OS_IOS
#import <AFNetworking/AFNetworkActivityIndicatorManager.h>
#import <AFNetworking/UIRefreshControl+AFNetworking.h>
#import <AFNetworking/WKWebView+AFNetworking.h>
#endif