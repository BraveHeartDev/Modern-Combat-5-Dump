/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import <UIKit/UIView.h>

@class NSTimer, UILabel, NSDate, UIFont, NSString;
@protocol RMProgressHUDDelegate;

@interface RMProgressHUD : UIView {
	BOOL useAnimation;	// 50 = 0x32
	SEL methodForExecution;	// 52 = 0x34
	id targetForExecution;	// 56 = 0x38
	id objectForExecution;	// 60 = 0x3c
	UILabel *label;	// 64 = 0x40
	UILabel *detailsLabel;	// 68 = 0x44
	BOOL isFinished;	// 72 = 0x48
	CGAffineTransform rotationTransform;	// 76 = 0x4c
	BOOL square;	// 100 = 0x64
	BOOL dimBackground;	// 101 = 0x65
	BOOL taskInProgress;	// 102 = 0x66
	BOOL removeFromSuperViewOnHide;	// 103 = 0x67
	int animationType;	// 104 = 0x68
	id<RMProgressHUDDelegate> delegate;	// 108 = 0x6c
	float opacity;	// 112 = 0x70
	UIFont *labelFont;	// 116 = 0x74
	UIFont *detailsLabelFont;	// 120 = 0x78
	UIView *indicator;	// 124 = 0x7c
	float xOffset;	// 128 = 0x80
	float yOffset;	// 132 = 0x84
	float margin;	// 136 = 0x88
	float graceTime;	// 140 = 0x8c
	float minShowTime;	// 144 = 0x90
	NSTimer *graceTimer;	// 148 = 0x94
	NSTimer *minShowTimer;	// 152 = 0x98
	UIView *customView;	// 156 = 0x9c
	NSDate *showStarted;	// 160 = 0xa0
	int mode;	// 164 = 0xa4
	NSString *labelText;	// 168 = 0xa8
	NSString *detailsLabelText;	// 172 = 0xac
	float progress;	// 176 = 0xb0
	CGSize minSize;	// 180 = 0xb4
	CGSize size;	// 188 = 0xbc
}
@property(assign) int animationType;	// @synthesize
@property(retain) UIView *customView;	// @synthesize
@property(assign) id<RMProgressHUDDelegate> delegate;	// @synthesize
@property(retain) UIFont *detailsLabelFont;	// @synthesize
@property(copy) NSString *detailsLabelText;	// @synthesize
@property(assign) BOOL dimBackground;	// @synthesize
@property(assign) float graceTime;	// @synthesize
@property(retain) NSTimer *graceTimer;	// @synthesize
@property(retain) UIView *indicator;	// @synthesize
@property(retain) UIFont *labelFont;	// @synthesize
@property(copy) NSString *labelText;	// @synthesize
@property(assign) float margin;	// @synthesize
@property(assign) float minShowTime;	// @synthesize
@property(retain) NSTimer *minShowTimer;	// @synthesize
@property(assign) CGSize minSize;	// @synthesize
@property(assign) int mode;	// @synthesize
@property(assign) float opacity;	// @synthesize
@property(assign) float progress;	// @synthesize
@property(assign) BOOL removeFromSuperViewOnHide;	// @synthesize
@property(retain) NSDate *showStarted;	// @synthesize
@property(assign) CGSize size;	// @synthesize
@property(assign, getter=isSquare) BOOL square;	// @synthesize
@property(assign) BOOL taskInProgress;	// @synthesize
@property(assign) float xOffset;	// @synthesize
@property(assign) float yOffset;	// @synthesize
+ (id)HUDForView:(id)view;
+ (id)allHUDsForView:(id)view;
+ (unsigned)hideAllHUDsForView:(id)view animated:(BOOL)animated;
+ (BOOL)hideHUDForView:(id)view animated:(BOOL)animated;
+ (id)showHUDAddedTo:(id)to animated:(BOOL)animated;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithView:(id)view;
- (id)initWithWindow:(id)window;
- (void)animationFinished:(id)finished finished:(BOOL)finished2 context:(void *)context;
// declared property getter: - (int)animationType;
- (void)cleanUp;
// declared property getter: - (id)customView;
- (void)dealloc;
// declared property getter: - (id)delegate;
// declared property getter: - (id)detailsLabelFont;
// declared property getter: - (id)detailsLabelText;
- (void)deviceOrientationDidChange:(id)deviceOrientation;
// declared property getter: - (BOOL)dimBackground;
- (void)done;
- (void)drawRect:(CGRect)rect;
// declared property getter: - (float)graceTime;
// declared property getter: - (id)graceTimer;
- (void)handleGraceTimer:(id)timer;
- (void)handleMinShowTimer:(id)timer;
- (void)hide:(BOOL)hide;
- (void)hide:(BOOL)hide afterDelay:(double)delay;
- (void)hideDelayed:(id)delayed;
- (void)hideUsingAnimation:(BOOL)animation;
// declared property getter: - (id)indicator;
// declared property getter: - (BOOL)isSquare;
// declared property getter: - (id)labelFont;
// declared property getter: - (id)labelText;
- (void)launchExecution;
- (void)layoutSubviews;
// declared property getter: - (float)margin;
// declared property getter: - (float)minShowTime;
// declared property getter: - (id)minShowTimer;
// declared property getter: - (CGSize)minSize;
// declared property getter: - (int)mode;
- (id)observableKeypaths;
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;
// declared property getter: - (float)opacity;
// declared property getter: - (float)progress;
- (void)registerForKVO;
- (void)registerForNotifications;
// declared property getter: - (BOOL)removeFromSuperViewOnHide;
// declared property setter: - (void)setAnimationType:(int)type;
// declared property setter: - (void)setCustomView:(id)view;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setDetailsLabelFont:(id)font;
// declared property setter: - (void)setDetailsLabelText:(id)text;
// declared property setter: - (void)setDimBackground:(BOOL)background;
// declared property setter: - (void)setGraceTime:(float)time;
// declared property setter: - (void)setGraceTimer:(id)timer;
// declared property setter: - (void)setIndicator:(id)indicator;
// declared property setter: - (void)setLabelFont:(id)font;
// declared property setter: - (void)setLabelText:(id)text;
// declared property setter: - (void)setMargin:(float)margin;
// declared property setter: - (void)setMinShowTime:(float)time;
// declared property setter: - (void)setMinShowTimer:(id)timer;
// declared property setter: - (void)setMinSize:(CGSize)size;
// declared property setter: - (void)setMode:(int)mode;
// declared property setter: - (void)setOpacity:(float)opacity;
// declared property setter: - (void)setProgress:(float)progress;
// declared property setter: - (void)setRemoveFromSuperViewOnHide:(BOOL)superViewOnHide;
// declared property setter: - (void)setShowStarted:(id)started;
// declared property setter: - (void)setSize:(CGSize)size;
// declared property setter: - (void)setSquare:(BOOL)square;
// declared property setter: - (void)setTaskInProgress:(BOOL)progress;
- (void)setTransformForCurrentOrientation:(BOOL)currentOrientation;
// declared property setter: - (void)setXOffset:(float)offset;
// declared property setter: - (void)setYOffset:(float)offset;
- (void)setupLabels;
- (void)show:(BOOL)show;
// declared property getter: - (id)showStarted;
- (void)showUsingAnimation:(BOOL)animation;
- (void)showWhileExecuting:(SEL)executing onTarget:(id)target withObject:(id)object animated:(BOOL)animated;
// declared property getter: - (CGSize)size;
// declared property getter: - (BOOL)taskInProgress;
- (void)unregisterFromKVO;
- (void)unregisterFromNotifications;
- (void)updateIndicators;
- (void)updateUIForKeypath:(id)keypath;
// declared property getter: - (float)xOffset;
// declared property getter: - (float)yOffset;
@end

