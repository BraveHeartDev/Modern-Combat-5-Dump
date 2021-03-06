/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import </libobjc.A.h>
#import "UIWebViewDelegate.h"

@class NSMutableArray, UIView, NSString, UIWebView, NSTimer;

@interface WelcomeScreen : NSObject <UIWebViewDelegate> {
	UIView *_welcomeScreenView;	// 4 = 0x4
	UIView *_gameView;	// 8 = 0x8
	UIWebView *_welcomeScreenWebView;	// 12 = 0xc
	float _screenWidth;	// 16 = 0x10
	float _screenHeight;	// 20 = 0x14
	int _languageIndex;	// 24 = 0x18
	NSString *_gameVersion;	// 28 = 0x1c
	NSString *_urlAddressWelcomeScreen;	// 32 = 0x20
	NSString *_welcomeScreenID;	// 36 = 0x24
	NSString *_tokenCRM;	// 40 = 0x28
	NSString *_token;	// 44 = 0x2c
	BOOL _isInWelcomeScreen;	// 48 = 0x30
	BOOL _isOnScreen;	// 49 = 0x31
	BOOL _isDownloadingWelcomeScreens;	// 50 = 0x32
	BOOL _isLocalWS;	// 51 = 0x33
	int _remainingWSToDownload;	// 52 = 0x34
	NSTimer *_welcomeScreenTimer;	// 56 = 0x38
	NSMutableArray *_connectionsArray;	// 60 = 0x3c
	NSMutableArray *_connectionsStatusArray;	// 64 = 0x40
	NSMutableArray *_receivedDataArray;	// 68 = 0x44
	NSMutableArray *_etagsArray;	// 72 = 0x48
	NSMutableArray *_wsIdsArray;	// 76 = 0x4c
	NSMutableArray *_wsTokensArray;	// 80 = 0x50
	BOOL _isPAU;	// 84 = 0x54
}
@property(assign, nonatomic) BOOL isInWelcomeScreen;	// @synthesize=_isInWelcomeScreen
@property(assign, nonatomic) BOOL isOnScreen;	// @synthesize=_isOnScreen
+ (id)EncryptAES_WelcomeScreen:(id)screen :(id)arg2;
+ (id)allocWithZone:(NSZone *)zone;
+ (id)encodeBase64WithData_WelcomeScreen:(id)data_WelcomeScreen;
+ (id)md5FromNSString_WelcomeScreen:(id)nsstring_WelcomeScreen;
+ (id)sharedWelcomeScreen;
- (id)init;
- (id)autorelease;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (void)connectionDidFinishLoading:(id)connection;
- (id)copyWithZone:(NSZone *)zone;
- (void)deleteWSForId:(id)anId;
- (void)downloadWSOnMainThreadWithArrayIdString:(id)arrayIdString;
- (void)downloadWSWithIdArrayString:(id)idArrayString;
- (void)downloadWSWithIdArrayString:(id)idArrayString withLanguageIndex:(int)languageIndex;
- (void)downloadWSWithIdArrayString:(id)idArrayString withLanguageIndex:(int)languageIndex andGameVersion:(id)version;
- (id)getETagFilePathForWSWithId:(id)anId andLanguageIndex:(int)index;
- (id)getFilePathForWSWithId:(id)anId andLanguageIndex:(int)index;
- (void)getWelcomeScreenLink;
// declared property getter: - (BOOL)isInWelcomeScreen;
// declared property getter: - (BOOL)isOnScreen;
- (BOOL)isWSReadyForId:(id)anId;
- (BOOL)isWSReadyForId:(id)anId andLanguageIndex:(int)index;
- (void)orientationChanged;
- (void)quitWelcomeScreen;
- (oneway void)release;
- (id)retain;
- (unsigned)retainCount;
// declared property setter: - (void)setIsInWelcomeScreen:(BOOL)welcomeScreen;
// declared property setter: - (void)setIsOnScreen:(BOOL)screen;
- (void)setIsPAU:(BOOL)pau;
- (void)setLangIndex:(int)index;
- (void)setView:(id)view andGameVersion:(id)version;
- (void)showLocalOnView:(id)view withGameVersion:(id)gameVersion andID:(id)anId;
- (void)showLocalOnView:(id)view withLanguageIndex:(int)languageIndex andGameVersion:(id)version andID:(id)anId;
- (void)showLocalWSWithID:(id)anId;
- (void)showLocalWSWithLanguageIndex:(int)languageIndex andID:(id)anId;
- (void)showOnView:(id)view withLanguageIndex:(int)languageIndex andGameVersion:(id)version;
- (void)showOnView:(id)view withLanguageIndex:(int)languageIndex andGameVersion:(id)version andID:(id)anId;
- (void)showWSWithLanguageIndex:(int)languageIndex;
- (void)showWSWithLanguageIndex:(int)languageIndex andID:(id)anId;
- (void)webView:(id)view didFailWithError:(id)error;
- (BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
- (void)webViewDidFinishLoad:(id)webView;
@end

