/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:08 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDActivityController.h>
#import <libobjc.A.dylib/IDSContinuityDelegate.h>
#import <libobjc.A.dylib/SFContinuityScannerProtocol.h>

@protocol OS_os_transaction, OS_dispatch_source;
@class SDStatusMonitor, IDSContinuity, NSObject, NSMutableDictionary, NSString;

@interface SDActivityScanner : SDActivityController <IDSContinuityDelegate, SFContinuityScannerProtocol> {

	unsigned long long _stateHandle;
	unsigned char _versionByte;
	SDStatusMonitor* _monitor;
	IDSContinuity* _continuity;
	unsigned long long _scanTypes;
	char _scannerEnabled;
	char _isScanning;
	NSObject*<OS_os_transaction> _scanningTransaction;
	NSObject*<OS_dispatch_source> _stopScanLostDeviceTimer;
	NSMutableDictionary* _deviceIdentifierToDeviceRecord;
	NSMutableDictionary* _deviceIdentifierToLostDeviceTimers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedScanner;
-(id)init;
-(id)state;
-(void)start;
-(void)stop;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)continuityDidUpdateState:(id)arg1 ;
-(void)continuity:(id)arg1 didStartScanningForType:(long long)arg2 ;
-(void)continuity:(id)arg1 didStopScanningForType:(long long)arg2 ;
-(void)continuity:(id)arg1 didFailToStartScanningForType:(long long)arg2 withError:(id)arg3 ;
-(void)continuity:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 ;
-(void)continuity:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3 ;
-(void)continuity:(id)arg1 didStartTrackingPeer:(id)arg2 type:(long long)arg3 error:(id)arg4 ;
-(void)continuity:(id)arg1 didStopTrackingPeer:(id)arg2 type:(long long)arg3 ;
-(char)restart;
-(void)connectionInvalidated:(id)arg1 ;
-(void)removeObservers;
-(os_state_data_s*)dumpState;
-(char)shouldAcceptNewConnection:(id)arg1 ;
-(void)addObservers;
-(void)didLosePeer:(id)arg1 ;
-(void)activityServiceDevicesChanged:(id)arg1 ;
-(void)nearbyServiceDevicesChanged:(id)arg1 ;
-(void)consoleUserChanged:(id)arg1 ;
-(void)_enumerateRemoteObjectProxiesUsingBlock:(/*^block*/id)arg1 ;
-(void)connectionEstablished:(id)arg1 ;
-(void)resetStateRequested:(id)arg1 ;
-(void)systemWillSleep:(id)arg1 ;
-(void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)handleNewAdvertisementDevice:(id)arg1 data:(id)arg2 receivedViaScanning:(char)arg3 withSuccessHandler:(/*^block*/id)arg4 ;
-(void)initializeStateCaptureBlock;
-(char)shouldScanForCopyPaste;
-(char)shouldScanForHandoff;
-(char)shouldBoostScan;
-(void)lostAllDevices;
-(void)scanForTypes:(unsigned long long)arg1 ;
-(void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)systemHasPoweredOn:(id)arg1 ;
@end

