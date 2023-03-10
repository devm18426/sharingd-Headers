/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:15 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSData, NSMutableDictionary, NSMutableSet, SFBLEAdvertiser, SFBLEScanner, WPNearby, NSDictionary, SFBLEPipe, NSArray, NSSet, IDSService, NSUUID, SDStatusMonitor, CUSystemMonitor, SFSystemService, CUBluetoothClient, RPIdentity, NSString;

@interface SDNearbyAgent : NSObject <IDSServiceDelegate> {

	char _activated;
	char _activityCarPlayRegistered;
	int _activityLevelNotifyToken;
	unsigned char _activityLevel;
	char _activityMonitorStarted;
	char _activityMultipleUsersRegistered;
	int _activityPollSeconds;
	int _activityRecentSeconds;
	char _activityScreenOn;
	NSObject*<OS_dispatch_source> _activityTimer;
	char _activityUIUnlocked;
	char _activityUserActive;
	NSData* _bleAdvertisingAddress;
	NSData* _bleAudioRoutingScoreEncryptedData;
	NSData* _bleAuthTagOverride;
	NSMutableDictionary* _bleConnections;
	char _bleDiagnosticAdvSuppressLogged;
	NSMutableSet* _bleDiagnosticModeClients;
	NSData* _bleHotspotEncryptedData;
	SFBLEAdvertiser* _bleNearbyActionAdvertiser;
	char _bleNearbyActionAdvertiseActive;
	char _bleNearbyActionAdvertiseDisabled;
	NSObject*<OS_dispatch_source> _bleNearbyActionAdvertiseLingerTimer;
	NSMutableDictionary* _bleNearbyActionDevices;
	char _bleNearbyActionRSSILog;
	char _bleNearbyActionScanAlways;
	char _bleNearbyActionScanNever;
	SFBLEScanner* _bleNearbyActionScanner;
	char _bleNearbyInfoAdvertiseAlways;
	char _bleNearbyInfoAdvertiseDisabled;
	double _bleNearbyInfoAdvertiseLingerSecs;
	SFBLEAdvertiser* _bleNearbyInfoAdvertiser;
	char _bleNearbyInfoAdvertised;
	NSObject*<OS_dispatch_source> _bleNearbyInfoAdvertiseLingerTimer;
	char _bleNearbyInfoAirDropUsable;
	NSMutableDictionary* _bleNearbyInfoDevices;
	char _bleNearbyInfoRSSILog;
	char _bleNearbyInfoWiFiP2P;
	SFBLEScanner* _bleNearbyInfoScanner;
	WPNearby* _bleWPNearby;
	char _bleProximityEnabled;
	NSDictionary* _bleProximityInfo;
	NSDictionary* _bleProximityInfoOverride;
	SFBLEScanner* _bleProximityPairingScanner;
	char _bleProximityRSSILog;
	char _btPipeEnabled;
	char _btPipeForced;
	SFBLEPipe* _btPipe;
	char _caEnabled;
	int _caForce;
	unsigned _caMessageNoScans;
	unsigned _caMessageScans;
	char _caPhoneCalls;
	NSMutableSet* _caRequests;
	char _caScanIfVeryActive;
	char _caSingleDevice;
	NSData* _contactHashesCached;
	char _contactHashesEnabled;
	unsigned long long _ddFastScanLastEndTicks;
	NSObject*<OS_dispatch_source> _ddFastScanTimer;
	NSMutableDictionary* _ddNearbyActionDevices;
	char _ddNearbyActionEnabled;
	char _ddNearbyActionScreenOff;
	NSMutableDictionary* _ddNearbyInfoDevices;
	char _ddNearbyInfoEnabled;
	char _ddNearbyInfoScreenOff;
	NSMutableDictionary* _ddProximityPairingDevices;
	char _ddProximityPairingEnabled;
	char _ddProximityPairingScreenOff;
	NSMutableSet* _ddRequests;
	unsigned long long _familyFlags;
	int _familyNotifyToken;
	char _fitnessPairingEnabled;
	char _homePodIdentifiesAsB520;
	int _idsAppleTVCountCache;
	NSArray* _idsBluetoothDevicesArray;
	NSSet* _idsBluetoothDevicesSet;
	NSArray* _idsBluetoothDeviceIDsForLEPipe;
	NSSet* _idsBluetoothDeviceIDsForMe;
	NSMutableDictionary* _idsBTtoIDSInfoMap;
	int _idsContinuityDeviceCountCache;
	NSArray* _idsDeviceArray;
	NSDictionary* _idsDeviceBTDictionary;
	NSDictionary* _idsDeviceCountBTDictionary;
	int _idsHasActiveWatchCache;
	int _idsHomePodCountCache;
	int _idsIsSignedInCache;
	int _idsMacCountCache;
	int _idsShouldAdvertiseNearbyInfo;
	int _idsShouldEncryptActivityLevel;
	IDSService* _idsService;
	char _logProxAdvFields;
	NSUUID* _remoteAppServiceUUID;
	NSMutableDictionary* _services;
	NSMutableDictionary* _sessions;
	NSMutableDictionary* _setupSessions;
	double _startTime;
	SDStatusMonitor* _statusMonitor;
	CUSystemMonitor* _systemMonitor;
	SFSystemService* _systemService;
	char _unlockAdvertiseAlways;
	char _unlockAdvertiseAggressive;
	char _unlockAdvertiseEnabled;
	char _unlockAdvertiseBackground;
	char _unlockAdvertiseWatch;
	char _unlockAdvertiseWatchLocked;
	NSObject*<OS_dispatch_source> _unlockTestClientTimer;
	NSMutableDictionary* _idDevices;
	char _idEnabled;
	int _idIdentitiesChangedNotifyToken;
	NSArray* _idIdentityArray;
	NSObject*<OS_dispatch_source> _idMaintenanceTimer;
	char _systemWillPowerDown;
	char _autoUnlockActive;
	char _boostNearbyInfo;
	int _audioRoutingScore;
	unsigned _hotspotInfo;
	NSData* _bleAuthTag;
	CUBluetoothClient* _btConnectedDeviceMonitor;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	RPIdentity* _idSelfIdentity;

}

