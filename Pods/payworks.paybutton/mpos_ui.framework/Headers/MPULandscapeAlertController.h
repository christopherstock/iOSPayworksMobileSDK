//
//  MPULandscapeAlertController.h
//  mpos_ui
//
//  Created by Juliano Rotta on 21.06.19.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface MPULandscapeAlertController : UIAlertController

- (BOOL)shouldAutorotate;
- (UIInterfaceOrientationMask)supportedInterfaceOrientations;

@end

NS_ASSUME_NONNULL_END
