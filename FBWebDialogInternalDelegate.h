/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBDialogDelegate.h"
#import </libobjc.A.h>

@class NSString, NSDictionary, FBDialog, FBSession;
@protocol FBWebDialogsDelegate;

@interface FBWebDialogInternalDelegate : NSObject <FBDialogDelegate> {
	BOOL _isSelfRetained;	// 4 = 0x4
	id _handler;	// 8 = 0x8
	FBDialog *_dialog;	// 12 = 0xc
	NSString *_dialogMethod;	// 16 = 0x10
	NSDictionary *_parameters;	// 20 = 0x14
	FBSession *_session;	// 24 = 0x18
	id<FBWebDialogsDelegate> _delegate;	// 28 = 0x1c
}
@property(assign, nonatomic) id<FBWebDialogsDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) FBDialog *dialog;	// @synthesize=_dialog
@property(copy, nonatomic) NSString *dialogMethod;	// @synthesize=_dialogMethod
@property(copy, nonatomic) id handler;	// @synthesize=_handler
@property(copy, nonatomic) NSDictionary *parameters;	// @synthesize=_parameters
@property(retain, nonatomic) FBSession *session;	// @synthesize=_session
- (id)init;
- (void)completeWithResult:(int)result url:(id)url error:(id)error;
- (void)dealloc;
// declared property getter: - (id)delegate;
// declared property getter: - (id)dialog;
- (void)dialog:(id)dialog didFailWithError:(id)error;
- (BOOL)dialog:(id)dialog shouldOpenURLInExternalBrowser:(id)externalBrowser;
- (void)dialogCompleteWithUrl:(id)url;
- (void)dialogDidComplete:(id)dialog;
- (void)dialogDidNotComplete:(id)dialog;
- (void)dialogDidNotCompleteWithUrl:(id)dialog;
// declared property getter: - (id)dialogMethod;
- (void)goRetainYourself;
// declared property getter: - (id)handler;
// declared property getter: - (id)parameters;
- (void)releaseSelfIfNeeded;
// declared property getter: - (id)session;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setDialog:(id)dialog;
// declared property setter: - (void)setDialogMethod:(id)method;
// declared property setter: - (void)setHandler:(id)handler;
// declared property setter: - (void)setParameters:(id)parameters;
// declared property setter: - (void)setSession:(id)session;
@end

