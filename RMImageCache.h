/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "RMASIHTTPRequestDelegate.h"

@class NSMutableArray, NSMutableDictionary;

@interface RMImageCache : NSObject <RMASIHTTPRequestDelegate> {
	NSMutableDictionary *mCache;	// 4 = 0x4
	NSMutableArray *mKeys;	// 8 = 0x8
	int mTotalBytes;	// 12 = 0xc
	NSMutableDictionary *requestsCache;	// 16 = 0x10
}
+ (id)cacheIdFromString:(id)string;
+ (void)initializeCache;
+ (id)sharedInstance;
+ (void)shutdownCache;
+ (BOOL)writeImage:(id)image toFileAtPath:(id)path;
- (id)init;
- (void)dealloc;
- (void)failDownloadImage:(id)image;
- (id)fetch:(id)fetch;
- (void)finishDownloadImage:(id)image;
- (id)imageCacheRootPath;
- (void)loadImageURL:(id)url;
- (id)pathForImage:(id)image;
- (void)purge;
- (void)purgeUnreferenced;
- (void)removeTempCachedImages;
- (int)roughImageSizeInBytes:(id)bytes;
- (void)startDownloadImage:(id)image;
- (void)store:(id)store withIdentifier:(id)identifier;
@end

