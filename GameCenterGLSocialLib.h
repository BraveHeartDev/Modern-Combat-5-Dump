/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "GameCenterGLSocialLibDelegate.h"
#import "GCEncodingDelegate.h"
#import "GKGameCenterControllerDelegate.h"
#import "GKLeaderboardViewControllerDelegate.h"
#import "GKAchievementViewControllerDelegate.h"
#import "ModernCombat5-Structs.h"

@class GCEncoding, GKLocalPlayer, NSMutableDictionary, UIViewController, NSString;

@interface GameCenterGLSocialLib : NSObject <GameCenterGLSocialLibDelegate, GCEncodingDelegate, GKGameCenterControllerDelegate, GKLeaderboardViewControllerDelegate, GKAchievementViewControllerDelegate> {
	GKLocalPlayer *localPlayer;	// 4 = 0x4
	NSString *m_accessToken;	// 8 = 0x8
	NSMutableDictionary *otherPlayers;	// 12 = 0xc
	GCEncoding *gcEncoding;	// 16 = 0x10
	UIViewController *authVC;	// 20 = 0x14
	int gameOrientation;	// 24 = 0x18
	NSString *m_uid;	// 28 = 0x1c
	BOOL isLoggedIn;	// 32 = 0x20
	NSMutableDictionary *achievementsDictionary;	// 36 = 0x24
	UIViewController *authVC_toPresent;	// 40 = 0x28
}
@property(retain, nonatomic) NSMutableDictionary *achievementsDictionary;	// @synthesize
@property(retain, nonatomic) UIViewController *authVC;	// @synthesize
@property(retain, nonatomic) UIViewController *authVC_toPresent;	// @synthesize
@property(assign, nonatomic) int gameOrientation;	// @synthesize
@property(retain, nonatomic) GCEncoding *gcEncoding;	// @synthesize
@property(assign, nonatomic) BOOL isLoggedIn;	// @synthesize
@property(retain, nonatomic) GKLocalPlayer *localPlayer;	// @synthesize
@property(retain, nonatomic) NSString *m_accessToken;	// @synthesize
@property(retain, nonatomic) NSString *m_uid;	// @synthesize
@property(retain, nonatomic) NSMutableDictionary *otherPlayers;	// @synthesize
+ (void)setGameViewControoler:(id)controoler;
- (id)init;
- (void)DismissModalViewController:(id)controller;
- (void)GKEncodingDidFailWithError:(id)gkencoding;
- (void)GKEncodingDidFinishWithResult:(id)gkencoding;
- (void)PresentModalViewController:(id)controller;
- (void)achievementViewControllerDidFinish:(id)achievementViewController;
// declared property getter: - (id)achievementsDictionary;
// declared property getter: - (id)authVC;
// declared property getter: - (id)authVC_toPresent;
- (void)authenticateLocalPlayer;
- (void)dealloc;
- (void)gameCenterGLSocialLib_getAvatar:(int)avatar;
- (void)gameCenterGLSocialLib_getFriends;
- (void)gameCenterGLSocialLib_getName;
- (void)gameCenterGLSocialLib_getUid;
- (BOOL)gameCenterGLSocialLib_getUserAvatar:(id)avatar;
- (void)gameCenterGLSocialLib_getUserData:(id)data;
- (void)gameCenterGLSocialLib_gotAchievement:(id)achievement;
- (void)gameCenterGLSocialLib_incrementAchievement:(id)achievement withProgress:(int)progress;
- (BOOL)gameCenterGLSocialLib_isLoggedIn;
- (void)gameCenterGLSocialLib_issueAchievementChallenge:(id)challenge forPlayers:(id)players message:(id)message;
- (void)gameCenterGLSocialLib_issueLeaderboardChallenge:(id)challenge forPlayers:(id)players message:(id)message;
- (void)gameCenterGLSocialLib_resetAchievements;
- (void)gameCenterGLSocialLib_selectAchievementChallengeablePlayers:(id)players fromListOfPlayers:(id)players2;
- (void)gameCenterGLSocialLib_showLeaderboardByID:(id)anId;
- (void)gameCenterViewControllerDidFinish:(id)gameCenterViewController;
// declared property getter: - (int)gameOrientation;
// declared property getter: - (id)gcEncoding;
- (id)getAchievementForIdentifier:(id)identifier;
// declared property getter: - (BOOL)isLoggedIn;
- (void)leaderboardViewControllerDidFinish:(id)leaderboardViewController;
- (void)loadAchievements;
// declared property getter: - (id)localPlayer;
// declared property getter: - (id)m_accessToken;
// declared property getter: - (id)m_uid;
- (void)onAuthenticateHandler:(id)handler;
- (void)onGetAvatar:(id)avatar withError:(id)error;
- (void)onGetFriendsDataLoad:(id)load withError:(id)error;
- (void)onGetUserAvatar:(id)avatar withError:(id)error;
- (void)onGetUserDataLoad:(id)load withError:(id)error;
- (void)onLeaderboardChallengeablePlayers:(id)players withChallengeScore:(id)challengeScore withError:(id)error;
- (void)onReportAchievementDone:(id)done;
- (void)onSelectChallengeablePlayers:(id)players withError:(id)error;
// declared property getter: - (id)otherPlayers;
- (void)sendError:(id)error;
// declared property setter: - (void)setAchievementsDictionary:(id)dictionary;
// declared property setter: - (void)setAuthVC:(id)vc;
// declared property setter: - (void)setAuthVC_toPresent:(id)present;
- (void)setError:(id)error fromRequest:(SNSRequestState *)request;
// declared property setter: - (void)setGameOrientation:(int)orientation;
// declared property setter: - (void)setGcEncoding:(id)encoding;
// declared property setter: - (void)setIsLoggedIn:(BOOL)anIn;
// declared property setter: - (void)setLocalPlayer:(id)player;
// declared property setter: - (void)setM_accessToken:(id)token;
// declared property setter: - (void)setM_uid:(id)uid;
// declared property setter: - (void)setOtherPlayers:(id)players;
- (void)showAchievements;
- (void)tryToPresentAuthentificationViewController;
- (void)updateAccessToken;
@end

