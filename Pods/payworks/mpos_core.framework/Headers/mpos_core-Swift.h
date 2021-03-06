#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.4 (swiftlang-1205.0.26.9 clang-1205.0.19.55)
#ifndef MPOS_CORE_SWIFT_H
#define MPOS_CORE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import core;
#endif

#import <mpos_core/mpos_core.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="mpos_core",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@protocol CoreFeatureToggle;
@class NSString;
@class NSNumber;

SWIFT_CLASS("_TtC9mpos_core36ConfigurableMockFeatureToggleManager")
@interface ConfigurableMockFeatureToggleManager : NSObject <CoreFeatureToggleManager>
@property (nonatomic, copy) NSArray<id <CoreFeatureToggle>> * _Nonnull featureTogglesEnabled;
- (NSArray<NSString *> * _Nonnull)features SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isFeatureEnabledFeatureToggle:(id <CoreFeatureToggle> _Nonnull)featureToggle SWIFT_WARN_UNUSED_RESULT;
- (void)sync;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CoreMerchantCredentials;
@class CoreSdkStartupResponseWrapper;

SWIFT_CLASS("_TtC9mpos_core21CybersourceBackendApi")
@interface CybersourceBackendApi : NSObject <CoreBackendApi>
- (void)syncFeatureTogglesCredentials:(CoreMerchantCredentials * _Nonnull)credentials callback:(void (^ _Nonnull)(CoreSdkStartupResponseWrapper * _Nonnull))callback error:(void (^ _Nonnull)(void))error;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class MPProviderOptions;

SWIFT_CLASS("_TtC9mpos_core21FeatureTogglesFactory")
@interface FeatureTogglesFactory : NSObject
+ (id <CoreFeatureToggleManager> _Nonnull)createWithOptions:(MPProviderOptions * _Nonnull)options credentialsCompletion:(void (^ _Nonnull)(void))credentialsCompletion SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core17LanguageEvaluator")
@interface LanguageEvaluator : NSObject
@property (nonatomic) BOOL prefersMerchantLanguage;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithMerchantLanguage:(NSString * _Nonnull)merchantLanguage supportedLanguages:(NSArray<NSString *> * _Nonnull)supportedLanguages OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)languageCodeWithCardLanguages:(NSArray<NSString *> * _Nonnull)cardLanguages SWIFT_WARN_UNUSED_RESULT;
@end

@class NSURLSession;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;
@class NSMutableURLRequest;
@class NSURLRequest;
@class NSURLResponse;
@class NSData;
@class NSURLSessionDataTask;

SWIFT_CLASS("_TtC9mpos_core20MPHTTPSessionManager")
@interface MPHTTPSessionManager : NSObject <NSURLSessionDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)addNSRequestTransformer:(void (^ _Nonnull)(NSMutableURLRequest * _Nonnull))transformer;
- (NSURLRequest * _Nullable)POSTWithPath:(NSString * _Nonnull)path formParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)formParameters error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)PUTWithPath:(NSString * _Nonnull)path formParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)formParameters error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)POSTWithPath:(NSString * _Nonnull)path parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)POSTWithPath:(NSString * _Nonnull)path parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters error:(NSError * _Nullable * _Nullable)error customizeNSRequest:(SWIFT_NOESCAPE void (^ _Nonnull)(NSMutableURLRequest * _Nonnull))customizeNSRequest SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)PUTWithPath:(NSString * _Nonnull)path parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)GETWithPath:(NSString * _Nonnull)path error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)GETWithPath:(NSString * _Nonnull)path parameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)GETWithPath:(NSString * _Nonnull)path parameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters error:(NSError * _Nullable * _Nullable)error customizeNSRequest:(SWIFT_NOESCAPE void (^ _Nonnull)(NSMutableURLRequest * _Nonnull))customizeNSRequest SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionDataTask * _Nonnull)executeWithRequest:(NSURLRequest * _Nonnull)request success:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull, NSURLResponse * _Nullable))success failure:(void (^ _Nonnull)(NSError * _Nonnull, NSURLResponse * _Nullable, NSData * _Nullable))failure;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSURL;

