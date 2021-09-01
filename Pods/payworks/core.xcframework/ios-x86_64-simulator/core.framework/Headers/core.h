#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CoreProviderMode, CoreMemoryCache<K, V>, CoreLevel, CoreKotlinThrowable, CoreLogger, CoreKotlinEnum<E>, CoreAccessoryPrinterAlign, CoreAccessoryPrinterSize, CoreAccessoryPrinterStyle, CoreReceiptLayout, CoreReceiptLayoutLine, CoreReceiptLayoutField, CoreReceiptLineItem, CoreReceiptLineItemKey, CoreReceiptPrinterPrinterState, CoreReceiptPrinter, CoreKotlinUnit, CoreMemoryCacheAction<K, V>, CoreMemoryCacheActionPut<K, V>, CoreMemoryCacheActionRemove<K, V>, NSDate, CoreDate, CoreMerchantCredentials, CoreSdkStartupResponseWrapper, CoreSdkStartupResponse, CoreFeatureScope, CoreKotlinByteArray, CoreKotlinArray<T>, CoreKotlinException, CoreApduCommand, CoreTlvItem, CoreHexString, CoreTlvDataLength, CoreTlvTag, CoreTlvPrimitiveItem, CoreAbstractTlvReference<V>, CoreGenericTlvReference, CoreMastercardUdol, CoreVisaCardAuthenticationRelatedData, CoreMastercardMagstripeApplicationVersionNumberIcc, CoreVisaCardTransactionQualifier, CoreAmericanExpressEnhancedContactlessReaderCapabilities, CoreMastercardThirdPartyData, CoreVisaFormFactorIndicator, CoreEmvCardholderVerificationMethodResultsCvm, CoreEmvCryptogramInformationDataType, CoreEmvPosEntryModeEntryMode, CoreEmvTransactionTypeType, CoreKotlinIntRange, CoreTagClass, CoreTagType, CoreTlvConstructedItem, CoreTlvError, CoreKotlinPair<__covariant A, __covariant B>, CorePaddingStyle, CoreKotlinByteIterator, CoreKotlinx_coroutines_coreCoroutineDispatcher, CoreKotlinx_coroutines_coreCancellationException, CoreKotlinRuntimeException, CoreKotlinIllegalStateException, CoreKotlinIntIterator, CoreKotlinIntProgression, CoreKotlinx_serialization_coreSerializersModule, CoreKotlinx_serialization_coreSerialKind, CoreKotlinNothing, CoreKotlinAbstractCoroutineContextElement, CoreKotlinx_coroutines_coreAtomicDesc, CoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, CoreKotlinx_coroutines_coreAtomicOp<__contravariant T>, CoreKotlinx_coroutines_coreOpDescriptor, CoreKotlinx_coroutines_coreLockFreeLinkedListNode, CoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, CoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, CoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol CoreFeatureToggleManager, CoreKotlinx_coroutines_coreBroadcastChannel, CoreFeatureToggle, CoreCoreComponent, CoreKotlinComparable, CoreSimpleReceipt, CoreAccessoryPrinter, CoreKotlinx_coroutines_coreReceiveChannel, CoreFeature, CoreKotlinx_coroutines_coreCoroutineScope, CoreGateway, CoreBootstrap, CoreBackendApi, CoreAccessoryCommunicationPluginsCommunicationListener, CoreTlvReference, CoreTlvMapper, CoreKotlinIterator, CoreKotlinIterable, CoreKotlinx_serialization_coreEncoder, CoreKotlinx_serialization_coreSerialDescriptor, CoreKotlinx_serialization_coreSerializationStrategy, CoreKotlinx_serialization_coreDecoder, CoreKotlinx_serialization_coreDeserializationStrategy, CoreKotlinx_serialization_coreKSerializer, CoreKotlinx_coroutines_coreSelectClause2, CoreKotlinx_coroutines_coreSendChannel, CoreKotlinx_coroutines_coreChannelIterator, CoreKotlinx_coroutines_coreSelectClause1, CoreKotlinCoroutineContext, CoreKotlinClosedRange, CoreKotlinx_serialization_coreCompositeEncoder, CoreKotlinAnnotation, CoreKotlinx_serialization_coreCompositeDecoder, CoreKotlinCoroutineContextKey, CoreKotlinCoroutineContextElement, CoreKotlinContinuation, CoreKotlinContinuationInterceptor, CoreKotlinx_coroutines_coreRunnable, CoreKotlinx_coroutines_coreSelectInstance, CoreKotlinSuspendFunction1, CoreKotlinx_serialization_coreSerializersModuleCollector, CoreKotlinKClass, CoreKotlinx_coroutines_coreDisposableHandle, CoreKotlinFunction, CoreKotlinKDeclarationContainer, CoreKotlinKAnnotatedElement, CoreKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface CoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface CoreBase (CoreBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface CoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorCoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface CoreNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface CoreByte : CoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface CoreUByte : CoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface CoreShort : CoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface CoreUShort : CoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface CoreInt : CoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface CoreUInt : CoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface CoreLong : CoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface CoreULong : CoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface CoreFloat : CoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface CoreDouble : CoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface CoreBoolean : CoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBuildType")))
@interface CoreCoreBuildType : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)coreBuildType __attribute__((swift_name("init()")));
@property (readonly) BOOL isDebugBuild __attribute__((swift_name("isDebugBuild")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutinesInitializer")))
@interface CoreCoroutinesInitializer : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)coroutinesInitializer __attribute__((swift_name("init()")));
- (void)initializeMainThreadCoroutines __attribute__((swift_name("initializeMainThreadCoroutines()")));
- (void)tearDown __attribute__((swift_name("tearDown()")));
@end;

__attribute__((swift_name("CoreComponent")))
@protocol CoreCoreComponent
@required
- (id<CoreFeatureToggleManager>)provideFTMMerchantId:(NSString *)merchantId providerMode:(CoreProviderMode *)providerMode __attribute__((swift_name("provideFTM(merchantId:providerMode:)")));
- (id<CoreKotlinx_coroutines_coreBroadcastChannel>)provideGlobalActions __attribute__((swift_name("provideGlobalActions()")));
- (CoreMemoryCache<NSString *, NSString *> *)provideMerchantMemCache __attribute__((swift_name("provideMerchantMemCache()")));
@end;

__attribute__((swift_name("GlobalAction")))
@protocol CoreGlobalAction
@required
@end;

__attribute__((swift_name("CoreComponentDebug")))
@protocol CoreCoreComponentDebug <CoreCoreComponent>
@required
- (CoreMemoryCache<id<CoreFeatureToggle>, CoreBoolean *> *)provideFeatureToggleOverrideMemCache __attribute__((swift_name("provideFeatureToggleOverrideMemCache()")));
@end;

__attribute__((swift_name("Logger")))
@interface CoreLogger : CoreBase
- (instancetype)initWithLevel:(CoreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugTag:(NSString *)tag messageBlock:(NSString *(^)(void))messageBlock __attribute__((swift_name("debug(tag:messageBlock:)")));
- (void)debugTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("debug(tag:message:)")));
- (void)errorTag:(NSString *)tag message:(NSString *)message throwable:(CoreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("error(tag:message:throwable:)")));
- (void)errorTag:(NSString *)tag throwable:(CoreKotlinThrowable * _Nullable)throwable messageBlock:(NSString *(^)(void))messageBlock __attribute__((swift_name("error(tag:throwable:messageBlock:)")));
- (void)infoTag:(NSString *)tag messageBlock:(NSString *(^)(void))messageBlock __attribute__((swift_name("info(tag:messageBlock:)")));
- (void)infoTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("info(tag:message:)")));
- (void)logTag:(NSString *)tag message:(NSString *)message throwable:(CoreKotlinThrowable * _Nullable)throwable level:(CoreLevel *)level __attribute__((swift_name("log(tag:message:throwable:level:)")));
- (void)traceTag:(NSString *)tag messageBlock:(NSString *(^)(void))messageBlock __attribute__((swift_name("trace(tag:messageBlock:)")));
- (void)traceTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("trace(tag:message:)")));
- (void)warnTag:(NSString *)tag messageBlock:(NSString *(^)(void))messageBlock __attribute__((swift_name("warn(tag:messageBlock:)")));
- (void)warnTag:(NSString *)tag message:(NSString *)message throwable:(CoreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("warn(tag:message:throwable:)")));
@property (readonly) CoreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOsLogger")))
@interface CoreIOsLogger : CoreLogger
- (instancetype)initWithLevel:(CoreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)logTag:(NSString *)tag message:(NSString *)message throwable:(CoreKotlinThrowable * _Nullable)throwable level:(CoreLevel *)level __attribute__((swift_name("log(tag:message:throwable:level:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol CoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface CoreKotlinEnum<E> : CoreBase <CoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Level")))
@interface CoreLevel : CoreKotlinEnum<CoreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreLevel *trace __attribute__((swift_name("trace")));
@property (class, readonly) CoreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) CoreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) CoreLevel *warn __attribute__((swift_name("warn")));
@property (class, readonly) CoreLevel *error __attribute__((swift_name("error")));
@property (readonly, getter=short) NSString *short_ __attribute__((swift_name("short_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger.Companion")))
@interface CoreLoggerCompanion : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property CoreLogger * _Nullable logger __attribute__((swift_name("logger")));
@end;

