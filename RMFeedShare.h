/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RMItem.h"

@class NSString;

@interface RMFeedShare : RMItem {
	NSString *sourceId;	// 8 = 0x8
	NSString *ownerId;	// 12 = 0xc
	NSString *ownerName;	// 16 = 0x10
	NSString *comment;	// 20 = 0x14
	NSString *url;	// 24 = 0x18
	NSString *video;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *comment;	// @synthesize
@property(readonly, assign, nonatomic) NSString *ownerId;	// @synthesize
@property(readonly, assign, nonatomic) NSString *ownerName;	// @synthesize
@property(readonly, assign, nonatomic) NSString *sourceId;	// @synthesize
@property(readonly, assign, nonatomic) NSString *url;	// @synthesize
@property(readonly, assign, nonatomic) NSString *video;	// @synthesize
- (id)initWithDictionary:(id)dictionary;
// declared property getter: - (id)comment;
// declared property getter: - (id)ownerId;
// declared property getter: - (id)ownerName;
// declared property getter: - (id)sourceId;
// declared property getter: - (id)url;
// declared property getter: - (id)video;
@end

