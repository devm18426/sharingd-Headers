/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:09 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <libobjc.A.dylib/SDNetworkBrowserDelegate.h>
#import <libobjc.A.dylib/SDNetworkOperationDelegate.h>

@protocol OS_xpc_object;
@class NSMutableSet, SDActivityAdvertiser, SDActivityScanner, SDAirDropReceiveManager, SDAutoUnlockAuthenticationHintsProvider, SDAutoUnlockSessionManager, SDActivityEncryptionManager, SDNearbyIDSAgent, NSMutableDictionary, SDHotspotAgent, SDPairedDeviceAgent, NSObject, SDActivityPayloadManager, SDUnlockKeyManager, SDUnlockLockManager, SDXPCServer, SDXPCHelperConnection, NSString;

@interface SharingDaemon : NSObject <SDNetworkBrowserDelegate, SDNetworkOperationDelegate> {

	NSMutableSet* _activeObjects;
	SDActivityAdvertiser* _activityAdvertiser;
	SDActivityScanner* _activityScanner;
	SDAirDropReceiveManager* _airdropManager;
	SDAutoUnlockAuthenticationHintsProvider* _autoUnlockHintProvider;
	SDAutoUnlockSessionManager* _autoUnlockSessionManager;
	SDActivityEncryptionManager* _encryptionManager;
	SDNearbyIDSAgent* _nearbyIDSAgent;
	NSMutableDictionary* _exportedOperations;
	SDHotspotAgent* _hotspotAgent;
	SDPairedDeviceAgent* _pairedDeviceAgent;
	NSObject*<OS_xpc_object> _listener;
	SDActivityPayloadManager* _payloadManager;
	SDUnlockKeyManager* _unlockKeyManager;
	SDUnlockLockManager* _unlockLockManager;
	unsigned long long _stateHandle;
	SDXPCServer* _xpcServer;
	SDXPCHelperConnection* _helperConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDaemon;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)start;
-(void)stop;
-(void)handleNewConnection:(id)arg1 ;
-(os_state_data_s*)stateCapture;
-(void)networkOperation:(id)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)networkBrowser:(id)arg1 nodesChangedForParent:(SFNodeRef)arg2 protocol:(id)arg3 error:(int)arg4 ;
-(id)xpcArrayForSFNodeArray:(id)arg1 ;
-(id)xpcObjectForSFOperationResults:(id)arg1 ;
-(char)canAccessAirDropSettings:(id)arg1 ;
-(id)stringFromXPCObject:(id)arg1 ;
-(void)handleBrowserMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)handleOperationMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)_performMigrations;
-(id)arrayFromXPCObject:(id)arg1 ;
-(id)numberFromXPCObject:(id)arg1 ;
@end
