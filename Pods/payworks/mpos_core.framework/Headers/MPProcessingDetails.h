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


/**
 * Identifiers returned by the processor for this transaction.
 * @since 2.0.0
 */
@interface MPProcessingDetails : NSObject


/**
 * Session use to execute the transaction.
 * @since 2.0.0
 */
@property (strong, readonly, nonatomic, nullable) NSString *sessionIdentifier;

/**
 * Unique identifier of the transaction generated by the processor.
 * @since 2.0.0
 */
@property (strong, readonly, nonatomic, nonnull) NSString *identifier;

/**
 * Timestamp when the transaction was executed by the processor. This timestamp will always be UTC.
 * @since 2.0.0
 */
@property (strong, readonly, nonatomic, nonnull) NSString *timestamp;

/**
 * Additional informations returned
 * @since 2.0.0
 */
@property (strong, readonly, nonatomic, nonnull) NSDictionary<NSString *, id> *additionalInformation;

@end
