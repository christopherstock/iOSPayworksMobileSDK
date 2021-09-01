//
//  MPProvider+Swift_Helper.h
//  mpos_core
//
//  Created by Guri, Aleix on 17/11/2020.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//

#import <mpos_core/MPProvider.h>
#import <mpos_core/MPProviderOptions.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPProvider (Swift_Helper)
+ (nonnull instancetype)providerWithOptions:(nonnull MPProviderOptions *)options;

@end

NS_ASSUME_NONNULL_END
