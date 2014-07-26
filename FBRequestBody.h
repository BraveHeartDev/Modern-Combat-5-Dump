/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSData, NSMutableData;

@interface FBRequestBody : NSObject {
	NSMutableData *_mutableData;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSData *data;
@property(readonly, assign, nonatomic) NSMutableData *mutableData;	// @synthesize=_mutableData
+ (id)mimeContentType;
- (id)init;
- (void)appendRecordBoundary;
- (void)appendUTF8:(id)a8;
- (void)appendWithKey:(id)key dataValue:(id)value logger:(id)logger;
- (void)appendWithKey:(id)key formValue:(id)value logger:(id)logger;
- (void)appendWithKey:(id)key imageValue:(id)value logger:(id)logger;
// declared property getter: - (id)data;
- (void)dealloc;
// declared property getter: - (id)mutableData;
@end
