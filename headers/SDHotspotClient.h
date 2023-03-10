/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:01 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFRemoteHotspotClient;
@class NSString;

@interface SDHotspotClient : NSObject {

	char _browsing;
	NSString* _bundleID;
	id<SFRemoteHotspotClient> _clientProxy;

}

@property (assign,nonatomic) char browsing;                                      //@synthesize browsing=_browsing - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) id<SFRemoteHotspotClient> clientProxy;              //@synthesize clientProxy=_clientProxy - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setBrowsing:(char)arg1 ;
-(id<SFRemoteHotspotClient>)clientProxy;
-(void)setClientProxy:(id<SFRemoteHotspotClient>)arg1 ;
-(char)browsing;
@end