SWIFT_CLASS("_TtC9mpos_core27MPAccountHTTPSessionManager")
@interface MPAccountHTTPSessionManager : MPHTTPSessionManager
- (nonnull instancetype)initWithBaseURL:(NSURL * _Nonnull)baseURL OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9mpos_core28MPPayworksHTTPSessionManager")
@interface MPPayworksHTTPSessionManager : MPHTTPSessionManager
- (nullable instancetype)initWithProviderOptions:(MPProviderOptions * _Nonnull)providerOptions reduceTimeout:(BOOL)reduceTimeout useJWTAuth:(BOOL)useJWTAuth OBJC_DESIGNATED_INITIALIZER;
+ (MPPayworksHTTPSessionManager * _Nullable)managerWithProviderOptions:(MPProviderOptions * _Nonnull)providerOptions useJwtAuth:(BOOL)useJwtAuth SWIFT_WARN_UNUSED_RESULT;
+ (MPPayworksHTTPSessionManager * _Nullable)recoverManagerWithProviderOptions:(MPProviderOptions * _Nonnull)providerOptions useJwtAuth:(BOOL)useJwtAuth SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionDataTask * _Nonnull)executeWithRequest:(NSURLRequest * _Nonnull)request success:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull, NSURLResponse * _Nullable))success failure:(void (^ _Nonnull)(NSError * _Nonnull, NSURLResponse * _Nullable, NSData * _Nullable))failure;
@end


SWIFT_CLASS("_TtC9mpos_core13MetricsSender")
@interface MetricsSender : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull metricsPath;)
+ (NSString * _Nonnull)metricsPath SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MetricsSender * _Nonnull shared;)
+ (MetricsSender * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (void)sendWithData:(NSDictionary<NSString *, id> * _Nonnull)data providerOptions:(MPProviderOptions * _Nonnull)providerOptions useJWTAuth:(BOOL)useJWTAuth;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSURLSessionConfiguration;

SWIFT_CLASS("_TtC9mpos_core28PayworksSessionConfiguration")
@interface PayworksSessionConfiguration : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) NSURLSessionConfiguration * _Nonnull sessionConfiguration;)
+ (NSURLSessionConfiguration * _Nonnull)sessionConfiguration SWIFT_WARN_UNUSED_RESULT;
+ (void)setSessionConfiguration:(NSURLSessionConfiguration * _Nonnull)newValue;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core18ProviderModeMapper")
@interface ProviderModeMapper : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol CoreCoreComponent;

SWIFT_CLASS("_TtC9mpos_core12SDKComponent")
@interface SDKComponent : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreCoreComponent> _Nonnull provideCoreComponent;)
+ (id <CoreCoreComponent> _Nonnull)provideCoreComponent SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core16SDKFeatureToggle")
@interface SDKFeatureToggle : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreFeatureToggle> _Nonnull testFeature;)
+ (id <CoreFeatureToggle> _Nonnull)testFeature SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreFeatureToggle> _Nonnull testFeature2;)
+ (id <CoreFeatureToggle> _Nonnull)testFeature2 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreFeatureToggle> _Nonnull metricsDetailedMessage;)
+ (id <CoreFeatureToggle> _Nonnull)metricsDetailedMessage SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreFeatureToggle> _Nonnull jwtAuthentication;)
+ (id <CoreFeatureToggle> _Nonnull)jwtAuthentication SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreFeatureToggle> _Nonnull metricsSender;)
+ (id <CoreFeatureToggle> _Nonnull)metricsSender SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<id <CoreFeatureToggle>> * _Nonnull allFeatures;)
+ (NSArray<id <CoreFeatureToggle>> * _Nonnull)allFeatures SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9mpos_core22VipaKernelIdTagMapping")
@interface VipaKernelIdTagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core28VipaScriptResults1TagMapping")
@interface VipaScriptResults1TagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core28VipaScriptResults2TagMapping")
@interface VipaScriptResults2TagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core24VipaTacDefaultTagMapping")
@interface VipaTacDefaultTagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core23VipaTacDenialTagMapping")
@interface VipaTacDenialTagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core23VipaTacOnlineTagMapping")
@interface VipaTacOnlineTagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.4 (swiftlang-1205.0.26.9 clang-1205.0.19.55)
#ifndef MPOS_CORE_SWIFT_H
#define MPOS_CORE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import core;
#endif

