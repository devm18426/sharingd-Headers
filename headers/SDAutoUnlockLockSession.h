/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:08 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDAutoUnlockAuthSession.h>
#import <libobjc.A.dylib/CWEventDelegate.h>

@protocol OS_dispatch_source;
@class NSUUID, NSDate, NSString, SFAutoUnlockDevice, NSData, SDAutoUnlockIconTransferStore, NSArray, SDUnlockSessionAuthToken, NSObject;

@interface SDAutoUnlockLockSession : SDAutoUnlockAuthSession <CWEventDelegate> {

	char _useProxy;
	char _wifiState;
	char _otherSessionCancel;
	char _otherProviderCancel;
	char _attemptTimedOut;
	char _chosenDevice;
	char _canceled;
	char _oldWatch;
	char _onlyRanging;
	char _foundPeer;
	char _connected;
	char _lockedKeyBag;
	char _unlockSucceeded;
	char _deviceWasLocked;
	char _receivedAWDLInfo;
	char _receivedAuthPromptResponse;
	char _sendingConfirmation;
	char _sentExchangeResponse;
	char _receivedExchangeRequest;
	char _supportsConfirmationACK;
	char _waitingForDisplayOrClamshell;
	char _sentImageData;
	char _imageDataAlreadyCached;
	char _needsNewImage;
	char _awdlUp;
	int _proxyRSSI;
	int _watchRSSI;
	NSUUID* _bluetoothID;
	NSDate* _startDate;
	double _discoveryTime;
	double _proxyDiscoveryTime;
	NSString* _proxyDeviceModel;
	double _proxyConnectionTime;
	unsigned long long _connectedBluetoothDevices;
	long long _timeSinceLastMachineWake;
	long long _lastSleepType;
	SFAutoUnlockDevice* _autoUnlockDevice;
	NSData* _externalACMContext;
	NSData* _imageData;
	NSData* _imageHash;
	SDAutoUnlockIconTransferStore* _iconTransferStore;
	NSArray* _peerList;
	NSData* _peerMacAddress;
	SDUnlockSessionAuthToken* _sessionAuthToken;
	long long _displayCount;
	long long _configChangeType;
	NSObject*<OS_dispatch_source> _displayTimer;
	NSObject*<OS_dispatch_source> _confirmationTimer;
	NSString* _watchModelID;
	NSString* _watchBuildVersion;
	NSString* _watchOSVersion;
	NSDate* _discoveryDate;
	NSDate* _connectionDate;
	NSDate* _firstSend;
	NSDate* _exchageResponseDate;
	NSDate* _displayOrClamshellWaitingDate;
	NSDate* _confirmationSendDate;
	double _btOverall;
	double _btBootstrap;
	double _awdlInfoExchange;
	double _keyRequestExchange;
	double _tokenExchange;
	double _confirmation;
	double _peerFoundInterval;
	double _awdlTotal;
	double _completeExchange;
	double _connectionTime;
	double _connectionWaitTime;
	double _displayClamshellWaitTime;

}