__attribute__((swift_name("AccessoryPrinter")))
@protocol CoreAccessoryPrinter
@required
- (void)alignAlign:(CoreAccessoryPrinterAlign *)align __attribute__((swift_name("align(align:)")));
- (void)eject __attribute__((swift_name("eject()")));
- (void)lineFeed __attribute__((swift_name("lineFeed()")));
- (void)logo __attribute__((swift_name("logo()")));
- (void)signature __attribute__((swift_name("signature()")));
- (void)sizeSize:(CoreAccessoryPrinterSize *)size __attribute__((swift_name("size(size:)")));
- (void)styleStyle:(CoreAccessoryPrinterStyle *)style __attribute__((swift_name("style(style:)")));
- (void)textText:(NSString *)text __attribute__((swift_name("text(text:)")));
@property (readonly) NSDictionary<CoreAccessoryPrinterSize *, CoreInt *> *paperWidths __attribute__((swift_name("paperWidths")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryPrinterAlign")))
@interface CoreAccessoryPrinterAlign : CoreKotlinEnum<CoreAccessoryPrinterAlign *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreAccessoryPrinterAlign *left __attribute__((swift_name("left")));
@property (class, readonly) CoreAccessoryPrinterAlign *center __attribute__((swift_name("center")));
@property (class, readonly) CoreAccessoryPrinterAlign *right __attribute__((swift_name("right")));
@property (class, readonly) CoreAccessoryPrinterAlign *leftRight __attribute__((swift_name("leftRight")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryPrinterSize")))
@interface CoreAccessoryPrinterSize : CoreKotlinEnum<CoreAccessoryPrinterSize *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreAccessoryPrinterSize *small __attribute__((swift_name("small")));
@property (class, readonly) CoreAccessoryPrinterSize *medium __attribute__((swift_name("medium")));
@property (class, readonly) CoreAccessoryPrinterSize *large __attribute__((swift_name("large")));
@property (class, readonly) CoreAccessoryPrinterSize *extraLarge __attribute__((swift_name("extraLarge")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryPrinterStyle")))
@interface CoreAccessoryPrinterStyle : CoreKotlinEnum<CoreAccessoryPrinterStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreAccessoryPrinterStyle *normal __attribute__((swift_name("normal")));
@property (class, readonly) CoreAccessoryPrinterStyle *bold __attribute__((swift_name("bold")));
@property (class, readonly) CoreAccessoryPrinterStyle *italic __attribute__((swift_name("italic")));
@property (class, readonly) CoreAccessoryPrinterStyle *emphasize __attribute__((swift_name("emphasize")));
@end;

__attribute__((swift_name("ReceiptLayout")))
@interface CoreReceiptLayout : CoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id lines __attribute__((swift_name("lines")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BackendReceiptLayout")))
@interface CoreBackendReceiptLayout : CoreReceiptLayout
- (instancetype)initWithContent:(id<CoreSimpleReceipt>)content __attribute__((swift_name("init(content:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) id lines __attribute__((swift_name("lines")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReceiptLayout.Companion")))
@interface CoreReceiptLayoutCompanion : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) CoreReceiptLayoutLine *blankLine __attribute__((swift_name("blankLine")));
@property (readonly) CoreReceiptLayoutLine *logo __attribute__((swift_name("logo")));
@property (readonly) CoreReceiptLayoutLine *noLine __attribute__((swift_name("noLine")));
@property (readonly) NSArray<CoreReceiptLayoutLine *> *noLines __attribute__((swift_name("noLines")));
@property (readonly) CoreReceiptLayoutLine *signatureLine __attribute__((swift_name("signatureLine")));
@property (readonly) CoreReceiptLayoutField *space __attribute__((swift_name("space")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReceiptLayout.Field")))
@interface CoreReceiptLayoutField : CoreBase
- (instancetype)initWithSize:(CoreAccessoryPrinterSize * _Nullable)size style:(CoreAccessoryPrinterStyle * _Nullable)style align:(CoreAccessoryPrinterAlign * _Nullable)align item:(CoreReceiptLineItem * _Nullable)item __attribute__((swift_name("init(size:style:align:item:)"))) __attribute__((objc_designated_initializer));
- (CoreAccessoryPrinterSize * _Nullable)component1 __attribute__((swift_name("component1()")));
- (CoreAccessoryPrinterStyle * _Nullable)component2 __attribute__((swift_name("component2()")));
- (CoreAccessoryPrinterAlign * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CoreReceiptLineItem * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CoreReceiptLayoutField *)doCopySize:(CoreAccessoryPrinterSize * _Nullable)size style:(CoreAccessoryPrinterStyle * _Nullable)style align:(CoreAccessoryPrinterAlign * _Nullable)align item:(CoreReceiptLineItem * _Nullable)item __attribute__((swift_name("doCopy(size:style:align:item:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CoreAccessoryPrinterAlign * _Nullable align __attribute__((swift_name("align")));
@property (readonly) CoreReceiptLineItem * _Nullable item __attribute__((swift_name("item")));
@property (readonly) CoreAccessoryPrinterSize * _Nullable size __attribute__((swift_name("size")));
@property (readonly) CoreAccessoryPrinterStyle * _Nullable style __attribute__((swift_name("style")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReceiptLayout.Line")))
@interface CoreReceiptLayoutLine : CoreBase
- (instancetype)initWithSize:(CoreAccessoryPrinterSize *)size style:(CoreAccessoryPrinterStyle *)style align:(CoreAccessoryPrinterAlign *)align fields:(id)fields __attribute__((swift_name("init(size:style:align:fields:)"))) __attribute__((objc_designated_initializer));
- (CoreAccessoryPrinterSize *)component1 __attribute__((swift_name("component1()")));
- (CoreAccessoryPrinterStyle *)component2 __attribute__((swift_name("component2()")));
- (CoreAccessoryPrinterAlign *)component3 __attribute__((swift_name("component3()")));
- (id)component4 __attribute__((swift_name("component4()")));
- (CoreReceiptLayoutLine *)doCopySize:(CoreAccessoryPrinterSize *)size style:(CoreAccessoryPrinterStyle *)style align:(CoreAccessoryPrinterAlign *)align fields:(id)fields __attribute__((swift_name("doCopy(size:style:align:fields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CoreAccessoryPrinterAlign *align __attribute__((swift_name("align")));
@property (readonly) id fields __attribute__((swift_name("fields")));
@property (readonly) CoreAccessoryPrinterSize *size __attribute__((swift_name("size")));
@property (readonly) CoreAccessoryPrinterStyle *style __attribute__((swift_name("style")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReceiptLineItem")))
@interface CoreReceiptLineItem : CoreBase
- (instancetype)initWithKey:(CoreReceiptLineItemKey *)key label:(NSString *)label value:(NSString * _Nullable)value __attribute__((swift_name("init(key:label:value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CoreReceiptLineItemKey *key __attribute__((swift_name("key")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReceiptLineItem.Companion")))
@interface CoreReceiptLineItemCompanion : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) CoreReceiptLineItem *nullReceiptLineItem __attribute__((swift_name("nullReceiptLineItem")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReceiptLineItemKey")))
@interface CoreReceiptLineItemKey : CoreKotlinEnum<CoreReceiptLineItemKey *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreReceiptLineItemKey *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) CoreReceiptLineItemKey *receiptType __attribute__((swift_name("receiptType")));
@property (class, readonly) CoreReceiptLineItemKey *transactionType __attribute__((swift_name("transactionType")));
@property (class, readonly) CoreReceiptLineItemKey *subject __attribute__((swift_name("subject")));
@property (class, readonly) CoreReceiptLineItemKey *identifier __attribute__((swift_name("identifier")));
@property (class, readonly) CoreReceiptLineItemKey *amount __attribute__((swift_name("amount")));
@property (class, readonly) CoreReceiptLineItemKey *currency __attribute__((swift_name("currency")));
@property (class, readonly) CoreReceiptLineItemKey *amountAndCurrency __attribute__((swift_name("amountAndCurrency")));
@property (class, readonly) CoreReceiptLineItemKey *includedTipAmountAndCurrency __attribute__((swift_name("includedTipAmountAndCurrency")));
@property (class, readonly) CoreReceiptLineItemKey *totalAmountAndCurrency __attribute__((swift_name("totalAmountAndCurrency")));
@property (class, readonly) CoreReceiptLineItemKey *purchaseAmountAndCurrency __attribute__((swift_name("purchaseAmountAndCurrency")));
@property (class, readonly) CoreReceiptLineItemKey *date __attribute__((swift_name("date")));
@property (class, readonly) CoreReceiptLineItemKey *time __attribute__((swift_name("time")));
@property (class, readonly) CoreReceiptLineItemKey *statusText __attribute__((swift_name("statusText")));
@property (class, readonly) CoreReceiptLineItemKey *status __attribute__((swift_name("status")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsSchemeOrLabel __attribute__((swift_name("paymentDetailsSchemeOrLabel")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsMaskedAccount __attribute__((swift_name("paymentDetailsMaskedAccount")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsSource __attribute__((swift_name("paymentDetailsSource")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsEmvApplicationId __attribute__((swift_name("paymentDetailsEmvApplicationId")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsAccountSequenceNumber __attribute__((swift_name("paymentDetailsAccountSequenceNumber")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsCustomerVerification __attribute__((swift_name("paymentDetailsCustomerVerification")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsRemainingBalance __attribute__((swift_name("paymentDetailsRemainingBalance")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsExpirationDate __attribute__((swift_name("paymentDetailsExpirationDate")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsMagstripeServiceCode __attribute__((swift_name("paymentDetailsMagstripeServiceCode")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsTc __attribute__((swift_name("paymentDetailsTc")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsAac __attribute__((swift_name("paymentDetailsAac")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsAuthorizationMode __attribute__((swift_name("paymentDetailsAuthorizationMode")));
@property (class, readonly) CoreReceiptLineItemKey *paymentDetailsTestCard __attribute__((swift_name("paymentDetailsTestCard")));
@property (class, readonly) CoreReceiptLineItemKey *clearingDetailsTransactionIdentifier __attribute__((swift_name("clearingDetailsTransactionIdentifier")));
@property (class, readonly) CoreReceiptLineItemKey *clearingDetailsOriginalTransactionIdentifier __attribute__((swift_name("clearingDetailsOriginalTransactionIdentifier")));
@property (class, readonly) CoreReceiptLineItemKey *clearingDetailsAuthorizationCode __attribute__((swift_name("clearingDetailsAuthorizationCode")));
@property (class, readonly) CoreReceiptLineItemKey *clearingDetailsMerchantIdentifier __attribute__((swift_name("clearingDetailsMerchantIdentifier")));
@property (class, readonly) CoreReceiptLineItemKey *clearingDetailsTerminalId __attribute__((swift_name("clearingDetailsTerminalId")));
@property (class, readonly) CoreReceiptLineItemKey *clearingDetailsReasonCode __attribute__((swift_name("clearingDetailsReasonCode")));
@property (class, readonly) CoreReceiptLineItemKey *merchantDetailsPublicName __attribute__((swift_name("merchantDetailsPublicName")));
@property (class, readonly) CoreReceiptLineItemKey *merchantDetailsAddress __attribute__((swift_name("merchantDetailsAddress")));
@property (class, readonly) CoreReceiptLineItemKey *merchantDetailsZip __attribute__((swift_name("merchantDetailsZip")));
@property (class, readonly) CoreReceiptLineItemKey *merchantDetailsCity __attribute__((swift_name("merchantDetailsCity")));
@property (class, readonly) CoreReceiptLineItemKey *merchantDetailsCountry __attribute__((swift_name("merchantDetailsCountry")));
@property (class, readonly) CoreReceiptLineItemKey *merchantDetailsContact __attribute__((swift_name("merchantDetailsContact")));
@property (class, readonly) CoreReceiptLineItemKey *merchantDetailsAdditionalInformation __attribute__((swift_name("merchantDetailsAdditionalInformation")));
@property (class, readonly) CoreReceiptLineItemKey *dccConversionRate __attribute__((swift_name("dccConversionRate")));
@property (class, readonly) CoreReceiptLineItemKey *dccConvertedAmountAndCurrency __attribute__((swift_name("dccConvertedAmountAndCurrency")));
@property (class, readonly) CoreReceiptLineItemKey *dccDisclaimer __attribute__((swift_name("dccDisclaimer")));
@property (class, readonly) CoreReceiptLineItemKey *dccMarkup __attribute__((swift_name("dccMarkup")));
@property (class, readonly) CoreReceiptLineItemKey *signature __attribute__((swift_name("signature")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReceiptLineItemKey.Companion")))
@interface CoreReceiptLineItemKeyCompanion : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSArray<CoreReceiptLineItemKey *> *allClearingDetails __attribute__((swift_name("allClearingDetails")));
@property (readonly) NSArray<CoreReceiptLineItemKey *> *allPaymentDetails __attribute__((swift_name("allPaymentDetails")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReceiptPrinter")))
@interface CoreReceiptPrinter : CoreBase
- (instancetype)initWithLayout:(CoreReceiptLayout *)layout printer:(id<CoreAccessoryPrinter>)printer __attribute__((swift_name("init(layout:printer:)"))) __attribute__((objc_designated_initializer));
- (void)print __attribute__((swift_name("print()")));
@property (readonly) CoreReceiptPrinterPrinterState *state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReceiptPrinter.PrinterState")))
@interface CoreReceiptPrinterPrinterState : CoreBase
- (instancetype)initWith:(CoreReceiptPrinter *)receiver __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));
@property CoreAccessoryPrinterAlign * _Nullable align __attribute__((swift_name("align")));
@property CoreAccessoryPrinterSize * _Nullable size __attribute__((swift_name("size")));
@property CoreAccessoryPrinterStyle * _Nullable style __attribute__((swift_name("style")));
@end;

__attribute__((swift_name("SimpleReceipt")))
@protocol CoreSimpleReceipt
@required
- (CoreReceiptLineItem * _Nullable)getReceiptLineItemKey:(CoreReceiptLineItemKey *)key __attribute__((swift_name("getReceiptLineItem(key:)")));
- (BOOL)isSignatureLineRequired __attribute__((swift_name("isSignatureLineRequired()")));
- (BOOL)isTipIncluded __attribute__((swift_name("isTipIncluded()")));
- (BOOL)isTipLineRequired __attribute__((swift_name("isTipLineRequired()")));
@end;

__attribute__((swift_name("Feature")))
@protocol CoreFeature
@required
- (void)sendAction:(id _Nullable)action __attribute__((swift_name("send(action:)")));
- (id<CoreKotlinx_coroutines_coreReceiveChannel>)states __attribute__((swift_name("states()")));
@end;

__attribute__((swift_name("BaseFeature")))
@interface CoreBaseFeature<S, A> : CoreBase <CoreFeature>
- (instancetype)initWithInitialState:(S _Nullable)initialState scope:(id<CoreKotlinx_coroutines_coreCoroutineScope>)scope tag:(NSString *)tag __attribute__((swift_name("init(initialState:scope:tag:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStateWithCompletionHandler:(void (^)(S _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getState(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)handleActionAction:(A _Nullable)action completionHandler:(void (^)(CoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("handleAction(action:completionHandler:)")));
- (void)sendAction:(A _Nullable)action __attribute__((swift_name("send(action:)")));
- (void)startGateways:(NSArray<id<CoreGateway>> *)gateways bootstraps:(NSArray<id<CoreBootstrap>> *)bootstraps __attribute__((swift_name("start(gateways:bootstraps:)")));
- (id<CoreKotlinx_coroutines_coreReceiveChannel>)states __attribute__((swift_name("states()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStateBlock:(S _Nullable (^)(S _Nullable))block completionHandler:(void (^)(S _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateState(block:completionHandler:)")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end;

__attribute__((swift_name("Gateway")))
@protocol CoreGateway
@required
- (id<CoreKotlinx_coroutines_coreReceiveChannel>)responses __attribute__((swift_name("responses()")));
- (void)sendRequestRequest:(id _Nullable)request __attribute__((swift_name("sendRequest(request:)")));
- (void)start __attribute__((swift_name("start()")));
@end;

__attribute__((swift_name("BaseGateway")))
@interface CoreBaseGateway<REQ, RES> : CoreBase <CoreGateway>
- (instancetype)initWithScope:(id<CoreKotlinx_coroutines_coreCoroutineScope>)scope tag:(NSString *)tag __attribute__((swift_name("init(scope:tag:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)handleRequestRequest:(REQ _Nullable)request completionHandler:(void (^)(CoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("handleRequest(request:completionHandler:)")));
- (id<CoreKotlinx_coroutines_coreReceiveChannel>)responses __attribute__((swift_name("responses()")));
- (void)sendRequestRequest:(REQ _Nullable)request __attribute__((swift_name("sendRequest(request:)")));
- (void)sendResponseResponse:(RES _Nullable)response __attribute__((swift_name("sendResponse(response:)")));
- (void)start __attribute__((swift_name("start()")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end;

__attribute__((swift_name("Bootstrap")))
@protocol CoreBootstrap
@required
- (id<CoreKotlinx_coroutines_coreReceiveChannel>)actions __attribute__((swift_name("actions()")));
- (void)start __attribute__((swift_name("start()")));
@end;

__attribute__((swift_name("FeatureBootstrap")))
@interface CoreFeatureBootstrap<A> : CoreBase <CoreBootstrap>
- (instancetype)initWithScope:(id<CoreKotlinx_coroutines_coreCoroutineScope>)scope tag:(NSString *)tag globalActionChannel:(id<CoreKotlinx_coroutines_coreBroadcastChannel>)globalActionChannel __attribute__((swift_name("init(scope:tag:globalActionChannel:)"))) __attribute__((objc_designated_initializer));
- (id<CoreKotlinx_coroutines_coreReceiveChannel>)actions __attribute__((swift_name("actions()")));
- (void)handleGlobalActionAction:(id)action __attribute__((swift_name("handleGlobalAction(action:)")));
- (void)sendActionAction:(A _Nullable)action __attribute__((swift_name("sendAction(action:)")));
- (void)start __attribute__((swift_name("start()")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemoryCache")))
@interface CoreMemoryCache<K, V> : CoreBase
- (instancetype)initWithTag:(NSString *)tag scope:(id<CoreKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("init(tag:scope:)"))) __attribute__((objc_designated_initializer));
- (V _Nullable)getKey:(K _Nullable)key __attribute__((swift_name("get(key:)")));
- (V _Nullable)getOrPutKey:(K _Nullable)key block:(V _Nullable (^)(void))block __attribute__((swift_name("getOrPut(key:block:)")));
- (void)putKey:(K _Nullable)key value:(V _Nullable)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(K _Nullable)key __attribute__((swift_name("remove(key:)")));
- (NSDictionary<id, id> *)toMap __attribute__((swift_name("toMap()")));
@end;

__attribute__((swift_name("MemoryCacheAction")))
@interface CoreMemoryCacheAction<K, V> : CoreBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemoryCacheActionPut")))
@interface CoreMemoryCacheActionPut<K, V> : CoreMemoryCacheAction<K, V>
- (instancetype)initWithKey:(K _Nullable)key value:(V _Nullable)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
- (K _Nullable)component1 __attribute__((swift_name("component1()")));
- (V _Nullable)component2 __attribute__((swift_name("component2()")));
- (CoreMemoryCacheActionPut<K, V> *)doCopyKey:(K _Nullable)key value:(V _Nullable)value __attribute__((swift_name("doCopy(key:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) K _Nullable key __attribute__((swift_name("key")));
@property (readonly) V _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemoryCacheActionRemove")))
@interface CoreMemoryCacheActionRemove<K, V> : CoreMemoryCacheAction<K, V>
- (instancetype)initWithKey:(K _Nullable)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
- (K _Nullable)component1 __attribute__((swift_name("component1()")));
- (CoreMemoryCacheActionRemove<K, V> *)doCopyKey:(K _Nullable)key __attribute__((swift_name("doCopy(key:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) K _Nullable key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Date")))
@interface CoreDate : CoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithNsDate:(NSDate *)nsDate __attribute__((swift_name("init(nsDate:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDate *nsDate __attribute__((swift_name("nsDate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateFormatter")))
@interface CoreDateFormatter : CoreBase
- (instancetype)initWithFormat:(NSString *)format __attribute__((swift_name("init(format:)"))) __attribute__((objc_designated_initializer));
- (CoreDate * _Nullable)dateFromStringString:(NSString *)string __attribute__((swift_name("dateFromString(string:)")));
- (NSString *)stringFromDateDate:(CoreDate *)date __attribute__((swift_name("stringFromDate(date:)")));
@end;

__attribute__((swift_name("BackendApi")))
@protocol CoreBackendApi
@required
- (void)syncFeatureTogglesCredentials:(CoreMerchantCredentials *)credentials callback:(void (^)(CoreSdkStartupResponseWrapper *))callback error:(void (^)(void))error __attribute__((swift_name("syncFeatureToggles(credentials:callback:error:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MerchantCredentials")))
@interface CoreMerchantCredentials : CoreBase
- (instancetype)initWithMerchantId:(NSString *)merchantId merchantSecret:(NSString *)merchantSecret providerMode:(CoreProviderMode *)providerMode __attribute__((swift_name("init(merchantId:merchantSecret:providerMode:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *merchantId __attribute__((swift_name("merchantId")));
@property (readonly) NSString *merchantSecret __attribute__((swift_name("merchantSecret")));
@property (readonly) CoreProviderMode *providerMode __attribute__((swift_name("providerMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayworksBackendApiProxy")))
@interface CorePayworksBackendApiProxy : CoreBase <CoreBackendApi>
- (instancetype)initWithBackendApi:(id<CoreBackendApi>)backendApi mockApi:(id<CoreBackendApi>)mockApi __attribute__((swift_name("init(backendApi:mockApi:)"))) __attribute__((objc_designated_initializer));
- (void)syncFeatureTogglesCredentials:(CoreMerchantCredentials *)credentials callback:(void (^)(CoreSdkStartupResponseWrapper *))callback error:(void (^)(void))error __attribute__((swift_name("syncFeatureToggles(credentials:callback:error:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayworksMockBackendApi")))
@interface CorePayworksMockBackendApi : CoreBase <CoreBackendApi>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)syncFeatureTogglesCredentials:(CoreMerchantCredentials *)credentials callback:(void (^)(CoreSdkStartupResponseWrapper *))callback error:(void (^)(void))error __attribute__((swift_name("syncFeatureToggles(credentials:callback:error:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkStartupResponse")))
@interface CoreSdkStartupResponse : CoreBase
- (instancetype)initWithFeatureToggles:(NSArray<NSString *> *)featureToggles __attribute__((swift_name("init(featureToggles:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()")));
- (CoreSdkStartupResponse *)doCopyFeatureToggles:(NSArray<NSString *> *)featureToggles __attribute__((swift_name("doCopy(featureToggles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> *featureToggles __attribute__((swift_name("featureToggles")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkStartupResponseWrapper")))
@interface CoreSdkStartupResponseWrapper : CoreBase
- (instancetype)initWithStatus:(NSString *)status data:(CoreSdkStartupResponse *)data __attribute__((swift_name("init(status:data:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CoreSdkStartupResponse *)component2 __attribute__((swift_name("component2()")));
- (CoreSdkStartupResponseWrapper *)doCopyStatus:(NSString *)status data:(CoreSdkStartupResponse *)data __attribute__((swift_name("doCopy(status:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property CoreSdkStartupResponse *data __attribute__((swift_name("data")));
@property NSString *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderMode")))
@interface CoreProviderMode : CoreKotlinEnum<CoreProviderMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreProviderMode *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) CoreProviderMode *mock __attribute__((swift_name("mock")));
@property (class, readonly) CoreProviderMode *test __attribute__((swift_name("test")));
@property (class, readonly) CoreProviderMode *live __attribute__((swift_name("live")));
@property (class, readonly) CoreProviderMode *jungle __attribute__((swift_name("jungle")));
@property (class, readonly) CoreProviderMode *testFixed __attribute__((swift_name("testFixed")));
@property (class, readonly) CoreProviderMode *liveFixed __attribute__((swift_name("liveFixed")));
@property (readonly) BOOL isLive __attribute__((swift_name("isLive")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureScope")))
@interface CoreFeatureScope : CoreKotlinEnum<CoreFeatureScope *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreFeatureScope *production __attribute__((swift_name("production")));
@property (class, readonly) CoreFeatureScope *development __attribute__((swift_name("development")));
@end;

__attribute__((swift_name("FeatureToggle")))
@protocol CoreFeatureToggle
@required
- (NSString *)featureName __attribute__((swift_name("featureName()")));
- (CoreFeatureScope *)scope __attribute__((swift_name("scope()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureToggleFactory")))
@interface CoreFeatureToggleFactory : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)featureToggleFactory __attribute__((swift_name("init()")));
- (id<CoreFeatureToggle>)createFeatureToggleFeatureName:(NSString *)featureName scope:(CoreFeatureScope *)scope __attribute__((swift_name("createFeatureToggle(featureName:scope:)")));
@end;

__attribute__((swift_name("FeatureToggleManager")))
@protocol CoreFeatureToggleManager
@required
- (NSArray<NSString *> *)features __attribute__((swift_name("features()")));
- (BOOL)isFeatureEnabledFeatureToggle:(id<CoreFeatureToggle>)featureToggle __attribute__((swift_name("isFeatureEnabled(featureToggle:)")));
- (void)sync __attribute__((swift_name("sync()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockFeatureToggleManager")))
@interface CoreMockFeatureToggleManager : CoreBase <CoreFeatureToggleManager>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<NSString *> *)features __attribute__((swift_name("features()")));
- (BOOL)isFeatureEnabledFeatureToggle:(id<CoreFeatureToggle>)featureToggle __attribute__((swift_name("isFeatureEnabled(featureToggle:)")));
- (void)sync __attribute__((swift_name("sync()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64")))
@interface CoreBase64 : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)base64 __attribute__((swift_name("init()")));
- (CoreKotlinByteArray *)decodeS:(NSString *)s __attribute__((swift_name("decode(s:)")));
- (NSString *)encodeA:(CoreKotlinByteArray *)a padded:(BOOL)padded __attribute__((swift_name("encode(a:padded:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CoreKotlinThrowable : CoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface CoreKotlinException : CoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64DecodingException")))
@interface CoreBase64DecodingException : CoreKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCommunicationPlugins")))
@interface CoreAccessoryCommunicationPlugins : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)accessoryCommunicationPlugins __attribute__((swift_name("init()")));
- (id)getListeners __attribute__((swift_name("getListeners()")));
- (void)registerListenerCommunicationListener:(id<CoreAccessoryCommunicationPluginsCommunicationListener>)communicationListener __attribute__((swift_name("registerListener(communicationListener:)")));
- (void)unregisterListenerCommunicationListener:(id<CoreAccessoryCommunicationPluginsCommunicationListener>)communicationListener __attribute__((swift_name("unregisterListener(communicationListener:)")));
@end;

__attribute__((swift_name("AccessoryCommunicationPluginsCommunicationListener")))
@protocol CoreAccessoryCommunicationPluginsCommunicationListener
@required
- (void)onCommandSentAccessory:(id)accessory data:(CoreKotlinByteArray *)data __attribute__((swift_name("onCommandSent(accessory:data:)")));
- (void)onConnectAccessory:(id)accessory __attribute__((swift_name("onConnect(accessory:)")));
- (void)onDisconnectedAccessory:(id)accessory __attribute__((swift_name("onDisconnected(accessory:)")));
- (void)onResponseReceivedAccessory:(id)accessory data:(CoreKotlinByteArray *)data __attribute__((swift_name("onResponseReceived(accessory:data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApduCommand")))
@interface CoreApduCommand : CoreBase
- (instancetype)initWithCla:(int8_t)cla ins:(int8_t)ins p1:(int8_t)p1 p2:(int8_t)p2 data:(CoreKotlinByteArray *)data __attribute__((swift_name("init(cla:ins:p1:p2:data:)"))) __attribute__((objc_designated_initializer));
- (int8_t)component1 __attribute__((swift_name("component1()")));
- (int8_t)component2 __attribute__((swift_name("component2()")));
- (int8_t)component3 __attribute__((swift_name("component3()")));
- (int8_t)component4 __attribute__((swift_name("component4()")));
- (CoreKotlinByteArray *)component5 __attribute__((swift_name("component5()")));
- (CoreApduCommand *)doCopyCla:(int8_t)cla ins:(int8_t)ins p1:(int8_t)p1 p2:(int8_t)p2 data:(CoreKotlinByteArray *)data __attribute__((swift_name("doCopy(cla:ins:p1:p2:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int8_t cla __attribute__((swift_name("cla")));
@property (readonly) CoreKotlinByteArray *data __attribute__((swift_name("data")));
@property (readonly) int8_t ins __attribute__((swift_name("ins")));
@property (readonly) int8_t p1 __attribute__((swift_name("p1")));
@property (readonly) int8_t p2 __attribute__((swift_name("p2")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApduSerializer")))
@interface CoreApduSerializer : CoreBase
- (instancetype)initWithAddData:(BOOL)addData useTwoBytesForLength:(BOOL)useTwoBytesForLength __attribute__((swift_name("init(addData:useTwoBytesForLength:)"))) __attribute__((objc_designated_initializer));
- (CoreKotlinByteArray *)serializeCommand:(CoreApduCommand *)command __attribute__((swift_name("serialize(command:)")));
@property (readonly) BOOL addData __attribute__((swift_name("addData")));
@property (readonly) BOOL useTwoBytesForLength __attribute__((swift_name("useTwoBytesForLength")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ByteBuffer")))
@interface CoreByteBuffer : CoreBase
- (instancetype)initWithBytes:(CoreKotlinByteArray *)bytes __attribute__((swift_name("init(bytes:)"))) __attribute__((objc_designated_initializer));
- (BOOL)hasMoreNumber:(int32_t)number __attribute__((swift_name("hasMore(number:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (CoreByte * _Nullable)next __attribute__((swift_name("next()")));
- (CoreKotlinByteArray * _Nullable)nextCount:(int32_t)count __attribute__((swift_name("next(count:)")));
- (CoreKotlinByteArray *)remaining __attribute__((swift_name("remaining()")));
- (int32_t)remainingLength __attribute__((swift_name("remainingLength()")));
- (void)skipHeadZeros __attribute__((swift_name("skipHeadZeros()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("TlvReference")))
@protocol CoreTlvReference
@required
- (CoreTlvItem * _Nullable)firstItemInItems:(id _Nullable)items __attribute__((swift_name("firstItemIn(items:)")));
- (CoreTlvItem *)tlvRawData:(CoreHexString *)rawData __attribute__((swift_name("tlv(rawData:)")));
@property (readonly) CoreTlvDataLength *length __attribute__((swift_name("length")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) CoreTlvTag *tag __attribute__((swift_name("tag")));
@end;

__attribute__((swift_name("AbstractTlvReference")))
@interface CoreAbstractTlvReference<V> : CoreBase <CoreTlvReference>
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer));
- (CoreTlvItem * _Nullable)firstItemInItems:(id _Nullable)items __attribute__((swift_name("firstItemIn(items:)")));
- (CoreHexString * _Nullable)firstRawDataInItems:(id _Nullable)items __attribute__((swift_name("firstRawDataIn(items:)")));
- (V _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
- (CoreTlvPrimitiveItem *)tlvRawData:(CoreHexString *)rawData __attribute__((swift_name("tlv(rawData:)")));
- (CoreTlvPrimitiveItem *)tlvFromValueValue:(V _Nullable)value __attribute__((swift_name("tlvFromValue(value:)")));
- (V _Nullable)valueFromTlvTlv:(CoreTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
@property (readonly) CoreTlvDataLength *length __attribute__((swift_name("length")));
@property (readonly) id<CoreTlvMapper> mapper __attribute__((swift_name("mapper")));
@property (readonly) CoreTlvTag *tag __attribute__((swift_name("tag")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmericanExpress")))
@interface CoreAmericanExpress : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)americanExpress __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmericanExpress.ContactlessReaderCapabilities")))
@interface CoreAmericanExpressContactlessReaderCapabilities : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)contactlessReaderCapabilities __attribute__((swift_name("init()")));
- (CoreTlvPrimitiveItem *)emvAndMagstripeNoCvmRequired __attribute__((swift_name("emvAndMagstripeNoCvmRequired()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmericanExpress.EnhancedContactlessReaderCapabilities")))
@interface CoreAmericanExpressEnhancedContactlessReaderCapabilities : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)enhancedContactlessReaderCapabilities __attribute__((swift_name("init()")));
- (CoreTlvPrimitiveItem *)offlinePinsAndSignature __attribute__((swift_name("offlinePinsAndSignature()")));
- (CoreTlvPrimitiveItem *)pinsAndSignature __attribute__((swift_name("pinsAndSignature()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((swift_name("TlvMapper")))
@protocol CoreTlvMapper
@required
- (CoreHexString *)fromValueValue:(id _Nullable)value __attribute__((swift_name("fromValue(value:)")));
- (id _Nullable)toValueRawData:(CoreHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
@property (readonly) int8_t padding __attribute__((swift_name("padding")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AsciiMapper")))
@interface CoreAsciiMapper : CoreBase <CoreTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)asciiMapper __attribute__((swift_name("init()")));
- (CoreHexString *)fromValueValue:(NSString *)value __attribute__((swift_name("fromValue(value:)")));
- (NSString *)toValueRawData:(CoreHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
@property (readonly) int8_t padding __attribute__((swift_name("padding")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BcdNumberMapper")))
@interface CoreBcdNumberMapper : CoreBase <CoreTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bcdNumberMapper __attribute__((swift_name("init()")));
- (CoreHexString *)fromValueValue:(CoreLong *)value __attribute__((swift_name("fromValue(value:)")));
- (CoreLong *)toValueRawData:(CoreHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChinaUnionPay")))
@interface CoreChinaUnionPay : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chinaUnionPay __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChinaUnionPay.TerminalTransactionQualifiers")))
@interface CoreChinaUnionPayTerminalTransactionQualifiers : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)terminalTransactionQualifiers __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conflicting9F69")))
@interface CoreConflicting9F69 : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)conflicting9F69 __attribute__((swift_name("init()")));
@property (readonly) CoreGenericTlvReference *generic __attribute__((swift_name("generic")));
@property (readonly) CoreMastercardUdol *mastercard __attribute__((swift_name("mastercard")));
@property (readonly) CoreVisaCardAuthenticationRelatedData *visa __attribute__((swift_name("visa")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conflicting9F6C")))
@interface CoreConflicting9F6C : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)conflicting9F6C __attribute__((swift_name("init()")));
@property (readonly) CoreGenericTlvReference *generic __attribute__((swift_name("generic")));
@property (readonly) CoreMastercardMagstripeApplicationVersionNumberIcc *mastercard __attribute__((swift_name("mastercard")));
@property (readonly) CoreVisaCardTransactionQualifier *visa __attribute__((swift_name("visa")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conflicting9F6E")))
@interface CoreConflicting9F6E : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)conflicting9F6E __attribute__((swift_name("init()")));
@property (readonly) CoreAmericanExpressEnhancedContactlessReaderCapabilities *amex __attribute__((swift_name("amex")));
@property (readonly) CoreGenericTlvReference *generic __attribute__((swift_name("generic")));
@property (readonly) CoreMastercardThirdPartyData *mastercard __attribute__((swift_name("mastercard")));
@property (readonly) CoreVisaFormFactorIndicator *visa __attribute__((swift_name("visa")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateMapper")))
@interface CoreDateMapper : CoreBase <CoreTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dateMapper __attribute__((swift_name("init()")));
- (CoreHexString *)fromValueValue:(CoreDate *)value __attribute__((swift_name("fromValue(value:)")));
- (CoreDate * _Nullable)toValueRawData:(CoreHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Discover")))
@interface CoreDiscover : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)discover __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Discover.TerminalTransactionQualifiers")))
@interface CoreDiscoverTerminalTransactionQualifiers : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)terminalTransactionQualifiers __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv")))
@interface CoreEmv : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)emv __attribute__((swift_name("init()")));
@property (readonly) NSArray<CoreTlvTag *> *TagsWithSensitiveData __attribute__((swift_name("TagsWithSensitiveData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AcquirerIdentifier")))
@interface CoreEmvAcquirerIdentifier : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)acquirerIdentifier __attribute__((swift_name("init()")));
- (CoreTlvPrimitiveItem *)default __attribute__((swift_name("default()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AdditionalTerminalCapabilities")))
@interface CoreEmvAdditionalTerminalCapabilities : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)additionalTerminalCapabilities __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationCryptogram")))
@interface CoreEmvApplicationCryptogram : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationCryptogram __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationEffectiveDate")))
@interface CoreEmvApplicationEffectiveDate : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationEffectiveDate __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationExpirationDate")))
@interface CoreEmvApplicationExpirationDate : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationExpirationDate __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationIdentifierCard")))
@interface CoreEmvApplicationIdentifierCard : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationIdentifierCard __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationIdentifierTerminal")))
@interface CoreEmvApplicationIdentifierTerminal : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationIdentifierTerminal __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationInterchangeProfile")))
@interface CoreEmvApplicationInterchangeProfile : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationInterchangeProfile __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationLabel")))
@interface CoreEmvApplicationLabel : CoreAbstractTlvReference<NSString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationLabel __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationPreferredLabel")))
@interface CoreEmvApplicationPreferredLabel : CoreAbstractTlvReference<NSString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationPreferredLabel __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationTransactionCounter")))
@interface CoreEmvApplicationTransactionCounter : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationTransactionCounter __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationUsageControl")))
@interface CoreEmvApplicationUsageControl : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationUsageControl __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationVersionNumberChip")))
@interface CoreEmvApplicationVersionNumberChip : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationVersionNumberChip __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationVersionNumberTerminal")))
@interface CoreEmvApplicationVersionNumberTerminal : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)applicationVersionNumberTerminal __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AuthorizationCode")))
@interface CoreEmvAuthorizationCode : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)authorizationCode __attribute__((swift_name("init()")));
- (CoreTlvPrimitiveItem *)default __attribute__((swift_name("default()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AuthorizationResponseCode")))
@interface CoreEmvAuthorizationResponseCode : CoreAbstractTlvReference<NSString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)authorizationResponseCode __attribute__((swift_name("init()")));
- (CoreTlvPrimitiveItem *)approved __attribute__((swift_name("approved()")));
- (CoreTlvPrimitiveItem *)genericDecline __attribute__((swift_name("genericDecline()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AuthorizedAmount")))
@interface CoreEmvAuthorizedAmount : CoreAbstractTlvReference<CoreLong *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)authorizedAmount __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AuthorizedAmountBinary")))
@interface CoreEmvAuthorizedAmountBinary : CoreAbstractTlvReference<CoreLong *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)authorizedAmountBinary __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CardHolderName")))
@interface CoreEmvCardHolderName : CoreAbstractTlvReference<NSString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)cardHolderName __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CardholderVerificationMethodList")))
@interface CoreEmvCardholderVerificationMethodList : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)cardholderVerificationMethodList __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CardholderVerificationMethodResults")))
@interface CoreEmvCardholderVerificationMethodResults : CoreAbstractTlvReference<CoreEmvCardholderVerificationMethodResultsCvm *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)cardholderVerificationMethodResults __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CardholderVerificationMethodResultsCvm")))
@interface CoreEmvCardholderVerificationMethodResultsCvm : CoreKotlinEnum<CoreEmvCardholderVerificationMethodResultsCvm *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreEmvCardholderVerificationMethodResultsCvm *pinofflineenciphered __attribute__((swift_name("pinofflineenciphered")));
@property (class, readonly) CoreEmvCardholderVerificationMethodResultsCvm *pinofflineencipheredandsignature __attribute__((swift_name("pinofflineencipheredandsignature")));
@property (class, readonly) CoreEmvCardholderVerificationMethodResultsCvm *pinofflineplaintext __attribute__((swift_name("pinofflineplaintext")));
@property (class, readonly) CoreEmvCardholderVerificationMethodResultsCvm *pinofflineplaintextandsignature __attribute__((swift_name("pinofflineplaintextandsignature")));
@property (class, readonly) CoreEmvCardholderVerificationMethodResultsCvm *pinonlineenciphered __attribute__((swift_name("pinonlineenciphered")));
@property (class, readonly) CoreEmvCardholderVerificationMethodResultsCvm *signature __attribute__((swift_name("signature")));
@property (class, readonly) CoreEmvCardholderVerificationMethodResultsCvm *nocvm __attribute__((swift_name("nocvm")));
@property (class, readonly) CoreEmvCardholderVerificationMethodResultsCvm *unknown __attribute__((swift_name("unknown")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CardholderVerificationMethodResultsMapper")))
@interface CoreEmvCardholderVerificationMethodResultsMapper : CoreBase <CoreTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mapper __attribute__((swift_name("init()")));
- (CoreHexString *)fromValueValue:(CoreEmvCardholderVerificationMethodResultsCvm *)value __attribute__((swift_name("fromValue(value:)")));
- (CoreEmvCardholderVerificationMethodResultsCvm * _Nullable)toValueRawData:(CoreHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CryptogramInformationData")))
@interface CoreEmvCryptogramInformationData : CoreAbstractTlvReference<CoreEmvCryptogramInformationDataType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)cryptogramInformationData __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CryptogramInformationDataMapper")))
@interface CoreEmvCryptogramInformationDataMapper : CoreBase <CoreTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mapper __attribute__((swift_name("init()")));
- (CoreHexString *)fromValueValue:(CoreEmvCryptogramInformationDataType *)value __attribute__((swift_name("fromValue(value:)")));
- (CoreEmvCryptogramInformationDataType * _Nullable)toValueRawData:(CoreHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CryptogramInformationDataType")))
@interface CoreEmvCryptogramInformationDataType : CoreKotlinEnum<CoreEmvCryptogramInformationDataType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreEmvCryptogramInformationDataType *aac __attribute__((swift_name("aac")));
@property (class, readonly) CoreEmvCryptogramInformationDataType *tc __attribute__((swift_name("tc")));
@property (class, readonly) CoreEmvCryptogramInformationDataType *arqc __attribute__((swift_name("arqc")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CurrencyCode")))
@interface CoreEmvCurrencyCode : CoreAbstractTlvReference<CoreLong *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)currencyCode __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CurrencyExponent")))
@interface CoreEmvCurrencyExponent : CoreAbstractTlvReference<CoreLong *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)currencyExponent __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.DataAuthenticationCode")))
@interface CoreEmvDataAuthenticationCode : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)dataAuthenticationCode __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.DedicatedFileName")))
@interface CoreEmvDedicatedFileName : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)dedicatedFileName __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.InterfaceDeviceSerialNumber")))
@interface CoreEmvInterfaceDeviceSerialNumber : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)interfaceDeviceSerialNumber __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerActionCodeDefault")))
@interface CoreEmvIssuerActionCodeDefault : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)issuerActionCodeDefault __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerActionCodeDenial")))
@interface CoreEmvIssuerActionCodeDenial : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)issuerActionCodeDenial __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerActionCodeOnline")))
@interface CoreEmvIssuerActionCodeOnline : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)issuerActionCodeOnline __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerApplicationData")))
@interface CoreEmvIssuerApplicationData : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)issuerApplicationData __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerAuthenticationData")))
@interface CoreEmvIssuerAuthenticationData : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)issuerAuthenticationData __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerCodeTableIndex")))
@interface CoreEmvIssuerCodeTableIndex : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)issuerCodeTableIndex __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerCountryCode")))
@interface CoreEmvIssuerCountryCode : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)issuerCountryCode __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerScriptTemplate1")))
@interface CoreEmvIssuerScriptTemplate1 : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)issuerScriptTemplate1 __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerScriptTemplate2")))
@interface CoreEmvIssuerScriptTemplate2 : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)issuerScriptTemplate2 __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.MerchantNameAndLocation")))
@interface CoreEmvMerchantNameAndLocation : CoreAbstractTlvReference<NSString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)merchantNameAndLocation __attribute__((swift_name("init()")));
- (CoreTlvPrimitiveItem *)generic __attribute__((swift_name("generic()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.OtherAmount")))
@interface CoreEmvOtherAmount : CoreAbstractTlvReference<CoreLong *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)otherAmount __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.OtherAmountBinary")))
@interface CoreEmvOtherAmountBinary : CoreAbstractTlvReference<CoreLong *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)otherAmountBinary __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.Pan")))
@interface CoreEmvPan : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)pan __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.PanSequenceNumber")))
@interface CoreEmvPanSequenceNumber : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)panSequenceNumber __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.PosEntryMode")))
@interface CoreEmvPosEntryMode : CoreAbstractTlvReference<CoreEmvPosEntryModeEntryMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)posEntryMode __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.PosEntryModeEntryMode")))
@interface CoreEmvPosEntryModeEntryMode : CoreKotlinEnum<CoreEmvPosEntryModeEntryMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreEmvPosEntryModeEntryMode *magstripe __attribute__((swift_name("magstripe")));
@property (class, readonly) CoreEmvPosEntryModeEntryMode *emv __attribute__((swift_name("emv")));
@property (class, readonly) CoreEmvPosEntryModeEntryMode *contactlessemv __attribute__((swift_name("contactlessemv")));
@property (class, readonly) CoreEmvPosEntryModeEntryMode *contactlessmagstripe __attribute__((swift_name("contactlessmagstripe")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.PosEntryModeMapper")))
@interface CoreEmvPosEntryModeMapper : CoreBase <CoreTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mapper __attribute__((swift_name("init()")));
- (CoreHexString *)fromValueValue:(CoreEmvPosEntryModeEntryMode *)value __attribute__((swift_name("fromValue(value:)")));
- (CoreEmvPosEntryModeEntryMode * _Nullable)toValueRawData:(CoreHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ServiceCode")))
@interface CoreEmvServiceCode : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serviceCode __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalCapabilities")))
@interface CoreEmvTerminalCapabilities : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)terminalCapabilities __attribute__((swift_name("init()")));
- (CoreTlvPrimitiveItem *)offlinePinAndSignature __attribute__((swift_name("offlinePinAndSignature()")));
- (CoreTlvPrimitiveItem *)offlinePinPlaintextAndSignature __attribute__((swift_name("offlinePinPlaintextAndSignature()")));
- (CoreTlvPrimitiveItem *)pinsAndSignature __attribute__((swift_name("pinsAndSignature()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalCountryCode")))
@interface CoreEmvTerminalCountryCode : CoreAbstractTlvReference<CoreLong *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)terminalCountryCode __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalFloorLimit")))
@interface CoreEmvTerminalFloorLimit : CoreAbstractTlvReference<CoreLong *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)terminalFloorLimit __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalIdentification")))
@interface CoreEmvTerminalIdentification : CoreAbstractTlvReference<NSString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)terminalIdentification __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalType")))
@interface CoreEmvTerminalType : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)terminalType __attribute__((swift_name("init()")));
- (CoreTlvPrimitiveItem *)tlvAttendedOfflineWithOnlineCapability __attribute__((swift_name("tlvAttendedOfflineWithOnlineCapability()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalVerificationResults")))
@interface CoreEmvTerminalVerificationResults : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)terminalVerificationResults __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.Track2EquivalentData")))
@interface CoreEmvTrack2EquivalentData : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)track2EquivalentData __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionCategoryCode")))
@interface CoreEmvTransactionCategoryCode : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)transactionCategoryCode __attribute__((swift_name("init()")));
- (CoreTlvPrimitiveItem *)default __attribute__((swift_name("default()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionDate")))
@interface CoreEmvTransactionDate : CoreAbstractTlvReference<CoreDate *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)transactionDate __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionSequenceCounter")))
@interface CoreEmvTransactionSequenceCounter : CoreAbstractTlvReference<CoreLong *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)transactionSequenceCounter __attribute__((swift_name("init()")));
- (int64_t)incrementAndHandleOverflowCounter:(CoreLong * _Nullable)counter __attribute__((swift_name("incrementAndHandleOverflow(counter:)")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionStatusInformation")))
@interface CoreEmvTransactionStatusInformation : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)transactionStatusInformation __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionTime")))
@interface CoreEmvTransactionTime : CoreAbstractTlvReference<CoreDate *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)transactionTime __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionType")))
@interface CoreEmvTransactionType : CoreAbstractTlvReference<CoreEmvTransactionTypeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)transactionType __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionTypeType")))
@interface CoreEmvTransactionTypeType : CoreKotlinEnum<CoreEmvTransactionTypeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreEmvTransactionTypeType *purchase __attribute__((swift_name("purchase")));
@property (class, readonly) CoreEmvTransactionTypeType *refund __attribute__((swift_name("refund")));
@property (readonly) CoreHexString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.UnpredictableNumber")))
@interface CoreEmvUnpredictableNumber : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)unpredictableNumber __attribute__((swift_name("init()")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericTlvReference")))
@interface CoreGenericTlvReference : CoreAbstractTlvReference<CoreHexString *>
- (instancetype)initWithTag:(CoreTlvTag *)tag length:(CoreTlvDataLength *)length shortDescription:(NSString *)shortDescription __attribute__((swift_name("init(tag:length:shortDescription:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexStringMapper")))
@interface CoreHexStringMapper : CoreBase <CoreTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hexStringMapper __attribute__((swift_name("init()")));
- (CoreHexString *)fromValueValue:(CoreHexString *)value __attribute__((swift_name("fromValue(value:)")));
- (CoreHexString *)toValueRawData:(CoreHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard")))
@interface CoreMastercard : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mastercard __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.MagstripeApplicationVersionNumberIcc")))
@interface CoreMastercardMagstripeApplicationVersionNumberIcc : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)magstripeApplicationVersionNumberIcc __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.MagstripeApplicationVersionNumberTerminal")))
@interface CoreMastercardMagstripeApplicationVersionNumberTerminal : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)magstripeApplicationVersionNumberTerminal __attribute__((swift_name("init()")));
- (CoreTlvPrimitiveItem *)unused __attribute__((swift_name("unused()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.MagstripeTrack2Data")))
@interface CoreMastercardMagstripeTrack2Data : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)magstripeTrack2Data __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.TerminalRiskManagementData")))
@interface CoreMastercardTerminalRiskManagementData : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)terminalRiskManagementData __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.ThirdPartyData")))
@interface CoreMastercardThirdPartyData : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)thirdPartyData __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.Udol")))
@interface CoreMastercardUdol : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)udol __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumberMapper")))
@interface CoreNumberMapper : CoreBase <CoreTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)numberMapper __attribute__((swift_name("init()")));
- (CoreHexString *)fromValueValue:(CoreLong *)value __attribute__((swift_name("fromValue(value:)")));
- (CoreLong *)toValueRawData:(CoreHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeMapper")))
@interface CoreTimeMapper : CoreBase <CoreTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)timeMapper __attribute__((swift_name("init()")));
- (CoreHexString *)fromValueValue:(CoreDate *)value __attribute__((swift_name("fromValue(value:)")));
- (CoreDate * _Nullable)toValueRawData:(CoreHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
@end;

__attribute__((swift_name("TlvDataLength")))
@interface CoreTlvDataLength : CoreBase
@property (readonly) CoreKotlinIntRange *range __attribute__((swift_name("range")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvDataLength.Fixed")))
@interface CoreTlvDataLengthFixed : CoreTlvDataLength
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvDataLength.Flexible")))
@interface CoreTlvDataLengthFlexible : CoreTlvDataLength
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)flexible __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvDataLength.Ranged")))
@interface CoreTlvDataLengthRanged : CoreTlvDataLength
- (instancetype)initWithRange:(CoreKotlinIntRange *)range __attribute__((swift_name("init(range:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa")))
@interface CoreVisa : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)visa __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.CardAuthenticationRelatedData")))
@interface CoreVisaCardAuthenticationRelatedData : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)cardAuthenticationRelatedData __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.CardCvmLimit")))
@interface CoreVisaCardCvmLimit : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)cardCvmLimit __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.CardTransactionQualifier")))
@interface CoreVisaCardTransactionQualifier : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)cardTransactionQualifier __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.CustomerExclusiveData")))
@interface CoreVisaCustomerExclusiveData : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)customerExclusiveData __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.FormFactorIndicator")))
@interface CoreVisaFormFactorIndicator : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)formFactorIndicator __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.ReaderRiskParameterRecord")))
@interface CoreVisaReaderRiskParameterRecord : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)readerRiskParameterRecord __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.TerminalTransactionQualifiers")))
@interface CoreVisaTerminalTransactionQualifiers : CoreAbstractTlvReference<CoreHexString *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithTag:(CoreTlvTag *)tag mapper:(id<CoreTlvMapper>)mapper length:(CoreTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)terminalTransactionQualifiers __attribute__((swift_name("init()")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagClass")))
@interface CoreTagClass : CoreKotlinEnum<CoreTagClass *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreTagClass *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) CoreTagClass *universal __attribute__((swift_name("universal")));
@property (class, readonly) CoreTagClass *application __attribute__((swift_name("application")));
@property (class, readonly) CoreTagClass *contextSpecific __attribute__((swift_name("contextSpecific")));
@property (class, readonly) CoreTagClass *private_ __attribute__((swift_name("private_")));
@property (readonly) int8_t byte __attribute__((swift_name("byte")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagType")))
@interface CoreTagType : CoreKotlinEnum<CoreTagType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CoreTagType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) CoreTagType *primitive __attribute__((swift_name("primitive")));
@property (class, readonly) CoreTagType *constructed __attribute__((swift_name("constructed")));
@property (readonly) int8_t byte __attribute__((swift_name("byte")));
@end;

__attribute__((swift_name("TlvItem")))
@interface CoreTlvItem : CoreBase
- (BOOL)isPrivateOrSensitive __attribute__((swift_name("isPrivateOrSensitive()")));
@property (readonly) CoreTlvTag *tag __attribute__((swift_name("tag")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvConstructedItem")))
@interface CoreTlvConstructedItem : CoreTlvItem
- (instancetype)initWithTagString:(CoreHexString *)tagString subitems:(NSArray<CoreTlvItem *> *)subitems __attribute__((swift_name("init(tagString:subitems:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTag:(CoreTlvTag *)tag subitems:(NSArray<CoreTlvItem *> *)subitems __attribute__((swift_name("init(tag:subitems:)"))) __attribute__((objc_designated_initializer));
- (CoreTlvTag *)component1 __attribute__((swift_name("component1()")));
- (NSArray<CoreTlvItem *> *)component2 __attribute__((swift_name("component2()")));
- (CoreTlvConstructedItem *)doCopyTag:(CoreTlvTag *)tag subitems:(NSArray<CoreTlvItem *> *)subitems __attribute__((swift_name("doCopy(tag:subitems:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CoreTlvItem *> *subitems __attribute__((swift_name("subitems")));
@property (readonly) CoreTlvTag *tag __attribute__((swift_name("tag")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvError")))
@interface CoreTlvError : CoreBase
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CoreTlvError *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvParser")))
@interface CoreTlvParser : CoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CoreKotlinPair<NSArray<CoreTlvItem *> *, CoreTlvError *> *)parseHexString:(CoreHexString *)hexString __attribute__((swift_name("parse(hexString:)")));
- (CoreKotlinPair<NSArray<CoreTlvItem *> *, CoreTlvError *> *)parseBytes:(CoreKotlinByteArray *)bytes __attribute__((swift_name("parse(bytes:)")));
- (CoreKotlinPair<NSArray<CoreTlvItem *> *, CoreTlvError *> *)parseAsTlvHexBufferHexString:(CoreHexString *)hexString __attribute__((swift_name("parseAsTlvHexBuffer(hexString:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvPrimitiveItem")))
@interface CoreTlvPrimitiveItem : CoreTlvItem
- (instancetype)initWithTagString:(CoreHexString *)tagString value:(CoreHexString *)value __attribute__((swift_name("init(tagString:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTag:(CoreTlvTag *)tag value:(CoreHexString *)value __attribute__((swift_name("init(tag:value:)"))) __attribute__((objc_designated_initializer));
- (CoreTlvTag *)component1 __attribute__((swift_name("component1()")));
- (CoreHexString *)component2 __attribute__((swift_name("component2()")));
- (CoreTlvPrimitiveItem *)doCopyTag:(CoreTlvTag *)tag value:(CoreHexString *)value __attribute__((swift_name("doCopy(tag:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CoreTlvTag *tag __attribute__((swift_name("tag")));
@property (readonly) CoreHexString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvSerializer")))
@interface CoreTlvSerializer : CoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CoreKotlinByteArray *)serializeItem:(CoreTlvItem *)item __attribute__((swift_name("serialize(item:)")));
- (CoreKotlinByteArray *)serializeItems:(id)items __attribute__((swift_name("serialize(items:)")));
- (CoreHexString *)serializeToTlvHexBufferItems:(id)items __attribute__((swift_name("serializeToTlvHexBuffer(items:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvTag")))
@interface CoreTlvTag : CoreBase
- (instancetype)initWithValue:(CoreHexString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (CoreHexString *)component1 __attribute__((swift_name("component1()")));
- (CoreTlvTag *)doCopyValue:(CoreHexString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CoreTagClass *tagClass __attribute__((swift_name("tagClass")));
@property (readonly) CoreTagType *type __attribute__((swift_name("type")));
@property (readonly) CoreHexString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinIterable")))
@protocol CoreKotlinIterable
@required
- (id<CoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexString")))
@interface CoreHexString : CoreBase <CoreKotlinIterable>
- (CoreHexString *)doCopyStr:(NSString *)str orig:(NSString *)orig __attribute__((swift_name("doCopy(str:orig:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (id<CoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (CoreHexString *)plusRight:(CoreHexString *)right __attribute__((swift_name("plus(right:)")));
- (CoreKotlinPair<CoreHexString *, CoreHexString *> *)splitFromEndRightSideLength:(int32_t)rightSideLength __attribute__((swift_name("splitFromEnd(rightSideLength:)")));
- (CoreKotlinPair<CoreHexString *, CoreHexString *> *)splitFromStartLeftSideLength:(int32_t)leftSideLength __attribute__((swift_name("splitFromStart(leftSideLength:)")));
- (CoreKotlinPair<CoreHexString *, CoreHexString *> * _Nullable)splitOnFirstDelimiter:(CoreHexString *)delimiter __attribute__((swift_name("splitOnFirst(delimiter:)")));
- (BOOL)startsWithPrefix:(CoreHexString *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (CoreHexString *)stringAdjustedToLengthLength:(int32_t)length padByte:(int8_t)padByte paddingStyle:(CorePaddingStyle *)paddingStyle __attribute__((swift_name("stringAdjustedToLength(length:padByte:paddingStyle:)")));
- (CoreHexString *)substringRange:(CoreKotlinIntRange *)range __attribute__((swift_name("substring(range:)")));
- (CoreHexString *)substringFromIndex:(int32_t)index __attribute__((swift_name("substringFrom(index:)")));
- (CoreHexString *)substringUpToIndex:(int32_t)index __attribute__((swift_name("substringUpTo(index:)")));
- (NSString *)toPrettyString __attribute__((swift_name("toPrettyString()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (CoreHexString *)trimEndSuffix:(CoreHexString *)suffix __attribute__((swift_name("trimEnd(suffix:)")));
- (CoreHexString *)validateExactLength:(int32_t)exactLength __attribute__((swift_name("validate(exactLength:)")));
- (CoreHexString *)validateMinLength:(int32_t)minLength maxLength:(int32_t)maxLength __attribute__((swift_name("validate(minLength:maxLength:)")));
@property (readonly) int32_t length __attribute__((swift_name("length")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CoreKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CoreKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CoreKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CoreKotlinx_serialization_coreKSerializer <CoreKotlinx_serialization_coreSerializationStrategy, CoreKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexString.Companion")))
@interface CoreHexStringCompanion : CoreBase <CoreKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (CoreHexString * _Nullable)createString:(NSString *)string __attribute__((swift_name("create(string:)")));
- (CoreHexString *)deserializeDecoder:(id<CoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreHexString *)fromAsciiString:(NSString *)string __attribute__((swift_name("fromAscii(string:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_coreEncoder>)encoder value:(CoreHexString *)value __attribute__((swift_name("serialize(encoder:value:)")));
- (id<CoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) id<CoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@property (readonly) CoreHexString *empty __attribute__((swift_name("empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexStringBuffer")))
@interface CoreHexStringBuffer : CoreBase
- (instancetype)initWithHexString:(CoreHexString *)hexString __attribute__((swift_name("init(hexString:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (CoreHexString *)nextLength:(int32_t)length __attribute__((swift_name("next(length:)")));
- (CoreHexString *)nextUpToLength:(int32_t)length __attribute__((swift_name("nextUpTo(length:)")));
- (CoreHexString *)remaining __attribute__((swift_name("remaining()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexStringDelimiterBuffer")))
@interface CoreHexStringDelimiterBuffer : CoreBase
- (instancetype)initWithHexString:(CoreHexString *)hexString delimiter:(CoreHexString *)delimiter __attribute__((swift_name("init(hexString:delimiter:)"))) __attribute__((objc_designated_initializer));
- (CoreHexString * _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaddingStyle")))
@interface CorePaddingStyle : CoreKotlinEnum<CorePaddingStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CorePaddingStyle *front __attribute__((swift_name("front")));
@property (class, readonly) CorePaddingStyle *back __attribute__((swift_name("back")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CoreKotlinByteArray : CoreBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CoreByte *(^)(CoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CoreKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface CoreKotlinByteArray (Extensions)
- (NSString *)encodeBase64 __attribute__((swift_name("encodeBase64()")));
- (int32_t)toBCDInt __attribute__((swift_name("toBCDInt()")));
- (int64_t)toBCDLong __attribute__((swift_name("toBCDLong()")));
- (CoreKotlinByteArray *)toBigEndian __attribute__((swift_name("toBigEndian()")));
- (CoreHexString *)toHexString __attribute__((swift_name("toHexString()")));
- (int32_t)toInt __attribute__((swift_name("toInt()")));
- (int64_t)toLong __attribute__((swift_name("toLong()")));
@end;

@interface CoreHexString (Extensions)
- (CoreHexString *)cutPaddingNewLength:(int32_t)newLength style:(CorePaddingStyle *)style __attribute__((swift_name("cutPadding(newLength:style:)")));
- (CoreHexString *)fitInRange:(CoreKotlinIntRange *)range padding:(int8_t)padding style:(CorePaddingStyle *)style __attribute__((swift_name("fitIn(range:padding:style:)")));
- (BOOL)isNullOrEmpty __attribute__((swift_name("isNullOrEmpty()")));
- (CoreHexString *)padNewLength:(int32_t)newLength byte:(int8_t)byte style:(CorePaddingStyle *)style __attribute__((swift_name("pad(newLength:byte:style:)")));
- (NSString *)toAsciiString __attribute__((swift_name("toAsciiString()")));
- (int32_t)toBCDInt __attribute__((swift_name("toBCDInt()")));
- (int64_t)toBCDLong __attribute__((swift_name("toBCDLong()")));
- (CoreKotlinByteArray *)toBytes __attribute__((swift_name("toBytes()")));
- (int32_t)toInt __attribute__((swift_name("toInt()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchersKt")))
@interface CoreDispatchersKt : CoreBase
@property (class, readonly) CoreKotlinx_coroutines_coreCoroutineDispatcher *featureDispatcher __attribute__((swift_name("featureDispatcher")));
@property (class, readonly) id<CoreKotlinx_coroutines_coreCoroutineScope> featureScope __attribute__((swift_name("featureScope")));
@property (class, readonly) CoreKotlinx_coroutines_coreCoroutineDispatcher *gatewayDispatcher __attribute__((swift_name("gatewayDispatcher")));
@property (class, readonly) id<CoreKotlinx_coroutines_coreCoroutineScope> gatewayScope __attribute__((swift_name("gatewayScope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreComponentKt")))
@interface CoreCoreComponentKt : CoreBase
+ (id<CoreCoreComponent>)createCoreComponentBackendApi:(id<CoreBackendApi>)backendApi __attribute__((swift_name("createCoreComponent(backendApi:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerKt")))
@interface CoreLoggerKt : CoreBase
+ (CoreKotlinUnit * _Nullable)logDebugTag:(NSString *)tag messageBlock:(NSString *(^)(void))messageBlock __attribute__((swift_name("logDebug(tag:messageBlock:)")));
+ (CoreKotlinUnit * _Nullable)logDebugTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logDebug(tag:message:)")));
+ (CoreKotlinUnit * _Nullable)logErrorTag:(NSString *)tag throwable:(CoreKotlinThrowable * _Nullable)throwable messageBlock:(NSString *(^)(void))messageBlock __attribute__((swift_name("logError(tag:throwable:messageBlock:)")));
+ (CoreKotlinUnit * _Nullable)logErrorTag:(NSString *)tag throwable:(CoreKotlinThrowable * _Nullable)throwable message:(NSString *)message __attribute__((swift_name("logError(tag:throwable:message:)")));
+ (CoreKotlinUnit * _Nullable)logInfoTag:(NSString *)tag messageBlock:(NSString *(^)(void))messageBlock __attribute__((swift_name("logInfo(tag:messageBlock:)")));
+ (CoreKotlinUnit * _Nullable)logInfoTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logInfo(tag:message:)")));
+ (CoreKotlinUnit * _Nullable)logTraceTag:(NSString *)tag messageBlock:(NSString *(^)(void))messageBlock __attribute__((swift_name("logTrace(tag:messageBlock:)")));
+ (CoreKotlinUnit * _Nullable)logTraceTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logTrace(tag:message:)")));
+ (CoreKotlinUnit * _Nullable)logWarnTag:(NSString *)tag messageBlock:(NSString *(^)(void))messageBlock __attribute__((swift_name("logWarn(tag:messageBlock:)")));
+ (CoreKotlinUnit * _Nullable)logWarnTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logWarn(tag:message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringsKt")))
@interface CoreStringsKt : CoreBase
+ (CoreKotlinUnit * _Nullable)logDebug:(NSString *)receiver tag:(NSString *)tag __attribute__((swift_name("logDebug(_:tag:)")));
+ (CoreKotlinUnit * _Nullable)logError:(NSString *)receiver tag:(NSString *)tag throwable:(CoreKotlinThrowable * _Nullable)throwable __attribute__((swift_name("logError(_:tag:throwable:)")));
+ (CoreKotlinUnit * _Nullable)logInfo:(NSString *)receiver tag:(NSString *)tag __attribute__((swift_name("logInfo(_:tag:)")));
+ (CoreKotlinUnit * _Nullable)logTrace:(NSString *)receiver tag:(NSString *)tag __attribute__((swift_name("logTrace(_:tag:)")));
+ (CoreKotlinUnit * _Nullable)logWarn:(NSString *)receiver tag:(NSString *)tag __attribute__((swift_name("logWarn(_:tag:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleReceiptKt")))
@interface CoreSimpleReceiptKt : CoreBase
+ (CoreReceiptLineItem * _Nullable)get:(id<CoreSimpleReceipt>)receiver key:(CoreReceiptLineItemKey *)key __attribute__((swift_name("get(_:key:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTimeMillisKt")))
@interface CoreGetTimeMillisKt : CoreBase
+ (int64_t)getTimeMillis __attribute__((swift_name("getTimeMillis()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureTogglesKt")))
@interface CoreFeatureTogglesKt : CoreBase
+ (NSString *)describeFeature:(id<CoreFeatureToggle>)receiver __attribute__((swift_name("describeFeature(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureToggleFeatureKt")))
@interface CoreFeatureToggleFeatureKt : CoreBase
+ (id _Nullable)exhaustive:(id _Nullable)receiver __attribute__((swift_name("exhaustive(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NativeHelpersIOSKt")))
@interface CoreNativeHelpersIOSKt : CoreBase
+ (BOOL)isFrozen:(id _Nullable)receiver __attribute__((swift_name("isFrozen(_:)")));
+ (void)ensureNeverFrozen:(id)receiver __attribute__((swift_name("ensureNeverFrozen(_:)")));
+ (id _Nullable)freeze:(id _Nullable)receiver __attribute__((swift_name("freeze(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveTypesTransformExtensionsKt")))
@interface CorePrimitiveTypesTransformExtensionsKt : CoreBase
+ (int8_t)bTheInt:(int32_t)theInt __attribute__((swift_name("b(theInt:)")));
+ (CoreKotlinByteArray *)toBcdByteArray:(int64_t)receiver __attribute__((swift_name("toBcdByteArray(_:)")));
+ (CoreHexString *)toBcdHexString:(int32_t)receiver __attribute__((swift_name("toBcdHexString(_:)")));
+ (CoreHexString *)toBcdHexString_:(int64_t)receiver __attribute__((swift_name("toBcdHexString(__:)")));
+ (CoreKotlinByteArray *)toByteArray:(int32_t)receiver size:(int32_t)size __attribute__((swift_name("toByteArray(_:size:)")));
+ (CoreKotlinByteArray *)toByteArray:(int64_t)receiver size_:(int32_t)size __attribute__((swift_name("toByteArray(_:size_:)")));
+ (CoreHexString *)toHexString:(int8_t)receiver __attribute__((swift_name("toHexString(_:)")));
+ (CoreHexString *)toHexString_:(int32_t)receiver __attribute__((swift_name("toHexString(__:)")));
+ (CoreHexString *)toHexString:(int32_t)receiver size:(int32_t)size __attribute__((swift_name("toHexString(_:size:)")));
+ (CoreHexString *)toHexString__:(int64_t)receiver __attribute__((swift_name("toHexString(___:)")));
+ (CoreHexString *)toHexString:(int64_t)receiver size_:(int32_t)size __attribute__((swift_name("toHexString(_:size_:)")));
+ (CoreKotlinByteArray *)toVariableLengthByteArray:(int32_t)receiver __attribute__((swift_name("toVariableLengthByteArray(_:)")));
+ (CoreKotlinByteArray *)toVariableLengthByteArray_:(int64_t)receiver __attribute__((swift_name("toVariableLengthByteArray(__:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NativeHelpersKt")))
@interface CoreNativeHelpersKt : CoreBase
+ (id _Nullable)freezeT:(id _Nullable)t __attribute__((swift_name("freeze(t:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64Kt")))
@interface CoreBase64Kt : CoreBase
+ (CoreKotlinByteArray *)decodeBase64:(NSString *)receiver __attribute__((swift_name("decodeBase64(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexHelpersKt")))
@interface CoreHexHelpersKt : CoreBase
+ (NSString *)asMiuraCommandName:(NSString *)receiver __attribute__((swift_name("asMiuraCommandName(_:)")));
+ (NSString *)asVipaCommandName:(NSString *)receiver __attribute__((swift_name("asVipaCommandName(_:)")));
@property (class, readonly) NSString *UNKNOWN_COMMAND __attribute__((swift_name("UNKNOWN_COMMAND")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvParserKt")))
@interface CoreTlvParserKt : CoreBase
+ (CoreTlvItem *)tlvItemTlvString:(CoreHexString *)tlvString __attribute__((swift_name("tlvItem(tlvString:)")));
+ (CoreTlvItem *)tlvItemTag:(CoreHexString *)tag value:(CoreHexString *)value __attribute__((swift_name("tlvItem(tag:value:)")));
+ (CoreTlvItem *)tlvItemTlvString_:(NSString *)tlvString __attribute__((swift_name("tlvItem(tlvString_:)")));
+ (CoreTlvItem *)tlvItemTag:(NSString *)tag value_:(CoreHexString *)value __attribute__((swift_name("tlvItem(tag:value_:)")));
+ (CoreTlvItem *)tlvItemTag:(NSString *)tag value__:(NSString *)value __attribute__((swift_name("tlvItem(tag:value__:)")));
+ (NSArray<CoreTlvItem *> *)tlvItemsTlvString:(CoreHexString *)tlvString __attribute__((swift_name("tlvItems(tlvString:)")));
@property (class, readonly) int32_t LENGTH_BYTES_MASK __attribute__((swift_name("LENGTH_BYTES_MASK")));
@property (class, readonly) int32_t LENGTH_CONSTRUCTED_FLAG_MASK __attribute__((swift_name("LENGTH_CONSTRUCTED_FLAG_MASK")));
@property (class, readonly) int32_t LENGTH_MAX_INTEGER_BYTES __attribute__((swift_name("LENGTH_MAX_INTEGER_BYTES")));
@property (class, readonly) int32_t TAG_SIZE_CONSECUTIVE_MASK_ADD_SUBSEQUENT __attribute__((swift_name("TAG_SIZE_CONSECUTIVE_MASK_ADD_SUBSEQUENT")));
@property (class, readonly) int32_t TAG_SIZE_PRIMARY_MASK_ADD_SUBSEQUENT __attribute__((swift_name("TAG_SIZE_PRIMARY_MASK_ADD_SUBSEQUENT")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvSerializerKt")))
@interface CoreTlvSerializerKt : CoreBase
+ (CoreKotlinByteArray *)serializeItem:(CoreTlvItem *)item __attribute__((swift_name("serialize(item:)")));
+ (CoreKotlinByteArray *)serializeItems:(id)items __attribute__((swift_name("serialize(items:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvTagKt")))
@interface CoreTlvTagKt : CoreBase
+ (CoreTlvTag *)tagString:(NSString *)string __attribute__((swift_name("tag(string:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IterableHelperKt")))
@interface CoreIterableHelperKt : CoreBase
+ (BOOL)contentEquals:(id)receiver other:(id)other __attribute__((swift_name("contentEquals(_:other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvItemKt")))
@interface CoreTlvItemKt : CoreBase
+ (NSArray<CoreTlvItem *> *)filterPrivateOrSensitiveItems:(id)receiver __attribute__((swift_name("filterPrivateOrSensitiveItems(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexStringKt")))
@interface CoreHexStringKt : CoreBase
+ (CoreKotlinByteArray *)bytesString:(NSString *)string __attribute__((swift_name("bytes(string:)")));
+ (CoreHexString *)hexString:(NSString *)string __attribute__((swift_name("hex(string:)")));
@property (class, readonly) NSString *HEX_CHARS __attribute__((swift_name("HEX_CHARS")));
@property (class, readonly) NSSet<id> *HEX_CHARS_SET __attribute__((swift_name("HEX_CHARS_SET")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexStringTransformExtensionsKt")))
@interface CoreHexStringTransformExtensionsKt : CoreBase
+ (CoreKotlinByteArray *)toBytes:(id)receiver __attribute__((swift_name("toBytes(_:)")));
+ (CoreHexString * _Nullable)toHexString___:(NSString *)receiver __attribute__((swift_name("toHexString(____:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSendChannel")))
@protocol CoreKotlinx_coroutines_coreSendChannel
@required
- (BOOL)closeCause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(CoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (BOOL)offerElement:(id _Nullable)element __attribute__((swift_name("offer(element:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(id _Nullable)element completionHandler:(void (^)(CoreKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) BOOL isFull __attribute__((swift_name("isFull"))) __attribute__((unavailable("Will be removed in next releases without replacement")));
@property (readonly) id<CoreKotlinx_coroutines_coreSelectClause2> onSend __attribute__((swift_name("onSend")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreBroadcastChannel")))
@protocol CoreKotlinx_coroutines_coreBroadcastChannel <CoreKotlinx_coroutines_coreSendChannel>
@required
- (void)cancelCause:(CoreKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<CoreKotlinx_coroutines_coreReceiveChannel>)openSubscription __attribute__((swift_name("openSubscription()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreReceiveChannel")))
@protocol CoreKotlinx_coroutines_coreReceiveChannel
@required
- (void)cancelCause:(CoreKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<CoreKotlinx_coroutines_coreChannelIterator>)iterator __attribute__((swift_name("iterator()")));
- (id _Nullable)poll __attribute__((swift_name("poll()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveWithCompletionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveOrClosedWithCompletionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrClosed(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveOrNullWithCompletionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(completionHandler:)"))) __attribute__((deprecated("Deprecated in favor of receiveOrClosed and receiveOrNull extension")));
@property (readonly) BOOL isClosedForReceive __attribute__((swift_name("isClosedForReceive")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) id<CoreKotlinx_coroutines_coreSelectClause1> onReceive __attribute__((swift_name("onReceive")));
@property (readonly) id<CoreKotlinx_coroutines_coreSelectClause1> onReceiveOrClosed __attribute__((swift_name("onReceiveOrClosed")));
@property (readonly) id<CoreKotlinx_coroutines_coreSelectClause1> onReceiveOrNull __attribute__((swift_name("onReceiveOrNull"))) __attribute__((deprecated("Deprecated in favor of onReceiveOrClosed and onReceiveOrNull extension")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol CoreKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<CoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface CoreKotlinRuntimeException : CoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CoreKotlinIllegalStateException : CoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface CoreKotlinCancellationException : CoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CoreKotlinUnit : CoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CoreKotlinArray<T> : CoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIntProgression")))
@interface CoreKotlinIntProgression : CoreBase <CoreKotlinIterable>
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (CoreKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end;

__attribute__((swift_name("KotlinClosedRange")))
@protocol CoreKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface CoreKotlinIntRange : CoreKotlinIntProgression <CoreKotlinClosedRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsValue:(CoreInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CoreInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) CoreInt *start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface CoreKotlinPair<__covariant A, __covariant B> : CoreBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (CoreKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CoreKotlinx_serialization_coreEncoder
@required
- (id<CoreKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CoreKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<CoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CoreKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<CoreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CoreKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<CoreKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) CoreKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CoreKotlinx_serialization_coreDecoder
@required
- (id<CoreKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CoreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface CoreKotlinByteIterator : CoreBase <CoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CoreByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CoreKotlinCoroutineContextElement> _Nullable)getKey:(id<CoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CoreKotlinCoroutineContext>)minusKeyKey:(id<CoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CoreKotlinCoroutineContext>)plusContext:(id<CoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CoreKotlinCoroutineContextElement <CoreKotlinCoroutineContext>
@required
@property (readonly) id<CoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface CoreKotlinAbstractCoroutineContextElement : CoreBase <CoreKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<CoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol CoreKotlinContinuationInterceptor <CoreKotlinCoroutineContextElement>
@required
- (id<CoreKotlinContinuation>)interceptContinuationContinuation:(id<CoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<CoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface CoreKotlinx_coroutines_coreCoroutineDispatcher : CoreKotlinAbstractCoroutineContextElement <CoreKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<CoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<CoreKotlinCoroutineContext>)context block:(id<CoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<CoreKotlinCoroutineContext>)context block:(id<CoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<CoreKotlinContinuation>)interceptContinuationContinuation:(id<CoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<CoreKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (CoreKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(CoreKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<CoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellationException")))
@interface CoreKotlinx_coroutines_coreCancellationException : CoreKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause2")))
@protocol CoreKotlinx_coroutines_coreSelectClause2
@required
- (void)registerSelectClause2Select:(id<CoreKotlinx_coroutines_coreSelectInstance>)select param:(id _Nullable)param block:(id<CoreKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause2(select:param:block:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChannelIterator")))
@protocol CoreKotlinx_coroutines_coreChannelIterator
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(CoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol CoreKotlinx_coroutines_coreSelectClause1
@required
- (void)registerSelectClause1Select:(id<CoreKotlinx_coroutines_coreSelectInstance>)select block:(id<CoreKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause1(select:block:)")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface CoreKotlinIntIterator : CoreBase <CoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CoreInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CoreKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CoreKotlinx_serialization_coreSerializersModule : CoreBase
- (void)dumpToCollector:(id<CoreKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<CoreKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<CoreKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<CoreKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CoreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<CoreKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CoreKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CoreKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CoreKotlinx_serialization_coreSerialKind : CoreBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CoreKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CoreKotlinNothing : CoreBase
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CoreKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol CoreKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<CoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol CoreKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol CoreKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<CoreKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(CoreKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(CoreKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(CoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<CoreKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol CoreKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol CoreKotlinSuspendFunction1 <CoreKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CoreKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CoreKotlinKClass>)kClass serializer:(id<CoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CoreKotlinKClass>)baseClass actualClass:(id<CoreKotlinKClass>)actualClass actualSerializer:(id<CoreKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CoreKotlinKClass>)baseClass defaultSerializerProvider:(id<CoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CoreKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CoreKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CoreKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CoreKotlinKClass <CoreKotlinKDeclarationContainer, CoreKotlinKAnnotatedElement, CoreKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol CoreKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface CoreKotlinx_coroutines_coreAtomicDesc : CoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(CoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property CoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface CoreKotlinx_coroutines_coreOpDescriptor : CoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(CoreKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CoreKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface CoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : CoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(CoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) CoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface CoreKotlinx_coroutines_coreAtomicOp<__contravariant T> : CoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) CoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface CoreKotlinx_coroutines_coreLockFreeLinkedListNode : CoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(CoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(CoreBoolean *(^)(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(CoreBoolean *(^)(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(CoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (CoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<CoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (CoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<CoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(CoreBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface CoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : CoreKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(CoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(CoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface CoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : CoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface CoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : CoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) CoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