#import <mpos_core/mpos_core.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="mpos_core",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@protocol CoreFeatureToggle;
@class NSString;
@class NSNumber;

SWIFT_CLASS("_TtC9mpos_core36ConfigurableMockFeatureToggleManager")
@interface ConfigurableMockFeatureToggleManager : NSObject <CoreFeatureToggleManager>
@property (nonatomic, copy) NSArray<id <CoreFeatureToggle>> * _Nonnull featureTogglesEnabled;
- (NSArray<NSString *> * _Nonnull)features SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isFeatureEnabledFeatureToggle:(id <CoreFeatureToggle> _Nonnull)featureToggle SWIFT_WARN_UNUSED_RESULT;
- (void)sync;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CoreMerchantCredentials;
@class CoreSdkStartupResponseWrapper;

SWIFT_CLASS("_TtC9mpos_core21CybersourceBackendApi")
@interface CybersourceBackendApi : NSObject <CoreBackendApi>
- (void)syncFeatureTogglesCredentials:(CoreMerchantCredentials * _Nonnull)credentials callback:(void (^ _Nonnull)(CoreSdkStartupResponseWrapper * _Nonnull))callback error:(void (^ _Nonnull)(void))error;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class MPProviderOptions;

SWIFT_CLASS("_TtC9mpos_core21FeatureTogglesFactory")
@interface FeatureTogglesFactory : NSObject
+ (id <CoreFeatureToggleManager> _Nonnull)createWithOptions:(MPProviderOptions * _Nonnull)options credentialsCompletion:(void (^ _Nonnull)(void))credentialsCompletion SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core17LanguageEvaluator")
@interface LanguageEvaluator : NSObject
@property (nonatomic) BOOL prefersMerchantLanguage;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithMerchantLanguage:(NSString * _Nonnull)merchantLanguage supportedLanguages:(NSArray<NSString *> * _Nonnull)supportedLanguages OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)languageCodeWithCardLanguages:(NSArray<NSString *> * _Nonnull)cardLanguages SWIFT_WARN_UNUSED_RESULT;
@end

@class NSURLSession;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;
@class NSMutableURLRequest;
@class NSURLRequest;
@class NSURLResponse;
@class NSData;
@class NSURLSessionDataTask;

SWIFT_CLASS("_TtC9mpos_core20MPHTTPSessionManager")
@interface MPHTTPSessionManager : NSObject <NSURLSessionDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)addNSRequestTransformer:(void (^ _Nonnull)(NSMutableURLRequest * _Nonnull))transformer;
- (NSURLRequest * _Nullable)POSTWithPath:(NSString * _Nonnull)path formParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)formParameters error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)PUTWithPath:(NSString * _Nonnull)path formParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)formParameters error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)POSTWithPath:(NSString * _Nonnull)path parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)POSTWithPath:(NSString * _Nonnull)path parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters error:(NSError * _Nullable * _Nullable)error customizeNSRequest:(SWIFT_NOESCAPE void (^ _Nonnull)(NSMutableURLRequest * _Nonnull))customizeNSRequest SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)PUTWithPath:(NSString * _Nonnull)path parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)GETWithPath:(NSString * _Nonnull)path error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)GETWithPath:(NSString * _Nonnull)path parameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (NSURLRequest * _Nullable)GETWithPath:(NSString * _Nonnull)path parameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters error:(NSError * _Nullable * _Nullable)error customizeNSRequest:(SWIFT_NOESCAPE void (^ _Nonnull)(NSMutableURLRequest * _Nonnull))customizeNSRequest SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionDataTask * _Nonnull)executeWithRequest:(NSURLRequest * _Nonnull)request success:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull, NSURLResponse * _Nullable))success failure:(void (^ _Nonnull)(NSError * _Nonnull, NSURLResponse * _Nullable, NSData * _Nullable))failure;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSURL;

