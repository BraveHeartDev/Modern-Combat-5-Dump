/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>
#import "SA_OAuthTwitterControllerDelegate.h"
#import "SA_OAuthTwitterEngineDelegate.h"
#import "MGTwitterEngineDelegate.h"

@class SA_OAuthTwitterEngine;

@interface TwitteriOSGLSocialLib : UIViewController <SA_OAuthTwitterControllerDelegate, SA_OAuthTwitterEngineDelegate, MGTwitterEngineDelegate> {
	SA_OAuthTwitterEngine *twitterEngine;	// 160 = 0xa0
	bool isLoggedIn;	// 164 = 0xa4
	int gameOrientation;	// 168 = 0xa8
	bool isVerifyTokenRequest;	// 172 = 0xac
}
@property(assign, nonatomic) int gameOrientation;	// @synthesize
@property(assign, nonatomic) bool isLoggedIn;	// @synthesize
@property(assign, nonatomic) bool isVerifyTokenRequest;	// @synthesize
@property(retain, nonatomic) SA_OAuthTwitterEngine *twitterEngine;	// @synthesize
+ (void)setGameViewController:(id)controller;
- (id)init;
- (void)DismissModalViewController;
- (void)OAuthTwitterController:(id)controller authenticatedWithUsername:(id)username;
- (void)OAuthTwitterControllerCanceled:(id)canceled;
- (void)OAuthTwitterControllerFailed:(id)failed;
- (void)PresentModalViewController:(id)controller;
- (void)attemptAutoLogin;
- (id)cachedTwitterOAuthDataForUsername:(id)username;
- (void)clearCachedTwitterOAuthData;
- (void)dealloc;
- (void)directMessagesReceived:(id)received forRequest:(id)request;
// declared property getter: - (int)gameOrientation;
- (bool)getUserData:(id)data;
// declared property getter: - (bool)isLoggedIn;
// declared property getter: - (bool)isVerifyTokenRequest;
- (void)login;
- (void)logout;
- (bool)queryFriendIds;
- (bool)queryProfile;
- (void)requestFailed:(id)failed withError:(id)error;
- (void)requestSucceeded:(id)succeeded;
- (bool)sendUpdate:(id)update;
// declared property setter: - (void)setGameOrientation:(int)orientation;
// declared property setter: - (void)setIsLoggedIn:(bool)anIn;
// declared property setter: - (void)setIsVerifyTokenRequest:(bool)request;
// declared property setter: - (void)setTwitterEngine:(id)engine;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (void)statusesReceived:(id)received forRequest:(id)request;
- (void)storeCachedTwitterOAuthData:(id)data forUsername:(id)username;
// declared property getter: - (id)twitterEngine;
- (void)unParsedJsonDataReceived:(id)received forRequest:(id)request;
- (void)userInfoReceived:(id)received forRequest:(id)request;
- (bool)verifyToken;
- (void)viewDidLoad;
@end

