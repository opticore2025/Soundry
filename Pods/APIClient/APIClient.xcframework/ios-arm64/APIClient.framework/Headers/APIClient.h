#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class APICApiClient, APICApiClientCompanion, APICApple, APICApple1, APICApple1Companion, APICApple1RegisterFrom, APICApple1RegisterFromCompanion, APICAppleCompanion, APICAppleLoginFrom, APICAppleLoginFromCompanion, APICAppleUserInfo, APICAppleUserInfoCompanion, APICBase64ByteArray, APICBase64ByteArrayCompanion, APICFeedback, APICFeedbackCompanion, APICFeedbackImagesInner, APICFeedbackImagesInnerCompanion, APICGetMusicCategoryList200Response, APICGetMusicCategoryList200ResponseCompanion, APICGetMusicCategoryList200ResponseData, APICGetMusicCategoryList200ResponseDataCompanion, APICGetMusicCategoryListRequest, APICGetMusicCategoryListRequestCompanion, APICGetMusicDetail200Response, APICGetMusicDetail200ResponseCompanion, APICGetMusicDetailRequest, APICGetMusicDetailRequestCompanion, APICGetMusicHall200Response, APICGetMusicHall200ResponseCompanion, APICGetMusicHall200ResponseData, APICGetMusicHall200ResponseDataCompanion, APICGetMusicHall200ResponseDataHasMore, APICGetMusicHall200ResponseDataHasMoreCompanion, APICGetMusicHallRequest, APICGetMusicHallRequestCompanion, APICGetMusicList200Response, APICGetMusicList200ResponseCompanion, APICGetMusicListRequest, APICGetMusicListRequestCompanion, APICGetMusicMy200Response, APICGetMusicMy200ResponseCompanion, APICGetMusicMy200ResponseData, APICGetMusicMy200ResponseDataCompanion, APICGetMusicMy200ResponseDataMyWorks, APICGetMusicMy200ResponseDataMyWorksCompanion, APICGetMusicMy200ResponseDataUserInfo, APICGetMusicMy200ResponseDataUserInfoCompanion, APICGetMusicMyRequest, APICGetMusicMyRequestCompanion, APICGetMusicOptions200Response, APICGetMusicOptions200ResponseCompanion, APICGetMusicOptions200ResponseData, APICGetMusicOptions200ResponseDataCompanion, APICGetNoticeList200Response, APICGetNoticeList200ResponseCompanion, APICGetNoticeList200ResponseData, APICGetNoticeList200ResponseDataCompanion, APICGetNoticeRequest, APICGetNoticeRequestCompanion, APICGetReportTypes200Response, APICGetReportTypes200ResponseCompanion, APICGetReportTypes200ResponseOneOfData, APICGetReportTypes200ResponseOneOfDataCompanion, APICGetReportTypes200ResponseOneOfDataTypesInner, APICGetReportTypes200ResponseOneOfDataTypesInnerCompanion, APICGetVipList200Response, APICGetVipList200ResponseCompanion, APICGetVipList200ResponseData, APICGetVipList200ResponseDataCompanion, APICGetVipList200ResponseDataUserVipStatus, APICGetVipList200ResponseDataUserVipStatusCompanion, APICGetVipListRequest, APICGetVipListRequestCompanion, APICGoogle, APICGoogle1, APICGoogle1Channel, APICGoogle1ChannelCompanion, APICGoogle1Companion, APICGoogle1RegisterFrom, APICGoogle1RegisterFromCompanion, APICGoogleChannel, APICGoogleChannelCompanion, APICGoogleCompanion, APICGoogleLoginFrom, APICGoogleLoginFromCompanion, APICHTTPClientFactory, APICHttpResponse<T>, APICHttpResponseCompanion, APICKotlinAbstractCoroutineContextElement, APICKotlinAbstractCoroutineContextKey<B, E>, APICKotlinArray<T>, APICKotlinByteArray, APICKotlinByteIterator, APICKotlinCancellationException, APICKotlinEnum<E>, APICKotlinEnumCompanion, APICKotlinException, APICKotlinIllegalStateException, APICKotlinKTypeProjection, APICKotlinKTypeProjectionCompanion, APICKotlinKVariance, APICKotlinNothing, APICKotlinRuntimeException, APICKotlinThrowable, APICKotlinUnit, APICKotlinx_coroutines_coreCoroutineDispatcher, APICKotlinx_coroutines_coreCoroutineDispatcherKey, APICKotlinx_datetimeInstant, APICKotlinx_datetimeInstantCompanion, APICKotlinx_io_coreBuffer, APICKotlinx_serialization_coreSerialKind, APICKotlinx_serialization_coreSerializersModule, APICKotlinx_serialization_jsonClassDiscriminatorMode, APICKotlinx_serialization_jsonJson, APICKotlinx_serialization_jsonJsonConfiguration, APICKotlinx_serialization_jsonJsonDefault, APICKotlinx_serialization_jsonJsonElement, APICKotlinx_serialization_jsonJsonElementCompanion, APICKtor_client_coreHttpClient, APICKtor_client_coreHttpClientCall, APICKtor_client_coreHttpClientCallCompanion, APICKtor_client_coreHttpClientConfig<T>, APICKtor_client_coreHttpClientEngineConfig, APICKtor_client_coreHttpReceivePipeline, APICKtor_client_coreHttpReceivePipelinePhases, APICKtor_client_coreHttpRequestBuilder, APICKtor_client_coreHttpRequestBuilderCompanion, APICKtor_client_coreHttpRequestData, APICKtor_client_coreHttpRequestPipeline, APICKtor_client_coreHttpRequestPipelinePhases, APICKtor_client_coreHttpResponse, APICKtor_client_coreHttpResponseContainer, APICKtor_client_coreHttpResponseData, APICKtor_client_coreHttpResponsePipeline, APICKtor_client_coreHttpResponsePipelinePhases, APICKtor_client_coreHttpSendPipeline, APICKtor_client_coreHttpSendPipelinePhases, APICKtor_client_coreProxyConfig, APICKtor_eventsEventDefinition<T>, APICKtor_eventsEvents, APICKtor_httpContentDisposition, APICKtor_httpContentDispositionCompanion, APICKtor_httpContentType, APICKtor_httpContentTypeCompanion, APICKtor_httpHeaderValueParam, APICKtor_httpHeaderValueWithParameters, APICKtor_httpHeaderValueWithParametersCompanion, APICKtor_httpHeadersBuilder, APICKtor_httpHttpMethod, APICKtor_httpHttpMethodCompanion, APICKtor_httpHttpProtocolVersion, APICKtor_httpHttpProtocolVersionCompanion, APICKtor_httpHttpStatusCode, APICKtor_httpHttpStatusCodeCompanion, APICKtor_httpOutgoingContent, APICKtor_httpPartData, APICKtor_httpURLBuilder, APICKtor_httpURLBuilderCompanion, APICKtor_httpURLProtocol, APICKtor_httpURLProtocolCompanion, APICKtor_httpUrl, APICKtor_httpUrlCompanion, APICKtor_utilsAttributeKey<T>, APICKtor_utilsGMTDate, APICKtor_utilsGMTDateCompanion, APICKtor_utilsMonth, APICKtor_utilsMonthCompanion, APICKtor_utilsPipeline<TSubject, TContext>, APICKtor_utilsPipelinePhase, APICKtor_utilsStringValuesBuilderImpl, APICKtor_utilsTypeInfo, APICKtor_utilsWeekDay, APICKtor_utilsWeekDayCompanion, APICMusicApiTypeGetMusicCategoryList, APICMusicApiTypeGetMusicCategoryListCompanion, APICMusicApiTypeGetMusicCategoryListSerializer, APICMusicDetail, APICMusicDetailCompanion, APICMusicHallItem, APICMusicHallItemCompanion, APICMusicHallItemIsLike, APICMusicHallItemIsLikeCompanion, APICMusicListItem, APICMusicListItemCompanion, APICMusicOption, APICMusicOptionCompanion, APICNetworkError, APICNetworkErrorType, APICNoticeListItem, APICNoticeListItemChatType, APICNoticeListItemChatTypeCompanion, APICNoticeListItemCompanion, APICNoticeListItemMessageType, APICNoticeListItemMessageTypeCompanion, APICNoticeListItemSubMessageType, APICNoticeListItemSubMessageTypeCompanion, APICOctetByteArray, APICOctetByteArrayCompanion, APICPartConfig<T>, APICPostAppClose200Response, APICPostAppClose200ResponseCompanion, APICPostAppInit200Response, APICPostAppInit200ResponseCompanion, APICPostAppInit200ResponseData, APICPostAppInit200ResponseDataCompanion, APICPostAppInit200ResponseDataUserInfo, APICPostAppInit200ResponseDataUserInfoCompanion, APICPostAppOpen200Response, APICPostAppOpen200ResponseCompanion, APICPostAppleCancel200Response, APICPostAppleCancel200ResponseCompanion, APICPostAppleCancelRequest, APICPostAppleCancelRequestCompanion, APICPostAppleCreate200Response, APICPostAppleCreate200ResponseCompanion, APICPostAppleCreate200ResponseData, APICPostAppleCreate200ResponseDataCompanion, APICPostAppleCreate200ResponseDataPayItem, APICPostAppleCreate200ResponseDataPayItemCompanion, APICPostAppleCreateRequest, APICPostAppleCreateRequestCompanion, APICPostAppleCreateRequestProductType, APICPostAppleCreateRequestProductTypeCompanion, APICPostAppleVerify200Response, APICPostAppleVerify200ResponseCompanion, APICPostAppleVerify200ResponseData, APICPostAppleVerify200ResponseDataAccountInfo, APICPostAppleVerify200ResponseDataAccountInfoCompanion, APICPostAppleVerify200ResponseDataCompanion, APICPostAppleVerify200ResponseDataUserInfo, APICPostAppleVerify200ResponseDataUserInfoCompanion, APICPostAppleVerifyRequest, APICPostAppleVerifyRequestCompanion, APICPostAppleVerifyRequestProductType, APICPostAppleVerifyRequestProductTypeCompanion, APICPostEmailResetPasswordRequest, APICPostEmailResetPasswordRequestCompanion, APICPostEmailSendCode200Response, APICPostEmailSendCode200ResponseCompanion, APICPostEmailSendCodeRequest, APICPostEmailSendCodeRequestCompanion, APICPostEmailSendCodeRequestType, APICPostEmailSendCodeRequestTypeCompanion, APICPostEmailVerifyCode200Response, APICPostEmailVerifyCode200ResponseCompanion, APICPostEmailVerifyCodeRequest, APICPostEmailVerifyCodeRequestCompanion, APICPostEmailVerifyCodeRequestFromType, APICPostEmailVerifyCodeRequestFromTypeCompanion, APICPostFeedbackSubmit200Response, APICPostFeedbackSubmit200ResponseCompanion, APICPostFeedbackSubmitRequest, APICPostFeedbackSubmitRequestCompanion, APICPostFeedbackSubmitRequestPhotosInner, APICPostFeedbackSubmitRequestPhotosInnerCompanion, APICPostGoogleVerify200Response, APICPostGoogleVerify200ResponseCompanion, APICPostGoogleVerify200ResponseOneOf, APICPostGoogleVerify200ResponseOneOf1, APICPostGoogleVerify200ResponseOneOf1Companion, APICPostGoogleVerify200ResponseOneOfCompanion, APICPostGoogleVerify200ResponseOneOfData, APICPostGoogleVerify200ResponseOneOfDataCompanion, APICPostGoogleVerifyRequest, APICPostGoogleVerifyRequestChannel, APICPostGoogleVerifyRequestChannelCompanion, APICPostGoogleVerifyRequestCompanion, APICPostLoginCompleteProfile200Response, APICPostLoginCompleteProfile200ResponseCompanion, APICPostLoginCompleteProfile200ResponseData, APICPostLoginCompleteProfile200ResponseDataCompanion, APICPostLoginCompleteProfileRequest, APICPostLoginCompleteProfileRequestCompanion, APICPostLoginDeleteAccount200Response, APICPostLoginDeleteAccount200ResponseCompanion, APICPostLoginHandle200Response, APICPostLoginHandle200ResponseCompanion, APICPostLoginHandle200ResponseOneOfData, APICPostLoginHandle200ResponseOneOfDataAppleInfo, APICPostLoginHandle200ResponseOneOfDataAppleInfoCompanion, APICPostLoginHandle200ResponseOneOfDataCompanion, APICPostLoginHandle200ResponseOneOfDataGoogleInfo, APICPostLoginHandle200ResponseOneOfDataGoogleInfoCompanion, APICPostLoginHandle200ResponseOneOfDataUserInfo, APICPostLoginHandle200ResponseOneOfDataUserInfoCompanion, APICPostLoginHandleRequest, APICPostLoginHandleRequestCompanion, APICPostLoginHandleRequestLoginFrom, APICPostLoginHandleRequestLoginFromCompanion, APICPostLoginRegister200Response, APICPostLoginRegister200ResponseCompanion, APICPostLoginRegister200ResponseOneOfData, APICPostLoginRegister200ResponseOneOfDataAppleInfo, APICPostLoginRegister200ResponseOneOfDataAppleInfoCompanion, APICPostLoginRegister200ResponseOneOfDataCompanion, APICPostLoginRegister200ResponseOneOfDataGoogleInfo, APICPostLoginRegister200ResponseOneOfDataGoogleInfoCompanion, APICPostLoginRegister200ResponseOneOfDataUserInfo, APICPostLoginRegister200ResponseOneOfDataUserInfoCompanion, APICPostLoginRegisterRequest, APICPostLoginRegisterRequestChannel, APICPostLoginRegisterRequestChannelCompanion, APICPostLoginRegisterRequestCompanion, APICPostLoginRegisterRequestOneOf, APICPostLoginRegisterRequestOneOfCompanion, APICPostLoginRegisterRequestOneOfRegisterFrom, APICPostLoginRegisterRequestOneOfRegisterFromCompanion, APICPostLoginRegisterRequestRegisterFrom, APICPostLoginRegisterRequestRegisterFromCompanion, APICPostMusicCreate200Response, APICPostMusicCreate200ResponseCompanion, APICPostMusicCreate200ResponseData, APICPostMusicCreate200ResponseDataCompanion, APICPostMusicCreate200ResponseDataMockData, APICPostMusicCreate200ResponseDataMockDataCompanion, APICPostMusicCreateRequest, APICPostMusicCreateRequestCompanion, APICPostMusicDelete200Response, APICPostMusicDelete200ResponseCompanion, APICPostMusicDelete200ResponseOneOfData, APICPostMusicDelete200ResponseOneOfDataCompanion, APICPostMusicDownload200Response, APICPostMusicDownload200ResponseCompanion, APICPostMusicDownload200ResponseData, APICPostMusicDownload200ResponseDataCompanion, APICPostMusicLike200Response, APICPostMusicLike200ResponseCompanion, APICPostMusicLike200ResponseData, APICPostMusicLike200ResponseDataCompanion, APICPostMusicStatus200Response, APICPostMusicStatus200ResponseCompanion, APICPostMusicStatus200ResponseOneOfData, APICPostMusicStatus200ResponseOneOfDataCompanion, APICPostMusicStatus200ResponseOneOfDataStatus, APICPostMusicStatus200ResponseOneOfDataStatusCompanion, APICPostMusicStatusRequest, APICPostMusicStatusRequestCompanion, APICPostMusicUnlike200Response, APICPostMusicUnlike200ResponseCompanion, APICPostMusicUnlike200ResponseData, APICPostMusicUnlike200ResponseDataCompanion, APICPostReportSubmit200Response, APICPostReportSubmit200ResponseCompanion, APICPostReportSubmit200ResponseData, APICPostReportSubmit200ResponseDataCompanion, APICPostReportSubmitRequest, APICPostReportSubmitRequestCompanion, APICPostReportSubmitRequestType, APICPostReportSubmitRequestTypeCompanion, APICPostUploadCreateMedia200Response, APICPostUploadCreateMedia200ResponseCompanion, APICPostUploadCreateMedia200ResponseData, APICPostUploadCreateMedia200ResponseDataCompanion, APICPostUploadCreateMediaRequest, APICPostUploadCreateMediaRequestCompanion, APICPostUploadCreateMediaRequestMediaType, APICPostUploadCreateMediaRequestMediaTypeCompanion, APICPostUploadPresigned200Response, APICPostUploadPresigned200ResponseCompanion, APICPostUploadPresignedList200Response, APICPostUploadPresignedList200ResponseCompanion, APICPostUploadPresignedList200ResponseUploadPresignedListData, APICPostUploadPresignedList200ResponseUploadPresignedListDataCompanion, APICPostUploadPresignedRequest, APICPostUploadPresignedRequestCompanion, APICPostUploadPresignedRequestFlag, APICPostUploadPresignedRequestFlagCompanion, APICPostUploadPresignedRequestOneOf, APICPostUploadPresignedRequestOneOf1ListInner, APICPostUploadPresignedRequestOneOf1ListInnerCompanion, APICPostUploadPresignedRequestOneOfCompanion, APICPostUploadPresignedRequestOneOfFlag, APICPostUploadPresignedRequestOneOfFlagCompanion, APICPostUploadPresignedRequestOneOfType, APICPostUploadPresignedRequestOneOfTypeCompanion, APICPostUploadPresignedRequestType, APICPostUploadPresignedRequestTypeCompanion, APICPostUploadPresignedRequestTypeSerializer, APICPostUploadSuccess200Response, APICPostUploadSuccess200ResponseCompanion, APICPostUploadSuccessRequest, APICPostUploadSuccessRequestCompanion, APICPostVipSubmit200Response, APICPostVipSubmit200ResponseCompanion, APICPostVipSubmit200ResponseOneOfData, APICPostVipSubmit200ResponseOneOfDataCompanion, APICPostVipSubmit200ResponseOneOfDataUserInfo, APICPostVipSubmit200ResponseOneOfDataUserInfoCompanion, APICPostVipSubmit200ResponseOneOfDataUserInfoIsVip, APICPostVipSubmit200ResponseOneOfDataUserInfoIsVipCompanion, APICPostVipSubmitRequest, APICPostVipSubmitRequestCompanion, APICRequestConfig<T>, APICRequestMethod, APICUploadPresignedData, APICUploadPresignedDataCompanion, APICUploadPresignedDataCoverPresignedPost, APICUploadPresignedDataCoverPresignedPostCompanion, APICUploadPresignedDataCoverPresignedPostEnctype, APICUploadPresignedDataCoverPresignedPostEnctypeCompanion, APICUploadPresignedDataCoverPresignedPostMethod, APICUploadPresignedDataCoverPresignedPostMethodCompanion, APICUploadPresignedDataDir, APICUploadPresignedDataDirCompanion, APICUploadPresignedDataIsUpload, APICUploadPresignedDataIsUploadCompanion, APICUploadPresignedDataPresignedPost, APICUploadPresignedDataPresignedPostCompanion, APICUploadPresignedDataPresignedPostEnctype, APICUploadPresignedDataPresignedPostEnctypeCompanion, APICUploadPresignedDataPresignedPostFields, APICUploadPresignedDataPresignedPostFieldsCompanion, APICUploadPresignedDataPresignedPostMethod, APICUploadPresignedDataPresignedPostMethodCompanion, APICUserInfo, APICUserInfoCompanion, APICVIPApiChannelGetVipList, APICVIPApiChannelGetVipListCompanion, APICVipPackage, APICVipPackageCoinsReward, APICVipPackageCoinsRewardCompanion, APICVipPackageCompanion, APICVipPackagePeriod, APICVipPackagePeriodCompanion;

