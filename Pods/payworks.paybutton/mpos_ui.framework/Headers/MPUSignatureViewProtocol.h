//
//  MPUSignatureViewProtocol.h
//  mpos_ui
//
//  Created by Aleksander Balicki on 13/05/2020.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@protocol MPPPSSignatureViewDelegate <NSObject>

- (void)signatureAvailable:(BOOL)signatureAvailable;

@end

@protocol MPUSignatureViewProtocol <NSObject>

- (void)erase;
- (nullable UIImage *)signatureImage;
- (void)setSignatureDelegate:(id<MPPPSSignatureViewDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
