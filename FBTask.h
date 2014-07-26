/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import </libobjc.A.h>

@class NSMutableArray, NSCondition, NSError, NSException;

@interface FBTask : NSObject {
	id _result;	// 4 = 0x4
	NSError *_error;	// 8 = 0x8
	NSException *_exception;	// 12 = 0xc
	BOOL _cancelled;	// 16 = 0x10
	BOOL _completed;	// 17 = 0x11
	NSObject *_lock;	// 20 = 0x14
	NSCondition *_condition;	// 24 = 0x18
	NSMutableArray *_callbacks;	// 28 = 0x1c
}
@property(retain, nonatomic) NSMutableArray *callbacks;	// @synthesize=_callbacks
@property(assign, nonatomic) BOOL completed;	// @synthesize=_completed
@property(retain, nonatomic) NSCondition *condition;	// @synthesize=_condition
@property(retain, nonatomic) NSObject *lock;	// @synthesize=_lock
+ (id)cancelledTask;
+ (id)taskDependentOnTasks:(id)tasks;
+ (id)taskWithDelay:(unsigned long long)delay;
+ (id)taskWithError:(id)error;
+ (id)taskWithException:(id)exception;
+ (id)taskWithResult:(id)result;
- (id)init;
// declared property getter: - (id)callbacks;
- (void)cancel;
// declared property getter: - (BOOL)completed;
- (id)completionTaskWithBlock:(id)block;
- (id)completionTaskWithQueue:(dispatch_queue_s *)queue block:(id)block;
// declared property getter: - (id)condition;
- (void)dealloc;
- (id)dependentTaskWithBlock:(id)block;
- (id)dependentTaskWithBlock:(id)block queue:(dispatch_queue_s *)queue;
- (id)error;
- (id)exception;
- (BOOL)isCancelled;
- (BOOL)isCompleted;
// declared property getter: - (id)lock;
- (id)result;
- (void)runContinuations;
// declared property setter: - (void)setCallbacks:(id)callbacks;
- (void)setCompleted;
// declared property setter: - (void)setCompleted:(BOOL)completed;
// declared property setter: - (void)setCondition:(id)condition;
- (void)setError:(id)error;
- (void)setException:(id)exception;
// declared property setter: - (void)setLock:(id)lock;
- (void)setResult:(id)result;
- (BOOL)trySetCancelled;
- (BOOL)trySetError:(id)error;
- (BOOL)trySetException:(id)exception;
- (BOOL)trySetResult:(id)result;
- (id)waitForResult:(id *)result;
- (void)waitUntilFinished;
- (void)warnOperationOnMainThread;
- (void)warnOperationOnMainThreadNoOp;
@end

