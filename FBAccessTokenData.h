/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"

@class NSString, NSArray, NSDate;

@interface FBAccessTokenData : NSObject <NSCopying> {
	NSString *_accessToken;	// 4 = 0x4
	NSArray *_permissions;	// 8 = 0x8
	NSDate *_expirationDate;	// 12 = 0xc
	int _loginType;	// 16 = 0x10
	NSDate *_refreshDate;	// 20 = 0x14
	NSDate *_permissionsRefreshDate;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *accessToken;	// @synthesize=_accessToken
@property(readonly, assign, nonatomic) NSDate *expirationDate;	// @synthesize=_expirationDate
@property(readonly, assign, nonatomic) int loginType;	// @synthesize=_loginType
@property(copy, nonatomic) NSArray *permissions;	// @synthesize=_permissions
@property(copy, nonatomic) NSDate *permissionsRefreshDate;	// @synthesize=_permissionsRefreshDate
@property(copy, nonatomic) NSDate *refreshDate;	// @synthesize=_refreshDate
+ (id)createTokenFromDictionary:(id)dictionary;
+ (id)createTokenFromFacebookURL:(id)facebookURL appID:(id)anId urlSchemeSuffix:(id)suffix;
+ (id)createTokenFromString:(id)string permissions:(id)permissions expirationDate:(id)date loginType:(int)type refreshDate:(id)date5;
+ (id)createTokenFromString:(id)string permissions:(id)permissions expirationDate:(id)date loginType:(int)type refreshDate:(id)date5 permissionsRefreshDate:(id)date6;
- (id)initWithToken:(id)token permissions:(id)permissions expirationDate:(id)date loginType:(int)type refreshDate:(id)date5 permissionsRefreshDate:(id)date6;
// declared property getter: - (id)accessToken;
- (id)copyWithZone:(NSZone *)zone;
- (void)dealloc;
- (id)description;
- (id)dictionary;
// declared property getter: - (id)expirationDate;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAccessTokenData:(id)accessTokenData;
// declared property getter: - (int)loginType;
// declared property getter: - (id)permissions;
// declared property getter: - (id)permissionsRefreshDate;
// declared property getter: - (id)refreshDate;
// declared property setter: - (void)setPermissions:(id)permissions;
// declared property setter: - (void)setPermissionsRefreshDate:(id)date;
// declared property setter: - (void)setRefreshDate:(id)date;
@end

