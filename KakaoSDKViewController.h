/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import </libobjc.A.h>
#import "KakaoStoryViewDelegate.h"

@class UIView, NSString, KakaoStoryView, UIImage;

@interface KakaoSDKViewController : NSObject <KakaoStoryViewDelegate> {
	UIView *view;	// 4 = 0x4
	CGSize windowSize;	// 8 = 0x8
	KakaoStoryView *_storyView;	// 16 = 0x10
	BOOL isUploading;	// 20 = 0x14
	BOOL needUploadPost;	// 21 = 0x15
	id _completionHandler;	// 24 = 0x18
	BOOL isStatusBarHidden;	// 28 = 0x1c
	UIView *_view;	// 32 = 0x20
	CGSize _windowSize;	// 36 = 0x24
	UIImage *_imageToUpload;	// 44 = 0x2c
	NSString *_media_path;	// 48 = 0x30
	NSString *_metainfoString;	// 52 = 0x34
}
@property(retain, nonatomic) UIImage *imageToUpload;	// @synthesize=_imageToUpload
@property(copy, nonatomic) NSString *media_path;	// @synthesize=_media_path
@property(retain, nonatomic) NSString *metainfoString;	// @synthesize=_metainfoString
@property(copy, nonatomic) NSString *storyViewString;
@property(readonly, assign, nonatomic) UIView *view;	// @synthesize=_view
@property(readonly, assign, nonatomic) CGSize windowSize;	// @synthesize=_windowSize
+ (id)controller;
+ (void)initialize;
- (id)init;
- (void).cxx_destruct;
- (void)addWindowSubview:(id)subview;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (id)bundlePathWithFilename:(id)filename;
- (void)cancelStoryViewByOrientationChnage;
- (void)closeStoryView;
// declared property getter: - (id)imageToUpload;
- (void)kakaoStoryViewDidClickClose:(id)kakaoStoryView;
- (void)kakaoStoryViewDidClickUpload:(id)kakaoStoryView;
// declared property getter: - (id)media_path;
// declared property getter: - (id)metainfoString;
// declared property setter: - (void)setImageToUpload:(id)upload;
// declared property setter: - (void)setMedia_path:(id)path;
// declared property setter: - (void)setMetainfoString:(id)string;
// declared property setter: - (void)setStoryViewString:(id)string;
- (void)showFriendsView;
- (void)showStoryViewWithImage:(id)image metaInfoArray:(id)array completionHandler:(id)handler;
- (void)showStoryViewWithImage:(id)image postString:(id)string metaInfoArray:(id)array completionHandler:(id)handler;
// declared property getter: - (id)storyViewString;
- (void)uploadStoryImage:(id)image;
- (void)uploadStoryPost;
// declared property getter: - (id)view;
// declared property getter: - (CGSize)windowSize;
@end

