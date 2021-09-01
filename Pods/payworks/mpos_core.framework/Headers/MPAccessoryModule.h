//
// CYBERSOURCE CORPORATION ("COMPANY") CONFIDENTIAL
// Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of COMPANY. The intellectual and technical concepts contained
// herein are proprietary to COMPANY and may be covered by European or foreign Patents, patents in process, and are protected by trade secret or copyright law.
// Dissemination of this information or reproduction of this material is strictly forbidden unless prior written permission is obtained
// from COMPANY.  Access to the source code contained herein is hereby forbidden to anyone except current COMPANY employees, managers or contractors who have executed
// Confidentiality and Non-disclosure agreements explicitly covering such access.
//
// The copyright notice above does not evidence any actual or intended publication or disclosure of this source code, which includes
// information that is confidential and/or proprietary, and is a trade secret, of COMPANY.
// ANY REPRODUCTION, MODIFICATION, DISTRIBUTION, PUBLIC  PERFORMANCE,
// OR PUBLIC DISPLAY OF OR THROUGH USE  OF THIS  SOURCE CODE  WITHOUT  THE EXPRESS WRITTEN CONSENT OF COMPANY IS STRICTLY PROHIBITED, AND IN VIOLATION OF APPLICABLE
// LAWS AND INTERNATIONAL TREATIES.  THE RECEIPT OR POSSESSION OF  THIS SOURCE CODE AND/OR RELATED INFORMATION DOES NOT CONVEY OR IMPLY ANY RIGHTS
// TO REPRODUCE, DISCLOSE OR DISTRIBUTE ITS CONTENTS, OR TO MANUFACTURE, USE, OR SELL ANYTHING THAT IT  MAY DESCRIBE, IN WHOLE OR IN PART.


#import "MPAccessoryProcess.h"
@import Foundation;
@class MPAccessory;
@class MPAccessoryParameters;

NS_ASSUME_NONNULL_BEGIN

typedef void (^MPAccessoryModuleConnectionStateChanged)(MPAccessory *accessory);


@interface MPAccessoryModule : NSObject

/**
 * Return all connected accessories
 * @since 2.18.0
 */
- (NSArray<MPAccessory *> *)connectedAccesories;


/**
 * Connects to an accessory with the given parameters. Tries to retry if accessory is not found.
 * @param parameters The accessory parameters to be used for the connection effort
 * @param statusChanged The status of the process changed and new information can be displayed to the user
 * @param completed The completed handler called when the connection effort is completed
 * @return MPAccessoryProcess The process object used.
 * @since 2.18.0
 */
- (MPAccessoryProcess *)connectToAccessoryWithAccessoryParameters:(MPAccessoryParameters *)parameters
                                                    statusChanged:(MPAccessoryProcessStatusChanged)statusChanged
                                                        completed:(MPAccessoryProcessCompleted)completed;

/**
 * Connects to an accessory with the given parameters. Does not retry.
 * @param parameters The accessory parameters to be used for the connection effort
 * @param statusChanged The status of the process changed and new information can be displayed to the user
 * @param completed The completed handler called when the connection effort is completed
 * @return MPAccessoryProcess The process object used.
 * @since 2.43.0
 */
- (MPAccessoryProcess *)connectToAccessoryWithoutRetryWithAccessoryParameters:(MPAccessoryParameters *)parameters
                                                                statusChanged:(MPAccessoryProcessStatusChanged)statusChanged
                                                                    completed:(MPAccessoryProcessCompleted)completed;


/**
 * Updates an accessory with update process.
 * @param accessory The accessory to be used for the updating effort
 * @param statusChanged The status of the process changed and new information can be displayed to the user
 * @param completed The completed handler called when the updating effort is completed
 * @since 2.18.0
 */
- (MPAccessoryProcess *)updateAccessory:(MPAccessory *)accessory statusChanged:(MPAccessoryProcessStatusChanged)statusChanged completed:(MPAccessoryProcessCompleted)completed;


/**
 * Disconnects from an accessory with the given parameters.
 * @param accessory The accessory to be used for the disconnecting effort
 * @param statusChanged The status of the process changed and new information can be displayed to the user
 * @param completed The completed handler called when the disconnecting effort is completed
 * @since 2.18.0
 */
- (MPAccessoryProcess *)disconnectFromAccessory:(MPAccessory *)accessory
                                  statusChanged:(MPAccessoryProcessStatusChanged)statusChanged
                                      completed:(MPAccessoryProcessCompleted)completed;


/**
 * Block to be executed when an accessory changes it's connection state
 * @since 2.18.0
 */
@property (nonatomic, copy, nullable) MPAccessoryModuleConnectionStateChanged connectionStateChangedBlock;

@end

NS_ASSUME_NONNULL_END
