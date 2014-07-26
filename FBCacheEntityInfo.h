/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString;

@interface FBCacheEntityInfo : NSObject {
	NSString *_uuid;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	double _accessTime;	// 12 = 0xc
	unsigned _fileSize;	// 20 = 0x14
	BOOL _dirty;	// 24 = 0x18
}
@property(readonly, assign) double accessTime;	// @synthesize=_accessTime
@property(assign, getter=isDirty) BOOL dirty;	// @synthesize=_dirty
@property(readonly, assign) unsigned fileSize;	// @synthesize=_fileSize
@property(readonly, assign) NSString *key;	// @synthesize=_key
@property(readonly, assign) NSString *uuid;	// @synthesize=_uuid
- (id)initWithKey:(id)key uuid:(id)uuid accessTime:(double)time fileSize:(unsigned)size;
// declared property getter: - (double)accessTime;
- (void)dealloc;
// declared property getter: - (unsigned)fileSize;
// declared property getter: - (BOOL)isDirty;
// declared property getter: - (id)key;
- (void)registerAccess;
// declared property setter: - (void)setDirty:(BOOL)dirty;
// declared property getter: - (id)uuid;
@end