@property (assign,nonatomic) char canceled;                                                  //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) char oldWatch;                                                  //@synthesize oldWatch=_oldWatch - In the implementation block
@property (assign,nonatomic) char onlyRanging;                                               //@synthesize onlyRanging=_onlyRanging - In the implementation block
@property (assign,nonatomic) char foundPeer;                                                 //@synthesize foundPeer=_foundPeer - In the implementation block
@property (assign,nonatomic) char connected;                                                 //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) char lockedKeyBag;                                              //@synthesize lockedKeyBag=_lockedKeyBag - In the implementation block
@property (assign,nonatomic) char unlockSucceeded;                                           //@synthesize unlockSucceeded=_unlockSucceeded - In the implementation block
@property (assign,nonatomic) char deviceWasLocked;                                           //@synthesize deviceWasLocked=_deviceWasLocked - In the implementation block
@property (assign,nonatomic) char receivedAWDLInfo;                                          //@synthesize receivedAWDLInfo=_receivedAWDLInfo - In the implementation block
@property (assign,nonatomic) char receivedAuthPromptResponse;                                //@synthesize receivedAuthPromptResponse=_receivedAuthPromptResponse - In the implementation block
@property (assign,nonatomic) char sendingConfirmation;                                       //@synthesize sendingConfirmation=_sendingConfirmation - In the implementation block
@property (assign,nonatomic) char sentExchangeResponse;                                      //@synthesize sentExchangeResponse=_sentExchangeResponse - In the implementation block
@property (assign,nonatomic) char receivedExchangeRequest;                                   //@synthesize receivedExchangeRequest=_receivedExchangeRequest - In the implementation block
@property (assign,nonatomic) char supportsConfirmationACK;                                   //@synthesize supportsConfirmationACK=_supportsConfirmationACK - In the implementation block
@property (assign,nonatomic) char waitingForDisplayOrClamshell;                              //@synthesize waitingForDisplayOrClamshell=_waitingForDisplayOrClamshell - In the implementation block
@property (assign,nonatomic) char sentImageData;                                             //@synthesize sentImageData=_sentImageData - In the implementation block
@property (assign,nonatomic) char imageDataAlreadyCached;                                    //@synthesize imageDataAlreadyCached=_imageDataAlreadyCached - In the implementation block
@property (assign,nonatomic) char needsNewImage;                                             //@synthesize needsNewImage=_needsNewImage - In the implementation block
@property (nonatomic,readonly) char usingProxy; 
@property (nonatomic,copy) NSArray * peerList;                                               //@synthesize peerList=_peerList - In the implementation block
@property (nonatomic,copy) NSData * peerMacAddress;                                          //@synthesize peerMacAddress=_peerMacAddress - In the implementation block
@property (nonatomic,retain) SDUnlockSessionAuthToken * sessionAuthToken;                    //@synthesize sessionAuthToken=_sessionAuthToken - In the implementation block
@property (assign,nonatomic) int watchRSSI;                                                  //@synthesize watchRSSI=_watchRSSI - In the implementation block
@property (assign,nonatomic) long long displayCount;                                         //@synthesize displayCount=_displayCount - In the implementation block
@property (assign,nonatomic) long long configChangeType;                                     //@synthesize configChangeType=_configChangeType - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> displayTimer;                               //@synthesize displayTimer=_displayTimer - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> confirmationTimer;                          //@synthesize confirmationTimer=_confirmationTimer - In the implementation block
@property (assign,nonatomic) char awdlUp;                                                    //@synthesize awdlUp=_awdlUp - In the implementation block
@property (nonatomic,retain) NSString * watchModelID;                                        //@synthesize watchModelID=_watchModelID - In the implementation block
@property (nonatomic,retain) NSString * watchBuildVersion;                                   //@synthesize watchBuildVersion=_watchBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * watchOSVersion;                                      //@synthesize watchOSVersion=_watchOSVersion - In the implementation block
@property (nonatomic,retain) NSDate * discoveryDate;                                         //@synthesize discoveryDate=_discoveryDate - In the implementation block
@property (nonatomic,retain) NSDate * connectionDate;                                        //@synthesize connectionDate=_connectionDate - In the implementation block
@property (nonatomic,retain) NSDate * firstSend;                                             //@synthesize firstSend=_firstSend - In the implementation block
@property (nonatomic,retain) NSDate * exchageResponseDate;                                   //@synthesize exchageResponseDate=_exchageResponseDate - In the implementation block
@property (nonatomic,retain) NSDate * displayOrClamshellWaitingDate;                         //@synthesize displayOrClamshellWaitingDate=_displayOrClamshellWaitingDate - In the implementation block
@property (nonatomic,retain) NSDate * confirmationSendDate;                                  //@synthesize confirmationSendDate=_confirmationSendDate - In the implementation block
@property (assign,nonatomic) double btOverall;                                               //@synthesize btOverall=_btOverall - In the implementation block
@property (assign,nonatomic) double btBootstrap;                                             //@synthesize btBootstrap=_btBootstrap - In the implementation block
@property (assign,nonatomic) double awdlInfoExchange;                                        //@synthesize awdlInfoExchange=_awdlInfoExchange - In the implementation block
@property (assign,nonatomic) double keyRequestExchange;                                      //@synthesize keyRequestExchange=_keyRequestExchange - In the implementation block
@property (assign,nonatomic) double tokenExchange;                                           //@synthesize tokenExchange=_tokenExchange - In the implementation block
@property (assign,nonatomic) double confirmation;                                            //@synthesize confirmation=_confirmation - In the implementation block
@property (assign,nonatomic) double peerFoundInterval;                                       //@synthesize peerFoundInterval=_peerFoundInterval - In the implementation block
@property (assign,nonatomic) double awdlTotal;                                               //@synthesize awdlTotal=_awdlTotal - In the implementation block
@property (assign,nonatomic) double completeExchange;                                        //@synthesize completeExchange=_completeExchange - In the implementation block
@property (assign,nonatomic) double connectionTime;                                          //@synthesize connectionTime=_connectionTime - In the implementation block
@property (assign,nonatomic) double connectionWaitTime;                                      //@synthesize connectionWaitTime=_connectionWaitTime - In the implementation block
@property (assign,nonatomic) double displayClamshellWaitTime;                                //@synthesize displayClamshellWaitTime=_displayClamshellWaitTime - In the implementation block
@property (nonatomic,retain) NSUUID * bluetoothID;                                           //@synthesize bluetoothID=_bluetoothID - In the implementation block
@property (assign,nonatomic) char useProxy;                                                  //@synthesize useProxy=_useProxy - In the implementation block
@property (assign,nonatomic) char wifiState;                                                 //@synthesize wifiState=_wifiState - In the implementation block
@property (assign,nonatomic) char otherSessionCancel;                                        //@synthesize otherSessionCancel=_otherSessionCancel - In the implementation block
@property (assign,nonatomic) char otherProviderCancel;                                       //@synthesize otherProviderCancel=_otherProviderCancel - In the implementation block
@property (assign,nonatomic) char attemptTimedOut;                                           //@synthesize attemptTimedOut=_attemptTimedOut - In the implementation block
@property (assign,nonatomic) char chosenDevice;                                              //@synthesize chosenDevice=_chosenDevice - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                             //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double discoveryTime;                                           //@synthesize discoveryTime=_discoveryTime - In the implementation block
@property (assign,nonatomic) double proxyDiscoveryTime;                                      //@synthesize proxyDiscoveryTime=_proxyDiscoveryTime - In the implementation block
@property (nonatomic,retain) NSString * proxyDeviceModel;                                    //@synthesize proxyDeviceModel=_proxyDeviceModel - In the implementation block
@property (assign,nonatomic) int proxyRSSI;                                                  //@synthesize proxyRSSI=_proxyRSSI - In the implementation block
@property (assign,nonatomic) double proxyConnectionTime;                                     //@synthesize proxyConnectionTime=_proxyConnectionTime - In the implementation block
@property (assign,nonatomic) unsigned long long connectedBluetoothDevices;                   //@synthesize connectedBluetoothDevices=_connectedBluetoothDevices - In the implementation block
@property (assign,nonatomic) long long timeSinceLastMachineWake;                             //@synthesize timeSinceLastMachineWake=_timeSinceLastMachineWake - In the implementation block
@property (assign,nonatomic) long long lastSleepType;                                        //@synthesize lastSleepType=_lastSleepType - In the implementation block
@property (nonatomic,retain) SFAutoUnlockDevice * autoUnlockDevice;                          //@synthesize autoUnlockDevice=_autoUnlockDevice - In the implementation block
@property (nonatomic,retain) NSData * externalACMContext;                                    //@synthesize externalACMContext=_externalACMContext - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                             //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSData * imageHash;                                             //@synthesize imageHash=_imageHash - In the implementation block
@property (nonatomic,retain) SDAutoUnlockIconTransferStore * iconTransferStore;              //@synthesize iconTransferStore=_iconTransferStore - In the implementation block
-(void)invalidate;
-(void)cancel;
-(NSDate *)startDate;
-(void)_cancel;
-(long long)displayCount;
-(void)setStartDate:(NSDate *)arg1 ;
-(char)connected;
-(void)setConnected:(char)arg1 ;
-(char)wifiState;
-(char)canceled;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)imageData;
-(void)setImageHash:(NSData *)arg1 ;
-(NSData *)imageHash;
-(void)setCanceled:(char)arg1 ;
-(NSUUID *)bluetoothID;
-(void)setBluetoothID:(NSUUID *)arg1 ;
-(void)removeObservers;
-(void)deviceConnected:(id)arg1 ;
-(double)connectionTime;
-(void)setConnectionTime:(double)arg1 ;
-(double)discoveryTime;
-(void)setDiscoveryTime:(double)arg1 ;
-(NSDate *)connectionDate;
-(void)setConnectionDate:(NSDate *)arg1 ;
-(void)setDisplayCount:(long long)arg1 ;
-(void)addObservers;
-(NSArray *)peerList;
-(void)setPeerList:(NSArray *)arg1 ;
-(NSString *)watchOSVersion;
-(NSDate *)discoveryDate;
-(void)logResults;
-(void)setWifiState:(char)arg1 ;
-(void)setSupportsConfirmationACK:(char)arg1 ;
-(char)supportsConfirmationACK;
-(void)setConnectedBluetoothDevices:(unsigned long long)arg1 ;
-(void)setTimeSinceLastMachineWake:(long long)arg1 ;
-(void)setLastSleepType:(long long)arg1 ;
-(unsigned long long)connectedBluetoothDevices;
-(long long)timeSinceLastMachineWake;
-(long long)lastSleepType;
-(void)setOtherProviderCancel:(char)arg1 ;
-(id)attemptResults;
-(void)setIconTransferStore:(SDAutoUnlockIconTransferStore *)arg1 ;
-(SFAutoUnlockDevice *)autoUnlockDevice;
-(void)updateImageData:(id)arg1 imageHash:(id)arg2 ;
-(id)initWithAutoUnlockDevice:(id)arg1 sessionID:(id)arg2 bleDevice:(id)arg3 ;
-(void)setUseProxy:(char)arg1 ;
-(void)setExternalACMContext:(NSData *)arg1 ;
-(void)handleMessageWithWrapper:(id)arg1 ;
-(void)setProxyDeviceModel:(NSString *)arg1 ;
-(void)setProxyConnectionTime:(double)arg1 ;
-(void)setProxyRSSI:(int)arg1 ;
-(void)setAttemptTimedOut:(char)arg1 ;
-(void)handleCanceledAfterSuccess;
-(char)otherSessionCancel;
-(id)hintToken;
-(void)setChosenDevice:(char)arg1 ;
-(void)setOtherSessionCancel:(char)arg1 ;
-(int)proxyRSSI;
-(double)proxyDiscoveryTime;
-(char)handleFoundBLEDevice:(id)arg1 ;
-(NSString *)proxyDeviceModel;
-(void)handleDecryptionFailure:(long long)arg1 ;
-(double)proxyConnectionTime;
-(SDAutoUnlockIconTransferStore *)iconTransferStore;
-(char)useProxy;
-(void)handleTimerFired;
-(void)notifyDelegateWithError:(id)arg1 ;
-(void)setWatchBuildVersion:(NSString *)arg1 ;
-(void)setWatchOSVersion:(NSString *)arg1 ;
-(void)setUnlockSucceeded:(char)arg1 ;
-(NSString *)watchBuildVersion;
-(void)setProxyDiscoveryTime:(double)arg1 ;
-(void)setDeviceWasLocked:(char)arg1 ;
-(void)setWaitingForDisplayOrClamshell:(char)arg1 ;
-(char)unlockSucceeded;
-(void)lockKeyBagIfNeeded;
-(void)sendUnlockConfirmation:(char)arg1 withError:(id)arg2 ;
-(char)lockedKeyBag;
-(char)otherProviderCancel;
-(char)deviceWasLocked;
-(void)setLockedKeyBag:(char)arg1 ;
-(void)_handleCanceledAfterSuccess;
-(void)displayConfigChanged:(id)arg1 ;
-(void)clamshellStateChanged:(id)arg1 ;
-(char)waitingForDisplayOrClamshell;
-(void)setConfigChangeType:(long long)arg1 ;
-(void)consumeAuthTokenIfReady;
-(char)attemptTimedOut;
-(char)usingProxy;
-(NSString *)watchModelID;
-(double)connectionWaitTime;
-(double)awdlInfoExchange;
-(double)keyRequestExchange;
-(double)tokenExchange;
-(double)confirmation;
-(double)peerFoundInterval;
-(long long)configChangeType;
-(double)displayClamshellWaitTime;
-(double)awdlTotal;
-(double)btBootstrap;
-(double)btOverall;
-(double)completeExchange;
-(int)watchRSSI;
-(void)sendAuthPromptRequestWithImageHash:(id)arg1 appName:(id)arg2 ;
-(void)setImageDataAlreadyCached:(char)arg1 ;
-(char)imageDataAlreadyCached;
-(void)sendAuthPromptImageDataIfReady:(id)arg1 ;
-(char)chosenDevice;
-(void)setFirstSend:(NSDate *)arg1 ;
-(char)handleFoundBLEDevice:(id)arg1 available:(char)arg2 lockedOnWrist:(char)arg3 ;
-(void)setDiscoveryDate:(NSDate *)arg1 ;
-(id)aksPeerAvailable;
-(void)setFoundPeer:(char)arg1 ;
-(void)setConnectionWaitTime:(double)arg1 ;
-(char)receivedAWDLInfo;
-(char)receivedExchangeRequest;
-(char)onlyRanging;
-(NSDate *)displayOrClamshellWaitingDate;
-(void)setDisplayClamshellWaitTime:(double)arg1 ;
-(char)foundPeer;
-(NSObject*<OS_dispatch_source>)confirmationTimer;
-(void)setConfirmationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(char)peerInRange:(id)arg1 ;
-(void)handlePeerInRange;
-(void)handlePeerOutOfRange;
-(void)setAwdlTotal:(double)arg1 ;
-(void)setOnlyRanging:(char)arg1 ;
-(char)awdlUp;
-(void)setAwdlUp:(char)arg1 ;
-(void)setPeerFoundInterval:(double)arg1 ;
-(NSDate *)firstSend;
-(void)setAwdlInfoExchange:(double)arg1 ;
-(void)handleAWDLInfo:(id)arg1 ;
-(void)handleAuthPromptResponse:(id)arg1 ;
-(void)setKeyRequestExchange:(double)arg1 ;
-(void)handleSessionKeyExchangeRequest:(id)arg1 ;
-(NSDate *)exchageResponseDate;
-(void)setTokenExchange:(double)arg1 ;
-(void)setBtBootstrap:(double)arg1 ;
-(void)handleSessionAuthToken:(id)arg1 ;
-(void)invalidateConfirmationTimer;
-(void)handleConfirmationACK;
-(void)setReceivedAWDLInfo:(char)arg1 ;
-(char)sentExchangeResponse;
-(void)invalidateTimerIfReady;
-(void)setOldWatch:(char)arg1 ;
-(char)receivedAuthPromptResponse;
-(void)setReceivedAuthPromptResponse:(char)arg1 ;
-(void)setNeedsNewImage:(char)arg1 ;
-(void)setReceivedExchangeRequest:(char)arg1 ;
-(void)sendKeyExchangeResponseWithData:(id)arg1 ;
-(SDUnlockSessionAuthToken *)sessionAuthToken;
-(void)setSessionAuthToken:(SDUnlockSessionAuthToken *)arg1 ;
-(void)setBtOverall:(double)arg1 ;
-(void)startAWDL;
-(NSDate *)confirmationSendDate;
-(void)setConfirmation:(double)arg1 ;
-(void)setCompleteExchange:(double)arg1 ;
-(char)sentImageData;
-(void)setPeerMacAddress:(NSData *)arg1 ;
-(NSData *)peerMacAddress;
-(void)handleAWDLUp;
-(void)handlePeerFound:(char)arg1 ;
-(void)handleRangingStarted;
-(void)handleRangingResults:(id)arg1 errorCode:(long long)arg2 ;
-(void)handleWiFiRequestInvalidated;
-(void)setDisplayOrClamshellWaitingDate:(NSDate *)arg1 ;
-(char)needsNewImage;
-(void)setSentImageData:(char)arg1 ;
-(void)setExchageResponseDate:(NSDate *)arg1 ;
-(void)setSentExchangeResponse:(char)arg1 ;
-(char)sendingConfirmation;
-(void)setSendingConfirmation:(char)arg1 ;
-(void)setConfirmationSendDate:(NSDate *)arg1 ;
-(void)restartConfirmationTimer:(unsigned long long)arg1 error:(id)arg2 ;
-(void)invalidateNoDisconnect;
-(char)isAcceptor;
-(id)getAppName;
-(void)connectionActivated;
-(void)sendAWDLInfoData:(id)arg1 type:(unsigned short)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAutoUnlockDevice:(SFAutoUnlockDevice *)arg1 ;
-(NSData *)externalACMContext;
-(char)oldWatch;
-(void)setWatchRSSI:(int)arg1 ;
-(NSObject*<OS_dispatch_source>)displayTimer;
-(void)setDisplayTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setWatchModelID:(NSString *)arg1 ;
@end

