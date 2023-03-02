/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:06 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, SDAutoUnlockRangingPeer, NSError, NSArray;

@interface SDAutoUnlockWiFiRequest : NSObject {

	char _rangingIntiator;
	char _invalidated;
	char _rangeable;
	char _calledAWDLStarted;
	char _rangingStarted;
	char _waitingForNetworkToDisable;
	char _activateCalled;
	char _invalidateCalled;
	NSDictionary* _awdlInfo;
	NSString* _identifier;
	SDAutoUnlockRangingPeer* _rangingPeer;
	NSError* _wifiRangingError;
	NSArray* _wifiRangingResults;
	/*^block*/id _queueAvailableHandler;
	/*^block*/id _awdlStartedHandler;
	/*^block*/id _peerFoundHandler;
	/*^block*/id _rangingStartedHandler;
	/*^block*/id _rangingCompletedHandler;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic) char activateCalled;                                //@synthesize activateCalled=_activateCalled - In the implementation block
@property (assign,nonatomic) char invalidateCalled;                              //@synthesize invalidateCalled=_invalidateCalled - In the implementation block
@property (assign,nonatomic) char invalidated;                                   //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,retain) NSDictionary * awdlInfo;                            //@synthesize awdlInfo=_awdlInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char rangingIntiator;                               //@synthesize rangingIntiator=_rangingIntiator - In the implementation block
@property (nonatomic,retain) SDAutoUnlockRangingPeer * rangingPeer;              //@synthesize rangingPeer=_rangingPeer - In the implementation block
@property (nonatomic,retain) NSError * wifiRangingError;                         //@synthesize wifiRangingError=_wifiRangingError - In the implementation block
@property (nonatomic,retain) NSArray * wifiRangingResults;                       //@synthesize wifiRangingResults=_wifiRangingResults - In the implementation block
@property (nonatomic,copy) id queueAvailableHandler;                             //@synthesize queueAvailableHandler=_queueAvailableHandler - In the implementation block
@property (nonatomic,copy) id awdlStartedHandler;                                //@synthesize awdlStartedHandler=_awdlStartedHandler - In the implementation block
@property (nonatomic,copy) id peerFoundHandler;                                  //@synthesize peerFoundHandler=_peerFoundHandler - In the implementation block
@property (nonatomic,copy) id rangingStartedHandler;                             //@synthesize rangingStartedHandler=_rangingStartedHandler - In the implementation block
@property (nonatomic,copy) id rangingCompletedHandler;                           //@synthesize rangingCompletedHandler=_rangingCompletedHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                               //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) char rangeable;                                     //@synthesize rangeable=_rangeable - In the implementation block
@property (assign,nonatomic) char calledAWDLStarted;                             //@synthesize calledAWDLStarted=_calledAWDLStarted - In the implementation block
@property (assign,nonatomic) char rangingStarted;                                //@synthesize rangingStarted=_rangingStarted - In the implementation block
@property (assign,nonatomic) char waitingForNetworkToDisable;                    //@synthesize waitingForNetworkToDisable=_waitingForNetworkToDisable - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)invalidate;
-(NSString *)identifier;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(id)invalidationHandler;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setInvalidated:(char)arg1 ;
-(char)invalidated;
-(void)setAwdlInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)awdlInfo;
-(NSArray *)wifiRangingResults;
-(char)activateCalled;
-(void)setActivateCalled:(char)arg1 ;
-(id)queueAvailableHandler;
-(char)invalidateCalled;
-(void)setInvalidateCalled:(char)arg1 ;
-(void)setQueueAvailableHandler:(id)arg1 ;
-(void)setAwdlStartedHandler:(id)arg1 ;
-(void)setPeerFoundHandler:(id)arg1 ;
-(void)setRangingStartedHandler:(id)arg1 ;
-(void)setRangingCompletedHandler:(id)arg1 ;
-(char)rangingIntiator;
-(void)setRangingIntiator:(char)arg1 ;
-(SDAutoUnlockRangingPeer *)rangingPeer;
-(void)setRangingPeer:(SDAutoUnlockRangingPeer *)arg1 ;
-(NSError *)wifiRangingError;
-(void)setWifiRangingError:(NSError *)arg1 ;
-(void)setWifiRangingResults:(NSArray *)arg1 ;
-(id)awdlStartedHandler;
-(id)peerFoundHandler;
-(id)rangingStartedHandler;
-(id)rangingCompletedHandler;
-(char)rangeable;
-(void)setRangeable:(char)arg1 ;
-(char)calledAWDLStarted;
-(void)setCalledAWDLStarted:(char)arg1 ;
-(char)rangingStarted;
-(void)setRangingStarted:(char)arg1 ;
-(char)waitingForNetworkToDisable;
-(void)setWaitingForNetworkToDisable:(char)arg1 ;
@end
