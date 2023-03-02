/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:05 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SDAutoUnlockSessionWrapper : PBCodable <NSCopying> {

	unsigned _aksSessionID;
	NSData* _authTag;
	unsigned _awdlCacheID;
	NSData* _encryptedPayload;
	unsigned _messageType;
	NSData* _nonce;
	NSData* _payload;
	NSData* _senderID;
	NSData* _sessionID;
	unsigned _version;
	char _useProxy;
	SCD_Struct_SD10 _has;

}

@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char hasSessionID; 
@property (nonatomic,retain) NSData * sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) char hasPayload; 
@property (nonatomic,retain) NSData * payload;                        //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) char hasMessageType; 
@property (assign,nonatomic) unsigned messageType;                    //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,readonly) char hasSenderID; 
@property (nonatomic,retain) NSData * senderID;                       //@synthesize senderID=_senderID - In the implementation block
@property (assign,nonatomic) char hasUseProxy; 
@property (assign,nonatomic) char useProxy;                           //@synthesize useProxy=_useProxy - In the implementation block
@property (assign,nonatomic) char hasAwdlCacheID; 
@property (assign,nonatomic) unsigned awdlCacheID;                    //@synthesize awdlCacheID=_awdlCacheID - In the implementation block
@property (assign,nonatomic) char hasAksSessionID; 
@property (assign,nonatomic) unsigned aksSessionID;                   //@synthesize aksSessionID=_aksSessionID - In the implementation block
@property (nonatomic,readonly) char hasEncryptedPayload; 
@property (nonatomic,retain) NSData * encryptedPayload;               //@synthesize encryptedPayload=_encryptedPayload - In the implementation block
@property (nonatomic,readonly) char hasAuthTag; 
@property (nonatomic,retain) NSData * authTag;                        //@synthesize authTag=_authTag - In the implementation block
@property (nonatomic,readonly) char hasNonce; 
@property (nonatomic,retain) NSData * nonce;                          //@synthesize nonce=_nonce - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(NSData *)sessionID;
-(void)setSessionID:(NSData *)arg1 ;
-(NSData *)senderID;
-(void)setSenderID:(NSData *)arg1 ;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(void)setMessageType:(unsigned)arg1 ;
-(unsigned)messageType;
-(NSData *)encryptedPayload;
-(char)hasVersion;
-(char)hasSessionID;
-(void)setHasVersion:(char)arg1 ;
-(void)setHasMessageType:(char)arg1 ;
-(char)hasMessageType;
-(NSData *)authTag;
-(char)hasPayload;
-(char)hasSenderID;
-(char)hasNonce;
-(void)setEncryptedPayload:(NSData *)arg1 ;
-(void)setUseProxy:(char)arg1 ;
-(char)hasEncryptedPayload;
-(void)setAuthTag:(NSData *)arg1 ;
-(void)setHasUseProxy:(char)arg1 ;
-(char)hasUseProxy;
-(void)setAwdlCacheID:(unsigned)arg1 ;
-(void)setHasAwdlCacheID:(char)arg1 ;
-(char)hasAwdlCacheID;
-(void)setAksSessionID:(unsigned)arg1 ;
-(void)setHasAksSessionID:(char)arg1 ;
-(char)hasAksSessionID;
-(char)hasAuthTag;
-(char)useProxy;
-(unsigned)awdlCacheID;
-(unsigned)aksSessionID;
@end
