/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol RMRequestContextDelegate <NSObject>
@optional
- (void)context:(id)context didFailLoadWithError:(id)error;
- (void)contextDidCancelLoad:(id)context;
- (void)contextDidFinishLoad:(id)context;
- (void)contextDidStartLoad:(id)context;
@end
