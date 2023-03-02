/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:12 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSharingAirDropSessionInfo : PBCodable <NSCopying> {

	unsigned long long _startTimestamp;
	unsigned long long _timestamp;
	NSString* _browserID;
	NSString* _bundleID;
	unsigned _firstDiscovery;
	unsigned _maxPeersDiscovered;
	unsigned _sessionDuration;
	NSString* _sessionID;
	unsigned _totalPeersDiscovered;
	unsigned _transfersCompleted;
	unsigned _transfersInitiated;
	char _legacyMode;
	SCD_Struct_AW32 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasSessionID; 
@property (nonatomic,retain) NSString * sessionID;                           //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) char hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) char hasLegacyMode; 
@property (assign,nonatomic) char legacyMode;                                //@synthesize legacyMode=_legacyMode - In the implementation block
@property (assign,nonatomic) char hasStartTimestamp; 
@property (assign,nonatomic) unsigned long long startTimestamp;              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) char hasFirstDiscovery; 
@property (assign,nonatomic) unsigned firstDiscovery;                        //@synthesize firstDiscovery=_firstDiscovery - In the implementation block
@property (assign,nonatomic) char hasSessionDuration; 
@property (assign,nonatomic) unsigned sessionDuration;                       //@synthesize sessionDuration=_sessionDuration - In the implementation block
@property (assign,nonatomic) char hasTotalPeersDiscovered; 
@property (assign,nonatomic) unsigned totalPeersDiscovered;                  //@synthesize totalPeersDiscovered=_totalPeersDiscovered - In the implementation block
@property (assign,nonatomic) char hasMaxPeersDiscovered; 
@property (assign,nonatomic) unsigned maxPeersDiscovered;                    //@synthesize maxPeersDiscovered=_maxPeersDiscovered - In the implementation block
@property (assign,nonatomic) char hasTransfersInitiated; 
@property (assign,nonatomic) unsigned transfersInitiated;                    //@synthesize transfersInitiated=_transfersInitiated - In the implementation block
@property (assign,nonatomic) char hasTransfersCompleted; 
@property (assign,nonatomic) unsigned transfersCompleted;                    //@synthesize transfersCompleted=_transfersCompleted - In the implementation block
@property (nonatomic,readonly) char hasBrowserID; 
@property (nonatomic,retain) NSString * browserID;                           //@synthesize browserID=_browserID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(char)hasTimestamp;
-(unsigned long long)startTimestamp;
-(char)hasSessionID;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasBundleID;
-(void)setStartTimestamp:(unsigned long long)arg1 ;
-(void)setHasStartTimestamp:(char)arg1 ;
-(char)hasStartTimestamp;
-(void)setSessionDuration:(unsigned)arg1 ;
-(void)setHasSessionDuration:(char)arg1 ;
-(char)hasSessionDuration;
-(unsigned)sessionDuration;
-(void)setLegacyMode:(char)arg1 ;
-(unsigned)transfersInitiated;
-(void)setTransfersInitiated:(unsigned)arg1 ;
-(unsigned)transfersCompleted;
-(void)setTransfersCompleted:(unsigned)arg1 ;
-(void)setBrowserID:(NSString *)arg1 ;
-(char)hasBrowserID;
-(NSString *)browserID;
-(void)setFirstDiscovery:(unsigned)arg1 ;
-(void)setTotalPeersDiscovered:(unsigned)arg1 ;
-(void)setMaxPeersDiscovered:(unsigned)arg1 ;
-(void)setHasLegacyMode:(char)arg1 ;
-(char)hasLegacyMode;
-(void)setHasFirstDiscovery:(char)arg1 ;
-(char)hasFirstDiscovery;
-(void)setHasTotalPeersDiscovered:(char)arg1 ;
-(char)hasTotalPeersDiscovered;
-(void)setHasMaxPeersDiscovered:(char)arg1 ;
-(char)hasMaxPeersDiscovered;
-(void)setHasTransfersInitiated:(char)arg1 ;
-(char)hasTransfersInitiated;
-(void)setHasTransfersCompleted:(char)arg1 ;
-(char)hasTransfersCompleted;
-(char)legacyMode;
-(unsigned)firstDiscovery;
-(unsigned)totalPeersDiscovered;
-(unsigned)maxPeersDiscovered;
@end
