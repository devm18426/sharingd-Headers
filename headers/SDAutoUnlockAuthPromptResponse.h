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

@class NSData;

@interface SDAutoUnlockAuthPromptResponse : PBCodable <NSCopying> {

	unsigned _errorCode;
	NSData* _keyData;
	unsigned _version;
	char _needsImageData;
	SCD_Struct_SD3 _has;

}

@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char hasKeyData; 
@property (nonatomic,retain) NSData * keyData;                    //@synthesize keyData=_keyData - In the implementation block
@property (assign,nonatomic) char hasNeedsImageData; 
@property (assign,nonatomic) char needsImageData;                 //@synthesize needsImageData=_needsImageData - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                  //@synthesize errorCode=_errorCode - In the implementation block
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
-(unsigned)errorCode;
-(NSData *)keyData;
-(char)hasVersion;
-(void)setHasVersion:(char)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(char)hasKeyData;
-(void)setKeyData:(NSData *)arg1 ;
-(char)needsImageData;
-(void)setNeedsImageData:(char)arg1 ;
-(void)setHasNeedsImageData:(char)arg1 ;
-(char)hasNeedsImageData;
@end

