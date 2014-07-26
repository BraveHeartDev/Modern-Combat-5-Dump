/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSRegularExpression, NSMutableSet, FBSession, NSMutableDictionary, NSTimer;

@interface FBAppEvents : NSObject {
	BOOL _haveOutstandingPersistedData;	// 4 = 0x4
	BOOL _appSupportsImplicitLogging;	// 5 = 0x5
	BOOL _haveFetchedAppSettings;	// 6 = 0x6
	int _flushBehavior;	// 8 = 0x8
	FBSession *_lastSessionLoggedTo;	// 12 = 0xc
	FBSession *_anonymousSession;	// 16 = 0x10
	NSMutableDictionary *_appAuthSessions;	// 20 = 0x14
	NSTimer *_flushTimer;	// 24 = 0x18
	NSTimer *_attributionIDRecheckTimer;	// 28 = 0x1c
	int _appSupportsAttributionStatus;	// 32 = 0x20
	NSRegularExpression *_eventNameRegex;	// 36 = 0x24
	NSMutableSet *_validatedIdentifiers;	// 40 = 0x28
}
@property(retain) FBSession *anonymousSession;	// @synthesize=_anonymousSession
@property(retain) NSMutableDictionary *appAuthSessions;	// @synthesize=_appAuthSessions
@property(assign) int appSupportsAttributionStatus;	// @synthesize=_appSupportsAttributionStatus
@property(assign) BOOL appSupportsImplicitLogging;	// @synthesize=_appSupportsImplicitLogging
@property(retain) NSTimer *attributionIDRecheckTimer;	// @synthesize=_attributionIDRecheckTimer
@property(retain) NSRegularExpression *eventNameRegex;	// @synthesize=_eventNameRegex
@property(assign) int flushBehavior;	// @synthesize=_flushBehavior
@property(retain) NSTimer *flushTimer;	// @synthesize=_flushTimer
@property(assign) BOOL haveFetchedAppSettings;	// @synthesize=_haveFetchedAppSettings
@property(assign) BOOL haveOutstandingPersistedData;	// @synthesize=_haveOutstandingPersistedData
@property(retain) FBSession *lastSessionLoggedTo;	// @synthesize=_lastSessionLoggedTo
@property(retain) NSMutableSet *validatedIdentifiers;	// @synthesize=_validatedIdentifiers
+ (void)activateApp;
+ (void)clearPersistedAppEventData;
+ (id)customAudienceThirdPartyIDRequest:(id)request;
+ (void)ensureOnMainThread;
+ (void)flush;
+ (int)flushBehavior;
+ (id)flushReasonToString:(int)string;
+ (BOOL)limitEventUsage;
+ (void)logAndNotify:(id)notify;
+ (void)logConversionPixel:(id)pixel valueOfPixel:(double)pixel2 session:(id)session;
+ (void)logEvent:(id)event;
+ (void)logEvent:(id)event parameters:(id)parameters;
+ (void)logEvent:(id)event valueToSum:(double)sum;
+ (void)logEvent:(id)event valueToSum:(double)sum parameters:(id)parameters;
+ (void)logEvent:(id)event valueToSum:(id)sum parameters:(id)parameters session:(id)session;
+ (void)logImplicitEvent:(id)event valueToSum:(id)sum parameters:(id)parameters session:(id)session;
+ (void)logPurchase:(double)purchase currency:(id)currency;
+ (void)logPurchase:(double)purchase currency:(id)currency parameters:(id)parameters;
+ (void)logPurchase:(double)purchase currency:(id)currency parameters:(id)parameters session:(id)session;
+ (void)persistAppEventsData:(id)data;
+ (id)persistenceFilePath;
+ (id)retrievePersistedAppEventData;
+ (void)setFlushBehavior:(int)behavior;
+ (void)setLimitEventUsage:(BOOL)usage;
+ (id)singleton;
+ (id)unaffinitizedSessionFromToken:(id)token appID:(id)anId;
+ (long)unixTimeNow;
- (id)init;
// declared property getter: - (id)anonymousSession;
// declared property getter: - (id)appAuthSessions;
// declared property getter: - (int)appSupportsAttributionStatus;
// declared property getter: - (BOOL)appSupportsImplicitLogging;
- (void)appendAttributionAndAdvertiserIDs:(id)ids session:(id)session;
- (void)applicationDidBecomeActive;
- (void)applicationMovingFromActiveState;
- (void)applicationTerminating;
// declared property getter: - (id)attributionIDRecheckTimer;
- (void)attributionIDRecheckTimerFired:(id)fired;
- (BOOL)doesSessionHaveUserToken:(id)token;
// declared property getter: - (id)eventNameRegex;
- (void)flush:(int)flush session:(id)session;
// declared property getter: - (int)flushBehavior;
- (void)flushOnMainQueue:(int)queue session:(id)session;
// declared property getter: - (id)flushTimer;
- (void)flushTimerFired:(id)fired;
- (void)handleActivitiesPostCompletion:(id)completion loggingEntry:(id)entry session:(id)session;
// declared property getter: - (BOOL)haveFetchedAppSettings;
// declared property getter: - (BOOL)haveOutstandingPersistedData;
- (id)instanceCustomAudienceThirdPartyIDRequest:(id)request;
- (void)instanceFlush:(int)flush;
- (void)instanceLogEvent:(id)event valueToSum:(id)sum parameters:(id)parameters isImplicitlyLogged:(BOOL)logged session:(id)session;
// declared property getter: - (id)lastSessionLoggedTo;
- (void)persistDataIfNotInFlight;
- (BOOL)regexValidateIdentifier:(id)identifier;
- (id)sessionToSendRequestTo:(id)to;
// declared property setter: - (void)setAnonymousSession:(id)session;
// declared property setter: - (void)setAppAuthSessions:(id)sessions;
// declared property setter: - (void)setAppSupportsAttributionStatus:(int)status;
// declared property setter: - (void)setAppSupportsImplicitLogging:(BOOL)logging;
// declared property setter: - (void)setAttributionIDRecheckTimer:(id)timer;
// declared property setter: - (void)setEventNameRegex:(id)regex;
// declared property setter: - (void)setFlushBehavior:(int)behavior;
// declared property setter: - (void)setFlushTimer:(id)timer;
// declared property setter: - (void)setHaveFetchedAppSettings:(BOOL)settings;
// declared property setter: - (void)setHaveOutstandingPersistedData:(BOOL)data;
// declared property setter: - (void)setLastSessionLoggedTo:(id)to;
// declared property setter: - (void)setValidatedIdentifiers:(id)identifiers;
- (BOOL)updateAppEventsStateWithPersistedData:(id)persistedData;
- (BOOL)validateIdentifier:(id)identifier;
// declared property getter: - (id)validatedIdentifiers;
@end

