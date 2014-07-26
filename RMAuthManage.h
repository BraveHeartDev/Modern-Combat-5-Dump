/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "RMAuthorizeViewDelegate.h"

@class NSString, RMAuthorizeViewController;
@protocol RenrenLoginViewControllerDelegate;

@interface RMAuthManage : NSObject <RMAuthorizeViewDelegate> {
	BOOL _isLogining;	// 4 = 0x4
	id<RenrenLoginViewControllerDelegate> _delegate;	// 8 = 0x8
	NSString *_tempScope;	// 12 = 0xc
	id<RenrenLoginViewControllerDelegate> _tempDelegate;	// 16 = 0x10
	int _tempOrientations;	// 20 = 0x14
	RMAuthorizeViewController *_presentModeViewController;	// 24 = 0x18
	NSString *_componentName;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *componentName;	// @synthesize=_componentName
@property(assign, nonatomic) id<RenrenLoginViewControllerDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) BOOL isLogining;	// @synthesize=_isLogining
@property(retain, nonatomic) RMAuthorizeViewController *presentModeViewController;	// @synthesize=_presentModeViewController
@property(assign, nonatomic) id<RenrenLoginViewControllerDelegate> tempDelegate;	// @synthesize=_tempDelegate
@property(assign, nonatomic) int tempOrientations;	// @synthesize=_tempOrientations
@property(retain, nonatomic) NSString *tempScope;	// @synthesize=_tempScope
+ (void)destroyInstance;
+ (id)sharedInstance;
- (void)authFinishedSuccess;
- (void)authWebViewDidCancel;
- (void)authorizeToOpenWebPageWithScope:(id)scope orientation:(int)orientation andDelegate:(id)delegate;
- (void)authorizeToProcessSSOWithScope:(id)scope andDelegate:(id)delegate;
// declared property getter: - (id)componentName;
- (void)dealloc;
// declared property getter: - (id)delegate;
// declared property getter: - (BOOL)isLogining;
- (void)oauthWebView:(id)view didFailLoadWithError:(id)error;
- (void)oauthWebViewDidFinishLoad:(id)oauthWebView;
- (void)oauthWebViewDidStartLoad:(id)oauthWebView;
// declared property getter: - (id)presentModeViewController;
// declared property setter: - (void)setComponentName:(id)name;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setIsLogining:(BOOL)logining;
// declared property setter: - (void)setPresentModeViewController:(id)controller;
// declared property setter: - (void)setTempDelegate:(id)delegate;
// declared property setter: - (void)setTempOrientations:(int)orientations;
// declared property setter: - (void)setTempScope:(id)scope;
// declared property getter: - (id)tempDelegate;
// declared property getter: - (int)tempOrientations;
// declared property getter: - (id)tempScope;
@end

