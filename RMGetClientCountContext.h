/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RMCommonContext.h"

@class RMGetClientCountResponse;

@interface RMGetClientCountContext : RMCommonContext {
	RMGetClientCountResponse *response;	// 16 = 0x10
}
- (void)asynGetClientCount:(long long)count lastPageTime:(long long)time lastInquiryTime:(long long)time3;
- (void)dealloc;
- (void)didCancelLoad;
- (void)didFailLoadWithError:(id)error;
- (void)didFinishLoad;
- (void)didStartLoad;
- (void)generateResponse;
- (id)getContextResponse;
- (BOOL)synGetClientCount:(long long)count lastPageTime:(long long)time lastInquiryTime:(long long)time3 error:(id *)error;
@end

