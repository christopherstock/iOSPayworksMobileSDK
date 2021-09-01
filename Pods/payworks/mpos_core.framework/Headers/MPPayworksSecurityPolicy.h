//
//  MPPayworksSecurityPolicy.h
//  mpos.core
//
//  Created by Simon Eumes on 3/11/14.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//

NS_ASSUME_NONNULL_BEGIN

@interface MPPayworksSecurityPolicy : NSObject

@property (nonatomic, assign) BOOL allowInvalidCertificates;
@property (nonatomic, assign) BOOL validatesDomainName;
+ (instancetype)customSecurityPolicy;
- (BOOL)evaluateServerTrust:(SecTrustRef)serverTrust forDomain:(NSString *)domain;
@end

NS_ASSUME_NONNULL_END
