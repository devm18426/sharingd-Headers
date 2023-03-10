/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:14 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDAutoUnlockAuthSession.h>

@protocol OS_os_transaction, OS_dispatch_source;
@class NSNumber, NSObject, NSArray, NSData, SDUnlockSessionKeyExchangeResponse, NSMutableData, SDAutoUnlockMacIconCache;

@interface SDAutoUnlockKeySession : SDAutoUnlockAuthSession {

	char _wifiEnabled;
	char _invalidated;
	char _sentAWDLInfo;
	char _userRequestRequired;
	char _sessionCompleted;
	char _alerted;
	char _shouldAlertOnNotify;
	char _promptedForApproval;
	char _promptingForApproval;
	char _oldApproveProtocol;
	char _needsImageData;
	char _usingImageCache;
	int _errorRequestingUnlock;
	unsigned _powerAssertionID;
	int _powerAssertionState;
	NSNumber* _unlockAllowed;
	NSObject*<OS_os_transaction> _transaction;
	/*^block*/id _wifiRequestStartedHandler;
	long long _remoteCacheID;
	NSArray* _peerList;
	NSData* _proxyRequestData;
	NSObject*<OS_dispatch_source> _assertionTimer;
	SDUnlockSessionKeyExchangeResponse* _exchangeResponse;
	NSMutableData* _authPromptIconData;
	SDAutoUnlockMacIconCache* _iconCache;
	NSData* _authPromptIconHash;

}

