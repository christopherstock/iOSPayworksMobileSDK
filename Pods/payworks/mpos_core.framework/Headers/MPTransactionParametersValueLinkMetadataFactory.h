//
//  MPTransactionParametersValueLinkMetadataFactory.h
//  mpos_core
//
//  Created by Juliano Rotta on 17.04.18.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//

@import Foundation;

@interface MPTransactionParametersValueLinkMetadataFactory : NSObject

+ (nonnull NSDictionary<NSString *, NSString *> *)create:(nullable NSString *)user1
                                                   user2:(nullable NSString *)user2
                                   transactionPostalCode:(nullable NSString *)transactionPostalCode
                                                 clerkId:(nullable NSString *)clerkId;

@end
