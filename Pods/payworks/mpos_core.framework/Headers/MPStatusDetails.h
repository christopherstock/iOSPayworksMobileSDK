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
 * Enum indicating a more detailed status on the transaction.
 * @since 2.0.0
 */
typedef NS_ENUM(NSUInteger, MPTransactionStatusDetailsCode) {

    /** Transaction needs to be initialized */
    MPTransactionStatusDetailsCodeNone = 0,

    /** Transaction is initialized and can be started */
    MPTransactionStatusDetailsCodeInitializedAtServer,

    /** Transaction is initialized and can be started */
    MPTransactionStatusDetailsCodeInitializedAtProcessor,

    /** Transaction has been re-initialized at the server and should be processed again */
    MPTransactionStatusDetailsCodeInitializedWithReplacement,

    /** Transaction is waiting for PIN - Strong Customer Authentication use case */
    MPTransactionStatusDetailsCodeInitializedRequestPIN,

    /** Transaction for use of the payment device with CVM = 0 - Strong Customer Authentication use case */
    MPTransactionStatusDetailsCodeInitializedRequestCustomerDeviceAuthorizationWithCVMLimitZero,

    /** The transaction was submitted to the Payworks gateway but was not yet executed against the clearing institute */
    MPTransactionStatusDetailsCodePendingWaitingForExecution,

    /** The transaction was sent to the processor and is awaiting approval */
    MPTransactionStatusDetailsCodePendingWaitingForProcessor,

    /** The transaction was received by the processor and needs to be finalized */
    MPTransactionStatusDetailsCodePendingAwaitingFinalization,

    /** The transaction will stay in a pending state until it is manually reviewed by a Payworks employee */
    MPTransactionStatusDetailsCodePendingManualReviewRequired,

    /** The previous execution of the transaction failed with a processing error and it is scheduled for retry */
    MPTransactionStatusDetailsCodePendingRetryingDueToProcessingError,

    /** The previous execution of the transaction was declined and it is scheduled for retry */
    MPTransactionStatusDetailsCodePendingRetryingDueToDecline,

    /** The transaction was approved */
    MPTransactionStatusDetailsCodeApproved,

    /** Transaction was approved for an amount less than the given amount */
    MPTransactionStatusDetailsCodeApprovedPartially,

    /** The transaction was accepted offline and is awaiting submission to be executed online */
    MPTransactionStatusDetailsCodeAcceptedWaitingForSubmission,


#pragma mark - DECLINE

    /** The transaction was aborted by the customer */
    MPTransactionStatusDetailsCodeDeclinedCardOrTerminalDeclined,

    /** The transaction was declined by the terminal */
    MPTransactionStatusDetailsCodeDeclinedProcessor,

    /** The transaction was declined due to an invalid terminal software */
    MPTransactionStatusDetailsCodeDeclinedInvalidTerminalSoftware,

    /** The transaction was declined due to an invalid terminal configuration */
    MPTransactionStatusDetailsCodeDeclinedInvalidTerminalConfiguration,

    /** The transaction was declined due to an invalid terminal */
    MPTransactionStatusDetailsCodeDeclinedInvalidTerminal,

    /** The transaction was declined due to an expiration of the session */
    MPTransactionStatusDetailsCodeDeclinedInvalidSessionExpired,

    /** The transaction was declined because the processing path was deactivated */
    MPTransactionStatusDetailsCodeDeclinedInactiveProcessingPath,

    /** Partial approvals feature is not enabled or verbal authorization is required */
    MPTransactionStatusDetailsCodeDeclinedPartialApprovalOrVerbalAuthorizationRequired,

    /** The entered PIN is wrong */
    MPTransactionStatusDetailsCodeDeclinedPinWrong,

    /** The PIN was entered wrong too often */
    MPTransactionStatusDetailsCodeDeclinedPinWrongTooOften,

    /** The used card is expired */
    MPTransactionStatusDetailsCodeDeclinedCardExpired,

    /** The scheme presented by the card is invalid */
    MPTransactionStatusDetailsCodeDeclinedCardInvalidScheme,

    /** The PAN on the card is invalid */
    MPTransactionStatusDetailsCodeDeclinedCardInvalidPan,

    /** The card was reported stolen */
    MPTransactionStatusDetailsCodeDeclinedCardStolen,

    /** A different card has to be used for this transaction */
    MPTransactionStatusDetailsCodeDeclinedCardUseOriginal,

    /** The transaction was declined by the processor with a special error case */
    MPTransactionStatusDetailsCodeDeclinedProcessorExceedsWithdrawalCountLimit,

    /** The transaction was declined by the processor with a special error case that didn't fall into Strong Customer Authentication scenario  */
    MPTransactionStatusDetailsCodeDeclinedProcessorPinEntryNecessary,

    /** The transaction was declined by the processor with a special error case that didn't fall into Strong Customer Authentication scenario */
    MPTransactionStatusDetailsCodeDeclinedProcessorRequestCustomerDeviceAuthorizationWithCvmLimitZero,

    /** Processor error */
    MPTransactionStatusDetailsCodeDeclinedProcessorInconsistentState,

    /** The transaction was declined by the processor with a special error case */
    MPTransactionStatusDetailsCodeDeclinedProcessorUncapturedChargesNotSupported,

    /** The transaction was declined due to a malformed request */
    MPTransactionStatusDetailsCodeDeclinedMalformedRequest,

    /** Transaction not possible, because the card might have been manipulated */
    MPTransactionStatusDetailsCodeDeclinedManipulationSuspected,

    /** Card is not allowed */
    MPTransactionStatusDetailsCodeDeclinedCardBlocked,

    /** Card has insufficient funds */
    MPTransactionStatusDetailsCodeDeclinedInsufficientFunds,

    /** Merchant did too many transactions within a certain timeframe */
    MPTransactionStatusDetailsCodeDeclinedTransactionFrequencyExceeded,

    /** Card has been reported as lost and cannot be used anymore */
    MPTransactionStatusDetailsCodeDeclinedCardLost,

    /** Card scheme not allowed */
    MPTransactionStatusDetailsCodeDeclinedInvalidScheme,

    /** Transaction amount is not allowed (too high or too low) */
    MPTransactionStatusDetailsCodeDeclinedInvalidAmount,

    /**  Transaction has invalid currency */
    MPTransactionStatusDetailsCodeDeclinedInvalidCurrency,

    /** The configuration data in the merchant's processing path is wrong */
    MPTransactionStatusDetailsCodeDeclinedInvalidConfiguration,

    /** Same transaction is already being processed */
    MPTransactionStatusDetailsCodeDeclinedDuplicateTransaction,

    /** Transaction has invalid payment reference code (e.g. invalid barcode or QR code) */
    MPTransactionStatusDetailsCodeDeclinedInvalidPaymentCode,

    /** The transaction was declined due to an invalid workflow */
    MPTransactionStatusDetailsCodeDeclinedInvalidWorkflow,

    /** Card expired */
    MPTransactionStatusDetailsCodeDeclinedProcessorCardExpired,

    /** Refund not possible (e.g. not allowed by bank or transaction already refunded) */
    MPTransactionStatusDetailsCodeDeclinedProcessorRefundNotPossible,

    /** Transaction with this card temporarily not possible, due to too many tries */
    MPTransactionStatusDetailsCodeDeclinedProcessorTemporarilyBlacklisted,

    /** Transaction amount exceeds card limit */
    MPTransactionStatusDetailsCodeDeclinedAmountExceedsLimit,

    /** Declined merchant rejected */
    MPTransactionStatusDetailsCodeDeclinedMerchantRejected,

    /** Declined fraud count exceeded or account in fraud or watch status */
    MPTransactionStatusDetailsCodeDeclinedFraud,

    /** Declined invalid CVN (EAN or SCV is not correct for the provided account number) */
    MPTransactionStatusDetailsCodeDeclinedInvalidCvn,

    /** The card is already active */
    MPTransactionStatusDetailsCodeDeclinedCardAlreadyActive,

    /** Declined invalid clerk. The clerk field was either missing, when required, or the content did not match the requirements. */
    MPTransactionStatusDetailsCodeDeclinedInvalidClerk,

    /** Declined reload limit exceeded. The clerk/user location was only permitted to reload some number of accounts. That number was exceeded. */
    MPTransactionStatusDetailsCodeDeclinedReloadLimitExceeded,

    /** Declined verification failed. */
    MPTransactionStatusDetailsCodeDeclinedVerificationFailed,

    /** Declined by card or terminal after 1st Gen of AC. */
    MPTransactionStatusDetailsCodeDeclinedCardOrTerminalDeclined1stGenAc,

    /** Declined by card or terminal after 2nd Gen of AC. */
    MPTransactionStatusDetailsCodeDeclinedCardOrTerminalDeclined2ndGenAc,

    /** Declined - card expired, lost or stolen, merchant should capture it. */
    MPTransactionStatusDetailsCodeDeclinedForbiddenCardCaptureCard,

    /** Declined - authorization failed because servers are unavailable, inoperative or there was system malfunction. */
    MPTransactionStatusDetailsCodeDeclinedAuthorizationProcessorMalfunction,


#pragma mark - ABORT

    /** The transaction was aborted by the customer by removing the card */
    MPTransactionStatusDetailsCodeAbortedShopperRemovedCard,

    /** The transaction was aborted by the customer */
    MPTransactionStatusDetailsCodeAbortedShopperAborted,

    /** The transaction was aborted by the merchant */
    MPTransactionStatusDetailsCodeAbortedMerchantAborted,

    /** The transaction timed out waiting for a card */
    MPTransactionStatusDetailsCodeAbortedPresentCardTimedOut,


#pragma mark - ERROR

    /** Processor error */
    MPTransactionStatusDetailsCodeErrorInvalidProcessorFormat,

    /** Processor error */
    MPTransactionStatusDetailsCodeErrorInvalidProcessorStatus,

    /** Processor error */
    MPTransactionStatusDetailsCodeErrorMissingProcessorSession,

    /** Processor error */
    MPTransactionStatusDetailsCodeErrorInvalidProcessorSession,

    /** Processor error */
    MPTransactionStatusDetailsCodeErrorInvalidProcessorNonce,
    
    /** Processor error */
    MPTransactionStatusDetailsCodeErrorProcessor,

    /** Processor error */
    MPTransactionStatusDetailsCodeErrorProcessorConnectionError,

    /** Processor error */
    MPTransactionStatusDetailsCodeErrorProcessorFailedInconsistentStateUnresolved,

    /** Processor error */
    MPTransactionStatusDetailsCodeErrorProcessorFailedInconsistentStateResolved,

    /** Configuration error at payment processor */
    MPTransactionStatusDetailsCodeErrorProcessorPaymentDetailsExtractionFailed,

    /** Configuration error at payment processor */
    MPTransactionStatusDetailsCodeErrorProcessorInvalidPaymentDetails,

    /** Configuration error at payment processor */
    MPTransactionStatusDetailsCodeErrorProcessorInvalidConfiguration,

    /** Configuration error at payment processor */
    MPTransactionStatusDetailsCodeErrorProcessorMalformedRequest,

    /** Same transcation is already being processed */
    MPTransactionStatusDetailsCodeErrorProcessorTransactionAlreadyInProgress,

    /** No response from acquiring bank received */
    MPTransactionStatusDetailsCodeErrorProcessorConnectionNoResponse,

    /** The terminal processing the transaction encountered an error */
    MPTransactionStatusDetailsCodeErrorTerminalError,

    /** The terminal processing the transaction encountered an error */
    MPTransactionStatusDetailsCodeErrorTerminalTimeout,

    /** The terminal processing the transaction has critically low battery */
    MPTransactionStatusDetailsCodeErrorTerminalBatteryLow,

    /** The response from server was invalid */
    MPTransactionStatusDetailsCodeErrorServerInvalidResponse,

    /** The server is not reachable */
    MPTransactionStatusDetailsCodeErrorServerUnavailable,

    /** The request timed out on the server */
    MPTransactionStatusDetailsCodeErrorServerTimeout,

    /** Authentication on the server failed */
    MPTransactionStatusDetailsCodeErrorServerAuthenticationFailed,

    /** Pinning on the server failed */
    MPTransactionStatusDetailsCodeErrorServerPinningFailed,

    /** The server indicates the accessory is deactivated */
    MPTransactionStatusDetailsCodeErrorServerAccessoryDeactivated,

    /** The server indicates the accessory is not assigned to this merchant */
    MPTransactionStatusDetailsCodeErrorServerAccessoryNotAssignedToMerchant,

    /** The server received a malformed request */
    MPTransactionStatusDetailsCodeErrorServerMalformedRequest,

    /** The server received a batch submitted transaction with an invalid type */
    MPTransactionStatusDetailsCodeErrorServerInvalidTransactionType,

    /** The server received a batch submitted transaction with an invalid status */
    MPTransactionStatusDetailsCodeErrorServerInvalidTransactionStatus,

    /** The server received a batch submitted transaction with an invalid refund amount */
    MPTransactionStatusDetailsCodeErrorServerInvalidRefundAmount,

    /** The server received a batch submitted transaction in an invalid state */
    MPTransactionStatusDetailsCodeErrorServerInvalidTransaction,

    /** The deferred authorization transaction was submitted with an error and will be review manually */
    MPTransactionStatusDetailsCodeErrorTransactionPendingManualReview,

    /** The deferred authorization transaction could not be persisted */
    MPTransactionStatusDetailsCodeErrorTransactionUnableToPersist,

    /** The session timed out. */
    MPTransactionStatusDetailsCodeErrorSessionTimeout,

    /** The transaction was (falsely) approved offline */
    MPTransactionStatusDetailsCodeErrorApprovedOffline,

    /** SDK Internal inconsistency error */
    MPTransactionStatusDetailsCodeErrorSdkInternalError,

    /** Customer provided invalid card */
    MPTransactionStatusDetailsCodeErrorCardInvalidCard,

    /** The transaction auto reversal flow due to transaction error state */
    MPTransactionStatusDetailsCodeErrorAutoreversalInconclusive,

    /** The transaction auto reversal flow due to transaction error state  */
    MPTransactionStatusDetailsCodeErrorAutoreversalError,

    /** The transaction auto reversal flow due to closed connection with pos system */
    MPTransactionStatusDetailsCodeErrorAutoreversalLogout,

    /** The transaction auto reversal was applied because of some processor error */
    MPTransactionStatusDetailsCodeErrorAutoreversalApplied,

    /** The transaction auto reversal was declined by processor */
    MPTransactionStatusDetailsCodeErrorAutoreversalDeclined,

    /** The transaction auto reversal is in pending state */
    MPTransactionStatusDetailsCodeErrorAutoreversalConnectorError,
    
    /** Provided card does not support account verification */
    MPTransactionStatusDetailsCodeErrorAccountVerificationNotSupportedByCard,

    /** The received status detail is unknown to the SDK */
    MPTransactionStatusDetailsCodeUnknown,
};

extern const MPTransactionStatusDetailsCode MPTransactionStatusDetailsCodeMinValue;
extern const MPTransactionStatusDetailsCode MPTransactionStatusDetailsCodeMaxValue;

/**
 * Object encapulating details about the current transaction state. Should be used in conjunction with [MPTransactionStatus].
 * @since 2.0.0
 */
@interface MPStatusDetails : NSObject

/**
 * The transaction status details.
 * @since 2.0.0
 */
@property (assign, readonly, nonatomic) MPTransactionStatusDetailsCode code;

/**
 * A humand readable description of the current status.
 * @since 2.0.0
 */
@property (strong, readonly, nonatomic, nullable) NSString *detailedDescription;

/**
 * A developer facing message/description about the current status. Might contain tips on how to resolve an issue.
 * @since 2.0.0
 */
@property (strong, readonly, nonatomic, nullable) NSString *developerDescription;

@end
