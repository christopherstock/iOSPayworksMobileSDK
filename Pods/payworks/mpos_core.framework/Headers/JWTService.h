//
//  JWTService.h
//  mpos_core
//
//  Created by Chamorro, Alberto on 24/03/2021.
//  Copyright © 2021 payworks GmbH. All rights reserved.
//

@import Foundation;
@class MPHTTPSessionManager;

NS_ASSUME_NONNULL_BEGIN

typedef void (^NetworkErrorFailureBlock)(NSError *_Nonnull error, NSURLResponse *_Nullable response, NSData *_Nullable data);
typedef void (^NetworkSuccessBlock)(NSDictionary<NSString *, id> *responseObject, NSURLResponse *_Nullable response);
typedef void (^NetworkSuccessWithoutResponseBodyBlock)(NSURLSessionDataTask *_Nonnull data);
typedef NSURLSessionDataTask *_Nullable (^NetworkErrorRetryCall)(void);

@interface JWTService : NSObject

@property (nonatomic, readonly, nullable) NSString *jwt;

- (instancetype)initWithHTTPClient:(MPHTTPSessionManager *)httpSessionManager merchantId:(NSString *)merchant secret:(NSString *)secret;

- (NetworkSuccessBlock)refreshingJWTTokenIfNeeded:(NetworkSuccessBlock)success;
- (NetworkSuccessWithoutResponseBodyBlock)refreshingJWTTokenWithoutResponseBodyIfNeeded:(NetworkSuccessWithoutResponseBodyBlock)success;

- (NetworkErrorFailureBlock)handlingAuthenticationErrors:(NetworkErrorFailureBlock)failure retry:(NetworkErrorRetryCall)retry request:(NSURLRequest *)request;

- (NSDictionary<NSString *, NSString *> *)authenticationHeaders;

@end

NS_ASSUME_NONNULL_END
