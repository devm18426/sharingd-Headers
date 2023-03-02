/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:01 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SDUnlockSetupSessionCreated : PBCodable <NSCopying> {

	unsigned _errorCode;
	unsigned _failureReasons;
	NSData* _longTermKey;
	NSData* _ltkHash;
	unsigned _sessionID;
	NSData* _token;
	unsigned _version;
	int _watchNewLTKSyncStatus;
	int _watchOldLTKSyncStatus;
	char _ltkSyncing;
	SCD_Struct_SD4 _has;

}

@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                           //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) unsigned sessionID;                         //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) char hasToken; 
@property (nonatomic,retain) NSData * token;                             //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) char hasLongTermKey; 
@property (nonatomic,retain) NSData * longTermKey;                       //@synthesize longTermKey=_longTermKey - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                         //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) char hasFailureReasons; 
@property (assign,nonatomic) unsigned failureReasons;                    //@synthesize failureReasons=_failureReasons - In the implementation block
@property (assign,nonatomic) char hasLtkSyncing; 
@property (assign,nonatomic) char ltkSyncing;                            //@synthesize ltkSyncing=_ltkSyncing - In the implementation block
@property (assign,nonatomic) char hasWatchOldLTKSyncStatus; 
@property (assign,nonatomic) int watchOldLTKSyncStatus;                  //@synthesize watchOldLTKSyncStatus=_watchOldLTKSyncStatus - In the implementation block
@property (assign,nonatomic) char hasWatchNewLTKSyncStatus; 
@property (assign,nonatomic) int watchNewLTKSyncStatus;                  //@synthesize watchNewLTKSyncStatus=_watchNewLTKSyncStatus - In the implementation block
@property (nonatomic,readonly) char hasLtkHash; 
@property (nonatomic,retain) NSData * ltkHash;                           //@synthesize ltkHash=_ltkHash - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(NSData *)token;
-(void)setVersion:(unsigned)arg1 ;
-(void)setToken:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(unsigned)errorCode;
-(char)hasVersion;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(void)setHasVersion:(char)arg1 ;
-(char)hasToken;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(unsigned)failureReasons;
-(void)setLongTermKey:(NSData *)arg1 ;
-(void)setLtkHash:(NSData *)arg1 ;
-(char)hasLongTermKey;
-(void)setFailureReasons:(unsigned)arg1 ;
-(void)setHasFailureReasons:(char)arg1 ;
-(char)hasFailureReasons;
-(void)setLtkSyncing:(char)arg1 ;
-(void)setHasLtkSyncing:(char)arg1 ;
-(char)hasLtkSyncing;
-(void)setWatchOldLTKSyncStatus:(int)arg1 ;
-(void)setHasWatchOldLTKSyncStatus:(char)arg1 ;
-(char)hasWatchOldLTKSyncStatus;
-(void)setWatchNewLTKSyncStatus:(int)arg1 ;
-(void)setHasWatchNewLTKSyncStatus:(char)arg1 ;
-(char)hasWatchNewLTKSyncStatus;
-(char)hasLtkHash;
-(NSData *)longTermKey;
-(char)ltkSyncing;
-(int)watchOldLTKSyncStatus;
-(int)watchNewLTKSyncStatus;
-(NSData *)ltkHash;
@end
