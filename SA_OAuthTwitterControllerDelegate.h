/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SA_OAuthTwitterControllerDelegate <NSObject>
@optional
- (void)OAuthTwitterController:(id)controller authenticatedWithUsername:(id)username;
- (void)OAuthTwitterControllerCanceled:(id)canceled;
- (void)OAuthTwitterControllerFailed:(id)failed;
@end

