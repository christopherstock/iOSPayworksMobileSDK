/*
 * Payment Signature View: http://www.payworks.com
 *
 * Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

@import Foundation;
@import mpos_core;

@interface MPUSignatureViewControllerConfiguration : NSObject

@property (nonatomic, strong, nonnull) NSString *formattedAmount;
@property (nonatomic, strong, nonnull) NSString *legalText;
@property (nonatomic, strong, nonnull) NSString *clearButtonTitle;
@property (nonatomic, strong, nonnull) NSString *cancelButtonTitle;
@property (nonatomic, strong, nonnull) NSString *continueButtonTitle;

@property (nonatomic, assign) MPPaymentDetailsScheme scheme;


- (nonnull instancetype)initWithFormattedAmount:(nonnull NSString *)formattedAmount scheme:(MPPaymentDetailsScheme)scheme;

@end
