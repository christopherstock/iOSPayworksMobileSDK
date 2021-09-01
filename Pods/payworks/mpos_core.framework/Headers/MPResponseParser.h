//
//  MPErrorResponseParser.h
//  mpos
//
//  Created by Simon Eumes on 11/19/13.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//

NS_ASSUME_NONNULL_BEGIN

@interface MPResponseParser : NSObject

+ (NSError *)parseResponseForError:(nullable NSURLResponse *)aResponse data:(nullable NSData *)data error:(nullable NSError *)afError;

+ (nullable NSArray<id> *)parseResponseForDataArray:(nullable id)responseObject;

+ (nullable NSString *)parseResonseForDataString:(nullable id)responseObject;

+ (nullable NSDictionary<NSString *, id> *)parseResonseForDataDictionary:(nullable id)responseObject;

+ (BOOL)isDataResponseNil:(nullable id)responseObject;

+ (void)printRequestDetailsOfRequestTask:(NSURLSessionDataTask *)task;

+ (void)printResponseDetailsOfRequest:(NSURLRequest *)taskRequest response:(NSURLResponse *)taskResponse andResponseObject:(id)responseObject;

+ (void)printResponseDetailsOfRequest:(NSURLRequest *)request response:(nullable NSURLResponse *)response data:(nullable NSData *)data error:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