@property (assign,nonatomic) char autoUnlockActive;                                       //@synthesize autoUnlockActive=_autoUnlockActive - In the implementation block
@property (assign,nonatomic) int audioRoutingScore;                                       //@synthesize audioRoutingScore=_audioRoutingScore - In the implementation block
@property (nonatomic,readonly) NSData * bleAuthTag;                                       //@synthesize bleAuthTag=_bleAuthTag - In the implementation block
@property (assign,nonatomic) char boostNearbyInfo;                                        //@synthesize boostNearbyInfo=_boostNearbyInfo - In the implementation block
@property (nonatomic,readonly) CUBluetoothClient * btConnectedDeviceMonitor;              //@synthesize btConnectedDeviceMonitor=_btConnectedDeviceMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                  //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned hotspotInfo;                                        //@synthesize hotspotInfo=_hotspotInfo - In the implementation block
@property (nonatomic,readonly) RPIdentity * idSelfIdentity;                               //@synthesize idSelfIdentity=_idSelfIdentity - In the implementation block
@property (nonatomic,readonly) char screenOn; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedNearbyAgent;
-(NSString *)description;
-(id)init;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_update;
-(void)activate;
-(void)update;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)screenOn;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)_systemWillSleep;
-(NSData *)bleAuthTag;
-(unsigned)hotspotInfo;
-(void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4 ;
-(void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 ;
-(void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3 ;
-(void)nearbyDidUpdateState:(id)arg1 ;
-(void)_activityMonitorEnsureStopped;
-(void)_activityMonitorEnsureStarted;
-(int)audioRoutingScore;
-(void)_idsEnsureStarted;
-(void)_idsEnsureStopped;
-(void)setHotspotInfo:(unsigned)arg1 ;
-(void)prefsChanged;
-(void)setAutoUnlockActive:(char)arg1 ;
-(void)unlockUpdateAdvertising:(unsigned)arg1 mask:(unsigned)arg2 ;
-(void)sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_systemHasPoweredOn;
-(void)bleProximityEstimatorsResetDeviceClose;
-(void)startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(char)arg2 ;
-(void)stopUnlockBLEConnectionWithDevice:(id)arg1 ;
-(void)sendUnlockDataDirect:(id)arg1 toBLEDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(RPIdentity *)idSelfIdentity;
-(void)_btPipeEnsureStarted;
-(double)_activityMonitorLastUserEventDelta;
-(char)idsIsSignedIn;
-(id)idsDeviceArray;
-(int)_idsAppleTVCount;
-(int)_idsContinuityDeviceCount;
-(int)_idsHomePodCount;
-(int)_idsShouldEncryptActivityLevel;
-(void)idsDevicesAppendDescription:(id*)arg1 ;
-(void)_handleAirDropDiscoverableModeChanged:(id)arg1 ;
-(void)_handleAppleIDChanged:(id)arg1 ;
-(void)_activityMonitorMediaAccessControlSettingChanged:(id)arg1 ;
-(void)_activityMonitorWatchWristStateChanged:(id)arg1 ;
-(void)_activityMonitorScreenStateChanged:(id)arg1 ;
-(void)_activityMonitorUILockStatusChanged:(id)arg1 ;
-(void)_unlockApproveBluetoothIDsChanged:(id)arg1 ;
-(void)_bleAdvertisingAddressChanged;
-(void)_idsMeDeviceChanged;
-(void)_identificationEnsureStopped;
-(void)_bleNearbyActionAdvertiserEnsureStopped;
-(void)_bleNearbyActionScannerEnsureStopped;
-(void)_bleNearbyInfoAdvertiserEnsureStopped;
-(void)_bleNearbyInfoScannerEnsureStopped;
-(void)_bleProximityPairingScannerEnsureStopped;
-(void)_btPipeEnsureStopped;
-(id)bleProximityRSSIEstimatorInfo;
-(void)_identificationEnsureStarted;
-(char)_bleNearbyActionAdvertiserShouldAdvertise;
-(void)_bleNearbyActionAdvertiserEnsureStarted;
-(char)_bleNearbyActionScannerShouldScan;
-(void)_bleNearbyActionScannerEnsureStarted;
-(char)_bleNearbyInfoAdvertiserShouldAdvertise;
-(char)_bleNearbyInfoAdvertiserLingerIfNeeded;
-(void)_bleNearbyInfoAdvertiserEnsureStarted;
-(char)_bleNearbyInfoScannerShouldScan;
-(void)_bleNearbyInfoScannerEnsureStarted;
-(char)_bleProximityPairingScannerShouldScan;
-(void)_bleProximityPairingScannerEnsureStarted;
-(void)_activityMonitorUpdate;
-(void)_bleNearbyInfoAdvertiserUpdate;
-(void)_activityMonitorCarPlayStatusChanged:(id)arg1 ;
-(void)_activityMonitorMultipleUsersLoggedInChanged:(id)arg1 ;
-(unsigned char)_activityMonitorCurrentLevelAndNeedsPoll:(char*)arg1 recentUserActivity:(char*)arg2 ;
-(void)_activityMonitorUpdateUserActive:(char)arg1 ;
-(void)_bleNearbyInfoAdvertiserLingerStart:(id)arg1 ;
-(void)_bleUpdateAuthTagIfNeeded;
-(id)_idsBluetoothDeviceIDsForLEPipe;
-(void)_bleUpdateScanner:(id)arg1 typeFlag:(unsigned long long)arg2 ;
-(void)_deviceDiscoveryBLEDeviceFound:(id)arg1 type:(long long)arg2 ;
-(void)_deviceDiscoveryBLEDeviceLost:(id)arg1 type:(long long)arg2 ;
-(void)_deviceDiscoveryBLEDeviceChanged:(id)arg1 type:(long long)arg2 changes:(unsigned)arg3 ;
-(void)_deviceDiscoveryBLEScanStateChanged:(long long)arg1 type:(long long)arg2 ;
-(char)_idsShouldAdvertiseNearbyInfo;
-(unsigned char)_bleEncryptActivityLevel:(unsigned char)arg1 ;
-(void)_bleNearbyInfoAdvertiserUpdateAddAudioRoutingScore:(id)arg1 ;
-(void)_bleNearbyInfoAdvertiserUpdateAddHotspotInfo:(id)arg1 ;
-(void)_unlockReceivedFrameData:(id)arg1 peer:(id)arg2 device:(id)arg3 ;
-(int)_bleNearbyInfoReceivedFrameType:(unsigned char)arg1 src:(const char*)arg2 end:(const char*)arg3 cnx:(id)arg4 ;
-(int)_setupHandleCreateSession:(id)arg1 data:(id)arg2 ;
-(int)_setupHandleSessionCreated:(id)arg1 data:(id)arg2 ;
-(int)_setupHandleSessionEncryptedFrame:(id)arg1 type:(unsigned char)arg2 cnx:(id)arg3 ;
-(void)serviceReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4 ;
-(void)sessionReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4 ;
-(id)_idsBluetoothDeviceIDsForSharing;
-(void)_btPipeHandleFrameType:(unsigned char)arg1 data:(id)arg2 ;
-(id)bleProximityInfoForActionType:(unsigned char)arg1 device:(id)arg2 ;
-(id)bleProximityInfoForType:(id)arg1 device:(id)arg2 ;
-(id)bleProximityInfoForType:(id)arg1 device:(id)arg2 allInfo:(id)arg3 ;
-(id)bleProximityInfo;
-(long long)bleProximityRSSIThreshold:(id)arg1 ;
-(id)bleProximityEstimatorForActionType:(unsigned char)arg1 device:(id)arg2 ;
-(unsigned)_bleProximityUpdateDeviceCloseNearbyActionDevice:(id)arg1 ;
-(void)_bleNearbyInfoReceivedData:(id)arg1 cnx:(id)arg2 peer:(id)arg3 ;
-(id)_idsBluetoothDeviceIDsForiMessage;
-(id)_idsBluetoothDeviceIDsForSMSRelay;
-(void)_deviceDiscoveryRequestStart:(id)arg1 ;
-(id)idsBluetoothDeviceIDsForSharing;
-(id)_idsBluetoothDeviceIDsForMe;
-(id)_idsBluetoothDeviceIDsForHomePods;
-(void)_deviceDiscoveryFastScanStart:(id)arg1 device:(id)arg2 reason:(id)arg3 ;
-(void)_identificationHandleDiscoveryStop;
-(void)_unlockDeviceFilterChangedForRequest:(id)arg1 ;
-(void)_deviceDiscoveryFastScanStop:(id)arg1 reset:(char)arg2 reason:(id)arg3 ;
-(void)idsAddCachedIDSIdentifierToDevice:(id)arg1 ;
-(unsigned)_bleProximityUpdateNearbyActionDevice:(id)arg1 ;
-(void)_identificationHandleDeviceFound:(id)arg1 flags:(unsigned long long)arg2 ;
-(unsigned)_bleProximityUpdateNearbyInfoDevice:(id)arg1 ;
-(void)_deviceDiscoveryFastScanEvaluate:(id)arg1 device:(id)arg2 ;
-(void)_identificationHandleDeviceLost:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)_identificationGetIdentities;
-(void)_identificationReIdentify;
-(void)_identificationCheckFlags;
-(char)_identificationIdentifyDevice:(id)arg1 sfDevice:(id)arg2 ;
-(void)setAudioRoutingScore:(int)arg1 ;
-(void)_identificationDecryptAudioRoutingScoreData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4 ;
-(void)_identificationDecryptHotspotData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4 ;
-(unsigned char)_identificationDecryptActivityLevel:(unsigned char)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4 ;
-(void)_identificationMaintenanceTimer;
-(void)_identificationReIdentifySameAccountDevices:(id)arg1 type:(long long)arg2 ;
-(id)_idsBluetoothDeviceIDsForSharingLocked;
-(id)_idsDeviceArrayLocked;
-(int)_sendMessage:(id)arg1 frameType:(unsigned char)arg2 service:(id)arg3 session:(id)arg4 ;
-(int)_setupSendCreateSession:(id)arg1 cnx:(id)arg2 ;
-(int)_setupSendData:(id)arg1 sessionIdentifier:(id)arg2 cnx:(id)arg3 clientSession:(id)arg4 ;
-(int)_setupHandleSessionMessageType:(unsigned char)arg1 src:(const char*)arg2 end:(const char*)arg3 cnx:(id)arg4 session:(id)arg5 ;
-(void)_startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(char)arg2 ;
-(id)idsBluetoothDeviceIDsForLEPipe;
-(void)_stopUnlockBLEConnectionWithDevice:(id)arg1 ;
-(void)_sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 direct:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_testPipePing;
-(id)sharedNearbyPipe;
-(void)setBoostNearbyInfo:(char)arg1 ;
-(void)activityStateWithCompletion:(/*^block*/id)arg1 ;
-(int)bleNearbyInfoStartConnectionToDevice:(id)arg1 owner:(id)arg2 connected:(char*)arg3 ;
-(void)bleNearbyInfoStopConnectionToDevice:(id)arg1 owner:(id)arg2 ;
-(int)bleNearbyInfoSendFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4 isSession:(char)arg5 ;
-(long long)bleProximityRSSIThresholdForType:(long long)arg1 device:(id)arg2 ;
-(void)coordinatedAlertRequestStart:(id)arg1 ;
-(void)coordinatedAlertRequestFinish:(id)arg1 ;
-(void)coordinatedAlertRequestCancel:(id)arg1 ;
-(void)deviceDiscoveryRequestStart:(id)arg1 ;
-(void)deviceDiscoveryRequestStop:(id)arg1 ;
-(void)deviceDiscoveryRequestUpdate:(id)arg1 ;
-(void)deviceDiscoveryFastScanTrigger:(id)arg1 reason:(id)arg2 ;
-(void)deviceDiscoveryFastScanCancel:(id)arg1 reason:(id)arg2 ;
-(void)diagnosticBLEModeStart:(id)arg1 ;
-(void)diagnosticBLEModeStop:(id)arg1 ;
-(void)diagnosticMockChanged:(id)arg1 ;
-(void)diagnosticMockFound:(id)arg1 ;
-(void)diagnosticMockLost:(id)arg1 ;
-(void)idsAddCachedIDSIdentifier:(id)arg1 device:(id)arg2 ;
-(id)idsBluetoothDeviceIDsForAppleTVs;
-(id)idsBluetoothDeviceIDsForWatches;
-(id)idsDeviceForBluetoothDeviceID:(id)arg1 conflictDetected:(char*)arg2 ;
-(char)_idsHasActiveWatch;
-(int)_idsMacCount;
-(int)serviceStart:(id)arg1 ;
-(void)serviceStop:(id)arg1 ;
-(void)serviceSendEvent:(id)arg1 service:(id)arg2 ;
-(void)serviceSendRequest:(id)arg1 service:(id)arg2 ;
-(void)serviceSendResponse:(id)arg1 service:(id)arg2 ;
-(int)sessionStart:(id)arg1 ;
-(void)sessionStop:(id)arg1 ;
-(void)sessionSendEvent:(id)arg1 session:(id)arg2 ;
-(void)sessionSendRequest:(id)arg1 session:(id)arg2 ;
-(void)sessionSendResponse:(id)arg1 session:(id)arg2 ;
-(void)unlockStartTestClientWithDevice:(id)arg1 ;
-(void)unlockStopTestClient;
-(void)unlockStartTestServer;
-(void)unlockStopTestServer;
-(void)testPipePing;
-(char)autoUnlockActive;
-(char)boostNearbyInfo;
-(CUBluetoothClient *)btConnectedDeviceMonitor;
@end

