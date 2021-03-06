/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSURLConnection.h>

@class NSURL, NSString, NSMutableData;

@interface MGTwitterHTTPURLConnection : NSURLConnection {
	NSMutableData *_data;	// 8 = 0x8
	int _requestType;	// 12 = 0xc
	int _responseType;	// 16 = 0x10
	NSString *_identifier;	// 20 = 0x14
	NSURL *_URL;	// 24 = 0x18
}
- (id)initWithRequest:(id)request delegate:(id)delegate requestType:(int)type responseType:(int)type4;
- (id)URL;
- (void)appendData:(id)data;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (int)requestType;
- (void)resetDataLength;
- (int)responseType;
@end

