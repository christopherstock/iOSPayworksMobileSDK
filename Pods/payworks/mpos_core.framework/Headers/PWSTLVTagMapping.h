//
//  PWSTLVTagMapping.h
//  PWPLibrary
//
//  Created by Simon Eumes on 1/23/13.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//

@class PWSTLVItem;

NS_ASSUME_NONNULL_BEGIN

// mapping according to EMV 4.4, Book 3, Section 4.3
typedef NS_ENUM(NSUInteger, PWSTLVValueType) {
    // this is as ascii
    PWSTLVDataTypeAlphabetic,
    PWSTLVDataTypeAlphanumeric,
    PWSTLVDataTypeAlphanumericSpecial,

    // this is latin 1 from ISO/IEC 8859
    PWSTLVDataTypeAlphanumericISOLatin1,
    // this is as bits
    PWSTLVDataTypeBinary,
    // this is as number
    PWSTLVDataTypeBinaryNumeric,
    // this is as hex
    PWSTLVDataTypeBinaryHex,

    // this is as hex
    PWSTLVDataTypeCompressedNumeric,
    PWSTLVDataTypeNumeric,
    // also as hex, but with prefixed 0 allowed (e.g. expiry date)
    PWSTLVDataTypeNumericWithLeadingZeros,

    // this is as hex
    PWSTLVDataTypeVariable,

    PWSTLVDataTypeConstructedNotAvailable
};

@interface PWSTLVTagMapping : NSObject

+ (nullable NSData *)tag;
- (NSData *)tag;
+ (PWSTLVValueType)dataType;

+ (NSString *)shortDescription;
+ (NSString *)longDescription;

+ (nullable NSString *)stringMapping:(PWSTLVItem *)tlvItem;
+ (nullable NSString *)mapperMapping:(PWSTLVItem *)tlvItem;

- (nullable NSString *)stringMapping:(PWSTLVItem *)tlvItem;
- (nullable NSString *)mapperMapping:(PWSTLVItem *)tlvItem;

+ (nullable NSString *)mapItem:(PWSTLVItem *)tlvItem witDataType:(PWSTLVValueType)dataType;

+ (nullable NSString *)removeTrailingFs:(nullable NSString *)string;
+ (nullable NSString *)removeLeading0s:(nullable NSString *)string;

+ (NSString *)removeAllExceptNumeric:(NSString *)string;
+ (NSString *)removeAllExceptAlphabetic:(NSString *)string;
+ (NSString *)removeAllExceptAlphaNumeric:(NSString *)string;


+ (nullable PWSTLVItem *)firstInItems:(NSArray<PWSTLVItem *> *)tlvItems;
+ (nullable NSString *)firstStringMappingInItems:(NSArray<PWSTLVItem *> *)tlvItems;
+ (nullable NSData *)firstValueInItems:(NSArray<PWSTLVItem *> *)tlvItems;

+ (NSArray<PWSTLVItem *> *)findAllInItems:(NSArray<PWSTLVItem *> *)tlvItems;

+ (PWSTLVItem *)itemWithValue:(NSData *)value;
+ (PWSTLVItem *)itemWithString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
