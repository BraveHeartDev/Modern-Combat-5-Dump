/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RMItem.h"

@class NSArray;

@interface RMFeedLikes : RMItem {
	NSArray *userIdList;	// 8 = 0x8
	int totalCount;	// 12 = 0xc
	int friendCount;	// 16 = 0x10
	int iLike;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) int friendCount;	// @synthesize
@property(readonly, assign, nonatomic) int iLike;	// @synthesize
@property(readonly, assign, nonatomic) int totalCount;	// @synthesize
@property(readonly, assign, nonatomic) NSArray *userIdList;	// @synthesize
- (id)initWithDictionary:(id)dictionary;
// declared property getter: - (int)friendCount;
// declared property getter: - (int)iLike;
// declared property getter: - (int)totalCount;
// declared property getter: - (id)userIdList;
@end

