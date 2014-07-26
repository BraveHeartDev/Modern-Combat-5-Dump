/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSInputStream, RMASIHTTPRequest;

@interface RMASIInputStream : NSObject {
	NSInputStream *stream;	// 4 = 0x4
	RMASIHTTPRequest *request;	// 8 = 0x8
}
@property(assign, nonatomic) RMASIHTTPRequest *request;	// @synthesize
@property(retain, nonatomic) NSInputStream *stream;	// @synthesize
+ (void)initialize;
+ (id)inputStreamWithData:(id)data request:(id)request;
+ (id)inputStreamWithFileAtPath:(id)path request:(id)request;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (void)forwardInvocation:(id)invocation;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)open;
- (id)propertyForKey:(id)key;
- (int)read:(char *)read maxLength:(unsigned)length;
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;
// declared property getter: - (id)request;
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
- (void)setDelegate:(id)delegate;
- (BOOL)setProperty:(id)property forKey:(id)key;
// declared property setter: - (void)setRequest:(id)request;
// declared property setter: - (void)setStream:(id)stream;
// declared property getter: - (id)stream;
- (id)streamError;
- (unsigned)streamStatus;
@end
