//
//  MPProviderOptionsExtension.h
//  mpos_core
//
//  Created by Guri, Aleix on 26/11/2020.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//
#import "MPProvider.h"
@class MPResourceHandler;
@class MPTracepointHandler;

NS_ASSUME_NONNULL_BEGIN

@interface MPProviderOptionsExtension : NSObject

@property (strong, readwrite, nonatomic) NSString *merchantIdentifier;
@property (strong, readwrite, nonatomic) NSString *merchantSecretKey;
@property (assign, readwrite, nonatomic) MPProviderMode mode;
@property (assign, nonatomic, readwrite) NSUInteger maxReceiptLineLength;
@property (strong, nonatomic, nullable) NSString *customURL;
@property (strong, nonatomic) MPResourceHandler *resourceHandler;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)initWithMode:(MPProviderMode)mode merchantIdentifier:(NSString *)merchantIdentifier merchantSecret:(NSString *)merchantString;

+ (instancetype)mock;

@end

NS_ASSUME_NONNULL_END
