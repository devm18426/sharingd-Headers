/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:03 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SDAutoUnlockIconTransferStore : NSObject {

	NSMutableDictionary* _transferStore;

}
-(id)init;
-(void)_loadTransferStore;
-(void)storeCachedImageForHash:(id)arg1 device:(id)arg2 appName:(id)arg3 ;
-(char)imageCachedForHash:(id)arg1 device:(id)arg2 ;
@end

