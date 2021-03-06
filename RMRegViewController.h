/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RMViewController.h"
#import "UIWebViewDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"


@interface RMRegViewController : RMViewController <MFMessageComposeViewControllerDelegate, UIWebViewDelegate> {
}
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)displaySMSComposerSheet;
- (void)loadView;
- (void)loadViewInterfaceOrientationForiPad;
- (void)loadViewInterfaceOrientationIsLandscape;
- (void)loadViewInterfaceOrientationIsPortrait;
- (void)messageComposeViewController:(id)controller didFinishWithResult:(int)result;
- (void)sendRegSMS;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (unsigned)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)view;
- (BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
- (void)webViewDidFinishLoad:(id)webView;
- (void)webViewDidStartLoad:(id)webView;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

