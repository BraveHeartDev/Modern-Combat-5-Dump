/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSError.h>


@interface NSError (KakaoAdditions)
+ (id)ka_badResponseErrorWithUnderlyingError:(id)underlyingError;
+ (id)ka_errorWithCode:(int)code description:(id)description underlyingError:(id)error failureReason:(id)reason;
+ (id)ka_guestLoginIDGenerationErrorWithReason:(id)reason;
+ (id)ka_httpErrorWithStatusCode:(int)statusCode;
+ (id)ka_invalidGrantErrorWithUnderlyingError:(id)underlyingError;
+ (id)ka_networkErrorWithUnderlyingError:(id)underlyingError;
+ (id)ka_notAuthorizedErrorWithUnderlyingError:(id)underlyingError;
+ (id)ka_notSupportedError;
+ (id)ka_operationCancelledErrorWithFailureReason:(id)failureReason;
+ (id)ka_operationInProgressError;
+ (id)ka_tokenNotFoundError;
@end

