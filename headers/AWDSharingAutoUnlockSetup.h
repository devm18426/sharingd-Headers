/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:07 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSharingAutoUnlockSetup : PBCodable <NSCopying> {

	unsigned long long _timeIntervalSinceLastWatch;
	unsigned long long _timestamp;
	NSString* _companionDeviceModel;
	unsigned _errorCode;
	NSString* _errorDomain;
	unsigned _errorType;
	unsigned _flags;
	NSString* _keyDeviceModel;
	unsigned _keyRequestExchangeTime;
	int _macNewLTKSyncStatus;
	int _macOldLTKSyncStatus;
	unsigned _messageTimeout;
	unsigned _responseTimeout;
	unsigned _tokenExchangeTime;
	NSString* _watchBuildVersion;
	int _watchNewLTKSyncStatus;
	NSString* _watchOSVersion;
	int _watchOldLTKSyncStatus;
	char _keyDeviceLocked;
	char _messageTimeoutFromServer;
	char _receivedSetupACK;
	char _receivedTokenACK;
	char _responseTimeoutFromServer;
	char _setupRetry;
	char _setupSucceeded;
	char _upsell;
	char _watchExistedInUnlockList;
	SCD_Struct_AW27 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasKeyDeviceModel; 
@property (nonatomic,retain) NSString * keyDeviceModel;                                  //@synthesize keyDeviceModel=_keyDeviceModel - In the implementation block
@property (nonatomic,readonly) char hasCompanionDeviceModel; 
@property (nonatomic,retain) NSString * companionDeviceModel;                            //@synthesize companionDeviceModel=_companionDeviceModel - In the implementation block
@property (assign,nonatomic) char hasKeyRequestExchangeTime; 
@property (assign,nonatomic) unsigned keyRequestExchangeTime;                            //@synthesize keyRequestExchangeTime=_keyRequestExchangeTime - In the implementation block
@property (assign,nonatomic) char hasTokenExchangeTime; 
@property (assign,nonatomic) unsigned tokenExchangeTime;                                 //@synthesize tokenExchangeTime=_tokenExchangeTime - In the implementation block
@property (assign,nonatomic) char hasKeyDeviceLocked; 
@property (assign,nonatomic) char keyDeviceLocked;                                       //@synthesize keyDeviceLocked=_keyDeviceLocked - In the implementation block
@property (assign,nonatomic) char hasSetupSucceeded; 
@property (assign,nonatomic) char setupSucceeded;                                        //@synthesize setupSucceeded=_setupSucceeded - In the implementation block
@property (assign,nonatomic) char hasErrorType; 
@property (assign,nonatomic) unsigned errorType;                                         //@synthesize errorType=_errorType - In the implementation block
@property (nonatomic,readonly) char hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                                     //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                         //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) char hasFlags; 
@property (assign,nonatomic) unsigned flags;                                             //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) char hasWatchExistedInUnlockList; 
@property (assign,nonatomic) char watchExistedInUnlockList;                              //@synthesize watchExistedInUnlockList=_watchExistedInUnlockList - In the implementation block
@property (assign,nonatomic) char hasTimeIntervalSinceLastWatch; 
@property (assign,nonatomic) unsigned long long timeIntervalSinceLastWatch;              //@synthesize timeIntervalSinceLastWatch=_timeIntervalSinceLastWatch - In the implementation block
@property (assign,nonatomic) char hasUpsell; 
@property (assign,nonatomic) char upsell;                                                //@synthesize upsell=_upsell - In the implementation block
@property (assign,nonatomic) char hasResponseTimeout; 
@property (assign,nonatomic) unsigned responseTimeout;                                   //@synthesize responseTimeout=_responseTimeout - In the implementation block
@property (assign,nonatomic) char hasResponseTimeoutFromServer; 
@property (assign,nonatomic) char responseTimeoutFromServer;                             //@synthesize responseTimeoutFromServer=_responseTimeoutFromServer - In the implementation block
@property (assign,nonatomic) char hasMessageTimeout; 
@property (assign,nonatomic) unsigned messageTimeout;                                    //@synthesize messageTimeout=_messageTimeout - In the implementation block
@property (assign,nonatomic) char hasMessageTimeoutFromServer; 
@property (assign,nonatomic) char messageTimeoutFromServer;                              //@synthesize messageTimeoutFromServer=_messageTimeoutFromServer - In the implementation block
@property (assign,nonatomic) char hasSetupRetry; 
@property (assign,nonatomic) char setupRetry;                                            //@synthesize setupRetry=_setupRetry - In the implementation block
@property (assign,nonatomic) char hasMacOldLTKSyncStatus; 
@property (assign,nonatomic) int macOldLTKSyncStatus;                                    //@synthesize macOldLTKSyncStatus=_macOldLTKSyncStatus - In the implementation block
@property (assign,nonatomic) char hasMacNewLTKSyncStatus; 
@property (assign,nonatomic) int macNewLTKSyncStatus;                                    //@synthesize macNewLTKSyncStatus=_macNewLTKSyncStatus - In the implementation block
@property (assign,nonatomic) char hasWatchOldLTKSyncStatus; 
@property (assign,nonatomic) int watchOldLTKSyncStatus;                                  //@synthesize watchOldLTKSyncStatus=_watchOldLTKSyncStatus - In the implementation block
@property (assign,nonatomic) char hasWatchNewLTKSyncStatus; 
@property (assign,nonatomic) int watchNewLTKSyncStatus;                                  //@synthesize watchNewLTKSyncStatus=_watchNewLTKSyncStatus - In the implementation block
@property (nonatomic,readonly) char hasWatchBuildVersion; 
@property (nonatomic,retain) NSString * watchBuildVersion;                               //@synthesize watchBuildVersion=_watchBuildVersion - In the implementation block
@property (nonatomic,readonly) char hasWatchOSVersion; 
@property (nonatomic,retain) NSString * watchOSVersion;                                  //@synthesize watchOSVersion=_watchOSVersion - In the implementation block
@property (assign,nonatomic) char hasReceivedSetupACK; 
@property (assign,nonatomic) char receivedSetupACK;                                      //@synthesize receivedSetupACK=_receivedSetupACK - In the implementation block
@property (assign,nonatomic) char hasReceivedTokenACK; 
@property (assign,nonatomic) char receivedTokenACK;                                      //@synthesize receivedTokenACK=_receivedTokenACK - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)flags;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setFlags:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(unsigned)errorCode;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(NSString *)errorDomain;
-(char)hasErrorDomain;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(unsigned)errorType;
-(void)setHasFlags:(char)arg1 ;
-(char)hasFlags;
-(void)setErrorType:(unsigned)arg1 ;
-(void)setHasErrorType:(char)arg1 ;
-(char)hasErrorType;
-(NSString *)watchOSVersion;
-(unsigned)responseTimeout;
-(void)setWatchOldLTKSyncStatus:(int)arg1 ;
-(void)setHasWatchOldLTKSyncStatus:(char)arg1 ;
-(char)hasWatchOldLTKSyncStatus;
-(void)setWatchNewLTKSyncStatus:(int)arg1 ;
-(void)setHasWatchNewLTKSyncStatus:(char)arg1 ;
-(char)hasWatchNewLTKSyncStatus;
-(int)watchOldLTKSyncStatus;
-(int)watchNewLTKSyncStatus;
-(char)watchExistedInUnlockList;
-(void)setWatchExistedInUnlockList:(char)arg1 ;
-(void)setKeyDeviceModel:(NSString *)arg1 ;
-(void)setCompanionDeviceModel:(NSString *)arg1 ;
-(void)setKeyDeviceLocked:(char)arg1 ;
-(void)setKeyRequestExchangeTime:(unsigned)arg1 ;
-(void)setTokenExchangeTime:(unsigned)arg1 ;
-(void)setSetupSucceeded:(char)arg1 ;
-(void)setTimeIntervalSinceLastWatch:(unsigned long long)arg1 ;
-(void)setUpsell:(char)arg1 ;
-(void)setResponseTimeout:(unsigned)arg1 ;
-(void)setResponseTimeoutFromServer:(char)arg1 ;
-(void)setMessageTimeout:(unsigned)arg1 ;
-(void)setMessageTimeoutFromServer:(char)arg1 ;
-(void)setSetupRetry:(char)arg1 ;
-(void)setMacOldLTKSyncStatus:(int)arg1 ;
-(void)setMacNewLTKSyncStatus:(int)arg1 ;
-(void)setWatchBuildVersion:(NSString *)arg1 ;
-(void)setWatchOSVersion:(NSString *)arg1 ;
-(void)setReceivedSetupACK:(char)arg1 ;
-(void)setReceivedTokenACK:(char)arg1 ;
-(char)hasKeyDeviceModel;
-(char)hasCompanionDeviceModel;
-(void)setHasKeyRequestExchangeTime:(char)arg1 ;
-(char)hasKeyRequestExchangeTime;
-(void)setHasTokenExchangeTime:(char)arg1 ;
-(char)hasTokenExchangeTime;
-(void)setHasKeyDeviceLocked:(char)arg1 ;
-(char)hasKeyDeviceLocked;
-(void)setHasSetupSucceeded:(char)arg1 ;
-(char)hasSetupSucceeded;
-(void)setHasWatchExistedInUnlockList:(char)arg1 ;
-(char)hasWatchExistedInUnlockList;
-(void)setHasTimeIntervalSinceLastWatch:(char)arg1 ;
-(char)hasTimeIntervalSinceLastWatch;
-(void)setHasUpsell:(char)arg1 ;
-(char)hasUpsell;
-(void)setHasResponseTimeout:(char)arg1 ;
-(char)hasResponseTimeout;
-(void)setHasResponseTimeoutFromServer:(char)arg1 ;
-(char)hasResponseTimeoutFromServer;
-(void)setHasMessageTimeout:(char)arg1 ;
-(char)hasMessageTimeout;
-(void)setHasMessageTimeoutFromServer:(char)arg1 ;
-(char)hasMessageTimeoutFromServer;
-(void)setHasSetupRetry:(char)arg1 ;
-(char)hasSetupRetry;
-(void)setHasMacOldLTKSyncStatus:(char)arg1 ;
-(char)hasMacOldLTKSyncStatus;
-(void)setHasMacNewLTKSyncStatus:(char)arg1 ;
-(char)hasMacNewLTKSyncStatus;
-(char)hasWatchBuildVersion;
-(char)hasWatchOSVersion;
-(void)setHasReceivedSetupACK:(char)arg1 ;
-(char)hasReceivedSetupACK;
-(void)setHasReceivedTokenACK:(char)arg1 ;
-(char)hasReceivedTokenACK;
-(NSString *)keyDeviceModel;
-(NSString *)companionDeviceModel;
-(unsigned)keyRequestExchangeTime;
-(unsigned)tokenExchangeTime;
-(char)keyDeviceLocked;
-(char)setupSucceeded;
-(unsigned long long)timeIntervalSinceLastWatch;
-(char)upsell;
-(char)responseTimeoutFromServer;
-(unsigned)messageTimeout;
-(char)messageTimeoutFromServer;
-(char)setupRetry;
-(int)macOldLTKSyncStatus;
-(int)macNewLTKSyncStatus;
-(NSString *)watchBuildVersion;
-(char)receivedSetupACK;
-(char)receivedTokenACK;
@end
