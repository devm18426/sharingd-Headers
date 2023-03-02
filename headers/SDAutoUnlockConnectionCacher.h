/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:14 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, SFDeviceDiscovery, SDStatusMonitor, SDNearbyAgent, SDAutoUnlockTransport, NSObject;

@interface SDAutoUnlockConnectionCacher : NSObject {

	char _activateCalled;
	char _invalidateCalled;
	char _connectionInProgress;
	NSMutableDictionary* _connectedDevices;
	NSMutableSet* _deviceFilter;
	SFDeviceDiscovery* _deviceDiscovery;
	SDStatusMonitor* _monitor;
	SDNearbyAgent* _nearbyAgent;
	char _proximitySleepPrevented;
	int _proximitySleepToken;
	int _testingNotificationToken;
	SDAutoUnlockTransport* _transport;
	char _willSleepTriggered;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(id)init;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_update;
-(void)activate;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)updateDevices:(id)arg1 ;
-(void)updateConnectionInProgress:(char)arg1 ;
-(void)_notificationAddObservers;
-(void)_updateDevices:(id)arg1 ;
-(void)_discoveryEnsureStarted;
-(void)_discoveryEnsureStopped;
-(void)_connectionsEnsureStopped;
-(void)_discoveryFoundDevice:(id)arg1 ;
-(void)_connectWithDevice:(id)arg1 ;
-(void)notificationKeyBagStateChanged:(id)arg1 ;
-(void)notificationSystemWillSleep:(id)arg1 ;
@end
