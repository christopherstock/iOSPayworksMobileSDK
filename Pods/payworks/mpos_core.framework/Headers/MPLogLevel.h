//
//  MPLog.h
//  payworks.connect
//
//  Created by Simon Eumes on 10/1/13.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//

typedef NS_ENUM(NSUInteger, MPLogLevel) {

    MPLogLevelError = 1,
    MPLogLevelWarning,
    MPLogLevelInfo,
    MPLogLevelDebug,
    MPLogLevelVerbose
};


NS_ASSUME_NONNULL_BEGIN

extern MPLogLevel mpMposLogLevel;
extern const MPLogLevel mpMaxLogLevel;

NS_ASSUME_NONNULL_END
