/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:17 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <sharingd/sharingd-Structs.h>
@interface sharingd.SDXPCHelperImageCache : NSObject
+(long long)cacheCount;
+(void)clearCacheWithSync:(char)arg1 ;
+(void)setImage:(CGImageRef)arg1 forKey:(id)arg2 contactIDs:(id)arg3 ;
+(void)purgeAvatars;
+(void)evictWithContactIdentifier:(id)arg1 ;
+(char)cacheIsEmpty;
+(CGImageRef)imageForKey:(id)arg1 contactIDs:(id)arg2 ;
-(id)init;
@end

