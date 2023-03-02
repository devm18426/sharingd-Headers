/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:12 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <sharingd/sharingd-Structs.h>
@class NSData, NSString, SDSharePointBrowser;

@interface TXTQuery : NSObject {

	NSData* _recordData;
	DNSServiceRef_tRef _service;
	NSString* _networkProtocol;
	SDSharePointBrowser* _browser;

}

@property (retain) NSData * recordData;                        //@synthesize recordData=_recordData - In the implementation block
@property (assign) DNSServiceRef_tRef service;                 //@synthesize service=_service - In the implementation block
@property (retain) NSString * networkProtocol;                 //@synthesize networkProtocol=_networkProtocol - In the implementation block
@property (__weak) SDSharePointBrowser * browser;              //@synthesize browser=_browser - In the implementation block
-(void)setBrowser:(SDSharePointBrowser *)arg1 ;
-(SDSharePointBrowser *)browser;
-(DNSServiceRef_tRef)service;
-(void)setService:(DNSServiceRef_tRef)arg1 ;
-(void)setRecordData:(NSData *)arg1 ;
-(NSData *)recordData;
-(NSString *)networkProtocol;
-(void)setNetworkProtocol:(NSString *)arg1 ;
@end

