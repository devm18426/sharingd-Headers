/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:03 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SDAutoUnlockDecryptionFailed : PBCodable <NSCopying> {

	unsigned _errorCode;
	unsigned _version;
	SCD_Struct_SD5 _has;

}

@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
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
-(char)hasVersion;
-(void)setHasVersion:(char)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
@end

