//
//  MPLogger.h
//  mpos
//
//  Created by Simon Eumes on 10/2/13.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//
@import os.log;
#import "MPLogLevel.h"

NS_ASSUME_NONNULL_BEGIN

@interface MPLogger : NSObject

@property (strong, nonatomic) os_log_t logger;

+ (instancetype)sharedInstance;
+ (void)setLogLevel:(MPLogLevel)logLevel;

+ (os_log_type_t)osLevelFromLevel:(MPLogLevel)level;
+ (NSString *)shortlogLevelFromLogMessage:(MPLogLevel)level;
+ (NSString *)queueName;
@end

#define _currentQueue ([MPLogger queueName])
#define _Logger(level) ((level) <= mpMposLogLevel ? MPLogger.sharedInstance.logger : OS_LOG_DISABLED)
#define _LogLevelFromMPLevel(level) ([MPLogger osLevelFromLevel:level])
#define _LogLevelString(level) ([MPLogger shortlogLevelFromLogMessage:level])


#define _LogLevel(level, frmt, ...)                                                                                                                                                        \
    do {                                                                                                                                                                                   \
        os_log_with_type(_Logger(level), _LogLevelFromMPLevel(level), ("%@ | %@ | %s (%d) | " frmt), _LogLevelString(level), _currentQueue, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__); \
    } while (0)


#define LogError(frmt, ...) _LogLevel(MPLogLevelError, frmt, ##__VA_ARGS__)
#define LogWarn(frmt, ...) _LogLevel(MPLogLevelWarning, frmt, ##__VA_ARGS__)
#define LogInfo(frmt, ...) _LogLevel(MPLogLevelInfo, frmt, ##__VA_ARGS__)
#define LogDebug(frmt, ...) _LogLevel(MPLogLevelDebug, frmt, ##__VA_ARGS__)
#define LogVerbose(frmt, ...) _LogLevel(MPLogLevelVerbose, frmt, ##__VA_ARGS__)


NS_ASSUME_NONNULL_END
