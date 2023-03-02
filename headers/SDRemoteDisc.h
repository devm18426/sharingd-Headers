/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:11 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <libobjc.A.dylib/SDBonjourResolverDelegate.h>

@protocol SDRemoteDiscDelegate;
@class NSURL, NSTimer, NSMutableData, SDBonjourResolver, NSNumber, NSString;

@interface SDRemoteDisc : NSObject <SDBonjourResolverDelegate> {

	NSURL* _url;
	NSTimer* _pollingTimer;
	CFReadStreamRef _readStream;
	NSMutableData* _responseData;
	SDBonjourResolver* _resolver;
	NSNumber* _askID;
	NSString* _askToken;
	NSString* _askStatus;
	NSString* _askDevice;
	NSString* _hostName;
	NSNumber* _portNumber;
	id<SDRemoteDiscDelegate> _delegate;

}

@property (copy) NSNumber * askID;                                  //@synthesize askID=_askID - In the implementation block
@property (copy) NSString * askToken;                               //@synthesize askToken=_askToken - In the implementation block
@property (copy) NSString * askStatus;                              //@synthesize askStatus=_askStatus - In the implementation block
@property (copy) NSString * askDevice;                              //@synthesize askDevice=_askDevice - In the implementation block
@property (copy) NSString * hostName;                               //@synthesize hostName=_hostName - In the implementation block
@property (copy) NSNumber * portNumber;                             //@synthesize portNumber=_portNumber - In the implementation block
@property (__weak) id<SDRemoteDiscDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SDRemoteDiscDelegate>)delegate;
-(void)setDelegate:(id<SDRemoteDiscDelegate>)arg1 ;
-(void)cancel;
-(void)stop;
-(NSString *)hostName;
-(void)sendRequest:(id)arg1 ;
-(void)setPortNumber:(NSNumber *)arg1 ;
-(NSNumber *)portNumber;
-(void)processResponse:(id)arg1 ;
-(id)requestBody;
-(void)setHostName:(NSString *)arg1 ;
-(void)startPolling;
-(void)countChanged;
-(void)handleResponse:(CFReadStreamRef)arg1 ;
-(void)notifyClient;
-(void)bonjourResolverDidChange:(id)arg1 ;
-(void)pollingTimerCallBack:(id)arg1 ;
-(void)cancelAndDecline;
-(void)setAskStatus:(NSString *)arg1 ;
-(void)cancelResolve;
-(void)cancelReadStream;
-(void)setAskID:(NSNumber *)arg1 ;
-(void)setAskToken:(NSString *)arg1 ;
-(void)cancelPollingTimer;
-(id)initWithURL:(id)arg1 device:(id)arg2 ;
-(void)appendData:(const char*)arg1 withLength:(long long)arg2 ;
-(void)askServer;
-(NSNumber *)askID;
-(NSString *)askToken;
-(NSString *)askStatus;
-(NSString *)askDevice;
-(void)setAskDevice:(NSString *)arg1 ;
@end
