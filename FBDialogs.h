/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface FBDialogs : NSObject {
}
+ (BOOL)canPresentLoginDialogWithParams:(id)params;
+ (BOOL)canPresentOSIntegratedShareDialogWithSession:(id)session;
+ (BOOL)canPresentShareDialogWithOpenGraphActionParams:(id)openGraphActionParams;
+ (BOOL)canPresentShareDialogWithParams:(id)params;
+ (id)composeViewControllerWithSession:(id)session handler:(id)handler;
+ (id)createError:(id)error session:(id)session;
+ (id)presentLoginDialogWithParams:(id)params clientState:(id)state handler:(id)handler;
+ (BOOL)presentOSIntegratedShareDialogModallyFrom:(id)from initialText:(id)text image:(id)image url:(id)url handler:(id)handler;
+ (BOOL)presentOSIntegratedShareDialogModallyFrom:(id)from initialText:(id)text images:(id)images urls:(id)urls handler:(id)handler;
+ (BOOL)presentOSIntegratedShareDialogModallyFrom:(id)from session:(id)session initialText:(id)text images:(id)images urls:(id)urls handler:(id)handler;
+ (id)presentShareDialogWithLink:(id)link handler:(id)handler;
+ (id)presentShareDialogWithLink:(id)link name:(id)name caption:(id)caption description:(id)description picture:(id)picture clientState:(id)state handler:(id)handler;
+ (id)presentShareDialogWithLink:(id)link name:(id)name handler:(id)handler;
+ (id)presentShareDialogWithOpenGraphAction:(id)openGraphAction actionType:(id)type previewPropertyName:(id)name clientState:(id)state handler:(id)handler;
+ (id)presentShareDialogWithOpenGraphAction:(id)openGraphAction actionType:(id)type previewPropertyName:(id)name handler:(id)handler;
+ (id)presentShareDialogWithOpenGraphActionParams:(id)openGraphActionParams clientState:(id)state handler:(id)handler;
+ (id)presentShareDialogWithParams:(id)params clientState:(id)state handler:(id)handler;
@end

