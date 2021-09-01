//
//  NSString+PWUHexAdditions.h
//  PWPLibrary
//
//  Created by Simon Eumes on 1/21/13.
//  Copyright (c) 2021 CyberSource Corporation. All Rights Reserved.
//

NS_ASSUME_NONNULL_BEGIN

@interface NSString (PWUHexAdditions)

/**
 * Treats the string as hex representation and create the equivalent data object. All chars not in [0-9a-f] will be stripped before parsing.
 * Returns nil if length is not a multiple of 2.
 * @return Data by interpreting the sting as hexadecimal characters
 */
- (nullable NSData *)dataUsingHexadecimalEncoding;

/**
 * Treats the string as a bit representation and creates the equivalent data object. All chars not in [0-1] will be stripped before parsing.
 * Returns nil if length is not a multiple of 8.
 * @return Data by interpreting the strings individual character as bits
 */
- (nullable NSData *)dataUsingBitEncoding;

/**
 * Treats the string as a number and creates the equivalent BCD encoded data object. All chars not in [0-9] will be stripped before parsing.
 * Leading 0s are automatically added for for odd-length numbers (e.g. 0323 -> 323).
 * @return Data by interpreting the string as a number and returning its BCD encoding.
 */
- (NSData *)dataUsingBCDEncoding;

/**
 * Returns the MD5 hash of the data.
 * @return MD5 hash
 */
- (NSString *)md5Hash;

/**
 * Returns data for the self using the Windows-1252 encoding
 * @return Encoding data
 */
- (nullable NSData *)dataUsingWindows1252Encoding;

/**
 * Returns data for the self using the ISO Latin1 encoding
 * @return Encoding data
 */
- (nullable NSData *)dataUsingISOLatin1Encoding;

/**
 * Returns data for the self using the ASCII encoding
 * @return Encoding data
 */
- (nullable NSData *)dataUsingASCIIEncoding;

/**
 * Returns data for self using unsigned number encoding
 * the string "1223646" will be encoded to data with bytes "12 AB DE" (limited to NSUInteger length)
 */
- (NSData *)dataUsingUnsignedNumberEncoding;

@end

NS_ASSUME_NONNULL_END
