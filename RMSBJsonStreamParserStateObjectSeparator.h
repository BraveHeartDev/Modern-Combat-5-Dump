/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RMSBJsonStreamParserState.h"


@interface RMSBJsonStreamParserStateObjectSeparator : RMSBJsonStreamParserState {
}
+ (id)sharedInstance;
- (id)name;
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;
- (void)parser:(id)parser shouldTransitionTo:(int)to;
@end
