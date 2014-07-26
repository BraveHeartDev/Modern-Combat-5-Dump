/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBSessionTokenCachingStrategy.h"

@class NSString, NSDate;

@interface FBSessionManualTokenCachingStrategy : FBSessionTokenCachingStrategy {
	NSString *_accessToken;	// 4 = 0x4
	NSDate *_expirationDate;	// 8 = 0x8
}
@property(copy) NSString *accessToken;	// @synthesize=_accessToken
@property(copy) NSDate *expirationDate;	// @synthesize=_expirationDate
// declared property getter: - (id)accessToken;
- (void)cacheTokenInformation:(id)information;
- (void)clearToken;
- (void)dealloc;
// declared property getter: - (id)expirationDate;
- (id)fetchTokenInformation;
// declared property setter: - (void)setAccessToken:(id)token;
// declared property setter: - (void)setExpirationDate:(id)date;
@end

