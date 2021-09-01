//
//  MPErrorTransactionHelper.h
//  mpos.core
//
//  Created by Simon Eumes on 13.07.16.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface MPErrorTransactionHelper : NSObject

+ (BOOL)errorIndicatesUnableToGoOnline:(NSError *)error;

+ (BOOL)errorIndicatesInconclusive:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
