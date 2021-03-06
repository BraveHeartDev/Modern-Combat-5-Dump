/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface RMHeartbeatNewMessage : NSObject {
	int gossipReplyCount;	// 4 = 0x4
	int friendRequestCount;	// 8 = 0x8
	int appInviteCount;	// 12 = 0xc
	int appPageFeedCount;	// 16 = 0x10
	int homeFeedCount;	// 20 = 0x14
	int appActivityCount;	// 24 = 0x18
	int appOfficialFeedCount;	// 28 = 0x1c
	int newsCount;	// 32 = 0x20
}
@property(assign, nonatomic) int appActivityCount;	// @synthesize
@property(assign, nonatomic) int appInviteCount;	// @synthesize
@property(assign, nonatomic) int appOfficialFeedCount;	// @synthesize
@property(assign, nonatomic) int appPageFeedCount;	// @synthesize
@property(assign, nonatomic) int friendRequestCount;	// @synthesize
@property(assign, nonatomic) int gossipReplyCount;	// @synthesize
@property(assign, nonatomic) int homeFeedCount;	// @synthesize
@property(assign, nonatomic) int newsCount;	// @synthesize
// declared property getter: - (int)appActivityCount;
// declared property getter: - (int)appInviteCount;
// declared property getter: - (int)appOfficialFeedCount;
// declared property getter: - (int)appPageFeedCount;
// declared property getter: - (int)friendRequestCount;
// declared property getter: - (int)gossipReplyCount;
- (BOOL)hasNewEverMessage;
// declared property getter: - (int)homeFeedCount;
// declared property getter: - (int)newsCount;
// declared property setter: - (void)setAppActivityCount:(int)count;
// declared property setter: - (void)setAppInviteCount:(int)count;
// declared property setter: - (void)setAppOfficialFeedCount:(int)count;
// declared property setter: - (void)setAppPageFeedCount:(int)count;
// declared property setter: - (void)setFriendRequestCount:(int)count;
// declared property setter: - (void)setGossipReplyCount:(int)count;
// declared property setter: - (void)setHomeFeedCount:(int)count;
// declared property setter: - (void)setNewsCount:(int)count;
@end