SWIFT_CLASS("_TtC9mpos_core27MPAccountHTTPSessionManager")
@interface MPAccountHTTPSessionManager : MPHTTPSessionManager
- (nonnull instancetype)initWithBaseURL:(NSURL * _Nonnull)baseURL OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9mpos_core28MPPayworksHTTPSessionManager")
@interface MPPayworksHTTPSessionManager : MPHTTPSessionManager
- (nullable instancetype)initWithProviderOptions:(MPProviderOptions * _Nonnull)providerOptions reduceTimeout:(BOOL)reduceTimeout useJWTAuth:(BOOL)useJWTAuth OBJC_DESIGNATED_INITIALIZER;
+ (MPPayworksHTTPSessionManager * _Nullable)managerWithProviderOptions:(MPProviderOptions * _Nonnull)providerOptions useJwtAuth:(BOOL)useJwtAuth SWIFT_WARN_UNUSED_RESULT;
+ (MPPayworksHTTPSessionManager * _Nullable)recoverManagerWithProviderOptions:(MPProviderOptions * _Nonnull)providerOptions useJwtAuth:(BOOL)useJwtAuth SWIFT_WARN_UNUSED_RESULT;
- (NSURLSessionDataTask * _Nonnull)executeWithRequest:(NSURLRequest * _Nonnull)request success:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull, NSURLResponse * _Nullable))success failure:(void (^ _Nonnull)(NSError * _Nonnull, NSURLResponse * _Nullable, NSData * _Nullable))failure;
@end


SWIFT_CLASS("_TtC9mpos_core13MetricsSender")
@interface MetricsSender : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull metricsPath;)
+ (NSString * _Nonnull)metricsPath SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MetricsSender * _Nonnull shared;)
+ (MetricsSender * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (void)sendWithData:(NSDictionary<NSString *, id> * _Nonnull)data providerOptions:(MPProviderOptions * _Nonnull)providerOptions useJWTAuth:(BOOL)useJWTAuth;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSURLSessionConfiguration;

SWIFT_CLASS("_TtC9mpos_core28PayworksSessionConfiguration")
@interface PayworksSessionConfiguration : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) NSURLSessionConfiguration * _Nonnull sessionConfiguration;)
+ (NSURLSessionConfiguration * _Nonnull)sessionConfiguration SWIFT_WARN_UNUSED_RESULT;
+ (void)setSessionConfiguration:(NSURLSessionConfiguration * _Nonnull)newValue;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core18ProviderModeMapper")
@interface ProviderModeMapper : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol CoreCoreComponent;

SWIFT_CLASS("_TtC9mpos_core12SDKComponent")
@interface SDKComponent : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreCoreComponent> _Nonnull provideCoreComponent;)
+ (id <CoreCoreComponent> _Nonnull)provideCoreComponent SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core16SDKFeatureToggle")
@interface SDKFeatureToggle : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreFeatureToggle> _Nonnull testFeature;)
+ (id <CoreFeatureToggle> _Nonnull)testFeature SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreFeatureToggle> _Nonnull testFeature2;)
+ (id <CoreFeatureToggle> _Nonnull)testFeature2 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreFeatureToggle> _Nonnull metricsDetailedMessage;)
+ (id <CoreFeatureToggle> _Nonnull)metricsDetailedMessage SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreFeatureToggle> _Nonnull jwtAuthentication;)
+ (id <CoreFeatureToggle> _Nonnull)jwtAuthentication SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) id <CoreFeatureToggle> _Nonnull metricsSender;)
+ (id <CoreFeatureToggle> _Nonnull)metricsSender SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<id <CoreFeatureToggle>> * _Nonnull allFeatures;)
+ (NSArray<id <CoreFeatureToggle>> * _Nonnull)allFeatures SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9mpos_core22VipaKernelIdTagMapping")
@interface VipaKernelIdTagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core28VipaScriptResults1TagMapping")
@interface VipaScriptResults1TagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core28VipaScriptResults2TagMapping")
@interface VipaScriptResults2TagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core24VipaTacDefaultTagMapping")
@interface VipaTacDefaultTagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core23VipaTacDenialTagMapping")
@interface VipaTacDenialTagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9mpos_core23VipaTacOnlineTagMapping")
@interface VipaTacOnlineTagMapping : PWSTLVBinaryTagMapping
+ (NSData * _Nullable)tag SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)shortDescription SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)longDescription SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
