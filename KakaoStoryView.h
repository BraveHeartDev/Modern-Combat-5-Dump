/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "ModernCombat5-Structs.h"
#import "UITextViewDelegate.h"

@class UIImageView, UIButton, UIPlaceHolderTextView;
@protocol KakaoStoryViewDelegate;

@interface KakaoStoryView : UIView <UITextViewDelegate> {
	UIImageView *thumbnailView;	// 48 = 0x30
	id<KakaoStoryViewDelegate> storyViewDelegate;	// 52 = 0x34
	UIPlaceHolderTextView *storyTextView;	// 56 = 0x38
	BOOL _isPublic;	// 60 = 0x3c
	UIButton *_privacyButton;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) BOOL isPublic;	// @synthesize=_isPublic
@property(retain, nonatomic) UIButton *privacyButton;	// @synthesize=_privacyButton
@property(readonly, assign, nonatomic) UIPlaceHolderTextView *storyTextView;	// @synthesize
@property(assign, nonatomic) id<KakaoStoryViewDelegate> storyViewDelegate;	// @synthesize
- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame withOrientation:(int)orientation;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didClickClose;
- (void)didClickUpload;
// declared property getter: - (BOOL)isPublic;
- (void)layoutSubviews;
// declared property getter: - (id)privacyButton;
- (void)privacyButtonTouched:(id)touched;
- (void)setImage:(id)image;
// declared property setter: - (void)setPrivacyButton:(id)button;
// declared property setter: - (void)setStoryViewDelegate:(id)delegate;
- (void)setText:(id)text;
// declared property getter: - (id)storyTextView;
// declared property getter: - (id)storyViewDelegate;
- (void)textViewDidChange:(id)textView;
@end

