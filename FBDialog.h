/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import <UIKit/UIView.h>
#import "UIWebViewDelegate.h"

@class FBFrictionlessRequestSettings, UIButton, NSMutableDictionary, UIWebView, NSURL, UIActivityIndicatorView, NSString;
@protocol FBDialogDelegate;

@interface FBDialog : UIView <UIWebViewDelegate> {
	id<FBDialogDelegate> _delegate;	// 52 = 0x34
	NSMutableDictionary *_params;	// 56 = 0x38
	NSString *_serverURL;	// 60 = 0x3c
	NSURL *_loadingURL;	// 64 = 0x40
	UIWebView *_webView;	// 68 = 0x44
	UIActivityIndicatorView *_spinner;	// 72 = 0x48
	UIButton *_closeButton;	// 76 = 0x4c
	int _orientation;	// 80 = 0x50
	BOOL _showingKeyboard;	// 84 = 0x54
	BOOL _isViewInvisible;	// 85 = 0x55
	FBFrictionlessRequestSettings *_frictionlessSettings;	// 88 = 0x58
	UIView *_modalBackgroundView;	// 92 = 0x5c
	BOOL _everShown;	// 96 = 0x60
}
@property(assign, nonatomic) id<FBDialogDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) NSMutableDictionary *params;	// @synthesize=_params
- (id)init;
- (id)initWithURL:(id)url params:(id)params isViewInvisible:(BOOL)invisible frictionlessSettings:(id)settings delegate:(id)delegate;
- (void)addObservers;
- (void)addRoundedRectToPath:(CGContextRef)path rect:(CGRect)rect radius:(float)radius;
- (void)bounce1AnimationStopped;
- (void)bounce2AnimationStopped;
- (void)cancel;
- (void)dealloc;
// declared property getter: - (id)delegate;
- (void)deviceOrientationDidChange:(void *)deviceOrientation;
- (void)dialogDidCancel:(id)dialog;
- (void)dialogDidSucceed:(id)dialog;
- (void)dialogSuccessHandleFrictionlessResponses:(id)responses;
- (void)dialogWillAppear;
- (void)dialogWillDisappear;
- (void)dismiss:(BOOL)dismiss;
- (void)dismissWithError:(id)error animated:(BOOL)animated;
- (void)dismissWithSuccess:(BOOL)success animated:(BOOL)animated;
- (void)drawRect:(CGRect)rect;
- (void)drawRect:(CGRect)rect fill:(const float *)fill radius:(float)radius;
- (id)generateURL:(id)url params:(id)params;
- (id)getStringFromUrl:(id)url needle:(id)needle;
- (void)hideSpinner;
- (void)keyboardWillHide:(id)keyboard;
- (void)keyboardWillShow:(id)keyboard;
- (void)load;
- (void)loadURL:(id)url get:(id)get;
// declared property getter: - (id)params;
- (void)postDismissCleanup;
- (void)removeObservers;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setParams:(id)params;
- (BOOL)shouldRotateToOrientation:(int)orientation;
- (void)show;
- (void)showSpinner;
- (void)showWebView;
- (void)sizeToFitOrientation:(BOOL)fitOrientation;
- (void)strokeLines:(CGRect)lines stroke:(const float *)stroke;
- (BOOL)testBoolUrlParam:(id)param param:(id)param2;
- (CGAffineTransform)transformForOrientation;
- (void)updateWebOrientation;
- (void)webView:(id)view didFailLoadWithError:(id)error;
- (BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
- (void)webViewDidFinishLoad:(id)webView;
@end

