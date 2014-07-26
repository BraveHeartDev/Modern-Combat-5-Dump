/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RMUserProfile.h"

@class NSString, NSDate;

@interface RMMainUser : RMUserProfile {
	NSString *_ticket;	// 88 = 0x58
	NSString *_sessionKey;	// 92 = 0x5c
	NSString *_secretKey;	// 96 = 0x60
	NSString *_severDate;	// 100 = 0x64
	int _totalLoginCount;	// 104 = 0x68
	BOOL _needFillStage;	// 108 = 0x6c
	NSString *_oauthToken;	// 112 = 0x70
	NSDate *_oauthExpiration;	// 116 = 0x74
	NSString *_oauthScope;	// 120 = 0x78
	int _loginStatus;	// 124 = 0x7c
	NSString *_homeTimestamp;	// 128 = 0x80
	NSString *_appTimestamp;	// 132 = 0x84
	NSString *_appFeedTimestamp;	// 136 = 0x88
}
@property(copy, nonatomic) NSString *appFeedTimestamp;	// @synthesize=_appFeedTimestamp
@property(copy, nonatomic) NSString *appTimestamp;	// @synthesize=_appTimestamp
@property(copy, nonatomic) NSString *homeTimestamp;	// @synthesize=_homeTimestamp
@property(assign, nonatomic) int loginStatus;	// @synthesize=_loginStatus
@property(assign, nonatomic) BOOL needFillStage;	// @synthesize=_needFillStage
@property(copy, nonatomic) NSDate *oauthExpiration;	// @synthesize=_oauthExpiration
@property(copy, nonatomic) NSString *oauthScope;	// @synthesize=_oauthScope
@property(copy, nonatomic) NSString *oauthToken;	// @synthesize=_oauthToken
@property(copy, nonatomic) NSString *secretKey;	// @synthesize=_secretKey
@property(copy, nonatomic) NSString *sessionKey;	// @synthesize=_sessionKey
@property(copy, nonatomic) NSString *severDate;	// @synthesize=_severDate
@property(copy, nonatomic) NSString *ticket;	// @synthesize=_ticket
@property(assign, nonatomic) int totalLoginCount;	// @synthesize=_totalLoginCount
+ (id)CurrentUser;
+ (void)addLoginLoginInfo:(id)info;
+ (void)addLoginOAuthInfo:(id)info;
+ (void)destroyCurrentUser;
+ (BOOL)isMainUser:(id)user;
+ (void)logoutCurrentUser;
- (id)init;
// declared property getter: - (id)appFeedTimestamp;
// declared property getter: - (id)appTimestamp;
- (void)clearLoginInfo;
- (void)dealloc;
- (void)fillUserInfo:(id)info;
// declared property getter: - (id)homeTimestamp;
// declared property getter: - (int)loginStatus;
// declared property getter: - (BOOL)needFillStage;
// declared property getter: - (id)oauthExpiration;
// declared property getter: - (id)oauthScope;
// declared property getter: - (id)oauthToken;
- (void)restoreLoginInfo:(id)info;
- (void)restoreOAuthInfo:(id)info;
- (void)restoreTimestamp:(id)timestamp;
// declared property getter: - (id)secretKey;
// declared property getter: - (id)sessionKey;
// declared property setter: - (void)setAppFeedTimestamp:(id)timestamp;
// declared property setter: - (void)setAppTimestamp:(id)timestamp;
// declared property setter: - (void)setHomeTimestamp:(id)timestamp;
// declared property setter: - (void)setLoginStatus:(int)status;
// declared property setter: - (void)setNeedFillStage:(BOOL)stage;
// declared property setter: - (void)setOauthExpiration:(id)expiration;
// declared property setter: - (void)setOauthScope:(id)scope;
// declared property setter: - (void)setOauthToken:(id)token;
// declared property setter: - (void)setSecretKey:(id)key;
// declared property setter: - (void)setSessionKey:(id)key;
// declared property setter: - (void)setSeverDate:(id)date;
// declared property setter: - (void)setTicket:(id)ticket;
// declared property setter: - (void)setTotalLoginCount:(int)count;
// declared property getter: - (id)severDate;
- (void)stroeLoginInfo;
- (void)stroeOAuthInfo;
- (void)stroeTimestamp;
// declared property getter: - (id)ticket;
// declared property getter: - (int)totalLoginCount;
@end
