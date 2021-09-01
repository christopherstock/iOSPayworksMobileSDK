//
//  NSMutableURLRequest+Config.h
//  mpos
//
//  Created by Simon Eumes on 11/19/13.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//

@class MPProviderOptions;
@class MPAccessoryDetails;

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableURLRequest (Config)
- (void)setupJsonAcceptAndContentType;

- (void)setUserAgentHeaderForProviderOptions:(MPProviderOptions *)providerOptions;
- (void)setReaderAgentHeaderForDetails:(MPAccessoryDetails *)details;

- (void)setSDKBuildHeader;

- (void)setAuthorizationHeaderForProviderOptions:(MPProviderOptions *)providerOptions;
- (void)setJWTTokenHeaderForToken:(NSString *)jwt;

- (void)setTransactionId:(NSString *)transactionId;
- (void)setAccessoryId:(nullable NSString *)accessoryId;
- (void)setAccessorySerialNumber:(NSString *)serialNumber;

- (void)updateURLWithQueryItemsArrayName:(NSString *)name values:(NSArray<NSString *> *)values;
- (void)addQueryItemToURL:(NSURLQueryItem *)item;
@end

NS_ASSUME_NONNULL_END