@property (assign,nonatomic) char invalidated;                                                   //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic) char sentAWDLInfo;                                                  //@synthesize sentAWDLInfo=_sentAWDLInfo - In the implementation block
@property (assign,nonatomic) char userRequestRequired;                                           //@synthesize userRequestRequired=_userRequestRequired - In the implementation block
@property (assign,nonatomic) char sessionCompleted;                                              //@synthesize sessionCompleted=_sessionCompleted - In the implementation block
@property (assign,nonatomic) char alerted;                                                       //@synthesize alerted=_alerted - In the implementation block
@property (assign,nonatomic) char shouldAlertOnNotify;                                           //@synthesize shouldAlertOnNotify=_shouldAlertOnNotify - In the implementation block
@property (assign,nonatomic) char promptedForApproval;                                           //@synthesize promptedForApproval=_promptedForApproval - In the implementation block
@property (assign,nonatomic) char promptingForApproval;                                          //@synthesize promptingForApproval=_promptingForApproval - In the implementation block
@property (assign,nonatomic) char oldApproveProtocol;                                            //@synthesize oldApproveProtocol=_oldApproveProtocol - In the implementation block
@property (nonatomic,retain) NSNumber * unlockAllowed;                                           //@synthesize unlockAllowed=_unlockAllowed - In the implementation block
@property (assign,nonatomic) int errorRequestingUnlock;                                          //@synthesize errorRequestingUnlock=_errorRequestingUnlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;                           //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) unsigned powerAssertionID;                                          //@synthesize powerAssertionID=_powerAssertionID - In the implementation block
@property (assign,nonatomic) int powerAssertionState;                                            //@synthesize powerAssertionState=_powerAssertionState - In the implementation block
@property (nonatomic,copy) id wifiRequestStartedHandler;                                         //@synthesize wifiRequestStartedHandler=_wifiRequestStartedHandler - In the implementation block
@property (assign,nonatomic) long long remoteCacheID;                                            //@synthesize remoteCacheID=_remoteCacheID - In the implementation block
@property (nonatomic,copy) NSArray * peerList;                                                   //@synthesize peerList=_peerList - In the implementation block
@property (nonatomic,copy) NSData * proxyRequestData;                                            //@synthesize proxyRequestData=_proxyRequestData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> assertionTimer;                       //@synthesize assertionTimer=_assertionTimer - In the implementation block
@property (nonatomic,retain) SDUnlockSessionKeyExchangeResponse * exchangeResponse;              //@synthesize exchangeResponse=_exchangeResponse - In the implementation block
@property (nonatomic,retain) NSMutableData * authPromptIconData;                                 //@synthesize authPromptIconData=_authPromptIconData - In the implementation block
@property (nonatomic,retain) SDAutoUnlockMacIconCache * iconCache;                               //@synthesize iconCache=_iconCache - In the implementation block
@property (nonatomic,retain) NSData * authPromptIconHash;                                        //@synthesize authPromptIconHash=_authPromptIconHash - In the implementation block
@property (assign,nonatomic) char needsImageData;                                                //@synthesize needsImageData=_needsImageData - In the implementation block
@property (assign,nonatomic) char usingImageCache;                                               //@synthesize usingImageCache=_usingImageCache - In the implementation block
@property (assign,nonatomic) char wifiEnabled;                                                   //@synthesize wifiEnabled=_wifiEnabled - In the implementation block
-(void)invalidate;
-(void)_invalidate;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setInvalidated:(char)arg1 ;
-(char)invalidated;
-(void)setPowerAssertionID:(unsigned)arg1 ;
-(unsigned)powerAssertionID;
-(void)removeObservers;
-(void)deviceDisconnected:(id)arg1 ;
-(void)setWifiEnabled:(char)arg1 ;
-(char)wifiEnabled;
-(char)alerted;
-(void)setAlerted:(char)arg1 ;
-(void)addObservers;
-(SDAutoUnlockMacIconCache *)iconCache;
-(void)setIconCache:(SDAutoUnlockMacIconCache *)arg1 ;
-(NSArray *)peerList;
-(void)setPeerList:(NSArray *)arg1 ;
-(id)initWithBLEDevice:(id)arg1 sessionID:(id)arg2 ;
-(void)handleMessageWithWrapper:(id)arg1 ;
-(void)notifyDelegateWithError:(id)arg1 ;
-(void)releaseIdleSleepAssertion;
-(char)handleAWDLInfo:(id)arg1 ;
-(char)needsImageData;
-(void)handleWiFiRequestInvalidated;
-(void)setNeedsImageData:(char)arg1 ;
-(char)promptingForApproval;
-(void)invalidateAssertionTimer;
-(void)logAutoUnlockEnd;
-(char)sessionCompleted;
-(void)setSessionCompleted:(char)arg1 ;
-(char)shouldAlertOnNotify;
-(void)alertOfUnlock;
-(char)userRequestRequired;
-(void)handleWiFiRequestStartedWithStartAWDLHandler:(/*^block*/id)arg1 ;
-(void)awdlNetworkStarted;
-(void)setWifiRequestStartedHandler:(id)arg1 ;
-(void)createAuthTokenIfReady;
-(void)beginAKSSession;
-(void)handleAuthPromptRequest:(id)arg1 ;
-(void)handleAuthPromptImageData:(id)arg1 ;
-(void)handleSessionKeyExchangeResponse:(id)arg1 ;
-(void)handleUnlockConfirmation:(id)arg1 ;
-(void)logAutoUnlockStart;
-(void)declareSystemActivityAssertion;
-(void)setOldApproveProtocol:(char)arg1 ;
-(void)setUserRequestRequired:(char)arg1 ;
-(void)setUsingImageCache:(char)arg1 ;
-(void)setAuthPromptIconData:(NSMutableData *)arg1 ;
-(void)promptForApproval;
-(void)setAuthPromptIconHash:(NSData *)arg1 ;
-(void)sendAuthPromptResponseWithData:(id)arg1 error:(id)arg2 ;
-(char)usingImageCache;
-(NSMutableData *)authPromptIconData;
-(void)setExchangeResponse:(SDUnlockSessionKeyExchangeResponse *)arg1 ;
-(void)createWiFiRequest;
-(void)sendSessionAuthToken:(id)arg1 error:(id)arg2 ;
-(SDUnlockSessionKeyExchangeResponse *)exchangeResponse;
-(NSNumber *)unlockAllowed;
-(id)wifiRequestStartedHandler;
-(int)errorRequestingUnlock;
-(void)sendConfirmationACK;
-(NSData *)authPromptIconHash;
-(void)setShouldAlertOnNotify:(char)arg1 ;
-(void)restartAssertionTimer;
-(NSObject*<OS_dispatch_source>)assertionTimer;
-(void)setAssertionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(char)keyCanUnlock;
-(void)sendAWDLInfoWithKeyData:(id)arg1 error:(id)arg2 ;
-(void)sendKeyExchangeRequestWithData:(id)arg1 error:(id)arg2 ;
-(char)sentAWDLInfo;
-(void)setSentAWDLInfo:(char)arg1 ;
-(char)promptedForApproval;
-(void)setPromptedForApproval:(char)arg1 ;
-(void)setPromptingForApproval:(char)arg1 ;
-(char)oldApproveProtocol;
-(void)setUnlockAllowed:(NSNumber *)arg1 ;
-(void)setErrorRequestingUnlock:(int)arg1 ;
-(int)powerAssertionState;
-(void)setPowerAssertionState:(int)arg1 ;
-(long long)remoteCacheID;
-(void)setRemoteCacheID:(long long)arg1 ;
-(NSData *)proxyRequestData;
-(void)setProxyRequestData:(NSData *)arg1 ;
@end

