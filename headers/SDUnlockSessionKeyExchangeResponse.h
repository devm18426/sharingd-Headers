/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:02 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SDUnlockSessionKeyExchangeResponse : PBCodable <NSCopying> {

	NSData* _key;
	unsigned _sessionID;
	unsigned _version;
	char _keyFailed;
	SCD_Struct_SD3 _has;

}

@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) unsigned sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSData * key;                    //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char hasKeyFailed; 
@property (assign,nonatomic) char keyFailed;                  //@synthesize keyFailed=_keyFailed - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)version;
-(NSData *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSData *)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(char)hasVersion;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(void)setHasVersion:(char)arg1 ;
-(char)hasKey;
-(void)setKeyFailed:(char)arg1 ;
-(void)setHasKeyFailed:(char)arg1 ;
-(char)hasKeyFailed;
-(char)keyFailed;
@end
