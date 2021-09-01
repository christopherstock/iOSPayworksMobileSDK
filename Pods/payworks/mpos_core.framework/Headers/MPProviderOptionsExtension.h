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

@property (strong, readwrite, nonatomic, nullable) NSString *merchantIdentifier;
@property (strong, readwrite, nonatomic, nullable) NSString *merchantSecretKey;
@property (assign, readwrite, nonatomic) MPProviderMode mode;
@property (assign, nonatomic, readwrite) NSUInteger maxReceiptLineLength;
@property (strong, nonatomic, nullable) NSString *customURL;

@property (strong, nonatomic) MPResourceHandler *resourceHandler;

@end

NS_ASSUME_NONNULL_END
