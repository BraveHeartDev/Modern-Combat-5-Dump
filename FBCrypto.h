/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSData;

@interface FBCrypto : NSObject {
	NSData *_encryptionKeyData;	// 4 = 0x4
	NSData *_macKeyData;	// 8 = 0x8
}
+ (id)makeMasterKey;
+ (id)randomBytes:(unsigned)bytes;
- (id)initWithEncryptionKey:(id)encryptionKey macKey:(id)key;
- (id)initWithMasterKey:(id)masterKey;
- (id)_macForIV:(id)iv cipherData:(id)data additionalDataToSign:(id)sign;
- (void)dealloc;
- (id)decrypt:(id)decrypt additionalSignedData:(id)data;
- (id)encrypt:(id)encrypt additionalDataToSign:(id)sign;
@end

