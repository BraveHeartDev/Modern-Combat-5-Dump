/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, NSDictionary, NSURLConnection, NSMutableData, SinaWeibo;
@protocol SinaWeiboRequestDelegate;

@interface SinaWeiboRequest : NSObject {
	SinaWeibo *sinaweibo;	// 4 = 0x4
	NSString *url;	// 8 = 0x8
	NSString *httpMethod;	// 12 = 0xc
	NSDictionary *params;	// 16 = 0x10
	NSURLConnection *connection;	// 20 = 0x14
	NSMutableData *responseData;	// 24 = 0x18
	id<SinaWeiboRequestDelegate> delegate;	// 28 = 0x1c
}
@property(assign, nonatomic) id<SinaWeiboRequestDelegate> delegate;	// @synthesize
@property(retain, nonatomic) NSString *httpMethod;	// @synthesize
@property(retain, nonatomic) NSDictionary *params;	// @synthesize
@property(assign, nonatomic) SinaWeibo *sinaweibo;	// @synthesize
@property(retain, nonatomic) NSString *url;	// @synthesize
+ (id)getParamValueFromUrl:(id)url paramName:(id)name;
+ (id)requestWithAccessToken:(id)accessToken url:(id)url httpMethod:(id)method params:(id)params delegate:(id)delegate;
+ (id)requestWithURL:(id)url httpMethod:(id)method params:(id)params delegate:(id)delegate;
+ (id)serializeURL:(id)url params:(id)params httpMethod:(id)method;
- (void)appendUTF8Body:(id)body dataString:(id)string;
- (void)connect;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (id)connection:(id)connection willCacheResponse:(id)response;
- (void)connectionDidFinishLoading:(id)connection;
- (void)dealloc;
// declared property getter: - (id)delegate;
- (void)disconnect;
- (id)errorWithCode:(int)code userInfo:(id)info;
- (void)failedWithError:(id)error;
- (void)handleResponseData:(id)data;
// declared property getter: - (id)httpMethod;
// declared property getter: - (id)params;
- (id)parseJSONData:(id)data error:(id *)error;
- (id)postBodyHasRawData:(BOOL *)data;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setHttpMethod:(id)method;
// declared property setter: - (void)setParams:(id)params;
// declared property setter: - (void)setSinaweibo:(id)sinaweibo;
// declared property setter: - (void)setUrl:(id)url;
// declared property getter: - (id)sinaweibo;
// declared property getter: - (id)url;
@end

