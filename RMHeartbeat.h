/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RMRequestContextDelegate.h"
#import </libobjc.A.h>

@class RMGetClientCountContext, NSTimer, RMHeartbeatNewMessage;

@interface RMHeartbeat : NSObject <RMRequestContextDelegate> {
	NSTimer *activateTimer;	// 4 = 0x4
	RMGetClientCountContext *getClientCountContext;	// 8 = 0x8
	RMHeartbeatNewMessage *heartBeatNewsMessage;	// 12 = 0xc
	int heartbeatLevel;	// 16 = 0x10
	unsigned long long homeTime;	// 20 = 0x14
	unsigned long long appTime;	// 28 = 0x1c
	unsigned long long appFeedTime;	// 36 = 0x24
	double systemTime;	// 44 = 0x2c
}
@property(assign, nonatomic) unsigned long long appFeedTime;	// @synthesize
@property(assign, nonatomic) unsigned long long appTime;	// @synthesize
@property(retain, nonatomic) RMHeartbeatNewMessage *heartBeatNewsMessage;	// @synthesize
@property(assign) int heartbeatLevel;	// @synthesize
@property(assign, nonatomic) unsigned long long homeTime;	// @synthesize
@property(assign, nonatomic) double systemTime;	// @synthesize
+ (id)shareHeartbeat;
- (id)init;
// declared property getter: - (unsigned long long)appFeedTime;
// declared property getter: - (unsigned long long)appTime;
- (void)contextDidCancelLoad:(id)context;
- (void)contextDidFinishLoad:(id)context;
- (void)contextDidStartLoad:(id)context;
- (void)dealloc;
// declared property getter: - (id)heartBeatNewsMessage;
// declared property getter: - (int)heartbeatLevel;
// declared property getter: - (unsigned long long)homeTime;
- (void)keepActivate:(int)activate;
- (void)keepActiveNewMsg;
- (void)loadTimestamp;
- (void)runTimer:(id)timer;
- (void)saveAppFeedTimestamp:(unsigned long long)timestamp;
- (void)saveAppTimestamp:(unsigned long long)timestamp;
- (void)saveHomeTimestamp:(unsigned long long)timestamp;
- (void)saveTimestamp;
// declared property setter: - (void)setAppFeedTime:(unsigned long long)time;
// declared property setter: - (void)setAppTime:(unsigned long long)time;
// declared property setter: - (void)setHeartBeatNewsMessage:(id)message;
// declared property setter: - (void)setHeartbeatLevel:(int)level;
// declared property setter: - (void)setHomeTime:(unsigned long long)time;
// declared property setter: - (void)setSystemTime:(double)time;
- (void)startActivate;
- (void)stopActivate;
// declared property getter: - (double)systemTime;
- (int)timerInterval;
@end

