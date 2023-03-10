/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:04 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDXPCDaemon.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSArray, NSString;

@interface SDActivityController : SDXPCDaemon <IDSServiceDelegate> {

	char _shouldStart;
	IDSService* _activityService;
	NSArray* _allPeerBTIdentifiers;
	NSString* _appleID;

}

@property (nonatomic,retain) IDSService * activityService;                //@synthesize activityService=_activityService - In the implementation block
@property (assign,nonatomic) char shouldStart;                            //@synthesize shouldStart=_shouldStart - In the implementation block
@property (nonatomic,retain) NSArray * allPeerBTIdentifiers;              //@synthesize allPeerBTIdentifiers=_allPeerBTIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * appleID;                            //@synthesize appleID=_appleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)start;
-(void)stop;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(char)restart;
-(IDSService *)activityService;
-(void)setActivityService:(IDSService *)arg1 ;
-(void)activityServiceDevicesChanged:(id)arg1 ;
-(void)nearbyServiceDevicesChanged:(id)arg1 ;
-(id)idsDeviceFromBTIdentifier:(id)arg1 ;
-(char)shouldStart;
-(NSArray *)allPeerBTIdentifiers;
-(void)setShouldStart:(char)arg1 ;
-(void)setAllPeerBTIdentifiers:(NSArray *)arg1 ;
@end