@protocol APICAuthentication, APICBodyProvider, APICKotlinAnnotation, APICKotlinAppendable, APICKotlinAutoCloseable, APICKotlinComparable, APICKotlinContinuation, APICKotlinContinuationInterceptor, APICKotlinCoroutineContext, APICKotlinCoroutineContextElement, APICKotlinCoroutineContextKey, APICKotlinFunction, APICKotlinIterator, APICKotlinKAnnotatedElement, APICKotlinKClass, APICKotlinKClassifier, APICKotlinKDeclarationContainer, APICKotlinKType, APICKotlinMapEntry, APICKotlinSequence, APICKotlinSuspendFunction2, APICKotlinx_coroutines_coreChildHandle, APICKotlinx_coroutines_coreChildJob, APICKotlinx_coroutines_coreCoroutineScope, APICKotlinx_coroutines_coreDisposableHandle, APICKotlinx_coroutines_coreJob, APICKotlinx_coroutines_coreParentJob, APICKotlinx_coroutines_coreRunnable, APICKotlinx_coroutines_coreSelectClause, APICKotlinx_coroutines_coreSelectClause0, APICKotlinx_coroutines_coreSelectInstance, APICKotlinx_datetimeDateTimeFormat, APICKotlinx_io_coreRawSink, APICKotlinx_io_coreRawSource, APICKotlinx_io_coreSink, APICKotlinx_io_coreSource, APICKotlinx_serialization_coreCompositeDecoder, APICKotlinx_serialization_coreCompositeEncoder, APICKotlinx_serialization_coreDecoder, APICKotlinx_serialization_coreDeserializationStrategy, APICKotlinx_serialization_coreEncoder, APICKotlinx_serialization_coreKSerializer, APICKotlinx_serialization_coreSerialDescriptor, APICKotlinx_serialization_coreSerialFormat, APICKotlinx_serialization_coreSerializationStrategy, APICKotlinx_serialization_coreSerializersModuleCollector, APICKotlinx_serialization_coreStringFormat, APICKotlinx_serialization_jsonJsonNamingStrategy, APICKtor_client_coreClientPlugin, APICKtor_client_coreHttpClientEngine, APICKtor_client_coreHttpClientEngineCapability, APICKtor_client_coreHttpClientPlugin, APICKtor_client_coreHttpRequest, APICKtor_httpHeaders, APICKtor_httpHttpMessage, APICKtor_httpHttpMessageBuilder, APICKtor_httpParameters, APICKtor_httpParametersBuilder, APICKtor_ioByteReadChannel, APICKtor_ioCloseable, APICKtor_ioJvmSerializable, APICKtor_utilsAttributes, APICKtor_utilsStringValues, APICKtor_utilsStringValuesBuilder;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface APICBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface APICBase (APICBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface APICMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface APICMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorAPICKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface APICNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface APICByte : APICNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface APICUByte : APICNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface APICShort : APICNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface APICUShort : APICNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface APICInt : APICNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface APICUInt : APICNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface APICLong : APICNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface APICULong : APICNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface APICFloat : APICNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface APICDouble : APICNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface APICBoolean : APICNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HTTPClientFactory")))
@interface APICHTTPClientFactory : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hTTPClientFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICHTTPClientFactory *shared __attribute__((swift_name("shared")));
- (APICKtor_client_coreHttpClient *)getClient __attribute__((swift_name("getClient()")));
- (void)initializeGetAccessToken:(NSString * _Nullable (^)(void))getAccessToken getUserAgent:(NSString *(^)(void))getUserAgent handleUnauthorized:(void (^)(void))handleUnauthorized handleConnectionError:(void (^)(void))handleConnectionError handleTimeoutError:(void (^)(void))handleTimeoutError handleDNSError:(void (^)(void))handleDNSError handleSSLError:(void (^)(void))handleSSLError handleUnknownError:(void (^)(NSString *))handleUnknownError isCarryUserAgent:(BOOL)isCarryUserAgent isDebug:(BOOL)isDebug __attribute__((swift_name("initialize(getAccessToken:getUserAgent:handleUnauthorized:handleConnectionError:handleTimeoutError:handleDNSError:handleSSLError:handleUnknownError:isCarryUserAgent:isDebug:)")));
@property BOOL isDebug __attribute__((swift_name("isDebug")));
@property BOOL isInitialized __attribute__((swift_name("isInitialized")));
@end

__attribute__((swift_name("ApiClient")))
@interface APICApiClient : APICBase
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(APICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(APICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICApiClientCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)jsonRequestRequestConfig:(APICRequestConfig<id> *)requestConfig body:(id _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(APICKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("jsonRequest(requestConfig:body:authNames:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)multipartFormRequestRequestConfig:(APICRequestConfig<id> *)requestConfig body:(NSArray<APICKtor_httpPartData *> * _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(APICKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("multipartFormRequest(requestConfig:body:authNames:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)requestRequestConfig:(APICRequestConfig<id> *)requestConfig body:(id _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(APICKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("request(requestConfig:body:authNames:completionHandler:)")));
- (void)setAccessTokenAccessToken:(NSString *)accessToken __attribute__((swift_name("setAccessToken(accessToken:)")));
- (void)setApiKeyApiKey:(NSString *)apiKey paramName:(NSString * _Nullable)paramName __attribute__((swift_name("setApiKey(apiKey:paramName:)")));
- (void)setApiKeyPrefixApiKeyPrefix:(NSString *)apiKeyPrefix paramName:(NSString * _Nullable)paramName __attribute__((swift_name("setApiKeyPrefix(apiKeyPrefix:paramName:)")));
- (void)setBearerTokenBearerToken:(NSString *)bearerToken __attribute__((swift_name("setBearerToken(bearerToken:)")));
- (void)setPasswordPassword:(NSString *)password __attribute__((swift_name("setPassword(password:)")));
- (void)setUsernameUsername:(NSString *)username __attribute__((swift_name("setUsername(username:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)urlEncodedFormRequestRequestConfig:(APICRequestConfig<id> *)requestConfig body:(id<APICKtor_httpParameters> _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(APICKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("urlEncodedFormRequest(requestConfig:body:authNames:completionHandler:)")));
@end

__attribute__((swift_name("AppApi")))
@interface APICAppApi : APICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(APICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(APICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(APICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppCloseWithCompletionHandler:(void (^)(APICHttpResponse<APICPostAppClose200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppClose(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppInitWithCompletionHandler:(void (^)(APICHttpResponse<APICPostAppInit200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppInit(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppOpenWithCompletionHandler:(void (^)(APICHttpResponse<APICPostAppOpen200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppOpen(completionHandler:)")));
@end

__attribute__((swift_name("ApplePayApi")))
@interface APICApplePayApi : APICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(APICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(APICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(APICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppleCancelPostAppleCancelRequest:(APICPostAppleCancelRequest *)postAppleCancelRequest completionHandler:(void (^)(APICHttpResponse<APICPostAppleCancel200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppleCancel(postAppleCancelRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppleCreatePostAppleCreateRequest:(APICPostAppleCreateRequest *)postAppleCreateRequest completionHandler:(void (^)(APICHttpResponse<APICPostAppleCreate200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppleCreate(postAppleCreateRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppleVerifyPostAppleVerifyRequest:(APICPostAppleVerifyRequest *)postAppleVerifyRequest completionHandler:(void (^)(APICHttpResponse<APICPostAppleVerify200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppleVerify(postAppleVerifyRequest:completionHandler:)")));
@end

__attribute__((swift_name("AuthenticationApi")))
@interface APICAuthenticationApi : APICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(APICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(APICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(APICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postDeleteAccountWithCompletionHandler:(void (^)(APICHttpResponse<APICPostLoginDeleteAccount200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postDeleteAccount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEmailResetPasswordPostEmailResetPasswordRequest:(APICPostEmailResetPasswordRequest *)postEmailResetPasswordRequest completionHandler:(void (^)(APICHttpResponse<APICPostFeedbackSubmit200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postEmailResetPassword(postEmailResetPasswordRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEmailSendCodePostEmailSendCodeRequest:(APICPostEmailSendCodeRequest *)postEmailSendCodeRequest completionHandler:(void (^)(APICHttpResponse<APICPostEmailSendCode200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postEmailSendCode(postEmailSendCodeRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEmailVerifyCodePostEmailVerifyCodeRequest:(APICPostEmailVerifyCodeRequest *)postEmailVerifyCodeRequest completionHandler:(void (^)(APICHttpResponse<APICPostEmailVerifyCode200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postEmailVerifyCode(postEmailVerifyCodeRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postGoogleVerifyPostGoogleVerifyRequest:(APICPostGoogleVerifyRequest *)postGoogleVerifyRequest completionHandler:(void (^)(APICHttpResponse<APICPostGoogleVerify200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postGoogleVerify(postGoogleVerifyRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postLoginCompleteProfilePostLoginCompleteProfileRequest:(APICPostLoginCompleteProfileRequest *)postLoginCompleteProfileRequest completionHandler:(void (^)(APICHttpResponse<APICPostLoginCompleteProfile200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postLoginCompleteProfile(postLoginCompleteProfileRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postLoginHandlePostLoginHandleRequest:(APICPostLoginHandleRequest *)postLoginHandleRequest completionHandler:(void (^)(APICHttpResponse<APICPostLoginHandle200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postLoginHandle(postLoginHandleRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postLoginRegisterPostLoginRegisterRequest:(APICPostLoginRegisterRequest *)postLoginRegisterRequest completionHandler:(void (^)(APICHttpResponse<APICPostLoginRegister200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postLoginRegister(postLoginRegisterRequest:completionHandler:)")));
@end

__attribute__((swift_name("FeedbackApi")))
@interface APICFeedbackApi : APICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(APICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(APICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(APICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postFeedbackSubmitPostFeedbackSubmitRequest:(APICPostFeedbackSubmitRequest *)postFeedbackSubmitRequest completionHandler:(void (^)(APICHttpResponse<APICPostFeedbackSubmit200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postFeedbackSubmit(postFeedbackSubmitRequest:completionHandler:)")));
@end

__attribute__((swift_name("MusicApi")))
@interface APICMusicApi : APICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(APICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(APICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(APICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicCategoryListType:(APICMusicApiTypeGetMusicCategoryList *)type page:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize completionHandler:(void (^)(APICHttpResponse<APICGetMusicCategoryList200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicCategoryList(type:page:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicDetailId:(int32_t)id targetUid:(APICInt * _Nullable)targetUid completionHandler:(void (^)(APICHttpResponse<APICGetMusicDetail200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicDetail(id:targetUid:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicHallPage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize searchText:(NSString * _Nullable)searchText completionHandler:(void (^)(APICHttpResponse<APICGetMusicHall200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicHall(page:pageSize:searchText:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicListPage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize completionHandler:(void (^)(APICHttpResponse<APICGetMusicList200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicList(page:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicMyPage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize completionHandler:(void (^)(APICHttpResponse<APICGetMusicMy200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicMy(page:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicOptionsWithCompletionHandler:(void (^)(APICHttpResponse<APICGetMusicOptions200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicOptions(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNoticePage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize completionHandler:(void (^)(APICHttpResponse<APICGetNoticeList200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNotice(page:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicCreatePostMusicCreateRequest:(APICPostMusicCreateRequest *)postMusicCreateRequest completionHandler:(void (^)(APICHttpResponse<APICPostMusicCreate200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicCreate(postMusicCreateRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicDeletePostMusicStatusRequest:(APICPostMusicStatusRequest *)postMusicStatusRequest completionHandler:(void (^)(APICHttpResponse<APICPostMusicDelete200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicDelete(postMusicStatusRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicDownloadPostMusicStatusRequest:(APICPostMusicStatusRequest *)postMusicStatusRequest completionHandler:(void (^)(APICHttpResponse<APICPostMusicDownload200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicDownload(postMusicStatusRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicLikePostMusicStatusRequest:(APICPostMusicStatusRequest *)postMusicStatusRequest completionHandler:(void (^)(APICHttpResponse<APICPostMusicLike200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicLike(postMusicStatusRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicStatusPostMusicStatusRequest:(APICPostMusicStatusRequest *)postMusicStatusRequest completionHandler:(void (^)(APICHttpResponse<APICPostMusicStatus200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicStatus(postMusicStatusRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicUnlikePostMusicStatusRequest:(APICPostMusicStatusRequest *)postMusicStatusRequest completionHandler:(void (^)(APICHttpResponse<APICPostMusicUnlike200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicUnlike(postMusicStatusRequest:completionHandler:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol APICKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface APICKotlinEnum<E> : APICBase <APICKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/sakurasou/ios/bxh/sonar/apiclient/client/apis/MusicApi.TypeGetMusicCategoryList.Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicApi.TypeGetMusicCategoryList")))
@interface APICMusicApiTypeGetMusicCategoryList : APICKotlinEnum<APICMusicApiTypeGetMusicCategoryList *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICMusicApiTypeGetMusicCategoryListCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICMusicApiTypeGetMusicCategoryList *mywork __attribute__((swift_name("mywork")));
@property (class, readonly) APICMusicApiTypeGetMusicCategoryList *mylike __attribute__((swift_name("mylike")));
@property (class, readonly) APICMusicApiTypeGetMusicCategoryList *draft __attribute__((swift_name("draft")));
@property (class, readonly) APICMusicApiTypeGetMusicCategoryList *downloaded __attribute__((swift_name("downloaded")));
+ (APICKotlinArray<APICMusicApiTypeGetMusicCategoryList *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICMusicApiTypeGetMusicCategoryList *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicApi.TypeGetMusicCategoryListCompanion")))
@interface APICMusicApiTypeGetMusicCategoryListCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICMusicApiTypeGetMusicCategoryListCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol APICKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<APICKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<APICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol APICKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<APICKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<APICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol APICKotlinx_serialization_coreKSerializer <APICKotlinx_serialization_coreSerializationStrategy, APICKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicApi.TypeGetMusicCategoryListSerializer")))
@interface APICMusicApiTypeGetMusicCategoryListSerializer : APICBase <APICKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICMusicApiTypeGetMusicCategoryListSerializer *shared __attribute__((swift_name("shared")));
- (APICMusicApiTypeGetMusicCategoryList *)deserializeDecoder:(id<APICKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<APICKotlinx_serialization_coreEncoder>)encoder value:(APICMusicApiTypeGetMusicCategoryList *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<APICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("ReportApi")))
@interface APICReportApi : APICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(APICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(APICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(APICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getReportTypesWithCompletionHandler:(void (^)(APICHttpResponse<APICGetReportTypes200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getReportTypes(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postReportSubmitPostReportSubmitRequest:(APICPostReportSubmitRequest *)postReportSubmitRequest completionHandler:(void (^)(APICHttpResponse<APICPostReportSubmit200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postReportSubmit(postReportSubmitRequest:completionHandler:)")));
@end

__attribute__((swift_name("UploadApi")))
@interface APICUploadApi : APICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(APICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(APICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(APICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadCreateMediaPostUploadCreateMediaRequest:(APICPostUploadCreateMediaRequest *)postUploadCreateMediaRequest completionHandler:(void (^)(APICHttpResponse<APICPostUploadCreateMedia200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadCreateMedia(postUploadCreateMediaRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadPresignedPostUploadPresignedRequest:(APICPostUploadPresignedRequest *)postUploadPresignedRequest completionHandler:(void (^)(APICHttpResponse<APICPostUploadPresigned200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadPresigned(postUploadPresignedRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadPresignedListPostUploadPresignedRequest:(APICPostUploadPresignedRequest *)postUploadPresignedRequest completionHandler:(void (^)(APICHttpResponse<APICPostUploadPresignedList200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadPresignedList(postUploadPresignedRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadSuccessPostUploadSuccessRequest:(APICPostUploadSuccessRequest *)postUploadSuccessRequest completionHandler:(void (^)(APICHttpResponse<APICPostUploadSuccess200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadSuccess(postUploadSuccessRequest:completionHandler:)")));
@end

__attribute__((swift_name("VIPApi")))
@interface APICVIPApi : APICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(APICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(APICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<APICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(APICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(APICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVipListChannel:(APICVIPApiChannelGetVipList * _Nullable)channel completionHandler:(void (^)(APICHttpResponse<APICGetVipList200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVipList(channel:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postVipSubmitPostVipSubmitRequest:(APICPostVipSubmitRequest *)postVipSubmitRequest completionHandler:(void (^)(APICHttpResponse<APICPostVipSubmit200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postVipSubmit(postVipSubmitRequest:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VIPApi.ChannelGetVipList")))
@interface APICVIPApiChannelGetVipList : APICKotlinEnum<APICVIPApiChannelGetVipList *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICVIPApiChannelGetVipListCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICVIPApiChannelGetVipList *comperiodaimusicperiodhomeperioda __attribute__((swift_name("comperiodaimusicperiodhomeperioda")));
@property (class, readonly) APICVIPApiChannelGetVipList *comperiodaimusicperiodhome __attribute__((swift_name("comperiodaimusicperiodhome")));
+ (APICKotlinArray<APICVIPApiChannelGetVipList *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICVIPApiChannelGetVipList *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VIPApi.ChannelGetVipListCompanion")))
@interface APICVIPApiChannelGetVipListCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICVIPApiChannelGetVipListCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("Authentication")))
@protocol APICAuthentication
@required
- (void)applyQuery:(APICMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(APICMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiKeyAuth")))
@interface APICApiKeyAuth : APICBase <APICAuthentication>
- (instancetype)initWithLocation:(NSString *)location paramName:(NSString *)paramName __attribute__((swift_name("init(location:paramName:)"))) __attribute__((objc_designated_initializer));
- (void)applyQuery:(APICMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(APICMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@property NSString * _Nullable apiKey __attribute__((swift_name("apiKey")));
@property NSString * _Nullable apiKeyPrefix __attribute__((swift_name("apiKeyPrefix")));
@property (readonly) NSString *paramName __attribute__((swift_name("paramName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpBasicAuth")))
@interface APICHttpBasicAuth : APICBase <APICAuthentication>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)applyQuery:(APICMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(APICMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpBearerAuth")))
@interface APICHttpBearerAuth : APICBase <APICAuthentication>
- (instancetype)initWithScheme:(NSString * _Nullable)scheme __attribute__((swift_name("init(scheme:)"))) __attribute__((objc_designated_initializer));
- (void)applyQuery:(APICMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(APICMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@property NSString * _Nullable bearerToken __attribute__((swift_name("bearerToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OAuth")))
@interface APICOAuth : APICBase <APICAuthentication>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)applyQuery:(APICMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(APICMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiClient.Companion")))
@interface APICApiClientCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICApiClientCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BASE_URL __attribute__((swift_name("BASE_URL")));
@property (readonly) APICKotlinx_serialization_jsonJson *JSON_DEFAULT __attribute__((swift_name("JSON_DEFAULT")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSArray<NSString *> *UNSAFE_HEADERS __attribute__((swift_name("UNSAFE_HEADERS")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/sakurasou/ios/bxh/sonar/apiclient/client/infrastructure/Base64ByteArray.Companion))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64ByteArray")))
@interface APICBase64ByteArray : APICBase
- (instancetype)initWithValue:(APICKotlinByteArray *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICBase64ByteArrayCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64ByteArray.Companion")))
@interface APICBase64ByteArrayCompanion : APICBase <APICKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICBase64ByteArrayCompanion *shared __attribute__((swift_name("shared")));
- (APICBase64ByteArray *)deserializeDecoder:(id<APICKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<APICKotlinx_serialization_coreEncoder>)encoder value:(APICBase64ByteArray *)value __attribute__((swift_name("serialize(encoder:value:)")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) id<APICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("BodyProvider")))
@protocol APICBodyProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyResponse:(APICKtor_client_coreHttpResponse *)response completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(response:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyResponse:(APICKtor_client_coreHttpResponse *)response type:(APICKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(response:type:completionHandler:)")));
@end

__attribute__((swift_name("HttpResponse")))
@interface APICHttpResponse<T> : APICBase
- (instancetype)initWithResponse:(APICKtor_client_coreHttpResponse *)response provider:(id<APICBodyProvider>)provider __attribute__((swift_name("init(response:provider:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICHttpResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyWithCompletionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyType:(APICKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(type:completionHandler:)")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *headers __attribute__((swift_name("headers")));
@property (readonly) id<APICBodyProvider> provider __attribute__((swift_name("provider")));
@property (readonly) APICKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpResponseCompanion")))
@interface APICHttpResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICHttpResponseCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MappedBodyProvider")))
@interface APICMappedBodyProvider<S, T> : APICBase <APICBodyProvider>
- (instancetype)initWithProvider:(id<APICBodyProvider>)provider block:(T (^)(S))block __attribute__((swift_name("init(provider:block:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyResponse:(APICKtor_client_coreHttpResponse *)response completionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(response:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyResponse:(APICKtor_client_coreHttpResponse *)response type:(APICKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(response:type:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/sakurasou/ios/bxh/sonar/apiclient/client/infrastructure/OctetByteArray.Companion))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OctetByteArray")))
@interface APICOctetByteArray : APICBase
- (instancetype)initWithValue:(APICKotlinByteArray *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICOctetByteArrayCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OctetByteArray.Companion")))
@interface APICOctetByteArrayCompanion : APICBase <APICKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICOctetByteArrayCompanion *shared __attribute__((swift_name("shared")));
- (APICOctetByteArray *)deserializeDecoder:(id<APICKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<APICKotlinx_serialization_coreEncoder>)encoder value:(APICOctetByteArray *)value __attribute__((swift_name("serialize(encoder:value:)")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) id<APICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartConfig")))
@interface APICPartConfig<T> : APICBase
- (instancetype)initWithHeaders:(APICMutableDictionary<NSString *, NSString *> *)headers body:(T _Nullable)body __attribute__((swift_name("init(headers:body:)"))) __attribute__((objc_designated_initializer));
- (APICPartConfig<T> *)doCopyHeaders:(APICMutableDictionary<NSString *, NSString *> *)headers body:(T _Nullable)body __attribute__((swift_name("doCopy(headers:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable body __attribute__((swift_name("body")));
@property (readonly) APICMutableDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestConfig")))
@interface APICRequestConfig<T> : APICBase
- (instancetype)initWithMethod:(APICRequestMethod *)method path:(NSString *)path headers:(APICMutableDictionary<NSString *, NSString *> *)headers params:(APICMutableDictionary<NSString *, id> *)params query:(APICMutableDictionary<NSString *, NSArray<NSString *> *> *)query requiresAuthentication:(BOOL)requiresAuthentication body:(T _Nullable)body __attribute__((swift_name("init(method:path:headers:params:query:requiresAuthentication:body:)"))) __attribute__((objc_designated_initializer));
- (APICRequestConfig<T> *)doCopyMethod:(APICRequestMethod *)method path:(NSString *)path headers:(APICMutableDictionary<NSString *, NSString *> *)headers params:(APICMutableDictionary<NSString *, id> *)params query:(APICMutableDictionary<NSString *, NSArray<NSString *> *> *)query requiresAuthentication:(BOOL)requiresAuthentication body:(T _Nullable)body __attribute__((swift_name("doCopy(method:path:headers:params:query:requiresAuthentication:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable body __attribute__((swift_name("body")));
@property (readonly) APICMutableDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@property (readonly) APICRequestMethod *method __attribute__((swift_name("method")));
@property (readonly) APICMutableDictionary<NSString *, id> *params __attribute__((swift_name("params")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) APICMutableDictionary<NSString *, NSArray<NSString *> *> *query __attribute__((swift_name("query")));
@property (readonly) BOOL requiresAuthentication __attribute__((swift_name("requiresAuthentication")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestMethod")))
@interface APICRequestMethod : APICKotlinEnum<APICRequestMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) APICRequestMethod *get __attribute__((swift_name("get")));
@property (class, readonly) APICRequestMethod *delete_ __attribute__((swift_name("delete_")));
@property (class, readonly) APICRequestMethod *head __attribute__((swift_name("head")));
@property (class, readonly) APICRequestMethod *options __attribute__((swift_name("options")));
@property (class, readonly) APICRequestMethod *patch __attribute__((swift_name("patch")));
@property (class, readonly) APICRequestMethod *post __attribute__((swift_name("post")));
@property (class, readonly) APICRequestMethod *put __attribute__((swift_name("put")));
+ (APICKotlinArray<APICRequestMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICRequestMethod *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TypedBodyProvider")))
@interface APICTypedBodyProvider<T> : APICBase <APICBodyProvider>
- (instancetype)initWithType:(APICKtor_utilsTypeInfo *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyResponse:(APICKtor_client_coreHttpResponse *)response completionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(response:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyResponse:(APICKtor_client_coreHttpResponse *)response type:(APICKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(response:type:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple")))
@interface APICApple : APICBase
- (instancetype)initWithLoginFrom:(APICAppleLoginFrom *)loginFrom appleUserId:(NSString *)appleUserId userInfo:(APICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("init(loginFrom:appleUserId:userInfo:identityToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICAppleCompanion *companion __attribute__((swift_name("companion")));
- (APICApple *)doCopyLoginFrom:(APICAppleLoginFrom *)loginFrom appleUserId:(NSString *)appleUserId userInfo:(APICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("doCopy(loginFrom:appleUserId:userInfo:identityToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_user_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="identity_token")
*/
@property (readonly) NSString * _Nullable identityToken __attribute__((swift_name("identityToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="login_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICAppleLoginFrom *loginFrom __attribute__((swift_name("loginFrom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICAppleUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple.Companion")))
@interface APICAppleCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICAppleCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple.LoginFrom")))
@interface APICAppleLoginFrom : APICKotlinEnum<APICAppleLoginFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICAppleLoginFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICAppleLoginFrom *_6 __attribute__((swift_name("_6")));
+ (APICKotlinArray<APICAppleLoginFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICAppleLoginFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple.LoginFromCompanion")))
@interface APICAppleLoginFromCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICAppleLoginFromCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple1")))
@interface APICApple1 : APICBase
- (instancetype)initWithAppleUserId:(NSString *)appleUserId registerFrom:(APICApple1RegisterFrom *)registerFrom userInfo:(APICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("init(appleUserId:registerFrom:userInfo:identityToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICApple1Companion *companion __attribute__((swift_name("companion")));
- (APICApple1 *)doCopyAppleUserId:(NSString *)appleUserId registerFrom:(APICApple1RegisterFrom *)registerFrom userInfo:(APICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("doCopy(appleUserId:registerFrom:userInfo:identityToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_user_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="identity_token")
*/
@property (readonly) NSString * _Nullable identityToken __attribute__((swift_name("identityToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="register_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICApple1RegisterFrom *registerFrom __attribute__((swift_name("registerFrom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICAppleUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple1.Companion")))
@interface APICApple1Companion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICApple1Companion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple1.RegisterFrom")))
@interface APICApple1RegisterFrom : APICKotlinEnum<APICApple1RegisterFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICApple1RegisterFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICApple1RegisterFrom *_6 __attribute__((swift_name("_6")));
+ (APICKotlinArray<APICApple1RegisterFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICApple1RegisterFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple1.RegisterFromCompanion")))
@interface APICApple1RegisterFromCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICApple1RegisterFromCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppleUserInfo")))
@interface APICAppleUserInfo : APICBase
- (instancetype)initWithIdentityToken:(NSString *)identityToken appleUserId:(NSString *)appleUserId __attribute__((swift_name("init(identityToken:appleUserId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICAppleUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICAppleUserInfo *)doCopyIdentityToken:(NSString *)identityToken appleUserId:(NSString *)appleUserId __attribute__((swift_name("doCopy(identityToken:appleUserId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="openId")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="identityToken")
*/
@property (readonly) NSString *identityToken __attribute__((swift_name("identityToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppleUserInfo.Companion")))
@interface APICAppleUserInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICAppleUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feedback")))
@interface APICFeedback : APICBase
- (instancetype)initWithId:(APICInt * _Nullable)id uid:(APICInt * _Nullable)uid url:(NSString * _Nullable)url images:(NSArray<APICFeedbackImagesInner *> * _Nullable)images checker:(NSString * _Nullable)checker content:(NSString * _Nullable)content addTime:(NSString * _Nullable)addTime statusText:(NSString * _Nullable)statusText checkStatus:(APICInt * _Nullable)checkStatus checkedTime:(NSString * _Nullable)checkedTime refuseReason:(NSString * _Nullable)refuseReason __attribute__((swift_name("init(id:uid:url:images:checker:content:addTime:statusText:checkStatus:checkedTime:refuseReason:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICFeedbackCompanion *companion __attribute__((swift_name("companion")));
- (APICFeedback *)doCopyId:(APICInt * _Nullable)id uid:(APICInt * _Nullable)uid url:(NSString * _Nullable)url images:(NSArray<APICFeedbackImagesInner *> * _Nullable)images checker:(NSString * _Nullable)checker content:(NSString * _Nullable)content addTime:(NSString * _Nullable)addTime statusText:(NSString * _Nullable)statusText checkStatus:(APICInt * _Nullable)checkStatus checkedTime:(NSString * _Nullable)checkedTime refuseReason:(NSString * _Nullable)refuseReason __attribute__((swift_name("doCopy(id:uid:url:images:checker:content:addTime:statusText:checkStatus:checkedTime:refuseReason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="add_time")
*/
@property (readonly) NSString * _Nullable addTime __attribute__((swift_name("addTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="check_status")
*/
@property (readonly) APICInt * _Nullable checkStatus __attribute__((swift_name("checkStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="checked_time")
*/
@property (readonly) NSString * _Nullable checkedTime __attribute__((swift_name("checkedTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="checker")
*/
@property (readonly) NSString * _Nullable checker __attribute__((swift_name("checker")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) APICInt * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="images")
*/
@property (readonly) NSArray<APICFeedbackImagesInner *> * _Nullable images __attribute__((swift_name("images")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refuse_reason")
*/
@property (readonly) NSString * _Nullable refuseReason __attribute__((swift_name("refuseReason")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_text")
*/
@property (readonly) NSString * _Nullable statusText __attribute__((swift_name("statusText")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) APICInt * _Nullable uid __attribute__((swift_name("uid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feedback.Companion")))
@interface APICFeedbackCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICFeedbackCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackImagesInner")))
@interface APICFeedbackImagesInner : APICBase
- (instancetype)initWithUrl:(NSString * _Nullable)url width:(APICInt * _Nullable)width height:(APICInt * _Nullable)height __attribute__((swift_name("init(url:width:height:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICFeedbackImagesInnerCompanion *companion __attribute__((swift_name("companion")));
- (APICFeedbackImagesInner *)doCopyUrl:(NSString * _Nullable)url width:(APICInt * _Nullable)width height:(APICInt * _Nullable)height __attribute__((swift_name("doCopy(url:width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) APICInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) APICInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackImagesInner.Companion")))
@interface APICFeedbackImagesInnerCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICFeedbackImagesInnerCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryList200Response")))
@interface APICGetMusicCategoryList200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICGetMusicCategoryList200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicCategoryList200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicCategoryList200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICGetMusicCategoryList200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICGetMusicCategoryList200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryList200Response.Companion")))
@interface APICGetMusicCategoryList200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicCategoryList200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryList200ResponseData")))
@interface APICGetMusicCategoryList200ResponseData : APICBase
- (instancetype)initWithList:(NSArray<APICMusicListItem *> * _Nullable)list hasMore:(APICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("init(list:hasMore:hasMoreBoolean:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicCategoryList200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicCategoryList200ResponseData *)doCopyList:(NSArray<APICMusicListItem *> * _Nullable)list hasMore:(APICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("doCopy(list:hasMore:hasMoreBoolean:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="has_more")
*/
@property (readonly) APICInt * _Nullable hasMore __attribute__((swift_name("hasMore")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL hasMoreBoolean __attribute__((swift_name("hasMoreBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="list")
*/
@property (readonly) NSArray<APICMusicListItem *> * _Nullable list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryList200ResponseData.Companion")))
@interface APICGetMusicCategoryList200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicCategoryList200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryListRequest")))
@interface APICGetMusicCategoryListRequest : APICBase
- (instancetype)initWithType:(APICMusicApiTypeGetMusicCategoryList *)type page:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize __attribute__((swift_name("init(type:page:pageSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicCategoryListRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicCategoryListRequest *)doCopyType:(APICMusicApiTypeGetMusicCategoryList *)type page:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize __attribute__((swift_name("doCopy(type:page:pageSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICInt * _Nullable page __attribute__((swift_name("page")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="page_size")
*/
@property (readonly) APICInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@property (readonly) APICMusicApiTypeGetMusicCategoryList *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryListRequest.Companion")))
@interface APICGetMusicCategoryListRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicCategoryListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicDetail200Response")))
@interface APICGetMusicDetail200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICMusicDetail * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicDetail200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicDetail200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICMusicDetail * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICMusicDetail * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicDetail200Response.Companion")))
@interface APICGetMusicDetail200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicDetail200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicDetailRequest")))
@interface APICGetMusicDetailRequest : APICBase
- (instancetype)initWithId:(int32_t)id targetUID:(APICInt * _Nullable)targetUID __attribute__((swift_name("init(id:targetUID:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicDetailRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicDetailRequest *)doCopyId:(int32_t)id targetUID:(APICInt * _Nullable)targetUID __attribute__((swift_name("doCopy(id:targetUID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="target_uid")
*/
@property (readonly) APICInt * _Nullable targetUID __attribute__((swift_name("targetUID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicDetailRequest.Companion")))
@interface APICGetMusicDetailRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicDetailRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200Response")))
@interface APICGetMusicHall200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICGetMusicHall200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicHall200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicHall200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICGetMusicHall200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICGetMusicHall200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200Response.Companion")))
@interface APICGetMusicHall200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicHall200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200ResponseData")))
@interface APICGetMusicHall200ResponseData : APICBase
- (instancetype)initWithList:(NSArray<APICMusicHallItem *> * _Nullable)list hasMore:(APICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean userInfos:(NSDictionary<NSString *, APICUserInfo *> * _Nullable)userInfos __attribute__((swift_name("init(list:hasMore:hasMoreBoolean:userInfos:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicHall200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicHall200ResponseData *)doCopyList:(NSArray<APICMusicHallItem *> * _Nullable)list hasMore:(APICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean userInfos:(NSDictionary<NSString *, APICUserInfo *> * _Nullable)userInfos __attribute__((swift_name("doCopy(list:hasMore:hasMoreBoolean:userInfos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="has_more")
*/
@property (readonly) APICInt * _Nullable hasMore __attribute__((swift_name("hasMore")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL hasMoreBoolean __attribute__((swift_name("hasMoreBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="list")
*/
@property (readonly) NSArray<APICMusicHallItem *> * _Nullable list __attribute__((swift_name("list")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_infos")
*/
@property (readonly) NSDictionary<NSString *, APICUserInfo *> * _Nullable userInfos __attribute__((swift_name("userInfos")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200ResponseData.Companion")))
@interface APICGetMusicHall200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicHall200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200ResponseData.HasMore")))
@interface APICGetMusicHall200ResponseDataHasMore : APICKotlinEnum<APICGetMusicHall200ResponseDataHasMore *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICGetMusicHall200ResponseDataHasMoreCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICGetMusicHall200ResponseDataHasMore *no __attribute__((swift_name("no")));
@property (class, readonly) APICGetMusicHall200ResponseDataHasMore *yes __attribute__((swift_name("yes")));
+ (APICKotlinArray<APICGetMusicHall200ResponseDataHasMore *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICGetMusicHall200ResponseDataHasMore *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200ResponseData.HasMoreCompanion")))
@interface APICGetMusicHall200ResponseDataHasMoreCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicHall200ResponseDataHasMoreCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHallRequest")))
@interface APICGetMusicHallRequest : APICBase
- (instancetype)initWithPage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize searchText:(NSString * _Nullable)searchText __attribute__((swift_name("init(page:pageSize:searchText:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicHallRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicHallRequest *)doCopyPage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize searchText:(NSString * _Nullable)searchText __attribute__((swift_name("doCopy(page:pageSize:searchText:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICInt * _Nullable page __attribute__((swift_name("page")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="page_size")
*/
@property (readonly) APICInt * _Nullable pageSize __attribute__((swift_name("pageSize")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="search_text")
*/
@property (readonly) NSString * _Nullable searchText __attribute__((swift_name("searchText")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHallRequest.Companion")))
@interface APICGetMusicHallRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicHallRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicList200Response")))
@interface APICGetMusicList200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICGetMusicCategoryList200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicList200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicList200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICGetMusicCategoryList200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICGetMusicCategoryList200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicList200Response.Companion")))
@interface APICGetMusicList200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicList200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicListRequest")))
@interface APICGetMusicListRequest : APICBase
- (instancetype)initWithPage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize __attribute__((swift_name("init(page:pageSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicListRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicListRequest *)doCopyPage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize __attribute__((swift_name("doCopy(page:pageSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICInt * _Nullable page __attribute__((swift_name("page")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="page_size")
*/
@property (readonly) APICInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicListRequest.Companion")))
@interface APICGetMusicListRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200Response")))
@interface APICGetMusicMy200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICGetMusicMy200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicMy200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicMy200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICGetMusicMy200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICGetMusicMy200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200Response.Companion")))
@interface APICGetMusicMy200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicMy200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseData")))
@interface APICGetMusicMy200ResponseData : APICBase
- (instancetype)initWithMyWorks:(APICGetMusicMy200ResponseDataMyWorks * _Nullable)myWorks userInfo:(APICGetMusicMy200ResponseDataUserInfo * _Nullable)userInfo __attribute__((swift_name("init(myWorks:userInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicMy200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicMy200ResponseData *)doCopyMyWorks:(APICGetMusicMy200ResponseDataMyWorks * _Nullable)myWorks userInfo:(APICGetMusicMy200ResponseDataUserInfo * _Nullable)userInfo __attribute__((swift_name("doCopy(myWorks:userInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="my_works")
*/
@property (readonly) APICGetMusicMy200ResponseDataMyWorks * _Nullable myWorks __attribute__((swift_name("myWorks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICGetMusicMy200ResponseDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseData.Companion")))
@interface APICGetMusicMy200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicMy200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseDataMyWorks")))
@interface APICGetMusicMy200ResponseDataMyWorks : APICBase
- (instancetype)initWithList:(NSArray<APICMusicListItem *> * _Nullable)list hasMore:(APICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("init(list:hasMore:hasMoreBoolean:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicMy200ResponseDataMyWorksCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicMy200ResponseDataMyWorks *)doCopyList:(NSArray<APICMusicListItem *> * _Nullable)list hasMore:(APICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("doCopy(list:hasMore:hasMoreBoolean:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="has_more")
*/
@property (readonly) APICInt * _Nullable hasMore __attribute__((swift_name("hasMore")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL hasMoreBoolean __attribute__((swift_name("hasMoreBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="list")
*/
@property (readonly) NSArray<APICMusicListItem *> * _Nullable list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseDataMyWorks.Companion")))
@interface APICGetMusicMy200ResponseDataMyWorksCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicMy200ResponseDataMyWorksCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseDataUserInfo")))
@interface APICGetMusicMy200ResponseDataUserInfo : APICBase
- (instancetype)initWithUid:(APICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar isVip:(APICInt * _Nullable)isVip isVipBool:(BOOL)isVipBool credits:(APICInt * _Nullable)credits nickname:(NSString * _Nullable)nickname __attribute__((swift_name("init(uid:avatar:isVip:isVipBool:credits:nickname:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicMy200ResponseDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicMy200ResponseDataUserInfo *)doCopyUid:(APICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar isVip:(APICInt * _Nullable)isVip isVipBool:(BOOL)isVipBool credits:(APICInt * _Nullable)credits nickname:(NSString * _Nullable)nickname __attribute__((swift_name("doCopy(uid:avatar:isVip:isVipBool:credits:nickname:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="credits")
*/
@property (readonly) APICInt * _Nullable credits __attribute__((swift_name("credits")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_vip")
*/
@property (readonly) APICInt * _Nullable isVip __attribute__((swift_name("isVip")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL isVipBool __attribute__((swift_name("isVipBool")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) APICInt * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseDataUserInfo.Companion")))
@interface APICGetMusicMy200ResponseDataUserInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicMy200ResponseDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMyRequest")))
@interface APICGetMusicMyRequest : APICBase
- (instancetype)initWithPage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize __attribute__((swift_name("init(page:pageSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicMyRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicMyRequest *)doCopyPage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize __attribute__((swift_name("doCopy(page:pageSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICInt * _Nullable page __attribute__((swift_name("page")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="page_size")
*/
@property (readonly) APICInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMyRequest.Companion")))
@interface APICGetMusicMyRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicMyRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicOptions200Response")))
@interface APICGetMusicOptions200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICGetMusicOptions200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicOptions200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicOptions200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICGetMusicOptions200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICGetMusicOptions200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicOptions200Response.Companion")))
@interface APICGetMusicOptions200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicOptions200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicOptions200ResponseData")))
@interface APICGetMusicOptions200ResponseData : APICBase
- (instancetype)initWithMoods:(NSArray<APICMusicOption *> * _Nullable)moods styles:(NSArray<APICMusicOption *> * _Nullable)styles languages:(NSArray<APICMusicOption *> * _Nullable)languages instruments:(NSArray<APICMusicOption *> * _Nullable)instruments __attribute__((swift_name("init(moods:styles:languages:instruments:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetMusicOptions200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICGetMusicOptions200ResponseData *)doCopyMoods:(NSArray<APICMusicOption *> * _Nullable)moods styles:(NSArray<APICMusicOption *> * _Nullable)styles languages:(NSArray<APICMusicOption *> * _Nullable)languages instruments:(NSArray<APICMusicOption *> * _Nullable)instruments __attribute__((swift_name("doCopy(moods:styles:languages:instruments:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instruments")
*/
@property (readonly) NSArray<APICMusicOption *> * _Nullable instruments __attribute__((swift_name("instruments")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="languages")
*/
@property (readonly) NSArray<APICMusicOption *> * _Nullable languages __attribute__((swift_name("languages")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="moods")
*/
@property (readonly) NSArray<APICMusicOption *> * _Nullable moods __attribute__((swift_name("moods")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="styles")
*/
@property (readonly) NSArray<APICMusicOption *> * _Nullable styles __attribute__((swift_name("styles")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicOptions200ResponseData.Companion")))
@interface APICGetMusicOptions200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetMusicOptions200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeList200Response")))
@interface APICGetNoticeList200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICGetNoticeList200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetNoticeList200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICGetNoticeList200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICGetNoticeList200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICGetNoticeList200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeList200Response.Companion")))
@interface APICGetNoticeList200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetNoticeList200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeList200ResponseData")))
@interface APICGetNoticeList200ResponseData : APICBase
- (instancetype)initWithList:(NSArray<APICNoticeListItem *> * _Nullable)list hasMore:(APICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("init(list:hasMore:hasMoreBoolean:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetNoticeList200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICGetNoticeList200ResponseData *)doCopyList:(NSArray<APICNoticeListItem *> * _Nullable)list hasMore:(APICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("doCopy(list:hasMore:hasMoreBoolean:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="has_more")
*/
@property (readonly) APICInt * _Nullable hasMore __attribute__((swift_name("hasMore")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL hasMoreBoolean __attribute__((swift_name("hasMoreBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="list")
*/
@property (readonly) NSArray<APICNoticeListItem *> * _Nullable list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeList200ResponseData.Companion")))
@interface APICGetNoticeList200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetNoticeList200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeRequest")))
@interface APICGetNoticeRequest : APICBase
- (instancetype)initWithPage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize __attribute__((swift_name("init(page:pageSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetNoticeRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICGetNoticeRequest *)doCopyPage:(APICInt * _Nullable)page pageSize:(APICInt * _Nullable)pageSize __attribute__((swift_name("doCopy(page:pageSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICInt * _Nullable page __attribute__((swift_name("page")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="page_size")
*/
@property (readonly) APICInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeRequest.Companion")))
@interface APICGetNoticeRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetNoticeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200Response")))
@interface APICGetReportTypes200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICGetReportTypes200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetReportTypes200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICGetReportTypes200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICGetReportTypes200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICGetReportTypes200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200Response.Companion")))
@interface APICGetReportTypes200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetReportTypes200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOfData")))
@interface APICGetReportTypes200ResponseOneOfData : APICBase
- (instancetype)initWithTypes:(NSArray<APICGetReportTypes200ResponseOneOfDataTypesInner *> * _Nullable)types __attribute__((swift_name("init(types:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetReportTypes200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (APICGetReportTypes200ResponseOneOfData *)doCopyTypes:(NSArray<APICGetReportTypes200ResponseOneOfDataTypesInner *> * _Nullable)types __attribute__((swift_name("doCopy(types:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="types")
*/
@property (readonly) NSArray<APICGetReportTypes200ResponseOneOfDataTypesInner *> * _Nullable types __attribute__((swift_name("types")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOfData.Companion")))
@interface APICGetReportTypes200ResponseOneOfDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetReportTypes200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOfDataTypesInner")))
@interface APICGetReportTypes200ResponseOneOfDataTypesInner : APICBase
- (instancetype)initWithId:(APICInt * _Nullable)id type:(NSString * _Nullable)type __attribute__((swift_name("init(id:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetReportTypes200ResponseOneOfDataTypesInnerCompanion *companion __attribute__((swift_name("companion")));
- (APICGetReportTypes200ResponseOneOfDataTypesInner *)doCopyId:(APICInt * _Nullable)id type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) APICInt * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOfDataTypesInner.Companion")))
@interface APICGetReportTypes200ResponseOneOfDataTypesInnerCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetReportTypes200ResponseOneOfDataTypesInnerCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200Response")))
@interface APICGetVipList200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICGetVipList200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetVipList200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICGetVipList200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICGetVipList200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICGetVipList200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200Response.Companion")))
@interface APICGetVipList200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetVipList200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200ResponseData")))
@interface APICGetVipList200ResponseData : APICBase
- (instancetype)initWithMainTitle:(NSString * _Nullable)mainTitle vipList:(NSArray<APICVipPackage *> * _Nullable)vipList userVipStatus:(APICGetVipList200ResponseDataUserVipStatus * _Nullable)userVipStatus channel:(NSString * _Nullable)channel __attribute__((swift_name("init(mainTitle:vipList:userVipStatus:channel:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetVipList200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICGetVipList200ResponseData *)doCopyMainTitle:(NSString * _Nullable)mainTitle vipList:(NSArray<APICVipPackage *> * _Nullable)vipList userVipStatus:(APICGetVipList200ResponseDataUserVipStatus * _Nullable)userVipStatus channel:(NSString * _Nullable)channel __attribute__((swift_name("doCopy(mainTitle:vipList:userVipStatus:channel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="main_title")
*/
@property (readonly) NSString * _Nullable mainTitle __attribute__((swift_name("mainTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_vip_status")
*/
@property (readonly) APICGetVipList200ResponseDataUserVipStatus * _Nullable userVipStatus __attribute__((swift_name("userVipStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vip_list")
*/
@property (readonly) NSArray<APICVipPackage *> * _Nullable vipList __attribute__((swift_name("vipList")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200ResponseData.Companion")))
@interface APICGetVipList200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetVipList200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200ResponseDataUserVipStatus")))
@interface APICGetVipList200ResponseDataUserVipStatus : APICBase
- (instancetype)initWithUid:(APICLong * _Nullable)uid isVip:(APICInt * _Nullable)isVip isVipBoolean:(BOOL)isVipBoolean vipType:(APICInt * _Nullable)vipType vipExp:(NSString * _Nullable)vipExp isExpired:(APICBoolean * _Nullable)isExpired remainingDays:(APICInt * _Nullable)remainingDays __attribute__((swift_name("init(uid:isVip:isVipBoolean:vipType:vipExp:isExpired:remainingDays:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetVipList200ResponseDataUserVipStatusCompanion *companion __attribute__((swift_name("companion")));
- (APICGetVipList200ResponseDataUserVipStatus *)doCopyUid:(APICLong * _Nullable)uid isVip:(APICInt * _Nullable)isVip isVipBoolean:(BOOL)isVipBoolean vipType:(APICInt * _Nullable)vipType vipExp:(NSString * _Nullable)vipExp isExpired:(APICBoolean * _Nullable)isExpired remainingDays:(APICInt * _Nullable)remainingDays __attribute__((swift_name("doCopy(uid:isVip:isVipBoolean:vipType:vipExp:isExpired:remainingDays:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_expired")
*/
@property (readonly) APICBoolean * _Nullable isExpired __attribute__((swift_name("isExpired")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_vip")
*/
@property (readonly) APICInt * _Nullable isVip __attribute__((swift_name("isVip")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL isVipBoolean __attribute__((swift_name("isVipBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="days_left")
*/
@property (readonly) APICInt * _Nullable remainingDays __attribute__((swift_name("remainingDays")));
@property (readonly) APICLong * _Nullable uid __attribute__((swift_name("uid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vip_exp")
*/
@property (readonly) NSString * _Nullable vipExp __attribute__((swift_name("vipExp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vip_type")
*/
@property (readonly) APICInt * _Nullable vipType __attribute__((swift_name("vipType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200ResponseDataUserVipStatus.Companion")))
@interface APICGetVipList200ResponseDataUserVipStatusCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetVipList200ResponseDataUserVipStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipListRequest")))
@interface APICGetVipListRequest : APICBase
- (instancetype)initWithChannel:(APICVIPApiChannelGetVipList * _Nullable)channel __attribute__((swift_name("init(channel:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGetVipListRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICGetVipListRequest *)doCopyChannel:(APICVIPApiChannelGetVipList * _Nullable)channel __attribute__((swift_name("doCopy(channel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICVIPApiChannelGetVipList * _Nullable channel __attribute__((swift_name("channel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipListRequest.Companion")))
@interface APICGetVipListRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGetVipListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google")))
@interface APICGoogle : APICBase
- (instancetype)initWithChannel:(APICGoogleChannel *)channel idToken:(NSString *)idToken loginFrom:(APICGoogleLoginFrom *)loginFrom __attribute__((swift_name("init(channel:idToken:loginFrom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGoogleCompanion *companion __attribute__((swift_name("companion")));
- (APICGoogle *)doCopyChannel:(APICGoogleChannel *)channel idToken:(NSString *)idToken loginFrom:(APICGoogleLoginFrom *)loginFrom __attribute__((swift_name("doCopy(channel:idToken:loginFrom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICGoogleChannel *channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_token")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *idToken __attribute__((swift_name("idToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="login_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICGoogleLoginFrom *loginFrom __attribute__((swift_name("loginFrom")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google.Channel")))
@interface APICGoogleChannel : APICKotlinEnum<APICGoogleChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICGoogleChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICGoogleChannel *comperiodaimusicperiodhomeperioda __attribute__((swift_name("comperiodaimusicperiodhomeperioda")));
@property (class, readonly) APICGoogleChannel *comperiodaimusicperiodhome __attribute__((swift_name("comperiodaimusicperiodhome")));
+ (APICKotlinArray<APICGoogleChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICGoogleChannel *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google.ChannelCompanion")))
@interface APICGoogleChannelCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGoogleChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google.Companion")))
@interface APICGoogleCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGoogleCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google.LoginFrom")))
@interface APICGoogleLoginFrom : APICKotlinEnum<APICGoogleLoginFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICGoogleLoginFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICGoogleLoginFrom *_3 __attribute__((swift_name("_3")));
+ (APICKotlinArray<APICGoogleLoginFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICGoogleLoginFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google.LoginFromCompanion")))
@interface APICGoogleLoginFromCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGoogleLoginFromCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1")))
@interface APICGoogle1 : APICBase
- (instancetype)initWithChannel:(APICGoogle1Channel *)channel idToken:(NSString *)idToken registerFrom:(APICGoogle1RegisterFrom *)registerFrom __attribute__((swift_name("init(channel:idToken:registerFrom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICGoogle1Companion *companion __attribute__((swift_name("companion")));
- (APICGoogle1 *)doCopyChannel:(APICGoogle1Channel *)channel idToken:(NSString *)idToken registerFrom:(APICGoogle1RegisterFrom *)registerFrom __attribute__((swift_name("doCopy(channel:idToken:registerFrom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICGoogle1Channel *channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_token")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *idToken __attribute__((swift_name("idToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="register_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICGoogle1RegisterFrom *registerFrom __attribute__((swift_name("registerFrom")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1.Channel")))
@interface APICGoogle1Channel : APICKotlinEnum<APICGoogle1Channel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICGoogle1ChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICGoogle1Channel *comperiodaimusicperiodhomeperioda __attribute__((swift_name("comperiodaimusicperiodhomeperioda")));
@property (class, readonly) APICGoogle1Channel *comperiodaimusicperiodhome __attribute__((swift_name("comperiodaimusicperiodhome")));
+ (APICKotlinArray<APICGoogle1Channel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICGoogle1Channel *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1.ChannelCompanion")))
@interface APICGoogle1ChannelCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGoogle1ChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1.Companion")))
@interface APICGoogle1Companion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGoogle1Companion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1.RegisterFrom")))
@interface APICGoogle1RegisterFrom : APICKotlinEnum<APICGoogle1RegisterFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICGoogle1RegisterFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICGoogle1RegisterFrom *_3 __attribute__((swift_name("_3")));
+ (APICKotlinArray<APICGoogle1RegisterFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICGoogle1RegisterFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1.RegisterFromCompanion")))
@interface APICGoogle1RegisterFromCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICGoogle1RegisterFromCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicDetail")))
@interface APICMusicDetail : APICBase
- (instancetype)initWithId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid like:(NSString * _Nullable)like mood:(NSString * _Nullable)mood intro:(NSString * _Nullable)intro style:(NSString * _Nullable)style lyrics:(NSString * _Nullable)lyrics status:(APICInt * _Nullable)status duration:(NSString * _Nullable)duration isLiked:(APICBoolean * _Nullable)isLiked language:(NSString * _Nullable)language mediaId:(NSString * _Nullable)mediaId audioUrl:(NSString * _Nullable)audioUrl instrument:(NSString * _Nullable)instrument moodNames:(NSArray<NSString *> * _Nullable)moodNames createTime:(NSString * _Nullable)createTime styleNames:(NSArray<NSString *> * _Nullable)styleNames updateTime:(NSString * _Nullable)updateTime audioDuration:(NSString * _Nullable)audioDuration coverMediaId:(NSString * _Nullable)coverMediaId languageNames:(NSArray<NSString *> * _Nullable)languageNames coverMediaUrl:(NSString * _Nullable)coverMediaUrl generatedLyrics:(NSString * _Nullable)generatedLyrics instrumentNames:(NSArray<NSString *> * _Nullable)instrumentNames introPicMediaId:(NSString * _Nullable)introPicMediaId introVoiceMediaId:(NSString * _Nullable)introVoiceMediaId userInfo:(APICUserInfo * _Nullable)userInfo title:(NSString * _Nullable)title isInstrumental:(NSString * _Nullable)isInstrumental promptTitle:(NSString * _Nullable)promptTitle __attribute__((swift_name("init(id:uid:like:mood:intro:style:lyrics:status:duration:isLiked:language:mediaId:audioUrl:instrument:moodNames:createTime:styleNames:updateTime:audioDuration:coverMediaId:languageNames:coverMediaUrl:generatedLyrics:instrumentNames:introPicMediaId:introVoiceMediaId:userInfo:title:isInstrumental:promptTitle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICMusicDetailCompanion *companion __attribute__((swift_name("companion")));
- (APICMusicDetail *)doCopyId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid like:(NSString * _Nullable)like mood:(NSString * _Nullable)mood intro:(NSString * _Nullable)intro style:(NSString * _Nullable)style lyrics:(NSString * _Nullable)lyrics status:(APICInt * _Nullable)status duration:(NSString * _Nullable)duration isLiked:(APICBoolean * _Nullable)isLiked language:(NSString * _Nullable)language mediaId:(NSString * _Nullable)mediaId audioUrl:(NSString * _Nullable)audioUrl instrument:(NSString * _Nullable)instrument moodNames:(NSArray<NSString *> * _Nullable)moodNames createTime:(NSString * _Nullable)createTime styleNames:(NSArray<NSString *> * _Nullable)styleNames updateTime:(NSString * _Nullable)updateTime audioDuration:(NSString * _Nullable)audioDuration coverMediaId:(NSString * _Nullable)coverMediaId languageNames:(NSArray<NSString *> * _Nullable)languageNames coverMediaUrl:(NSString * _Nullable)coverMediaUrl generatedLyrics:(NSString * _Nullable)generatedLyrics instrumentNames:(NSArray<NSString *> * _Nullable)instrumentNames introPicMediaId:(NSString * _Nullable)introPicMediaId introVoiceMediaId:(NSString * _Nullable)introVoiceMediaId userInfo:(APICUserInfo * _Nullable)userInfo title:(NSString * _Nullable)title isInstrumental:(NSString * _Nullable)isInstrumental promptTitle:(NSString * _Nullable)promptTitle __attribute__((swift_name("doCopy(id:uid:like:mood:intro:style:lyrics:status:duration:isLiked:language:mediaId:audioUrl:instrument:moodNames:createTime:styleNames:updateTime:audioDuration:coverMediaId:languageNames:coverMediaUrl:generatedLyrics:instrumentNames:introPicMediaId:introVoiceMediaId:userInfo:title:isInstrumental:promptTitle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="audio_duration")
*/
@property (readonly) NSString * _Nullable audioDuration __attribute__((swift_name("audioDuration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="audio_url")
*/
@property (readonly) NSString * _Nullable audioUrl __attribute__((swift_name("audioUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_media_id")
*/
@property (readonly) NSString * _Nullable coverMediaId __attribute__((swift_name("coverMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_media_url")
*/
@property (readonly) NSString * _Nullable coverMediaUrl __attribute__((swift_name("coverMediaUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="create_time")
*/
@property (readonly) NSString * _Nullable createTime __attribute__((swift_name("createTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="duration")
*/
@property (readonly) NSString * _Nullable duration __attribute__((swift_name("duration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="generated_lyrics")
*/
@property (readonly) NSString * _Nullable generatedLyrics __attribute__((swift_name("generatedLyrics")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instrument")
*/
@property (readonly) NSString * _Nullable instrument __attribute__((swift_name("instrument")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instrument_names")
*/
@property (readonly) NSArray<NSString *> * _Nullable instrumentNames __attribute__((swift_name("instrumentNames")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro")
*/
@property (readonly) NSString * _Nullable intro __attribute__((swift_name("intro")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_pic_media_id")
*/
@property (readonly) NSString * _Nullable introPicMediaId __attribute__((swift_name("introPicMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_voice_media_id")
*/
@property (readonly) NSString * _Nullable introVoiceMediaId __attribute__((swift_name("introVoiceMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_instrumental")
*/
@property (readonly) NSString * _Nullable isInstrumental __attribute__((swift_name("isInstrumental")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_liked")
*/
@property (readonly) APICBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="language")
*/
@property (readonly) NSString * _Nullable language __attribute__((swift_name("language")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="language_names")
*/
@property (readonly) NSArray<NSString *> * _Nullable languageNames __attribute__((swift_name("languageNames")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like")
*/
@property (readonly) NSString * _Nullable like __attribute__((swift_name("like")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lyrics")
*/
@property (readonly) NSString * _Nullable lyrics __attribute__((swift_name("lyrics")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_id")
*/
@property (readonly) NSString * _Nullable mediaId __attribute__((swift_name("mediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mood")
*/
@property (readonly) NSString * _Nullable mood __attribute__((swift_name("mood")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mood_names")
*/
@property (readonly) NSArray<NSString *> * _Nullable moodNames __attribute__((swift_name("moodNames")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prompt_title")
*/
@property (readonly) NSString * _Nullable promptTitle __attribute__((swift_name("promptTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) APICInt * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="style")
*/
@property (readonly) NSString * _Nullable style __attribute__((swift_name("style")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="style_names")
*/
@property (readonly) NSArray<NSString *> * _Nullable styleNames __attribute__((swift_name("styleNames")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) NSString * _Nullable uid __attribute__((swift_name("uid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="update_time")
*/
@property (readonly) NSString * _Nullable updateTime __attribute__((swift_name("updateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicDetail.Companion")))
@interface APICMusicDetailCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICMusicDetailCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicHallItem")))
@interface APICMusicHallItem : APICBase
- (instancetype)initWithId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid like:(NSString * _Nullable)like title:(NSString * _Nullable)title isLike:(APICMusicHallItemIsLike * _Nullable)isLike duration:(NSString * _Nullable)duration createTime:(NSString * _Nullable)createTime coverMediaUrl:(NSString * _Nullable)coverMediaUrl __attribute__((swift_name("init(id:uid:like:title:isLike:duration:createTime:coverMediaUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICMusicHallItemCompanion *companion __attribute__((swift_name("companion")));
- (APICMusicHallItem *)doCopyId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid like:(NSString * _Nullable)like title:(NSString * _Nullable)title isLike:(APICMusicHallItemIsLike * _Nullable)isLike duration:(NSString * _Nullable)duration createTime:(NSString * _Nullable)createTime coverMediaUrl:(NSString * _Nullable)coverMediaUrl __attribute__((swift_name("doCopy(id:uid:like:title:isLike:duration:createTime:coverMediaUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_media_url")
*/
@property (readonly) NSString * _Nullable coverMediaUrl __attribute__((swift_name("coverMediaUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="create_time")
*/
@property (readonly) NSString * _Nullable createTime __attribute__((swift_name("createTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="duration")
*/
@property (readonly) NSString * _Nullable duration __attribute__((swift_name("duration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_like")
*/
@property (readonly) APICMusicHallItemIsLike * _Nullable isLike __attribute__((swift_name("isLike")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like")
*/
@property (readonly) NSString * _Nullable like __attribute__((swift_name("like")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) NSString * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicHallItem.Companion")))
@interface APICMusicHallItemCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICMusicHallItemCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicHallItem.IsLike")))
@interface APICMusicHallItemIsLike : APICKotlinEnum<APICMusicHallItemIsLike *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICMusicHallItemIsLikeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICMusicHallItemIsLike *no __attribute__((swift_name("no")));
@property (class, readonly) APICMusicHallItemIsLike *yes __attribute__((swift_name("yes")));
+ (APICKotlinArray<APICMusicHallItemIsLike *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICMusicHallItemIsLike *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicHallItem.IsLikeCompanion")))
@interface APICMusicHallItemIsLikeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICMusicHallItemIsLikeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicListItem")))
@interface APICMusicListItem : APICBase
- (instancetype)initWithId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid mediaID:(NSString * _Nullable)mediaID status:(NSString * _Nullable)status style:(NSString * _Nullable)style mood:(NSString * _Nullable)mood language:(NSString * _Nullable)language instrument:(NSString * _Nullable)instrument lyrics:(NSString * _Nullable)lyrics like:(NSString * _Nullable)like isLike:(APICInt * _Nullable)isLike isLikeBoolean:(BOOL)isLikeBoolean duration:(NSString * _Nullable)duration title:(NSString * _Nullable)title isInstrumental:(NSString * _Nullable)isInstrumental isInstrumentalBoolean:(BOOL)isInstrumentalBoolean promptTitle:(NSString * _Nullable)promptTitle coverMediaId:(NSString * _Nullable)coverMediaId coverMediaUrl:(NSString * _Nullable)coverMediaUrl intro:(NSString * _Nullable)intro introPicMediaId:(NSString * _Nullable)introPicMediaId introVoiceMediaId:(NSString * _Nullable)introVoiceMediaId createTime:(NSString * _Nullable)createTime updateTime:(NSString * _Nullable)updateTime __attribute__((swift_name("init(id:uid:mediaID:status:style:mood:language:instrument:lyrics:like:isLike:isLikeBoolean:duration:title:isInstrumental:isInstrumentalBoolean:promptTitle:coverMediaId:coverMediaUrl:intro:introPicMediaId:introVoiceMediaId:createTime:updateTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICMusicListItemCompanion *companion __attribute__((swift_name("companion")));
- (APICMusicListItem *)doCopyId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid mediaID:(NSString * _Nullable)mediaID status:(NSString * _Nullable)status style:(NSString * _Nullable)style mood:(NSString * _Nullable)mood language:(NSString * _Nullable)language instrument:(NSString * _Nullable)instrument lyrics:(NSString * _Nullable)lyrics like:(NSString * _Nullable)like isLike:(APICInt * _Nullable)isLike isLikeBoolean:(BOOL)isLikeBoolean duration:(NSString * _Nullable)duration title:(NSString * _Nullable)title isInstrumental:(NSString * _Nullable)isInstrumental isInstrumentalBoolean:(BOOL)isInstrumentalBoolean promptTitle:(NSString * _Nullable)promptTitle coverMediaId:(NSString * _Nullable)coverMediaId coverMediaUrl:(NSString * _Nullable)coverMediaUrl intro:(NSString * _Nullable)intro introPicMediaId:(NSString * _Nullable)introPicMediaId introVoiceMediaId:(NSString * _Nullable)introVoiceMediaId createTime:(NSString * _Nullable)createTime updateTime:(NSString * _Nullable)updateTime __attribute__((swift_name("doCopy(id:uid:mediaID:status:style:mood:language:instrument:lyrics:like:isLike:isLikeBoolean:duration:title:isInstrumental:isInstrumentalBoolean:promptTitle:coverMediaId:coverMediaUrl:intro:introPicMediaId:introVoiceMediaId:createTime:updateTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_media_id")
*/
@property (readonly) NSString * _Nullable coverMediaId __attribute__((swift_name("coverMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_media_url")
*/
@property (readonly) NSString * _Nullable coverMediaUrl __attribute__((swift_name("coverMediaUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="create_time")
*/
@property (readonly) NSString * _Nullable createTime __attribute__((swift_name("createTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="duration")
*/
@property (readonly) NSString * _Nullable duration __attribute__((swift_name("duration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instrument")
*/
@property (readonly) NSString * _Nullable instrument __attribute__((swift_name("instrument")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro")
*/
@property (readonly) NSString * _Nullable intro __attribute__((swift_name("intro")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_pic_media_id")
*/
@property (readonly) NSString * _Nullable introPicMediaId __attribute__((swift_name("introPicMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_voice_media_id")
*/
@property (readonly) NSString * _Nullable introVoiceMediaId __attribute__((swift_name("introVoiceMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_instrumental")
*/
@property (readonly) NSString * _Nullable isInstrumental __attribute__((swift_name("isInstrumental")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL isInstrumentalBoolean __attribute__((swift_name("isInstrumentalBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_like")
*/
@property (readonly) APICInt * _Nullable isLike __attribute__((swift_name("isLike")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL isLikeBoolean __attribute__((swift_name("isLikeBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="language")
*/
@property (readonly) NSString * _Nullable language __attribute__((swift_name("language")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like")
*/
@property (readonly) NSString * _Nullable like __attribute__((swift_name("like")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lyrics")
*/
@property (readonly) NSString * _Nullable lyrics __attribute__((swift_name("lyrics")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_id")
*/
@property (readonly) NSString * _Nullable mediaID __attribute__((swift_name("mediaID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mood")
*/
@property (readonly) NSString * _Nullable mood __attribute__((swift_name("mood")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prompt_title")
*/
@property (readonly) NSString * _Nullable promptTitle __attribute__((swift_name("promptTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="style")
*/
@property (readonly) NSString * _Nullable style __attribute__((swift_name("style")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) NSString * _Nullable uid __attribute__((swift_name("uid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="update_time")
*/
@property (readonly) NSString * _Nullable updateTime __attribute__((swift_name("updateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicListItem.Companion")))
@interface APICMusicListItemCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICMusicListItemCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicOption")))
@interface APICMusicOption : APICBase
- (instancetype)initWithId:(APICInt * _Nullable)id title:(NSString * _Nullable)title __attribute__((swift_name("init(id:title:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICMusicOptionCompanion *companion __attribute__((swift_name("companion")));
- (APICMusicOption *)doCopyId:(APICInt * _Nullable)id title:(NSString * _Nullable)title __attribute__((swift_name("doCopy(id:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) APICInt * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicOption.Companion")))
@interface APICMusicOptionCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICMusicOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem")))
@interface APICNoticeListItem : APICBase
- (instancetype)initWithId:(NSString *)id uid:(NSString *)uid noticeTime:(NSString * _Nullable)noticeTime chatType:(NSString * _Nullable)chatType msgType:(NSString * _Nullable)msgType subMsgType:(NSString * _Nullable)subMsgType __attribute__((swift_name("init(id:uid:noticeTime:chatType:msgType:subMsgType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICNoticeListItemCompanion *companion __attribute__((swift_name("companion")));
- (APICNoticeListItem *)doCopyId:(NSString *)id uid:(NSString *)uid noticeTime:(NSString * _Nullable)noticeTime chatType:(NSString * _Nullable)chatType msgType:(NSString * _Nullable)msgType subMsgType:(NSString * _Nullable)subMsgType __attribute__((swift_name("doCopy(id:uid:noticeTime:chatType:msgType:subMsgType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="chat_type")
*/
@property (readonly) NSString * _Nullable chatType __attribute__((swift_name("chatType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg_type")
*/
@property (readonly) NSString * _Nullable msgType __attribute__((swift_name("msgType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mtime")
*/
@property (readonly) NSString * _Nullable noticeTime __attribute__((swift_name("noticeTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sub_msg_type")
*/
@property (readonly) NSString * _Nullable subMsgType __attribute__((swift_name("subMsgType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.ChatType")))
@interface APICNoticeListItemChatType : APICKotlinEnum<APICNoticeListItemChatType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICNoticeListItemChatTypeCompanion *companion __attribute__((swift_name("companion")));
+ (APICKotlinArray<APICNoticeListItemChatType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICNoticeListItemChatType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.ChatTypeCompanion")))
@interface APICNoticeListItemChatTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICNoticeListItemChatTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.Companion")))
@interface APICNoticeListItemCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICNoticeListItemCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.MessageType")))
@interface APICNoticeListItemMessageType : APICKotlinEnum<APICNoticeListItemMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICNoticeListItemMessageTypeCompanion *companion __attribute__((swift_name("companion")));
+ (APICKotlinArray<APICNoticeListItemMessageType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICNoticeListItemMessageType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.MessageTypeCompanion")))
@interface APICNoticeListItemMessageTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICNoticeListItemMessageTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.SubMessageType")))
@interface APICNoticeListItemSubMessageType : APICKotlinEnum<APICNoticeListItemSubMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICNoticeListItemSubMessageTypeCompanion *companion __attribute__((swift_name("companion")));
+ (APICKotlinArray<APICNoticeListItemSubMessageType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICNoticeListItemSubMessageType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.SubMessageTypeCompanion")))
@interface APICNoticeListItemSubMessageTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICNoticeListItemSubMessageTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppClose200Response")))
@interface APICPostAppClose200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok __attribute__((swift_name("init(ok:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppClose200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppClose200Response *)doCopyOk:(APICInt * _Nullable)ok __attribute__((swift_name("doCopy(ok:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppClose200Response.Companion")))
@interface APICPostAppClose200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppClose200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200Response")))
@interface APICPostAppInit200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICPostAppInit200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppInit200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppInit200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICPostAppInit200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostAppInit200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200Response.Companion")))
@interface APICPostAppInit200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppInit200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200ResponseData")))
@interface APICPostAppInit200ResponseData : APICBase
- (instancetype)initWithUserInfo:(APICPostAppInit200ResponseDataUserInfo * _Nullable)userInfo __attribute__((swift_name("init(userInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppInit200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppInit200ResponseData *)doCopyUserInfo:(APICPostAppInit200ResponseDataUserInfo * _Nullable)userInfo __attribute__((swift_name("doCopy(userInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICPostAppInit200ResponseDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200ResponseData.Companion")))
@interface APICPostAppInit200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppInit200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200ResponseDataUserInfo")))
@interface APICPostAppInit200ResponseDataUserInfo : APICBase
- (instancetype)initWithSex:(APICInt * _Nullable)sex uid:(APICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar isVip:(APICInt * _Nullable)isVip nickname:(NSString * _Nullable)nickname __attribute__((swift_name("init(sex:uid:avatar:isVip:nickname:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppInit200ResponseDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppInit200ResponseDataUserInfo *)doCopySex:(APICInt * _Nullable)sex uid:(APICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar isVip:(APICInt * _Nullable)isVip nickname:(NSString * _Nullable)nickname __attribute__((swift_name("doCopy(sex:uid:avatar:isVip:nickname:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_vip")
*/
@property (readonly) APICInt * _Nullable isVip __attribute__((swift_name("isVip")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sex")
*/
@property (readonly) APICInt * _Nullable sex __attribute__((swift_name("sex")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) APICInt * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200ResponseDataUserInfo.Companion")))
@interface APICPostAppInit200ResponseDataUserInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppInit200ResponseDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppOpen200Response")))
@interface APICPostAppOpen200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok __attribute__((swift_name("init(ok:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppOpen200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppOpen200Response *)doCopyOk:(APICInt * _Nullable)ok __attribute__((swift_name("doCopy(ok:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppOpen200Response.Companion")))
@interface APICPostAppOpen200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppOpen200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCancel200Response")))
@interface APICPostAppleCancel200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok __attribute__((swift_name("init(ok:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppleCancel200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppleCancel200Response *)doCopyOk:(APICInt * _Nullable)ok __attribute__((swift_name("doCopy(ok:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCancel200Response.Companion")))
@interface APICPostAppleCancel200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleCancel200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCancelRequest")))
@interface APICPostAppleCancelRequest : APICBase
- (instancetype)initWithTranNo:(NSString *)tranNo status:(APICInt * _Nullable)status errorCode:(APICInt * _Nullable)errorCode __attribute__((swift_name("init(tranNo:status:errorCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppleCancelRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppleCancelRequest *)doCopyTranNo:(NSString *)tranNo status:(APICInt * _Nullable)status errorCode:(APICInt * _Nullable)errorCode __attribute__((swift_name("doCopy(tranNo:status:errorCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="errorCode")
*/
@property (readonly) APICInt * _Nullable errorCode __attribute__((swift_name("errorCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) APICInt * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tran_no")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *tranNo __attribute__((swift_name("tranNo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCancelRequest.Companion")))
@interface APICPostAppleCancelRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleCancelRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200Response")))
@interface APICPostAppleCreate200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICPostAppleCreate200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppleCreate200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppleCreate200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICPostAppleCreate200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostAppleCreate200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200Response.Companion")))
@interface APICPostAppleCreate200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleCreate200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200ResponseData")))
@interface APICPostAppleCreate200ResponseData : APICBase
- (instancetype)initWithTranNo:(NSString * _Nullable)tranNo payItem:(APICPostAppleCreate200ResponseDataPayItem * _Nullable)payItem productType:(APICInt * _Nullable)productType __attribute__((swift_name("init(tranNo:payItem:productType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppleCreate200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppleCreate200ResponseData *)doCopyTranNo:(NSString * _Nullable)tranNo payItem:(APICPostAppleCreate200ResponseDataPayItem * _Nullable)payItem productType:(APICInt * _Nullable)productType __attribute__((swift_name("doCopy(tranNo:payItem:productType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pay_item")
*/
@property (readonly) APICPostAppleCreate200ResponseDataPayItem * _Nullable payItem __attribute__((swift_name("payItem")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) APICInt * _Nullable productType __attribute__((swift_name("productType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tran_no")
*/
@property (readonly) NSString * _Nullable tranNo __attribute__((swift_name("tranNo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200ResponseData.Companion")))
@interface APICPostAppleCreate200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleCreate200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200ResponseDataPayItem")))
@interface APICPostAppleCreate200ResponseDataPayItem : APICBase
- (instancetype)initWithId:(APICInt * _Nullable)id sku:(NSString * _Nullable)sku days:(APICInt * _Nullable)days money:(NSString * _Nullable)money title:(NSString * _Nullable)title productType:(APICInt * _Nullable)productType __attribute__((swift_name("init(id:sku:days:money:title:productType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppleCreate200ResponseDataPayItemCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppleCreate200ResponseDataPayItem *)doCopyId:(APICInt * _Nullable)id sku:(NSString * _Nullable)sku days:(APICInt * _Nullable)days money:(NSString * _Nullable)money title:(NSString * _Nullable)title productType:(APICInt * _Nullable)productType __attribute__((swift_name("doCopy(id:sku:days:money:title:productType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="days")
*/
@property (readonly) APICInt * _Nullable days __attribute__((swift_name("days")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) APICInt * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="money")
*/
@property (readonly) NSString * _Nullable money __attribute__((swift_name("money")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) APICInt * _Nullable productType __attribute__((swift_name("productType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sku")
*/
@property (readonly) NSString * _Nullable sku __attribute__((swift_name("sku")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200ResponseDataPayItem.Companion")))
@interface APICPostAppleCreate200ResponseDataPayItemCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleCreate200ResponseDataPayItemCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreateRequest")))
@interface APICPostAppleCreateRequest : APICBase
- (instancetype)initWithGoodsId:(int32_t)goodsId productType:(APICInt * _Nullable)productType __attribute__((swift_name("init(goodsId:productType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppleCreateRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppleCreateRequest *)doCopyGoodsId:(int32_t)goodsId productType:(APICInt * _Nullable)productType __attribute__((swift_name("doCopy(goodsId:productType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="goods_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t goodsId __attribute__((swift_name("goodsId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) APICInt * _Nullable productType __attribute__((swift_name("productType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreateRequest.Companion")))
@interface APICPostAppleCreateRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreateRequest.ProductType")))
@interface APICPostAppleCreateRequestProductType : APICKotlinEnum<APICPostAppleCreateRequestProductType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostAppleCreateRequestProductTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostAppleCreateRequestProductType *golden __attribute__((swift_name("golden")));
@property (class, readonly) APICPostAppleCreateRequestProductType *vip __attribute__((swift_name("vip")));
+ (APICKotlinArray<APICPostAppleCreateRequestProductType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostAppleCreateRequestProductType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreateRequest.ProductTypeCompanion")))
@interface APICPostAppleCreateRequestProductTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleCreateRequestProductTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200Response")))
@interface APICPostAppleVerify200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICPostAppleVerify200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppleVerify200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppleVerify200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICPostAppleVerify200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostAppleVerify200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200Response.Companion")))
@interface APICPostAppleVerify200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleVerify200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseData")))
@interface APICPostAppleVerify200ResponseData : APICBase
- (instancetype)initWithMoney:(NSString * _Nullable)money goodsId:(APICInt * _Nullable)goodsId userInfo:(APICPostAppleVerify200ResponseDataUserInfo * _Nullable)userInfo isSandbox:(APICInt * _Nullable)isSandbox accountInfo:(APICPostAppleVerify200ResponseDataAccountInfo * _Nullable)accountInfo productType:(APICInt * _Nullable)productType __attribute__((swift_name("init(money:goodsId:userInfo:isSandbox:accountInfo:productType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppleVerify200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppleVerify200ResponseData *)doCopyMoney:(NSString * _Nullable)money goodsId:(APICInt * _Nullable)goodsId userInfo:(APICPostAppleVerify200ResponseDataUserInfo * _Nullable)userInfo isSandbox:(APICInt * _Nullable)isSandbox accountInfo:(APICPostAppleVerify200ResponseDataAccountInfo * _Nullable)accountInfo productType:(APICInt * _Nullable)productType __attribute__((swift_name("doCopy(money:goodsId:userInfo:isSandbox:accountInfo:productType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_info")
*/
@property (readonly) APICPostAppleVerify200ResponseDataAccountInfo * _Nullable accountInfo __attribute__((swift_name("accountInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="goods_id")
*/
@property (readonly) APICInt * _Nullable goodsId __attribute__((swift_name("goodsId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_sandbox")
*/
@property (readonly) APICInt * _Nullable isSandbox __attribute__((swift_name("isSandbox")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="money")
*/
@property (readonly) NSString * _Nullable money __attribute__((swift_name("money")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) APICInt * _Nullable productType __attribute__((swift_name("productType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICPostAppleVerify200ResponseDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseData.Companion")))
@interface APICPostAppleVerify200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleVerify200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseDataAccountInfo")))
@interface APICPostAppleVerify200ResponseDataAccountInfo : APICBase
- (instancetype)initWithMoney:(APICInt * _Nullable)money __attribute__((swift_name("init(money:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppleVerify200ResponseDataAccountInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppleVerify200ResponseDataAccountInfo *)doCopyMoney:(APICInt * _Nullable)money __attribute__((swift_name("doCopy(money:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="money")
*/
@property (readonly) APICInt * _Nullable money __attribute__((swift_name("money")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseDataAccountInfo.Companion")))
@interface APICPostAppleVerify200ResponseDataAccountInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleVerify200ResponseDataAccountInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseDataUserInfo")))
@interface APICPostAppleVerify200ResponseDataUserInfo : APICBase
- (instancetype)initWithUid:(APICInt * _Nullable)uid isVip:(APICInt * _Nullable)isVip vipExp:(NSString * _Nullable)vipExp nickname:(NSString * _Nullable)nickname __attribute__((swift_name("init(uid:isVip:vipExp:nickname:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppleVerify200ResponseDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppleVerify200ResponseDataUserInfo *)doCopyUid:(APICInt * _Nullable)uid isVip:(APICInt * _Nullable)isVip vipExp:(NSString * _Nullable)vipExp nickname:(NSString * _Nullable)nickname __attribute__((swift_name("doCopy(uid:isVip:vipExp:nickname:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_vip")
*/
@property (readonly) APICInt * _Nullable isVip __attribute__((swift_name("isVip")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) APICInt * _Nullable uid __attribute__((swift_name("uid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vip_exp")
*/
@property (readonly) NSString * _Nullable vipExp __attribute__((swift_name("vipExp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseDataUserInfo.Companion")))
@interface APICPostAppleVerify200ResponseDataUserInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleVerify200ResponseDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerifyRequest")))
@interface APICPostAppleVerifyRequest : APICBase
- (instancetype)initWithTranNo:(NSString *)tranNo productId:(NSString * _Nullable)productId productType:(APICInt * _Nullable)productType receiptData:(NSString * _Nullable)receiptData transactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("init(tranNo:productId:productType:receiptData:transactionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostAppleVerifyRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostAppleVerifyRequest *)doCopyTranNo:(NSString *)tranNo productId:(NSString * _Nullable)productId productType:(APICInt * _Nullable)productType receiptData:(NSString * _Nullable)receiptData transactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("doCopy(tranNo:productId:productType:receiptData:transactionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_id")
*/
@property (readonly) NSString * _Nullable productId __attribute__((swift_name("productId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) APICInt * _Nullable productType __attribute__((swift_name("productType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="receipt_data")
*/
@property (readonly) NSString * _Nullable receiptData __attribute__((swift_name("receiptData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tran_no")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *tranNo __attribute__((swift_name("tranNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transaction_id")
*/
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerifyRequest.Companion")))
@interface APICPostAppleVerifyRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleVerifyRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerifyRequest.ProductType")))
@interface APICPostAppleVerifyRequestProductType : APICKotlinEnum<APICPostAppleVerifyRequestProductType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostAppleVerifyRequestProductTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostAppleVerifyRequestProductType *golden __attribute__((swift_name("golden")));
@property (class, readonly) APICPostAppleVerifyRequestProductType *vip __attribute__((swift_name("vip")));
+ (APICKotlinArray<APICPostAppleVerifyRequestProductType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostAppleVerifyRequestProductType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerifyRequest.ProductTypeCompanion")))
@interface APICPostAppleVerifyRequestProductTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostAppleVerifyRequestProductTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailResetPasswordRequest")))
@interface APICPostEmailResetPasswordRequest : APICBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("init(email:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostEmailResetPasswordRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostEmailResetPasswordRequest *)doCopyEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("doCopy(email:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailResetPasswordRequest.Companion")))
@interface APICPostEmailResetPasswordRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostEmailResetPasswordRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCode200Response")))
@interface APICPostEmailSendCode200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostEmailSendCode200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostEmailSendCode200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCode200Response.Companion")))
@interface APICPostEmailSendCode200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostEmailSendCode200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCodeRequest")))
@interface APICPostEmailSendCodeRequest : APICBase
- (instancetype)initWithType:(int32_t)type email:(NSString *)email __attribute__((swift_name("init(type:email:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostEmailSendCodeRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostEmailSendCodeRequest *)doCopyType:(int32_t)type email:(NSString *)email __attribute__((swift_name("doCopy(type:email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCodeRequest.Companion")))
@interface APICPostEmailSendCodeRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostEmailSendCodeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCodeRequest.Type_")))
@interface APICPostEmailSendCodeRequestType : APICKotlinEnum<APICPostEmailSendCodeRequestType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostEmailSendCodeRequestTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostEmailSendCodeRequestType *registerverify __attribute__((swift_name("registerverify")));
@property (class, readonly) APICPostEmailSendCodeRequestType *forgetpassword __attribute__((swift_name("forgetpassword")));
@property (class, readonly) APICPostEmailSendCodeRequestType *bindemail __attribute__((swift_name("bindemail")));
+ (APICKotlinArray<APICPostEmailSendCodeRequestType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostEmailSendCodeRequestType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCodeRequest.Type_Companion")))
@interface APICPostEmailSendCodeRequestTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostEmailSendCodeRequestTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCode200Response")))
@interface APICPostEmailVerifyCode200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostEmailVerifyCode200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostEmailVerifyCode200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCode200Response.Companion")))
@interface APICPostEmailVerifyCode200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostEmailVerifyCode200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCodeRequest")))
@interface APICPostEmailVerifyCodeRequest : APICBase
- (instancetype)initWithCode:(NSString *)code email:(NSString *)email fromType:(int32_t)fromType __attribute__((swift_name("init(code:email:fromType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostEmailVerifyCodeRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostEmailVerifyCodeRequest *)doCopyCode:(NSString *)code email:(NSString *)email fromType:(int32_t)fromType __attribute__((swift_name("doCopy(code:email:fromType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="code")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *code __attribute__((swift_name("code")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="from_type")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t fromType __attribute__((swift_name("fromType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCodeRequest.Companion")))
@interface APICPostEmailVerifyCodeRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostEmailVerifyCodeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCodeRequest.FromType")))
@interface APICPostEmailVerifyCodeRequestFromType : APICKotlinEnum<APICPostEmailVerifyCodeRequestFromType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostEmailVerifyCodeRequestFromTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostEmailVerifyCodeRequestFromType *registerverify __attribute__((swift_name("registerverify")));
@property (class, readonly) APICPostEmailVerifyCodeRequestFromType *forgetpassword __attribute__((swift_name("forgetpassword")));
@property (class, readonly) APICPostEmailVerifyCodeRequestFromType *bindemail __attribute__((swift_name("bindemail")));
+ (APICKotlinArray<APICPostEmailVerifyCodeRequestFromType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostEmailVerifyCodeRequestFromType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCodeRequest.FromTypeCompanion")))
@interface APICPostEmailVerifyCodeRequestFromTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostEmailVerifyCodeRequestFromTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmit200Response")))
@interface APICPostFeedbackSubmit200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostFeedbackSubmit200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostFeedbackSubmit200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmit200Response.Companion")))
@interface APICPostFeedbackSubmit200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostFeedbackSubmit200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmitRequest")))
@interface APICPostFeedbackSubmitRequest : APICBase
- (instancetype)initWithPhotos:(NSArray<APICPostFeedbackSubmitRequestPhotosInner *> * _Nullable)photos content:(NSString * _Nullable)content __attribute__((swift_name("init(photos:content:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostFeedbackSubmitRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostFeedbackSubmitRequest *)doCopyPhotos:(NSArray<APICPostFeedbackSubmitRequestPhotosInner *> * _Nullable)photos content:(NSString * _Nullable)content __attribute__((swift_name("doCopy(photos:content:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="photos")
*/
@property (readonly) NSArray<APICPostFeedbackSubmitRequestPhotosInner *> * _Nullable photos __attribute__((swift_name("photos")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmitRequest.Companion")))
@interface APICPostFeedbackSubmitRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostFeedbackSubmitRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmitRequestPhotosInner")))
@interface APICPostFeedbackSubmitRequestPhotosInner : APICBase
- (instancetype)initWithUrl:(NSString *)url width:(APICInt * _Nullable)width height:(APICInt * _Nullable)height __attribute__((swift_name("init(url:width:height:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostFeedbackSubmitRequestPhotosInnerCompanion *companion __attribute__((swift_name("companion")));
- (APICPostFeedbackSubmitRequestPhotosInner *)doCopyUrl:(NSString *)url width:(APICInt * _Nullable)width height:(APICInt * _Nullable)height __attribute__((swift_name("doCopy(url:width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) APICInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) APICInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmitRequestPhotosInner.Companion")))
@interface APICPostFeedbackSubmitRequestPhotosInnerCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostFeedbackSubmitRequestPhotosInnerCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200Response")))
@interface APICPostGoogleVerify200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(NSString * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostGoogleVerify200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostGoogleVerify200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(NSString * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200Response.Companion")))
@interface APICPostGoogleVerify200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostGoogleVerify200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOf")))
@interface APICPostGoogleVerify200ResponseOneOf : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostGoogleVerify200ResponseOneOfData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostGoogleVerify200ResponseOneOfCompanion *companion __attribute__((swift_name("companion")));
- (APICPostGoogleVerify200ResponseOneOf *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostGoogleVerify200ResponseOneOfData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostGoogleVerify200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOf.Companion")))
@interface APICPostGoogleVerify200ResponseOneOfCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostGoogleVerify200ResponseOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOf1")))
@interface APICPostGoogleVerify200ResponseOneOf1 : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(NSString * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostGoogleVerify200ResponseOneOf1Companion *companion __attribute__((swift_name("companion")));
- (APICPostGoogleVerify200ResponseOneOf1 *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(NSString * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOf1.Companion")))
@interface APICPostGoogleVerify200ResponseOneOf1Companion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostGoogleVerify200ResponseOneOf1Companion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOfData")))
@interface APICPostGoogleVerify200ResponseOneOfData : APICBase
- (instancetype)initWithName:(NSString * _Nullable)name email:(NSString * _Nullable)email channel:(NSString * _Nullable)channel picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("init(name:email:channel:picture:googleId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostGoogleVerify200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostGoogleVerify200ResponseOneOfData *)doCopyName:(NSString * _Nullable)name email:(NSString * _Nullable)email channel:(NSString * _Nullable)channel picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("doCopy(name:email:channel:picture:googleId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel")
*/
@property (readonly) NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="google_id")
*/
@property (readonly) NSString * _Nullable googleId __attribute__((swift_name("googleId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="picture")
*/
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOfData.Companion")))
@interface APICPostGoogleVerify200ResponseOneOfDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostGoogleVerify200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerifyRequest")))
@interface APICPostGoogleVerifyRequest : APICBase
- (instancetype)initWithChannel:(APICPostGoogleVerifyRequestChannel *)channel idToken:(NSString *)idToken __attribute__((swift_name("init(channel:idToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostGoogleVerifyRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostGoogleVerifyRequest *)doCopyChannel:(APICPostGoogleVerifyRequestChannel *)channel idToken:(NSString *)idToken __attribute__((swift_name("doCopy(channel:idToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICPostGoogleVerifyRequestChannel *channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_token")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *idToken __attribute__((swift_name("idToken")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerifyRequest.Channel")))
@interface APICPostGoogleVerifyRequestChannel : APICKotlinEnum<APICPostGoogleVerifyRequestChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostGoogleVerifyRequestChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostGoogleVerifyRequestChannel *comperiodaimusicperiodhomeperioda __attribute__((swift_name("comperiodaimusicperiodhomeperioda")));
@property (class, readonly) APICPostGoogleVerifyRequestChannel *comperiodaimusicperiodhome __attribute__((swift_name("comperiodaimusicperiodhome")));
+ (APICKotlinArray<APICPostGoogleVerifyRequestChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostGoogleVerifyRequestChannel *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerifyRequest.ChannelCompanion")))
@interface APICPostGoogleVerifyRequestChannelCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostGoogleVerifyRequestChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerifyRequest.Companion")))
@interface APICPostGoogleVerifyRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostGoogleVerifyRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfile200Response")))
@interface APICPostLoginCompleteProfile200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostLoginCompleteProfile200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginCompleteProfile200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginCompleteProfile200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostLoginCompleteProfile200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostLoginCompleteProfile200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfile200Response.Companion")))
@interface APICPostLoginCompleteProfile200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginCompleteProfile200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfile200ResponseData")))
@interface APICPostLoginCompleteProfile200ResponseData : APICBase
- (instancetype)initWithUid:(APICInt * _Nullable)uid step:(APICInt * _Nullable)step userInfo:(APICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable)userInfo __attribute__((swift_name("init(uid:step:userInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginCompleteProfile200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginCompleteProfile200ResponseData *)doCopyUid:(APICInt * _Nullable)uid step:(APICInt * _Nullable)step userInfo:(APICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable)userInfo __attribute__((swift_name("doCopy(uid:step:userInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="step")
*/
@property (readonly) APICInt * _Nullable step __attribute__((swift_name("step")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) APICInt * _Nullable uid __attribute__((swift_name("uid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfile200ResponseData.Companion")))
@interface APICPostLoginCompleteProfile200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginCompleteProfile200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfileRequest")))
@interface APICPostLoginCompleteProfileRequest : APICBase
- (instancetype)initWithNickname:(NSString *)nickname avatar:(NSString * _Nullable)avatar __attribute__((swift_name("init(nickname:avatar:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginCompleteProfileRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginCompleteProfileRequest *)doCopyNickname:(NSString *)nickname avatar:(NSString * _Nullable)avatar __attribute__((swift_name("doCopy(nickname:avatar:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *nickname __attribute__((swift_name("nickname")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfileRequest.Companion")))
@interface APICPostLoginCompleteProfileRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginCompleteProfileRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginDeleteAccount200Response")))
@interface APICPostLoginDeleteAccount200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginDeleteAccount200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginDeleteAccount200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginDeleteAccount200Response.Companion")))
@interface APICPostLoginDeleteAccount200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginDeleteAccount200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200Response")))
@interface APICPostLoginHandle200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICPostLoginHandle200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginHandle200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginHandle200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICPostLoginHandle200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostLoginHandle200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200Response.Companion")))
@interface APICPostLoginHandle200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginHandle200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfData")))
@interface APICPostLoginHandle200ResponseOneOfData : APICBase
- (instancetype)initWithStep:(APICInt * _Nullable)step token:(NSString * _Nullable)token userInfo:(APICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable)userInfo appleInfo:(APICPostLoginHandle200ResponseOneOfDataAppleInfo * _Nullable)appleInfo googleInfo:(APICPostLoginHandle200ResponseOneOfDataGoogleInfo * _Nullable)googleInfo __attribute__((swift_name("init(step:token:userInfo:appleInfo:googleInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginHandle200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginHandle200ResponseOneOfData *)doCopyStep:(APICInt * _Nullable)step token:(NSString * _Nullable)token userInfo:(APICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable)userInfo appleInfo:(APICPostLoginHandle200ResponseOneOfDataAppleInfo * _Nullable)appleInfo googleInfo:(APICPostLoginHandle200ResponseOneOfDataGoogleInfo * _Nullable)googleInfo __attribute__((swift_name("doCopy(step:token:userInfo:appleInfo:googleInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_info")
*/
@property (readonly) APICPostLoginHandle200ResponseOneOfDataAppleInfo * _Nullable appleInfo __attribute__((swift_name("appleInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="google_info")
*/
@property (readonly) APICPostLoginHandle200ResponseOneOfDataGoogleInfo * _Nullable googleInfo __attribute__((swift_name("googleInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="step")
*/
@property (readonly) APICInt * _Nullable step __attribute__((swift_name("step")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfData.Companion")))
@interface APICPostLoginHandle200ResponseOneOfDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginHandle200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataAppleInfo")))
@interface APICPostLoginHandle200ResponseOneOfDataAppleInfo : APICBase
- (instancetype)initWithEmail:(NSString * _Nullable)email fullName:(NSString * _Nullable)fullName appleUserId:(NSString * _Nullable)appleUserId __attribute__((swift_name("init(email:fullName:appleUserId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginHandle200ResponseOneOfDataAppleInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginHandle200ResponseOneOfDataAppleInfo *)doCopyEmail:(NSString * _Nullable)email fullName:(NSString * _Nullable)fullName appleUserId:(NSString * _Nullable)appleUserId __attribute__((swift_name("doCopy(email:fullName:appleUserId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_user_id")
*/
@property (readonly) NSString * _Nullable appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="full_name")
*/
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataAppleInfo.Companion")))
@interface APICPostLoginHandle200ResponseOneOfDataAppleInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginHandle200ResponseOneOfDataAppleInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataGoogleInfo")))
@interface APICPostLoginHandle200ResponseOneOfDataGoogleInfo : APICBase
- (instancetype)initWithName:(NSString * _Nullable)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("init(name:email:picture:googleId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginHandle200ResponseOneOfDataGoogleInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginHandle200ResponseOneOfDataGoogleInfo *)doCopyName:(NSString * _Nullable)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("doCopy(name:email:picture:googleId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="google_id")
*/
@property (readonly) NSString * _Nullable googleId __attribute__((swift_name("googleId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="picture")
*/
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataGoogleInfo.Companion")))
@interface APICPostLoginHandle200ResponseOneOfDataGoogleInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginHandle200ResponseOneOfDataGoogleInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataUserInfo")))
@interface APICPostLoginHandle200ResponseOneOfDataUserInfo : APICBase
- (instancetype)initWithUid:(APICInt * _Nullable)uid email:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname balance:(APICLong * _Nullable)balance isCheckingName:(APICBoolean * _Nullable)isCheckingName isCheckingFace:(APICBoolean * _Nullable)isCheckingFace __attribute__((swift_name("init(uid:email:avatar:nickname:balance:isCheckingName:isCheckingFace:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginHandle200ResponseOneOfDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginHandle200ResponseOneOfDataUserInfo *)doCopyUid:(APICInt * _Nullable)uid email:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname balance:(APICLong * _Nullable)balance isCheckingName:(APICBoolean * _Nullable)isCheckingName isCheckingFace:(APICBoolean * _Nullable)isCheckingFace __attribute__((swift_name("doCopy(uid:email:avatar:nickname:balance:isCheckingName:isCheckingFace:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balance")
*/
@property (readonly) APICLong * _Nullable balance __attribute__((swift_name("balance")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="checking_face")
*/
@property (readonly) APICBoolean * _Nullable isCheckingFace __attribute__((swift_name("isCheckingFace")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="checking_name")
*/
@property (readonly) APICBoolean * _Nullable isCheckingName __attribute__((swift_name("isCheckingName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) APICInt * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataUserInfo.Companion")))
@interface APICPostLoginHandle200ResponseOneOfDataUserInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginHandle200ResponseOneOfDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequest")))
@interface APICPostLoginHandleRequest : APICBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password loginFrom:(int32_t)loginFrom userInfo:(APICAppleUserInfo * _Nullable)userInfo __attribute__((swift_name("init(email:password:loginFrom:userInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginHandleRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginHandleRequest *)doCopyEmail:(NSString *)email password:(NSString *)password loginFrom:(int32_t)loginFrom userInfo:(APICAppleUserInfo * _Nullable)userInfo __attribute__((swift_name("doCopy(email:password:loginFrom:userInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="login_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t loginFrom __attribute__((swift_name("loginFrom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICAppleUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequest.Companion")))
@interface APICPostLoginHandleRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginHandleRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequest.LoginFrom")))
@interface APICPostLoginHandleRequestLoginFrom : APICKotlinEnum<APICPostLoginHandleRequestLoginFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostLoginHandleRequestLoginFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostLoginHandleRequestLoginFrom *email __attribute__((swift_name("email")));
@property (class, readonly) APICPostLoginHandleRequestLoginFrom *apple __attribute__((swift_name("apple")));
+ (APICKotlinArray<APICPostLoginHandleRequestLoginFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostLoginHandleRequestLoginFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequest.LoginFromCompanion")))
@interface APICPostLoginHandleRequestLoginFromCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginHandleRequestLoginFromCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200Response")))
@interface APICPostLoginRegister200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICPostLoginRegister200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginRegister200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginRegister200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICPostLoginRegister200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostLoginRegister200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200Response.Companion")))
@interface APICPostLoginRegister200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginRegister200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfData")))
@interface APICPostLoginRegister200ResponseOneOfData : APICBase
- (instancetype)initWithToken:(NSString * _Nullable)token userInfo:(APICPostLoginRegister200ResponseOneOfDataUserInfo * _Nullable)userInfo appleInfo:(APICPostLoginRegister200ResponseOneOfDataAppleInfo * _Nullable)appleInfo googleInfo:(APICPostLoginRegister200ResponseOneOfDataGoogleInfo * _Nullable)googleInfo ipCountryCode:(NSString * _Nullable)ipCountryCode __attribute__((swift_name("init(token:userInfo:appleInfo:googleInfo:ipCountryCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginRegister200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginRegister200ResponseOneOfData *)doCopyToken:(NSString * _Nullable)token userInfo:(APICPostLoginRegister200ResponseOneOfDataUserInfo * _Nullable)userInfo appleInfo:(APICPostLoginRegister200ResponseOneOfDataAppleInfo * _Nullable)appleInfo googleInfo:(APICPostLoginRegister200ResponseOneOfDataGoogleInfo * _Nullable)googleInfo ipCountryCode:(NSString * _Nullable)ipCountryCode __attribute__((swift_name("doCopy(token:userInfo:appleInfo:googleInfo:ipCountryCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_info")
*/
@property (readonly) APICPostLoginRegister200ResponseOneOfDataAppleInfo * _Nullable appleInfo __attribute__((swift_name("appleInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="google_info")
*/
@property (readonly) APICPostLoginRegister200ResponseOneOfDataGoogleInfo * _Nullable googleInfo __attribute__((swift_name("googleInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ip_country_code")
*/
@property (readonly) NSString * _Nullable ipCountryCode __attribute__((swift_name("ipCountryCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICPostLoginRegister200ResponseOneOfDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfData.Companion")))
@interface APICPostLoginRegister200ResponseOneOfDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginRegister200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataAppleInfo")))
@interface APICPostLoginRegister200ResponseOneOfDataAppleInfo : APICBase
- (instancetype)initWithEmail:(NSString * _Nullable)email fullName:(NSString * _Nullable)fullName appleUserId:(NSString * _Nullable)appleUserId __attribute__((swift_name("init(email:fullName:appleUserId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginRegister200ResponseOneOfDataAppleInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginRegister200ResponseOneOfDataAppleInfo *)doCopyEmail:(NSString * _Nullable)email fullName:(NSString * _Nullable)fullName appleUserId:(NSString * _Nullable)appleUserId __attribute__((swift_name("doCopy(email:fullName:appleUserId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_user_id")
*/
@property (readonly) NSString * _Nullable appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="full_name")
*/
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataAppleInfo.Companion")))
@interface APICPostLoginRegister200ResponseOneOfDataAppleInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginRegister200ResponseOneOfDataAppleInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataGoogleInfo")))
@interface APICPostLoginRegister200ResponseOneOfDataGoogleInfo : APICBase
- (instancetype)initWithName:(NSString * _Nullable)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("init(name:email:picture:googleId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginRegister200ResponseOneOfDataGoogleInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginRegister200ResponseOneOfDataGoogleInfo *)doCopyName:(NSString * _Nullable)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("doCopy(name:email:picture:googleId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="google_id")
*/
@property (readonly) NSString * _Nullable googleId __attribute__((swift_name("googleId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="picture")
*/
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataGoogleInfo.Companion")))
@interface APICPostLoginRegister200ResponseOneOfDataGoogleInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginRegister200ResponseOneOfDataGoogleInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataUserInfo")))
@interface APICPostLoginRegister200ResponseOneOfDataUserInfo : APICBase
- (instancetype)initWithUid:(APICInt * _Nullable)uid email:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname balance:(APICLong * _Nullable)balance __attribute__((swift_name("init(uid:email:avatar:nickname:balance:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginRegister200ResponseOneOfDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginRegister200ResponseOneOfDataUserInfo *)doCopyUid:(APICInt * _Nullable)uid email:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname balance:(APICLong * _Nullable)balance __attribute__((swift_name("doCopy(uid:email:avatar:nickname:balance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balance")
*/
@property (readonly) APICLong * _Nullable balance __attribute__((swift_name("balance")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) APICInt * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataUserInfo.Companion")))
@interface APICPostLoginRegister200ResponseOneOfDataUserInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginRegister200ResponseOneOfDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest")))
@interface APICPostLoginRegisterRequest : APICBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password registerFrom:(int32_t)registerFrom channel:(APICPostLoginRegisterRequestChannel * _Nullable)channel idToken:(NSString * _Nullable)idToken appleUserId:(NSString * _Nullable)appleUserId userInfo:(APICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("init(email:password:registerFrom:channel:idToken:appleUserId:userInfo:identityToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginRegisterRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginRegisterRequest *)doCopyEmail:(NSString *)email password:(NSString *)password registerFrom:(int32_t)registerFrom channel:(APICPostLoginRegisterRequestChannel * _Nullable)channel idToken:(NSString * _Nullable)idToken appleUserId:(NSString * _Nullable)appleUserId userInfo:(APICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("doCopy(email:password:registerFrom:channel:idToken:appleUserId:userInfo:identityToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_user_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString * _Nullable appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICPostLoginRegisterRequestChannel * _Nullable channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_token")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString * _Nullable idToken __attribute__((swift_name("idToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="identity_token")
*/
@property (readonly) NSString * _Nullable identityToken __attribute__((swift_name("identityToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="register_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t registerFrom __attribute__((swift_name("registerFrom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICAppleUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest.Channel")))
@interface APICPostLoginRegisterRequestChannel : APICKotlinEnum<APICPostLoginRegisterRequestChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostLoginRegisterRequestChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostLoginRegisterRequestChannel *comperiodaimusicperiodhomeperioda __attribute__((swift_name("comperiodaimusicperiodhomeperioda")));
@property (class, readonly) APICPostLoginRegisterRequestChannel *comperiodaimusicperiodhome __attribute__((swift_name("comperiodaimusicperiodhome")));
+ (APICKotlinArray<APICPostLoginRegisterRequestChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostLoginRegisterRequestChannel *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest.ChannelCompanion")))
@interface APICPostLoginRegisterRequestChannelCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginRegisterRequestChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest.Companion")))
@interface APICPostLoginRegisterRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginRegisterRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest.RegisterFrom")))
@interface APICPostLoginRegisterRequestRegisterFrom : APICKotlinEnum<APICPostLoginRegisterRequestRegisterFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostLoginRegisterRequestRegisterFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostLoginRegisterRequestRegisterFrom *email __attribute__((swift_name("email")));
@property (class, readonly) APICPostLoginRegisterRequestRegisterFrom *google __attribute__((swift_name("google")));
@property (class, readonly) APICPostLoginRegisterRequestRegisterFrom *apple __attribute__((swift_name("apple")));
+ (APICKotlinArray<APICPostLoginRegisterRequestRegisterFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostLoginRegisterRequestRegisterFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest.RegisterFromCompanion")))
@interface APICPostLoginRegisterRequestRegisterFromCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginRegisterRequestRegisterFromCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequestOneOf")))
@interface APICPostLoginRegisterRequestOneOf : APICBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password registerFrom:(APICPostLoginRegisterRequestOneOfRegisterFrom * _Nullable)registerFrom __attribute__((swift_name("init(email:password:registerFrom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostLoginRegisterRequestOneOfCompanion *companion __attribute__((swift_name("companion")));
- (APICPostLoginRegisterRequestOneOf *)doCopyEmail:(NSString *)email password:(NSString *)password registerFrom:(APICPostLoginRegisterRequestOneOfRegisterFrom * _Nullable)registerFrom __attribute__((swift_name("doCopy(email:password:registerFrom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="register_from")
*/
@property (readonly) APICPostLoginRegisterRequestOneOfRegisterFrom * _Nullable registerFrom __attribute__((swift_name("registerFrom")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequestOneOf.Companion")))
@interface APICPostLoginRegisterRequestOneOfCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginRegisterRequestOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequestOneOf.RegisterFrom")))
@interface APICPostLoginRegisterRequestOneOfRegisterFrom : APICKotlinEnum<APICPostLoginRegisterRequestOneOfRegisterFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostLoginRegisterRequestOneOfRegisterFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostLoginRegisterRequestOneOfRegisterFrom *email __attribute__((swift_name("email")));
+ (APICKotlinArray<APICPostLoginRegisterRequestOneOfRegisterFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostLoginRegisterRequestOneOfRegisterFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequestOneOf.RegisterFromCompanion")))
@interface APICPostLoginRegisterRequestOneOfRegisterFromCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostLoginRegisterRequestOneOfRegisterFromCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200Response")))
@interface APICPostMusicCreate200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostMusicCreate200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicCreate200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicCreate200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostMusicCreate200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostMusicCreate200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200Response.Companion")))
@interface APICPostMusicCreate200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicCreate200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200ResponseData")))
@interface APICPostMusicCreate200ResponseData : APICBase
- (instancetype)initWithStatus:(APICInt * _Nullable)status musicId:(APICInt * _Nullable)musicId mockData:(APICPostMusicCreate200ResponseDataMockData * _Nullable)mockData __attribute__((swift_name("init(status:musicId:mockData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicCreate200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicCreate200ResponseData *)doCopyStatus:(APICInt * _Nullable)status musicId:(APICInt * _Nullable)musicId mockData:(APICPostMusicCreate200ResponseDataMockData * _Nullable)mockData __attribute__((swift_name("doCopy(status:musicId:mockData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mock_data")
*/
@property (readonly) APICPostMusicCreate200ResponseDataMockData * _Nullable mockData __attribute__((swift_name("mockData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) APICInt * _Nullable musicId __attribute__((swift_name("musicId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) APICInt * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200ResponseData.Companion")))
@interface APICPostMusicCreate200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicCreate200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200ResponseDataMockData")))
@interface APICPostMusicCreate200ResponseDataMockData : APICBase
- (instancetype)initWithFormat:(NSString * _Nullable)format duration:(APICInt * _Nullable)duration audioUrl:(NSString * _Nullable)audioUrl coverUrl:(NSString * _Nullable)coverUrl fileSize:(NSString * _Nullable)fileSize createdAt:(APICKotlinx_datetimeInstant * _Nullable)createdAt likeCount:(APICInt * _Nullable)likeCount __attribute__((swift_name("init(format:duration:audioUrl:coverUrl:fileSize:createdAt:likeCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicCreate200ResponseDataMockDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicCreate200ResponseDataMockData *)doCopyFormat:(NSString * _Nullable)format duration:(APICInt * _Nullable)duration audioUrl:(NSString * _Nullable)audioUrl coverUrl:(NSString * _Nullable)coverUrl fileSize:(NSString * _Nullable)fileSize createdAt:(APICKotlinx_datetimeInstant * _Nullable)createdAt likeCount:(APICInt * _Nullable)likeCount __attribute__((swift_name("doCopy(format:duration:audioUrl:coverUrl:fileSize:createdAt:likeCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="audio_url")
*/
@property (readonly) NSString * _Nullable audioUrl __attribute__((swift_name("audioUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_url")
*/
@property (readonly) NSString * _Nullable coverUrl __attribute__((swift_name("coverUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) APICKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="duration")
*/
@property (readonly) APICInt * _Nullable duration __attribute__((swift_name("duration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="file_size")
*/
@property (readonly) NSString * _Nullable fileSize __attribute__((swift_name("fileSize")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="format")
*/
@property (readonly) NSString * _Nullable format __attribute__((swift_name("format")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like_count")
*/
@property (readonly) APICInt * _Nullable likeCount __attribute__((swift_name("likeCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200ResponseDataMockData.Companion")))
@interface APICPostMusicCreate200ResponseDataMockDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicCreate200ResponseDataMockDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreateRequest")))
@interface APICPostMusicCreateRequest : APICBase
- (instancetype)initWithMood:(NSArray<APICInt *> * _Nullable)mood intro:(NSString * _Nullable)intro style:(NSArray<APICInt *> * _Nullable)style title:(NSString * _Nullable)title lyrics:(NSString * _Nullable)lyrics language:(NSArray<APICInt *> * _Nullable)language instrument:(NSArray<APICInt *> * _Nullable)instrument isInstrumental:(APICInt * _Nullable)isInstrumental introPicMediaId:(APICInt * _Nullable)introPicMediaId introVoiceMediaId:(APICInt * _Nullable)introVoiceMediaId __attribute__((swift_name("init(mood:intro:style:title:lyrics:language:instrument:isInstrumental:introPicMediaId:introVoiceMediaId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicCreateRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicCreateRequest *)doCopyMood:(NSArray<APICInt *> * _Nullable)mood intro:(NSString * _Nullable)intro style:(NSArray<APICInt *> * _Nullable)style title:(NSString * _Nullable)title lyrics:(NSString * _Nullable)lyrics language:(NSArray<APICInt *> * _Nullable)language instrument:(NSArray<APICInt *> * _Nullable)instrument isInstrumental:(APICInt * _Nullable)isInstrumental introPicMediaId:(APICInt * _Nullable)introPicMediaId introVoiceMediaId:(APICInt * _Nullable)introVoiceMediaId __attribute__((swift_name("doCopy(mood:intro:style:title:lyrics:language:instrument:isInstrumental:introPicMediaId:introVoiceMediaId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instrument")
*/
@property (readonly) NSArray<APICInt *> * _Nullable instrument __attribute__((swift_name("instrument")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro")
*/
@property (readonly) NSString * _Nullable intro __attribute__((swift_name("intro")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_pic_media_id")
*/
@property (readonly) APICInt * _Nullable introPicMediaId __attribute__((swift_name("introPicMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_voice_media_id")
*/
@property (readonly) APICInt * _Nullable introVoiceMediaId __attribute__((swift_name("introVoiceMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_instrumental")
*/
@property (readonly) APICInt * _Nullable isInstrumental __attribute__((swift_name("isInstrumental")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="language")
*/
@property (readonly) NSArray<APICInt *> * _Nullable language __attribute__((swift_name("language")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lyrics")
*/
@property (readonly) NSString * _Nullable lyrics __attribute__((swift_name("lyrics")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mood")
*/
@property (readonly) NSArray<APICInt *> * _Nullable mood __attribute__((swift_name("mood")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="style")
*/
@property (readonly) NSArray<APICInt *> * _Nullable style __attribute__((swift_name("style")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreateRequest.Companion")))
@interface APICPostMusicCreateRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200Response")))
@interface APICPostMusicDelete200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICPostMusicDelete200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicDelete200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicDelete200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICPostMusicDelete200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostMusicDelete200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200Response.Companion")))
@interface APICPostMusicDelete200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicDelete200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200ResponseOneOfData")))
@interface APICPostMusicDelete200ResponseOneOfData : APICBase
- (instancetype)initWithDeleted:(APICBoolean * _Nullable)deleted message:(NSString * _Nullable)message musicId:(APICInt * _Nullable)musicId __attribute__((swift_name("init(deleted:message:musicId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicDelete200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicDelete200ResponseOneOfData *)doCopyDeleted:(APICBoolean * _Nullable)deleted message:(NSString * _Nullable)message musicId:(APICInt * _Nullable)musicId __attribute__((swift_name("doCopy(deleted:message:musicId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deleted")
*/
@property (readonly) APICBoolean * _Nullable deleted __attribute__((swift_name("deleted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) APICInt * _Nullable musicId __attribute__((swift_name("musicId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200ResponseOneOfData.Companion")))
@interface APICPostMusicDelete200ResponseOneOfDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicDelete200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDownload200Response")))
@interface APICPostMusicDownload200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostMusicDownload200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicDownload200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicDownload200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostMusicDownload200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostMusicDownload200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDownload200Response.Companion")))
@interface APICPostMusicDownload200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicDownload200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDownload200ResponseData")))
@interface APICPostMusicDownload200ResponseData : APICBase
- (instancetype)initWithMessage:(NSString * _Nullable)message musicId:(APICInt * _Nullable)musicId downloaded:(APICBoolean * _Nullable)downloaded __attribute__((swift_name("init(message:musicId:downloaded:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicDownload200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicDownload200ResponseData *)doCopyMessage:(NSString * _Nullable)message musicId:(APICInt * _Nullable)musicId downloaded:(APICBoolean * _Nullable)downloaded __attribute__((swift_name("doCopy(message:musicId:downloaded:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="downloaded")
*/
@property (readonly) APICBoolean * _Nullable downloaded __attribute__((swift_name("downloaded")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) APICInt * _Nullable musicId __attribute__((swift_name("musicId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDownload200ResponseData.Companion")))
@interface APICPostMusicDownload200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicDownload200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicLike200Response")))
@interface APICPostMusicLike200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostMusicLike200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicLike200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicLike200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostMusicLike200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostMusicLike200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicLike200Response.Companion")))
@interface APICPostMusicLike200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicLike200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicLike200ResponseData")))
@interface APICPostMusicLike200ResponseData : APICBase
- (instancetype)initWithIsLiked:(APICBoolean * _Nullable)isLiked musicId:(APICInt * _Nullable)musicId likeCount:(APICInt * _Nullable)likeCount __attribute__((swift_name("init(isLiked:musicId:likeCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicLike200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicLike200ResponseData *)doCopyIsLiked:(APICBoolean * _Nullable)isLiked musicId:(APICInt * _Nullable)musicId likeCount:(APICInt * _Nullable)likeCount __attribute__((swift_name("doCopy(isLiked:musicId:likeCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_liked")
*/
@property (readonly) APICBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like_count")
*/
@property (readonly) APICInt * _Nullable likeCount __attribute__((swift_name("likeCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) APICInt * _Nullable musicId __attribute__((swift_name("musicId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicLike200ResponseData.Companion")))
@interface APICPostMusicLike200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicLike200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200Response")))
@interface APICPostMusicStatus200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICPostMusicStatus200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicStatus200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicStatus200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICPostMusicStatus200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostMusicStatus200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200Response.Companion")))
@interface APICPostMusicStatus200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicStatus200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOfData")))
@interface APICPostMusicStatus200ResponseOneOfData : APICBase
- (instancetype)initWithStatus:(APICPostMusicStatus200ResponseOneOfDataStatus * _Nullable)status musicId:(APICInt * _Nullable)musicId __attribute__((swift_name("init(status:musicId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicStatus200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicStatus200ResponseOneOfData *)doCopyStatus:(APICPostMusicStatus200ResponseOneOfDataStatus * _Nullable)status musicId:(APICInt * _Nullable)musicId __attribute__((swift_name("doCopy(status:musicId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) APICInt * _Nullable musicId __attribute__((swift_name("musicId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) APICPostMusicStatus200ResponseOneOfDataStatus * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOfData.Companion")))
@interface APICPostMusicStatus200ResponseOneOfDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicStatus200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOfData.Status")))
@interface APICPostMusicStatus200ResponseOneOfDataStatus : APICKotlinEnum<APICPostMusicStatus200ResponseOneOfDataStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostMusicStatus200ResponseOneOfDataStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostMusicStatus200ResponseOneOfDataStatus *generating __attribute__((swift_name("generating")));
@property (class, readonly) APICPostMusicStatus200ResponseOneOfDataStatus *generated __attribute__((swift_name("generated")));
@property (class, readonly) APICPostMusicStatus200ResponseOneOfDataStatus *deleted __attribute__((swift_name("deleted")));
+ (APICKotlinArray<APICPostMusicStatus200ResponseOneOfDataStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostMusicStatus200ResponseOneOfDataStatus *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOfData.StatusCompanion")))
@interface APICPostMusicStatus200ResponseOneOfDataStatusCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicStatus200ResponseOneOfDataStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatusRequest")))
@interface APICPostMusicStatusRequest : APICBase
- (instancetype)initWithId:(int32_t)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicStatusRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicStatusRequest *)doCopyId:(int32_t)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatusRequest.Companion")))
@interface APICPostMusicStatusRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicStatusRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicUnlike200Response")))
@interface APICPostMusicUnlike200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostMusicUnlike200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicUnlike200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicUnlike200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostMusicUnlike200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostMusicUnlike200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicUnlike200Response.Companion")))
@interface APICPostMusicUnlike200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicUnlike200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicUnlike200ResponseData")))
@interface APICPostMusicUnlike200ResponseData : APICBase
- (instancetype)initWithIsLiked:(APICBoolean * _Nullable)isLiked musicId:(APICInt * _Nullable)musicId likeCount:(APICInt * _Nullable)likeCount __attribute__((swift_name("init(isLiked:musicId:likeCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostMusicUnlike200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostMusicUnlike200ResponseData *)doCopyIsLiked:(APICBoolean * _Nullable)isLiked musicId:(APICInt * _Nullable)musicId likeCount:(APICInt * _Nullable)likeCount __attribute__((swift_name("doCopy(isLiked:musicId:likeCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_liked")
*/
@property (readonly) APICBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like_count")
*/
@property (readonly) APICInt * _Nullable likeCount __attribute__((swift_name("likeCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) APICInt * _Nullable musicId __attribute__((swift_name("musicId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicUnlike200ResponseData.Companion")))
@interface APICPostMusicUnlike200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostMusicUnlike200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmit200Response")))
@interface APICPostReportSubmit200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICPostReportSubmit200ResponseData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostReportSubmit200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostReportSubmit200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICPostReportSubmit200ResponseData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostReportSubmit200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmit200Response.Companion")))
@interface APICPostReportSubmit200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostReportSubmit200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmit200ResponseData")))
@interface APICPostReportSubmit200ResponseData : APICBase
- (instancetype)initWithReportID:(APICInt * _Nullable)reportID message:(NSString * _Nullable)message __attribute__((swift_name("init(reportID:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostReportSubmit200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostReportSubmit200ResponseData *)doCopyReportID:(APICInt * _Nullable)reportID message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(reportID:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="report_id")
*/
@property (readonly) APICInt * _Nullable reportID __attribute__((swift_name("reportID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmit200ResponseData.Companion")))
@interface APICPostReportSubmit200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostReportSubmit200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmitRequest")))
@interface APICPostReportSubmitRequest : APICBase
- (instancetype)initWithType:(NSArray<APICPostReportSubmitRequestType *> *)type targetId:(int32_t)targetId url:(NSString * _Nullable)url content:(NSString * _Nullable)content __attribute__((swift_name("init(type:targetId:url:content:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostReportSubmitRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostReportSubmitRequest *)doCopyType:(NSArray<APICPostReportSubmitRequestType *> *)type targetId:(int32_t)targetId url:(NSString * _Nullable)url content:(NSString * _Nullable)content __attribute__((swift_name("doCopy(type:targetId:url:content:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="target_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t targetId __attribute__((swift_name("targetId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSArray<APICPostReportSubmitRequestType *> *type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmitRequest.Companion")))
@interface APICPostReportSubmitRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostReportSubmitRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmitRequest.Type_")))
@interface APICPostReportSubmitRequestType : APICKotlinEnum<APICPostReportSubmitRequestType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostReportSubmitRequestTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostReportSubmitRequestType *_1 __attribute__((swift_name("_1")));
@property (class, readonly) APICPostReportSubmitRequestType *_2 __attribute__((swift_name("_2")));
@property (class, readonly) APICPostReportSubmitRequestType *_3 __attribute__((swift_name("_3")));
@property (class, readonly) APICPostReportSubmitRequestType *_4 __attribute__((swift_name("_4")));
+ (APICKotlinArray<APICPostReportSubmitRequestType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostReportSubmitRequestType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmitRequest.Type_Companion")))
@interface APICPostReportSubmitRequestTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostReportSubmitRequestTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMedia200Response")))
@interface APICPostUploadCreateMedia200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostUploadCreateMedia200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostUploadCreateMedia200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostUploadCreateMedia200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(APICPostUploadCreateMedia200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostUploadCreateMedia200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMedia200Response.Companion")))
@interface APICPostUploadCreateMedia200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadCreateMedia200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMedia200ResponseData")))
@interface APICPostUploadCreateMedia200ResponseData : APICBase
- (instancetype)initWithMediaId:(APICInt * _Nullable)mediaId __attribute__((swift_name("init(mediaId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostUploadCreateMedia200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostUploadCreateMedia200ResponseData *)doCopyMediaId:(APICInt * _Nullable)mediaId __attribute__((swift_name("doCopy(mediaId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_id")
*/
@property (readonly) APICInt * _Nullable mediaId __attribute__((swift_name("mediaId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMedia200ResponseData.Companion")))
@interface APICPostUploadCreateMedia200ResponseDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadCreateMedia200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMediaRequest")))
@interface APICPostUploadCreateMediaRequest : APICBase
- (instancetype)initWithUploadId:(int32_t)uploadId mediaType:(int32_t)mediaType __attribute__((swift_name("init(uploadId:mediaType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostUploadCreateMediaRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostUploadCreateMediaRequest *)doCopyUploadId:(int32_t)uploadId mediaType:(int32_t)mediaType __attribute__((swift_name("doCopy(uploadId:mediaType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_type")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t mediaType __attribute__((swift_name("mediaType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="upload_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t uploadId __attribute__((swift_name("uploadId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMediaRequest.Companion")))
@interface APICPostUploadCreateMediaRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadCreateMediaRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMediaRequest.MediaType")))
@interface APICPostUploadCreateMediaRequestMediaType : APICKotlinEnum<APICPostUploadCreateMediaRequestMediaType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostUploadCreateMediaRequestMediaTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostUploadCreateMediaRequestMediaType *image __attribute__((swift_name("image")));
@property (class, readonly) APICPostUploadCreateMediaRequestMediaType *video __attribute__((swift_name("video")));
@property (class, readonly) APICPostUploadCreateMediaRequestMediaType *audio __attribute__((swift_name("audio")));
@property (class, readonly) APICPostUploadCreateMediaRequestMediaType *music __attribute__((swift_name("music")));
+ (APICKotlinArray<APICPostUploadCreateMediaRequestMediaType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostUploadCreateMediaRequestMediaType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMediaRequest.MediaTypeCompanion")))
@interface APICPostUploadCreateMediaRequestMediaTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadCreateMediaRequestMediaTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresigned200Response")))
@interface APICPostUploadPresigned200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICUploadPresignedData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostUploadPresigned200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostUploadPresigned200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICUploadPresignedData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICUploadPresignedData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresigned200Response.Companion")))
@interface APICPostUploadPresigned200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadPresigned200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedList200Response")))
@interface APICPostUploadPresignedList200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICPostUploadPresignedList200ResponseUploadPresignedListData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostUploadPresignedList200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostUploadPresignedList200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICPostUploadPresignedList200ResponseUploadPresignedListData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostUploadPresignedList200ResponseUploadPresignedListData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedList200Response.Companion")))
@interface APICPostUploadPresignedList200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadPresignedList200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedList200Response.UploadPresignedListData")))
@interface APICPostUploadPresignedList200ResponseUploadPresignedListData : APICBase
- (instancetype)initWithList:(NSArray<APICUploadPresignedData *> *)list __attribute__((swift_name("init(list:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostUploadPresignedList200ResponseUploadPresignedListDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostUploadPresignedList200ResponseUploadPresignedListData *)doCopyList:(NSArray<APICUploadPresignedData *> *)list __attribute__((swift_name("doCopy(list:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<APICUploadPresignedData *> *list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedList200Response.UploadPresignedListDataCompanion")))
@interface APICPostUploadPresignedList200ResponseUploadPresignedListDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadPresignedList200ResponseUploadPresignedListDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest")))
@interface APICPostUploadPresignedRequest : APICBase
- (instancetype)initWithFlag:(APICPostUploadPresignedRequestFlag *)flag list:(NSArray<APICPostUploadPresignedRequestOneOf1ListInner *> * _Nullable)list md5:(NSString * _Nullable)md5 type:(APICPostUploadPresignedRequestType * _Nullable)type width:(APICInt * _Nullable)width height:(APICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(APICInt * _Nullable)outWidth outHeight:(APICInt * _Nullable)outHeight __attribute__((swift_name("init(flag:list:md5:type:width:height:imgType:outWidth:outHeight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostUploadPresignedRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostUploadPresignedRequest *)doCopyFlag:(APICPostUploadPresignedRequestFlag *)flag list:(NSArray<APICPostUploadPresignedRequestOneOf1ListInner *> * _Nullable)list md5:(NSString * _Nullable)md5 type:(APICPostUploadPresignedRequestType * _Nullable)type width:(APICInt * _Nullable)width height:(APICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(APICInt * _Nullable)outWidth outHeight:(APICInt * _Nullable)outHeight __attribute__((swift_name("doCopy(flag:list:md5:type:width:height:imgType:outWidth:outHeight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="flag")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICPostUploadPresignedRequestFlag *flag __attribute__((swift_name("flag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) APICInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="img_type")
*/
@property (readonly) NSString * _Nullable imgType __attribute__((swift_name("imgType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="list")
*/
@property (readonly) NSArray<APICPostUploadPresignedRequestOneOf1ListInner *> * _Nullable list __attribute__((swift_name("list")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="md5")
*/
@property (readonly) NSString * _Nullable md5 __attribute__((swift_name("md5")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_height")
*/
@property (readonly) APICInt * _Nullable outHeight __attribute__((swift_name("outHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_width")
*/
@property (readonly) APICInt * _Nullable outWidth __attribute__((swift_name("outWidth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) APICPostUploadPresignedRequestType * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) APICInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.Companion")))
@interface APICPostUploadPresignedRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadPresignedRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.Flag")))
@interface APICPostUploadPresignedRequestFlag : APICKotlinEnum<APICPostUploadPresignedRequestFlag *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostUploadPresignedRequestFlagCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostUploadPresignedRequestFlag *avatar __attribute__((swift_name("avatar")));
@property (class, readonly) APICPostUploadPresignedRequestFlag *feedback __attribute__((swift_name("feedback")));
@property (class, readonly) APICPostUploadPresignedRequestFlag *aiPromptCover __attribute__((swift_name("aiPromptCover")));
@property (class, readonly) APICPostUploadPresignedRequestFlag *aiPromptVoice __attribute__((swift_name("aiPromptVoice")));
+ (APICKotlinArray<APICPostUploadPresignedRequestFlag *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostUploadPresignedRequestFlag *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.FlagCompanion")))
@interface APICPostUploadPresignedRequestFlagCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadPresignedRequestFlagCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/sakurasou/ios/bxh/sonar/apiclient/client/models/PostUploadPresignedRequest.Type.Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.Type_")))
@interface APICPostUploadPresignedRequestType : APICKotlinEnum<APICPostUploadPresignedRequestType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostUploadPresignedRequestTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostUploadPresignedRequestType *image __attribute__((swift_name("image")));
@property (class, readonly) APICPostUploadPresignedRequestType *video __attribute__((swift_name("video")));
@property (class, readonly) APICPostUploadPresignedRequestType *voice __attribute__((swift_name("voice")));
+ (APICKotlinArray<APICPostUploadPresignedRequestType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostUploadPresignedRequestType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.Type_Companion")))
@interface APICPostUploadPresignedRequestTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadPresignedRequestTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.Type_Serializer")))
@interface APICPostUploadPresignedRequestTypeSerializer : APICBase <APICKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadPresignedRequestTypeSerializer *shared __attribute__((swift_name("shared")));
- (APICPostUploadPresignedRequestType *)deserializeDecoder:(id<APICKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<APICKotlinx_serialization_coreEncoder>)encoder value:(APICPostUploadPresignedRequestType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<APICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf")))
@interface APICPostUploadPresignedRequestOneOf : APICBase
- (instancetype)initWithFlag:(APICPostUploadPresignedRequestOneOfFlag *)flag md5:(NSString * _Nullable)md5 type:(APICPostUploadPresignedRequestOneOfType * _Nullable)type width:(APICInt * _Nullable)width height:(APICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(APICInt * _Nullable)outWidth outHeight:(APICInt * _Nullable)outHeight __attribute__((swift_name("init(flag:md5:type:width:height:imgType:outWidth:outHeight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostUploadPresignedRequestOneOfCompanion *companion __attribute__((swift_name("companion")));
- (APICPostUploadPresignedRequestOneOf *)doCopyFlag:(APICPostUploadPresignedRequestOneOfFlag *)flag md5:(NSString * _Nullable)md5 type:(APICPostUploadPresignedRequestOneOfType * _Nullable)type width:(APICInt * _Nullable)width height:(APICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(APICInt * _Nullable)outWidth outHeight:(APICInt * _Nullable)outHeight __attribute__((swift_name("doCopy(flag:md5:type:width:height:imgType:outWidth:outHeight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="flag")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICPostUploadPresignedRequestOneOfFlag *flag __attribute__((swift_name("flag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) APICInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="img_type")
*/
@property (readonly) NSString * _Nullable imgType __attribute__((swift_name("imgType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="md5")
*/
@property (readonly) NSString * _Nullable md5 __attribute__((swift_name("md5")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_height")
*/
@property (readonly) APICInt * _Nullable outHeight __attribute__((swift_name("outHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_width")
*/
@property (readonly) APICInt * _Nullable outWidth __attribute__((swift_name("outWidth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) APICPostUploadPresignedRequestOneOfType * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) APICInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf.Companion")))
@interface APICPostUploadPresignedRequestOneOfCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadPresignedRequestOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf.Flag")))
@interface APICPostUploadPresignedRequestOneOfFlag : APICKotlinEnum<APICPostUploadPresignedRequestOneOfFlag *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostUploadPresignedRequestOneOfFlagCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostUploadPresignedRequestOneOfFlag *avatar __attribute__((swift_name("avatar")));
@property (class, readonly) APICPostUploadPresignedRequestOneOfFlag *aiPromptCover __attribute__((swift_name("aiPromptCover")));
+ (APICKotlinArray<APICPostUploadPresignedRequestOneOfFlag *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostUploadPresignedRequestOneOfFlag *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf.FlagCompanion")))
@interface APICPostUploadPresignedRequestOneOfFlagCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadPresignedRequestOneOfFlagCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf.Type_")))
@interface APICPostUploadPresignedRequestOneOfType : APICKotlinEnum<APICPostUploadPresignedRequestOneOfType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostUploadPresignedRequestOneOfTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostUploadPresignedRequestOneOfType *_1 __attribute__((swift_name("_1")));
@property (class, readonly) APICPostUploadPresignedRequestOneOfType *_2 __attribute__((swift_name("_2")));
@property (class, readonly) APICPostUploadPresignedRequestOneOfType *_3 __attribute__((swift_name("_3")));
+ (APICKotlinArray<APICPostUploadPresignedRequestOneOfType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostUploadPresignedRequestOneOfType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf.Type_Companion")))
@interface APICPostUploadPresignedRequestOneOfTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadPresignedRequestOneOfTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf1ListInner")))
@interface APICPostUploadPresignedRequestOneOf1ListInner : APICBase
- (instancetype)initWithFlag:(APICPostUploadPresignedRequestFlag *)flag md5:(NSString * _Nullable)md5 type:(APICPostUploadPresignedRequestType * _Nullable)type width:(APICInt * _Nullable)width height:(APICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(APICInt * _Nullable)outWidth outHeight:(APICInt * _Nullable)outHeight __attribute__((swift_name("init(flag:md5:type:width:height:imgType:outWidth:outHeight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostUploadPresignedRequestOneOf1ListInnerCompanion *companion __attribute__((swift_name("companion")));
- (APICPostUploadPresignedRequestOneOf1ListInner *)doCopyFlag:(APICPostUploadPresignedRequestFlag *)flag md5:(NSString * _Nullable)md5 type:(APICPostUploadPresignedRequestType * _Nullable)type width:(APICInt * _Nullable)width height:(APICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(APICInt * _Nullable)outWidth outHeight:(APICInt * _Nullable)outHeight __attribute__((swift_name("doCopy(flag:md5:type:width:height:imgType:outWidth:outHeight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="flag")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICPostUploadPresignedRequestFlag *flag __attribute__((swift_name("flag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) APICInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="img_type")
*/
@property (readonly) NSString * _Nullable imgType __attribute__((swift_name("imgType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="md5")
*/
@property (readonly) NSString * _Nullable md5 __attribute__((swift_name("md5")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_height")
*/
@property (readonly) APICInt * _Nullable outHeight __attribute__((swift_name("outHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_width")
*/
@property (readonly) APICInt * _Nullable outWidth __attribute__((swift_name("outWidth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) APICPostUploadPresignedRequestType * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) APICInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf1ListInner.Companion")))
@interface APICPostUploadPresignedRequestOneOf1ListInnerCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadPresignedRequestOneOf1ListInnerCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccess200Response")))
@interface APICPostUploadSuccess200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostUploadSuccess200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostUploadSuccess200Response *)doCopyOk:(APICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccess200Response.Companion")))
@interface APICPostUploadSuccess200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadSuccess200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccessRequest")))
@interface APICPostUploadSuccessRequest : APICBase
- (instancetype)initWithId:(NSArray<APICInt *> *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostUploadSuccessRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostUploadSuccessRequest *)doCopyId:(NSArray<APICInt *> *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSArray<APICInt *> *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccessRequest.Companion")))
@interface APICPostUploadSuccessRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostUploadSuccessRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200Response")))
@interface APICPostVipSubmit200Response : APICBase
- (instancetype)initWithOk:(APICInt * _Nullable)ok data:(APICPostVipSubmit200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostVipSubmit200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (APICPostVipSubmit200Response *)doCopyOk:(APICInt * _Nullable)ok data:(APICPostVipSubmit200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) APICPostVipSubmit200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) APICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200Response.Companion")))
@interface APICPostVipSubmit200ResponseCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostVipSubmit200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfData")))
@interface APICPostVipSubmit200ResponseOneOfData : APICBase
- (instancetype)initWithBalance:(APICLong * _Nullable)balance userInfo:(APICPostVipSubmit200ResponseOneOfDataUserInfo * _Nullable)userInfo __attribute__((swift_name("init(balance:userInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostVipSubmit200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (APICPostVipSubmit200ResponseOneOfData *)doCopyBalance:(APICLong * _Nullable)balance userInfo:(APICPostVipSubmit200ResponseOneOfDataUserInfo * _Nullable)userInfo __attribute__((swift_name("doCopy(balance:userInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balance")
*/
@property (readonly) APICLong * _Nullable balance __attribute__((swift_name("balance")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) APICPostVipSubmit200ResponseOneOfDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfData.Companion")))
@interface APICPostVipSubmit200ResponseOneOfDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostVipSubmit200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfDataUserInfo")))
@interface APICPostVipSubmit200ResponseOneOfDataUserInfo : APICBase
- (instancetype)initWithEmail:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar isVip:(APICPostVipSubmit200ResponseOneOfDataUserInfoIsVip * _Nullable)isVip balance:(APICLong * _Nullable)balance vipExp:(APICLong * _Nullable)vipExp nickname:(NSString * _Nullable)nickname __attribute__((swift_name("init(email:avatar:isVip:balance:vipExp:nickname:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostVipSubmit200ResponseOneOfDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICPostVipSubmit200ResponseOneOfDataUserInfo *)doCopyEmail:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar isVip:(APICPostVipSubmit200ResponseOneOfDataUserInfoIsVip * _Nullable)isVip balance:(APICLong * _Nullable)balance vipExp:(APICLong * _Nullable)vipExp nickname:(NSString * _Nullable)nickname __attribute__((swift_name("doCopy(email:avatar:isVip:balance:vipExp:nickname:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balance")
*/
@property (readonly) APICLong * _Nullable balance __attribute__((swift_name("balance")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_vip")
*/
@property (readonly) APICPostVipSubmit200ResponseOneOfDataUserInfoIsVip * _Nullable isVip __attribute__((swift_name("isVip")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vip_exp")
*/
@property (readonly) APICLong * _Nullable vipExp __attribute__((swift_name("vipExp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfDataUserInfo.Companion")))
@interface APICPostVipSubmit200ResponseOneOfDataUserInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostVipSubmit200ResponseOneOfDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfDataUserInfo.IsVip")))
@interface APICPostVipSubmit200ResponseOneOfDataUserInfoIsVip : APICKotlinEnum<APICPostVipSubmit200ResponseOneOfDataUserInfoIsVip *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICPostVipSubmit200ResponseOneOfDataUserInfoIsVipCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICPostVipSubmit200ResponseOneOfDataUserInfoIsVip *_0 __attribute__((swift_name("_0")));
@property (class, readonly) APICPostVipSubmit200ResponseOneOfDataUserInfoIsVip *_1 __attribute__((swift_name("_1")));
+ (APICKotlinArray<APICPostVipSubmit200ResponseOneOfDataUserInfoIsVip *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICPostVipSubmit200ResponseOneOfDataUserInfoIsVip *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfDataUserInfo.IsVipCompanion")))
@interface APICPostVipSubmit200ResponseOneOfDataUserInfoIsVipCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostVipSubmit200ResponseOneOfDataUserInfoIsVipCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmitRequest")))
@interface APICPostVipSubmitRequest : APICBase
- (instancetype)initWithGoodsId:(int32_t)goodsId __attribute__((swift_name("init(goodsId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICPostVipSubmitRequestCompanion *companion __attribute__((swift_name("companion")));
- (APICPostVipSubmitRequest *)doCopyGoodsId:(int32_t)goodsId __attribute__((swift_name("doCopy(goodsId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="goods_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t goodsId __attribute__((swift_name("goodsId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmitRequest.Companion")))
@interface APICPostVipSubmitRequestCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICPostVipSubmitRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedData")))
@interface APICUploadPresignedData : APICBase
- (instancetype)initWithDir:(APICUploadPresignedDataDir *)dir isUpload:(APICUploadPresignedDataIsUpload * _Nullable)isUpload uploadId:(APICInt * _Nullable)uploadId presignedPost:(APICUploadPresignedDataPresignedPost * _Nullable)presignedPost coverUrl:(NSString * _Nullable)coverUrl smallUrl:(NSString * _Nullable)smallUrl coverPresignedPost:(APICUploadPresignedDataCoverPresignedPost * _Nullable)coverPresignedPost filePath:(NSString * _Nullable)filePath __attribute__((swift_name("init(dir:isUpload:uploadId:presignedPost:coverUrl:smallUrl:coverPresignedPost:filePath:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICUploadPresignedDataCompanion *companion __attribute__((swift_name("companion")));
- (APICUploadPresignedData *)doCopyDir:(APICUploadPresignedDataDir *)dir isUpload:(APICUploadPresignedDataIsUpload * _Nullable)isUpload uploadId:(APICInt * _Nullable)uploadId presignedPost:(APICUploadPresignedDataPresignedPost * _Nullable)presignedPost coverUrl:(NSString * _Nullable)coverUrl smallUrl:(NSString * _Nullable)smallUrl coverPresignedPost:(APICUploadPresignedDataCoverPresignedPost * _Nullable)coverPresignedPost filePath:(NSString * _Nullable)filePath __attribute__((swift_name("doCopy(dir:isUpload:uploadId:presignedPost:coverUrl:smallUrl:coverPresignedPost:filePath:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_presigned_post")
*/
@property (readonly) APICUploadPresignedDataCoverPresignedPost * _Nullable coverPresignedPost __attribute__((swift_name("coverPresignedPost")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_url")
*/
@property (readonly) NSString * _Nullable coverUrl __attribute__((swift_name("coverUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dir")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICUploadPresignedDataDir *dir __attribute__((swift_name("dir")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="file_path")
*/
@property (readonly) NSString * _Nullable filePath __attribute__((swift_name("filePath")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_upload")
*/
@property (readonly) APICUploadPresignedDataIsUpload * _Nullable isUpload __attribute__((swift_name("isUpload")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="presigned_post")
*/
@property (readonly) APICUploadPresignedDataPresignedPost * _Nullable presignedPost __attribute__((swift_name("presignedPost")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="small_url")
*/
@property (readonly) NSString * _Nullable smallUrl __attribute__((swift_name("smallUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="upload_id")
*/
@property (readonly) APICInt * _Nullable uploadId __attribute__((swift_name("uploadId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedData.Companion")))
@interface APICUploadPresignedDataCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICUploadPresignedDataCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedData.IsUpload")))
@interface APICUploadPresignedDataIsUpload : APICKotlinEnum<APICUploadPresignedDataIsUpload *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICUploadPresignedDataIsUploadCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICUploadPresignedDataIsUpload *no __attribute__((swift_name("no")));
@property (class, readonly) APICUploadPresignedDataIsUpload *yes __attribute__((swift_name("yes")));
+ (APICKotlinArray<APICUploadPresignedDataIsUpload *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICUploadPresignedDataIsUpload *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedData.IsUploadCompanion")))
@interface APICUploadPresignedDataIsUploadCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICUploadPresignedDataIsUploadCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost")))
@interface APICUploadPresignedDataCoverPresignedPost : APICBase
- (instancetype)initWithUrl:(NSString * _Nullable)url fields:(NSString * _Nullable)fields method:(APICUploadPresignedDataCoverPresignedPostMethod * _Nullable)method enctype:(APICUploadPresignedDataCoverPresignedPostEnctype * _Nullable)enctype __attribute__((swift_name("init(url:fields:method:enctype:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICUploadPresignedDataCoverPresignedPostCompanion *companion __attribute__((swift_name("companion")));
- (APICUploadPresignedDataCoverPresignedPost *)doCopyUrl:(NSString * _Nullable)url fields:(NSString * _Nullable)fields method:(APICUploadPresignedDataCoverPresignedPostMethod * _Nullable)method enctype:(APICUploadPresignedDataCoverPresignedPostEnctype * _Nullable)enctype __attribute__((swift_name("doCopy(url:fields:method:enctype:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enctype")
*/
@property (readonly) APICUploadPresignedDataCoverPresignedPostEnctype * _Nullable enctype __attribute__((swift_name("enctype")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fields")
*/
@property (readonly) NSString * _Nullable fields __attribute__((swift_name("fields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="method")
*/
@property (readonly) APICUploadPresignedDataCoverPresignedPostMethod * _Nullable method __attribute__((swift_name("method")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost.Companion")))
@interface APICUploadPresignedDataCoverPresignedPostCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICUploadPresignedDataCoverPresignedPostCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost.Enctype")))
@interface APICUploadPresignedDataCoverPresignedPostEnctype : APICKotlinEnum<APICUploadPresignedDataCoverPresignedPostEnctype *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICUploadPresignedDataCoverPresignedPostEnctypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICUploadPresignedDataCoverPresignedPostEnctype *multipartslashformminusdata __attribute__((swift_name("multipartslashformminusdata")));
+ (APICKotlinArray<APICUploadPresignedDataCoverPresignedPostEnctype *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICUploadPresignedDataCoverPresignedPostEnctype *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost.EnctypeCompanion")))
@interface APICUploadPresignedDataCoverPresignedPostEnctypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICUploadPresignedDataCoverPresignedPostEnctypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost.Method")))
@interface APICUploadPresignedDataCoverPresignedPostMethod : APICKotlinEnum<APICUploadPresignedDataCoverPresignedPostMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICUploadPresignedDataCoverPresignedPostMethodCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICUploadPresignedDataCoverPresignedPostMethod *post __attribute__((swift_name("post")));
+ (APICKotlinArray<APICUploadPresignedDataCoverPresignedPostMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICUploadPresignedDataCoverPresignedPostMethod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost.MethodCompanion")))
@interface APICUploadPresignedDataCoverPresignedPostMethodCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICUploadPresignedDataCoverPresignedPostMethodCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataDir")))
@interface APICUploadPresignedDataDir : APICBase
- (instancetype)initWithPath:(NSString *)path smallUrl:(NSString * _Nullable)smallUrl coverPath:(NSString * _Nullable)coverPath __attribute__((swift_name("init(path:smallUrl:coverPath:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICUploadPresignedDataDirCompanion *companion __attribute__((swift_name("companion")));
- (APICUploadPresignedDataDir *)doCopyPath:(NSString *)path smallUrl:(NSString * _Nullable)smallUrl coverPath:(NSString * _Nullable)coverPath __attribute__((swift_name("doCopy(path:smallUrl:coverPath:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_path")
*/
@property (readonly) NSString * _Nullable coverPath __attribute__((swift_name("coverPath")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="path")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *path __attribute__((swift_name("path")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="small_url")
*/
@property (readonly) NSString * _Nullable smallUrl __attribute__((swift_name("smallUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataDir.Companion")))
@interface APICUploadPresignedDataDirCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICUploadPresignedDataDirCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost")))
@interface APICUploadPresignedDataPresignedPost : APICBase
- (instancetype)initWithUrl:(NSString *)url fields:(APICUploadPresignedDataPresignedPostFields *)fields method:(APICUploadPresignedDataPresignedPostMethod *)method enctype:(APICUploadPresignedDataPresignedPostEnctype *)enctype __attribute__((swift_name("init(url:fields:method:enctype:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICUploadPresignedDataPresignedPostCompanion *companion __attribute__((swift_name("companion")));
- (APICUploadPresignedDataPresignedPost *)doCopyUrl:(NSString *)url fields:(APICUploadPresignedDataPresignedPostFields *)fields method:(APICUploadPresignedDataPresignedPostMethod *)method enctype:(APICUploadPresignedDataPresignedPostEnctype *)enctype __attribute__((swift_name("doCopy(url:fields:method:enctype:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enctype")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICUploadPresignedDataPresignedPostEnctype *enctype __attribute__((swift_name("enctype")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fields")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICUploadPresignedDataPresignedPostFields *fields __attribute__((swift_name("fields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="method")
 *   kotlinx.serialization.Required
*/
@property (readonly) APICUploadPresignedDataPresignedPostMethod *method __attribute__((swift_name("method")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost.Companion")))
@interface APICUploadPresignedDataPresignedPostCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICUploadPresignedDataPresignedPostCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost.Enctype")))
@interface APICUploadPresignedDataPresignedPostEnctype : APICKotlinEnum<APICUploadPresignedDataPresignedPostEnctype *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICUploadPresignedDataPresignedPostEnctypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICUploadPresignedDataPresignedPostEnctype *multipartslashformminusdata __attribute__((swift_name("multipartslashformminusdata")));
+ (APICKotlinArray<APICUploadPresignedDataPresignedPostEnctype *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICUploadPresignedDataPresignedPostEnctype *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost.EnctypeCompanion")))
@interface APICUploadPresignedDataPresignedPostEnctypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICUploadPresignedDataPresignedPostEnctypeCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost.Method")))
@interface APICUploadPresignedDataPresignedPostMethod : APICKotlinEnum<APICUploadPresignedDataPresignedPostMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICUploadPresignedDataPresignedPostMethodCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICUploadPresignedDataPresignedPostMethod *post __attribute__((swift_name("post")));
+ (APICKotlinArray<APICUploadPresignedDataPresignedPostMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICUploadPresignedDataPresignedPostMethod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost.MethodCompanion")))
@interface APICUploadPresignedDataPresignedPostMethodCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICUploadPresignedDataPresignedPostMethodCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPostFields")))
@interface APICUploadPresignedDataPresignedPostFields : APICBase
- (instancetype)initWithKey:(NSString *)key policy:(NSString *)policy xAmzDate:(NSString *)xAmzDate contentType:(NSString *)contentType xAmzAlgorithm:(NSString *)xAmzAlgorithm xAmzSignature:(NSString *)xAmzSignature xAmzCredential:(NSString *)xAmzCredential __attribute__((swift_name("init(key:policy:xAmzDate:contentType:xAmzAlgorithm:xAmzSignature:xAmzCredential:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICUploadPresignedDataPresignedPostFieldsCompanion *companion __attribute__((swift_name("companion")));
- (APICUploadPresignedDataPresignedPostFields *)doCopyKey:(NSString *)key policy:(NSString *)policy xAmzDate:(NSString *)xAmzDate contentType:(NSString *)contentType xAmzAlgorithm:(NSString *)xAmzAlgorithm xAmzSignature:(NSString *)xAmzSignature xAmzCredential:(NSString *)xAmzCredential __attribute__((swift_name("doCopy(key:policy:xAmzDate:contentType:xAmzAlgorithm:xAmzSignature:xAmzCredential:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Content-Type")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="key")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *key __attribute__((swift_name("key")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Policy")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *policy __attribute__((swift_name("policy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="X-Amz-Algorithm")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *xAmzAlgorithm __attribute__((swift_name("xAmzAlgorithm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="X-Amz-Credential")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *xAmzCredential __attribute__((swift_name("xAmzCredential")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="X-Amz-Date")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *xAmzDate __attribute__((swift_name("xAmzDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="X-Amz-Signature")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *xAmzSignature __attribute__((swift_name("xAmzSignature")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPostFields.Companion")))
@interface APICUploadPresignedDataPresignedPostFieldsCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICUploadPresignedDataPresignedPostFieldsCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserInfo")))
@interface APICUserInfo : APICBase
- (instancetype)initWithUid:(APICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname checkingFace:(APICBoolean * _Nullable)checkingFace checkingName:(APICBoolean * _Nullable)checkingName __attribute__((swift_name("init(uid:avatar:nickname:checkingFace:checkingName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (APICUserInfo *)doCopyUid:(APICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname checkingFace:(APICBoolean * _Nullable)checkingFace checkingName:(APICBoolean * _Nullable)checkingName __attribute__((swift_name("doCopy(uid:avatar:nickname:checkingFace:checkingName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="checking_face")
*/
@property (readonly) APICBoolean * _Nullable checkingFace __attribute__((swift_name("checkingFace")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="checking_name")
*/
@property (readonly) APICBoolean * _Nullable checkingName __attribute__((swift_name("checkingName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) APICInt * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserInfo.Companion")))
@interface APICUserInfoCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackage")))
@interface APICVipPackage : APICBase
- (instancetype)initWithId:(int32_t)id sku:(NSString *)sku days:(int32_t)days price:(NSString *)price title:(NSString * _Nullable)title period:(APICVipPackagePeriod * _Nullable)period productType:(APICInt * _Nullable)productType currency:(NSString * _Nullable)currency subtitle:(NSString * _Nullable)subtitle creditsDescription:(NSString * _Nullable)creditsDescription generateDescription:(NSString * _Nullable)generateDescription isPopular:(APICBoolean * _Nullable)isPopular coinsReward:(APICVipPackageCoinsReward * _Nullable)coinsReward originalPrice:(NSString * _Nullable)originalPrice privilegeList:(NSArray<NSString *> * _Nullable)privilegeList weeklyPrice:(NSString * _Nullable)weeklyPrice coinsPerWeek:(APICInt * _Nullable)coinsPerWeek totalWeeks:(APICInt * _Nullable)totalWeeks isYearly:(APICBoolean * _Nullable)isYearly save:(NSString * _Nullable)save discountPercentage:(APICInt * _Nullable)discountPercentage __attribute__((swift_name("init(id:sku:days:price:title:period:productType:currency:subtitle:creditsDescription:generateDescription:isPopular:coinsReward:originalPrice:privilegeList:weeklyPrice:coinsPerWeek:totalWeeks:isYearly:save:discountPercentage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICVipPackageCompanion *companion __attribute__((swift_name("companion")));
- (APICVipPackage *)doCopyId:(int32_t)id sku:(NSString *)sku days:(int32_t)days price:(NSString *)price title:(NSString * _Nullable)title period:(APICVipPackagePeriod * _Nullable)period productType:(APICInt * _Nullable)productType currency:(NSString * _Nullable)currency subtitle:(NSString * _Nullable)subtitle creditsDescription:(NSString * _Nullable)creditsDescription generateDescription:(NSString * _Nullable)generateDescription isPopular:(APICBoolean * _Nullable)isPopular coinsReward:(APICVipPackageCoinsReward * _Nullable)coinsReward originalPrice:(NSString * _Nullable)originalPrice privilegeList:(NSArray<NSString *> * _Nullable)privilegeList weeklyPrice:(NSString * _Nullable)weeklyPrice coinsPerWeek:(APICInt * _Nullable)coinsPerWeek totalWeeks:(APICInt * _Nullable)totalWeeks isYearly:(APICBoolean * _Nullable)isYearly save:(NSString * _Nullable)save discountPercentage:(APICInt * _Nullable)discountPercentage __attribute__((swift_name("doCopy(id:sku:days:price:title:period:productType:currency:subtitle:creditsDescription:generateDescription:isPopular:coinsReward:originalPrice:privilegeList:weeklyPrice:coinsPerWeek:totalWeeks:isYearly:save:discountPercentage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="coins_per_week")
*/
@property (readonly) APICInt * _Nullable coinsPerWeek __attribute__((swift_name("coinsPerWeek")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="coins_reward")
*/
@property (readonly) APICVipPackageCoinsReward * _Nullable coinsReward __attribute__((swift_name("coinsReward")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="credits_desc")
*/
@property (readonly) NSString * _Nullable creditsDescription __attribute__((swift_name("creditsDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currency")
*/
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="days")
*/
@property (readonly) int32_t days __attribute__((swift_name("days")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="discount_percent")
*/
@property (readonly) APICInt * _Nullable discountPercentage __attribute__((swift_name("discountPercentage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="generate_desc")
*/
@property (readonly) NSString * _Nullable generateDescription __attribute__((swift_name("generateDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_popular")
*/
@property (readonly) APICBoolean * _Nullable isPopular __attribute__((swift_name("isPopular")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_yearly")
*/
@property (readonly) APICBoolean * _Nullable isYearly __attribute__((swift_name("isYearly")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_price")
*/
@property (readonly) NSString * _Nullable originalPrice __attribute__((swift_name("originalPrice")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="period")
*/
@property (readonly) APICVipPackagePeriod * _Nullable period __attribute__((swift_name("period")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="price")
*/
@property (readonly) NSString *price __attribute__((swift_name("price")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="privileges")
*/
@property (readonly) NSArray<NSString *> * _Nullable privilegeList __attribute__((swift_name("privilegeList")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) APICInt * _Nullable productType __attribute__((swift_name("productType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="save")
*/
@property (readonly) NSString * _Nullable save __attribute__((swift_name("save")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sku")
*/
@property (readonly) NSString *sku __attribute__((swift_name("sku")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="subtitle")
*/
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total_weeks")
*/
@property (readonly) APICInt * _Nullable totalWeeks __attribute__((swift_name("totalWeeks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="weekly_price")
*/
@property (readonly) NSString * _Nullable weeklyPrice __attribute__((swift_name("weeklyPrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackage.Companion")))
@interface APICVipPackageCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICVipPackageCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackage.Period")))
@interface APICVipPackagePeriod : APICKotlinEnum<APICVipPackagePeriod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICVipPackagePeriodCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICVipPackagePeriod *yearly __attribute__((swift_name("yearly")));
@property (class, readonly) APICVipPackagePeriod *monthly __attribute__((swift_name("monthly")));
@property (class, readonly) APICVipPackagePeriod *weekly __attribute__((swift_name("weekly")));
+ (APICKotlinArray<APICVipPackagePeriod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICVipPackagePeriod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackage.PeriodCompanion")))
@interface APICVipPackagePeriodCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICVipPackagePeriodCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(APICKotlinArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackageCoinsReward")))
@interface APICVipPackageCoinsReward : APICBase
- (instancetype)initWithWeekly:(APICInt * _Nullable)weekly immediate:(APICInt * _Nullable)immediate totalWeeks:(APICInt * _Nullable)totalWeeks __attribute__((swift_name("init(weekly:immediate:totalWeeks:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICVipPackageCoinsRewardCompanion *companion __attribute__((swift_name("companion")));
- (APICVipPackageCoinsReward *)doCopyWeekly:(APICInt * _Nullable)weekly immediate:(APICInt * _Nullable)immediate totalWeeks:(APICInt * _Nullable)totalWeeks __attribute__((swift_name("doCopy(weekly:immediate:totalWeeks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="immediate")
*/
@property (readonly) APICInt * _Nullable immediate __attribute__((swift_name("immediate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total_weeks")
*/
@property (readonly) APICInt * _Nullable totalWeeks __attribute__((swift_name("totalWeeks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="weekly")
*/
@property (readonly) APICInt * _Nullable weekly __attribute__((swift_name("weekly")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackageCoinsReward.Companion")))
@interface APICVipPackageCoinsRewardCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICVipPackageCoinsRewardCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkError")))
@interface APICNetworkError : APICBase
- (instancetype)initWithType:(APICNetworkErrorType *)type originalException:(APICKotlinThrowable * _Nullable)originalException __attribute__((swift_name("init(type:originalException:)"))) __attribute__((objc_designated_initializer));
- (APICNetworkError *)doCopyType:(APICNetworkErrorType *)type originalException:(APICKotlinThrowable * _Nullable)originalException __attribute__((swift_name("doCopy(type:originalException:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICKotlinThrowable * _Nullable originalException __attribute__((swift_name("originalException")));
@property (readonly) APICNetworkErrorType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkErrorType")))
@interface APICNetworkErrorType : APICKotlinEnum<APICNetworkErrorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) APICNetworkErrorType *connectionError __attribute__((swift_name("connectionError")));
@property (class, readonly) APICNetworkErrorType *timeoutError __attribute__((swift_name("timeoutError")));
@property (class, readonly) APICNetworkErrorType *dnsError __attribute__((swift_name("dnsError")));
@property (class, readonly) APICNetworkErrorType *sslError __attribute__((swift_name("sslError")));
@property (class, readonly) APICNetworkErrorType *unknownError __attribute__((swift_name("unknownError")));
+ (APICKotlinArray<APICNetworkErrorType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICNetworkErrorType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkHandleConfig")))
@interface APICNetworkHandleConfig : APICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property void (^onNetworkError)(APICNetworkError *) __attribute__((swift_name("onNetworkError")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnauthorizedConfig")))
@interface APICUnauthorizedConfig : APICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property void (^handleUnauthorized)(void) __attribute__((swift_name("handleUnauthorized")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol APICKtor_httpHttpMessage
@required
@property (readonly) id<APICKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol APICKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<APICKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface APICKtor_client_coreHttpResponse : APICBase <APICKtor_httpHttpMessage, APICKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<APICKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) APICKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) APICKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) APICKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) APICKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

@interface APICKtor_client_coreHttpResponse (Extensions)
- (APICHttpResponse<id> *)wrap __attribute__((swift_name("wrap()")));
@end

@interface APICHttpResponse (Extensions)
- (APICHttpResponse<id> *)mapBlock:(id (^)(id))block __attribute__((swift_name("map(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiAbstractionsKt")))
@interface APICApiAbstractionsKt : APICBase
+ (NSString *)collectionDelimiterCollectionFormat:(NSString *)collectionFormat __attribute__((swift_name("collectionDelimiter(collectionFormat:)")));
+ (NSArray<NSString *> *)toMultiValueItems:(APICKotlinArray<id> *)items collectionFormat:(NSString *)collectionFormat map:(NSString *(^)(id _Nullable))map __attribute__((swift_name("toMultiValue(items:collectionFormat:map:)")));
+ (NSArray<NSString *> *)toMultiValueItems:(id)items collectionFormat:(NSString *)collectionFormat map_:(NSString *(^)(id _Nullable))map __attribute__((swift_name("toMultiValue(items:collectionFormat:map_:)")));
@property (class, readonly) NSString *(^defaultMultiValueConverter)(id _Nullable) __attribute__((swift_name("defaultMultiValueConverter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkHandleKt")))
@interface APICNetworkHandleKt : APICBase
@property (class, readonly) id<APICKtor_client_coreClientPlugin> NetworkHandle __attribute__((swift_name("NetworkHandle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnauthorizedKt")))
@interface APICUnauthorizedKt : APICBase
@property (class, readonly) id<APICKtor_client_coreClientPlugin> Unauthorized __attribute__((swift_name("Unauthorized")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol APICKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol APICKtor_ioCloseable <APICKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface APICKtor_client_coreHttpClient : APICBase <APICKotlinx_coroutines_coreCoroutineScope, APICKtor_ioCloseable>
- (instancetype)initWithEngine:(id<APICKtor_client_coreHttpClientEngine>)engine userConfig:(APICKtor_client_coreHttpClientConfig<APICKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (APICKtor_client_coreHttpClient *)configBlock:(void (^)(APICKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<APICKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<APICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<APICKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<APICKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) APICKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) APICKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) APICKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) APICKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) APICKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) APICKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol APICKtor_client_coreHttpClientEngine <APICKotlinx_coroutines_coreCoroutineScope, APICKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(APICKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(APICKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(APICKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) APICKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) APICKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<APICKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface APICKtor_client_coreHttpClientConfig<T> : APICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (APICKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(APICKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<APICKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(APICKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(APICKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol APICKotlinx_serialization_coreSerialFormat
@required
@property (readonly) APICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol APICKotlinx_serialization_coreStringFormat <APICKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<APICKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<APICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface APICKotlinx_serialization_jsonJson : APICBase <APICKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) APICKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<APICKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(APICKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<APICKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (APICKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<APICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));
- (NSString *)encodeToStringSerializer:(id<APICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (APICKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) APICKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) APICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface APICKotlinThrowable : APICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(APICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(APICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (APICKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface APICKotlinException : APICKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(APICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(APICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface APICKotlinRuntimeException : APICKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(APICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(APICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface APICKotlinIllegalStateException : APICKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(APICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(APICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface APICKotlinCancellationException : APICKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(APICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(APICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_httpPartData")))
@interface APICKtor_httpPartData : APICBase
@property (readonly) APICKtor_httpContentDisposition * _Nullable contentDisposition __attribute__((swift_name("contentDisposition")));
@property (readonly) APICKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) void (^dispose)(void) __attribute__((swift_name("dispose")));
@property (readonly) id<APICKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol APICKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<APICKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol APICKtor_httpParameters <APICKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface APICKotlinEnumCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface APICKotlinArray<T> : APICBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(APICInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<APICKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol APICKotlinx_serialization_coreEncoder
@required
- (id<APICKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<APICKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<APICKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<APICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<APICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) APICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol APICKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<APICKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<APICKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<APICKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) APICKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol APICKotlinx_serialization_coreDecoder
@required
- (id<APICKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<APICKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (APICKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<APICKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<APICKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) APICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface APICKotlinByteArray : APICBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(APICByte *(^)(APICInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (APICKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface APICKtor_utilsTypeInfo : APICBase
- (instancetype)initWithType:(id<APICKotlinKClass>)type kotlinType:(id<APICKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<APICKotlinKClass>)type reifiedType:(id<APICKotlinKType>)reifiedType kotlinType:(id<APICKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<APICKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<APICKotlinKClass> type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface APICKotlinx_datetimeInstant : APICBase <APICKotlinComparable>
@property (class, readonly, getter=companion) APICKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(APICKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (APICKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(APICKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (APICKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol APICKtor_httpHeaders <APICKtor_utilsStringValues>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol APICKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<APICKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<APICKotlinCoroutineContextElement> _Nullable)getKey:(id<APICKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<APICKotlinCoroutineContext>)minusKeyKey:(id<APICKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<APICKotlinCoroutineContext>)plusContext:(id<APICKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface APICKtor_client_coreHttpClientCall : APICBase <APICKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(APICKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(APICKtor_client_coreHttpClient *)client requestData:(APICKtor_client_coreHttpRequestData *)requestData responseData:(APICKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(APICKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(APICKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<APICKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<APICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) APICKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<APICKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<APICKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property APICKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol APICKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(APICBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause:(APICKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
@property (readonly) APICKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<APICKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface APICKtor_utilsGMTDate : APICBase <APICKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(APICKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(APICKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(APICKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (APICKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (APICKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(APICKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(APICKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) APICKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) APICKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface APICKtor_httpHttpStatusCode : APICBase <APICKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(APICKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (APICKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (APICKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface APICKtor_httpHttpProtocolVersion : APICBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (APICKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol APICKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(APICKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) APICKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Ktor_client_coreClientPlugin")))
@protocol APICKtor_client_coreClientPlugin <APICKtor_client_coreHttpClientPlugin>
@required
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface APICKtor_client_coreHttpClientEngineConfig : APICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property APICKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property APICKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol APICKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol APICKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(APICKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(APICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(APICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(APICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(APICKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(APICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (void)setKey:(APICKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (id)takeKey:(APICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(APICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<APICKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface APICKtor_eventsEvents : APICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(APICKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<APICKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(APICKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(APICKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface APICKtor_utilsPipeline<TSubject, TContext> : APICBase
- (instancetype)initWithPhases:(APICKotlinArray<APICKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(APICKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<APICKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(APICKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(APICKtor_utilsPipelinePhase *)reference phase:(APICKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(APICKtor_utilsPipelinePhase *)reference phase:(APICKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(APICKtor_utilsPipelinePhase *)phase block:(id<APICKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<APICKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(APICKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(APICKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(APICKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(APICKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<APICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<APICKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface APICKtor_client_coreHttpReceivePipeline : APICKtor_utilsPipeline<APICKtor_client_coreHttpResponse *, APICKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(APICKotlinArray<APICKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(APICKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<APICKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface APICKtor_client_coreHttpRequestPipeline : APICKtor_utilsPipeline<id, APICKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(APICKotlinArray<APICKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(APICKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<APICKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface APICKtor_client_coreHttpResponsePipeline : APICKtor_utilsPipeline<APICKtor_client_coreHttpResponseContainer *, APICKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(APICKotlinArray<APICKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(APICKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<APICKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface APICKtor_client_coreHttpSendPipeline : APICKtor_utilsPipeline<id, APICKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(APICKotlinArray<APICKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(APICKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<APICKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface APICKtor_client_coreHttpRequestData : APICBase
- (instancetype)initWithUrl:(APICKtor_httpUrl *)url method:(APICKtor_httpHttpMethod *)method headers:(id<APICKtor_httpHeaders>)headers body:(APICKtor_httpOutgoingContent *)body executionContext:(id<APICKotlinx_coroutines_coreJob>)executionContext attributes:(id<APICKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<APICKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<APICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) APICKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<APICKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<APICKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) APICKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) APICKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface APICKtor_client_coreHttpResponseData : APICBase
- (instancetype)initWithStatusCode:(APICKtor_httpHttpStatusCode *)statusCode requestTime:(APICKtor_utilsGMTDate *)requestTime headers:(id<APICKtor_httpHeaders>)headers version:(APICKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<APICKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<APICKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<APICKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) APICKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) APICKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) APICKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) APICKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol APICKotlinCoroutineContextElement <APICKotlinCoroutineContext>
@required
@property (readonly) id<APICKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface APICKotlinAbstractCoroutineContextElement : APICBase <APICKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<APICKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<APICKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol APICKotlinContinuationInterceptor <APICKotlinCoroutineContextElement>
@required
- (id<APICKotlinContinuation>)interceptContinuationContinuation:(id<APICKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<APICKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface APICKotlinx_coroutines_coreCoroutineDispatcher : APICKotlinAbstractCoroutineContextElement <APICKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<APICKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<APICKotlinCoroutineContext>)context block:(id<APICKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<APICKotlinCoroutineContext>)context block:(id<APICKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<APICKotlinContinuation>)interceptContinuationContinuation:(id<APICKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<APICKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (APICKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (APICKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(APICKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<APICKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface APICKotlinx_serialization_coreSerializersModule : APICBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<APICKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<APICKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<APICKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<APICKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<APICKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<APICKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<APICKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<APICKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface APICKotlinx_serialization_jsonJsonDefault : APICKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface APICKotlinx_serialization_jsonJsonElement : APICBase
@property (class, readonly, getter=companion) APICKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface APICKotlinx_serialization_jsonJsonConfiguration : APICBase
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property APICKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<APICKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface APICKtor_httpHeaderValueWithParameters : APICBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<APICKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<APICKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentDisposition")))
@interface APICKtor_httpContentDisposition : APICKtor_httpHeaderValueWithParameters
- (instancetype)initWithDisposition:(NSString *)disposition parameters:(NSArray<APICKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(disposition:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<APICKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICKtor_httpContentDispositionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (APICKtor_httpContentDisposition *)withParameterKey:(NSString *)key value:(NSString *)value encodeValue:(BOOL)encodeValue __attribute__((swift_name("withParameter(key:value:encodeValue:)")));
- (APICKtor_httpContentDisposition *)withParametersNewParameters:(NSArray<APICKtor_httpHeaderValueParam *> *)newParameters __attribute__((swift_name("withParameters(newParameters:)")));
@property (readonly) NSString *disposition __attribute__((swift_name("disposition")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface APICKtor_httpContentType : APICKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<APICKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<APICKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(APICKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (APICKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (APICKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol APICKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol APICKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol APICKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<APICKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<APICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<APICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) APICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol APICKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface APICKotlinx_serialization_coreSerialKind : APICBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol APICKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<APICKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<APICKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<APICKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) APICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface APICKotlinNothing : APICBase
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface APICKotlinByteIterator : APICBase <APICKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (APICByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol APICKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol APICKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol APICKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol APICKotlinKClass <APICKotlinKDeclarationContainer, APICKotlinKAnnotatedElement, APICKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol APICKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<APICKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<APICKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface APICKotlinx_datetimeInstantCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (APICKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (APICKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (APICKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (APICKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (APICKotlinx_datetimeInstant *)parseInput:(id)input format:(id<APICKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) APICKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) APICKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol APICKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface APICKtor_client_coreHttpClientCallCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol APICKtor_client_coreHttpRequest <APICKtor_httpHttpMessage, APICKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<APICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) APICKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) APICKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) APICKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) APICKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol APICKotlinx_io_coreRawSource <APICKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(APICKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol APICKotlinx_io_coreSource <APICKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<APICKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(APICKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<APICKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<APICKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) APICKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface APICKtor_utilsWeekDay : APICKotlinEnum<APICKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) APICKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) APICKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) APICKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) APICKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) APICKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) APICKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (APICKotlinArray<APICKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface APICKtor_utilsMonth : APICKotlinEnum<APICKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) APICKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) APICKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) APICKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) APICKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) APICKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) APICKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) APICKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) APICKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) APICKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) APICKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) APICKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) APICKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) APICKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (APICKotlinArray<APICKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface APICKtor_utilsGMTDateCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) APICKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface APICKtor_httpHttpStatusCodeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (APICKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) APICKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) APICKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) APICKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) APICKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) APICKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) APICKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) APICKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) APICKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) APICKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) APICKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) APICKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) APICKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) APICKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) APICKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) APICKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) APICKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) APICKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) APICKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) APICKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) APICKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) APICKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) APICKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) APICKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) APICKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) APICKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) APICKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) APICKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) APICKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) APICKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) APICKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) APICKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) APICKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) APICKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) APICKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) APICKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) APICKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) APICKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) APICKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) APICKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) APICKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) APICKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) APICKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) APICKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) APICKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) APICKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) APICKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) APICKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) APICKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) APICKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) APICKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) APICKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) APICKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) APICKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<APICKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface APICKtor_httpHttpProtocolVersionCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (APICKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (APICKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) APICKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) APICKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) APICKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) APICKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) APICKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface APICKtor_utilsAttributeKey<T> : APICBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(APICKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (APICKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(APICKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface APICKtor_client_coreProxyConfig : APICBase
- (instancetype)initWithUrl:(APICKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface APICKtor_eventsEventDefinition<T> : APICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol APICKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose_ __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface APICKtor_utilsPipelinePhase : APICBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol APICKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol APICKotlinSuspendFunction2 <APICKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface APICKtor_client_coreHttpReceivePipelinePhases : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) APICKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) APICKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) APICKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface APICKotlinUnit : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface APICKtor_client_coreHttpRequestPipelinePhases : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) APICKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) APICKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) APICKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) APICKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) APICKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol APICKtor_httpHttpMessageBuilder
@required
@property (readonly) APICKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface APICKtor_client_coreHttpRequestBuilder : APICBase <APICKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) APICKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (APICKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<APICKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<APICKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<APICKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (APICKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(APICKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (APICKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(APICKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(APICKtor_httpURLBuilder *, APICKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<APICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property APICKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<APICKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) APICKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property APICKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) APICKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface APICKtor_client_coreHttpResponsePipelinePhases : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) APICKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) APICKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) APICKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) APICKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) APICKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface APICKtor_client_coreHttpResponseContainer : APICBase
- (instancetype)initWithExpectedType:(APICKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (APICKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(APICKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) APICKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface APICKtor_client_coreHttpSendPipelinePhases : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) APICKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) APICKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) APICKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) APICKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) APICKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol APICKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface APICKtor_httpUrl : APICBase <APICKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) APICKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<APICKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) APICKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) APICKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface APICKtor_httpHttpMethod : APICBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (APICKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface APICKtor_httpOutgoingContent : APICBase
- (id _Nullable)getPropertyKey:(APICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(APICKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<APICKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) APICLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) APICKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<APICKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) APICKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol APICKotlinx_coroutines_coreJob <APICKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<APICKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<APICKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(APICKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (APICKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<APICKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(APICKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<APICKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(APICKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<APICKotlinx_coroutines_coreJob>)plusOther_:(id<APICKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<APICKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<APICKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<APICKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol APICKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<APICKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface APICKotlinAbstractCoroutineContextKey<B, E> : APICBase <APICKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<APICKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<APICKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface APICKotlinx_coroutines_coreCoroutineDispatcherKey : APICKotlinAbstractCoroutineContextKey<id<APICKotlinContinuationInterceptor>, APICKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<APICKotlinCoroutineContextKey>)baseKey safeCast:(id<APICKotlinCoroutineContextElement> _Nullable (^)(id<APICKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol APICKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol APICKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<APICKotlinKClass>)kClass provider:(id<APICKotlinx_serialization_coreKSerializer> (^)(NSArray<id<APICKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<APICKotlinKClass>)kClass serializer:(id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<APICKotlinKClass>)baseClass actualClass:(id<APICKotlinKClass>)actualClass actualSerializer:(id<APICKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<APICKotlinKClass>)baseClass defaultDeserializerProvider:(id<APICKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<APICKotlinKClass>)baseClass defaultDeserializerProvider:(id<APICKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<APICKotlinKClass>)baseClass defaultSerializerProvider:(id<APICKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface APICKotlinx_serialization_jsonJsonElementCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface APICKotlinx_serialization_jsonClassDiscriminatorMode : APICKotlinEnum<APICKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) APICKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) APICKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) APICKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (APICKotlinArray<APICKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol APICKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<APICKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface APICKtor_httpHeaderValueParam : APICBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (APICKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface APICKtor_httpHeaderValueWithParametersCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<APICKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentDisposition.Companion")))
@interface APICKtor_httpContentDispositionCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_httpContentDispositionCompanion *shared __attribute__((swift_name("shared")));
- (APICKtor_httpContentDisposition *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) APICKtor_httpContentDisposition *Attachment __attribute__((swift_name("Attachment")));
@property (readonly) APICKtor_httpContentDisposition *File __attribute__((swift_name("File")));
@property (readonly) APICKtor_httpContentDisposition *Inline __attribute__((swift_name("Inline")));
@property (readonly) APICKtor_httpContentDisposition *Mixed __attribute__((swift_name("Mixed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface APICKtor_httpContentTypeCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (APICKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) APICKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface APICKotlinKTypeProjection : APICBase
- (instancetype)initWithVariance:(APICKotlinKVariance * _Nullable)variance type:(id<APICKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (APICKotlinKTypeProjection *)doCopyVariance:(APICKotlinKVariance * _Nullable)variance type:(id<APICKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<APICKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) APICKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol APICKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<APICKotlinAppendable>)formatToAppendable:(id<APICKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol APICKotlinx_io_coreRawSink <APICKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(APICKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol APICKotlinx_io_coreSink <APICKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<APICKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<APICKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(APICKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) APICKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface APICKotlinx_io_coreBuffer : APICBase <APICKotlinx_io_coreSource, APICKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (APICKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(APICKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<APICKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(APICKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(APICKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<APICKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<APICKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<APICKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(APICKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<APICKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(APICKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) APICKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface APICKtor_utilsWeekDayCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (APICKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (APICKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface APICKtor_utilsMonthCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (APICKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (APICKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol APICKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<APICKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<APICKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<APICKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<APICKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface APICKtor_utilsStringValuesBuilderImpl : APICBase <APICKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<APICKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<APICKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<APICKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<APICKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) APICMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface APICKtor_httpHeadersBuilder : APICKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<APICKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface APICKtor_client_coreHttpRequestBuilderCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface APICKtor_httpURLBuilder : APICBase
- (instancetype)initWithProtocol:(APICKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<APICKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (APICKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<APICKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<APICKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property APICKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property APICKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface APICKtor_httpUrlCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<APICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface APICKtor_httpURLProtocol : APICBase <APICKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) APICKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (APICKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface APICKtor_httpHttpMethodCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (APICKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<APICKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) APICKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) APICKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) APICKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) APICKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) APICKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) APICKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) APICKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol APICKotlinx_coroutines_coreChildHandle <APICKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(APICKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<APICKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol APICKotlinx_coroutines_coreChildJob <APICKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<APICKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol APICKotlinSequence
@required
- (id<APICKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol APICKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) APICKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<APICKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(APICKotlinThrowable *, id _Nullable, id<APICKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<APICKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol APICKotlinx_coroutines_coreSelectClause0 <APICKotlinx_coroutines_coreSelectClause>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface APICKotlinKVariance : APICKotlinEnum<APICKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) APICKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) APICKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) APICKotlinKVariance *out __attribute__((swift_name("out")));
+ (APICKotlinArray<APICKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<APICKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface APICKotlinKTypeProjectionCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (APICKotlinKTypeProjection *)contravariantType:(id<APICKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (APICKotlinKTypeProjection *)covariantType:(id<APICKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (APICKotlinKTypeProjection *)invariantType:(id<APICKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) APICKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol APICKotlinAppendable
@required
- (id<APICKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<APICKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<APICKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface APICKtor_httpURLBuilderCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol APICKtor_httpParametersBuilder <APICKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface APICKtor_httpURLProtocolCompanion : APICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) APICKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (APICKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) APICKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) APICKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) APICKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) APICKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) APICKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, APICKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol APICKotlinx_coroutines_coreParentJob <APICKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (APICKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol APICKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<APICKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<APICKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
