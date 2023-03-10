/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:02 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSUUID, NSString, NSTimer, NSError;

@interface SDActivityRequestRecord : NSObject {

	NSDate* _requestCreatedDate;
	NSUUID* _requestIdentifier;
	NSString* _deviceIdentifier;
	/*^block*/id _completionHandler;
	NSTimer* _timeoutTimer;
	long long _timeoutTimeInterval;
	NSError* _error;

}

@property (nonatomic,copy) NSDate * requestCreatedDate;                  //@synthesize requestCreatedDate=_requestCreatedDate - In the implementation block
@property (nonatomic,copy) NSUUID * requestIdentifier;                   //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                     //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic) long long timeoutTimeInterval;              //@synthesize timeoutTimeInterval=_timeoutTimeInterval - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
-(id)description;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSUUID *)requestIdentifier;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSTimer *)timeoutTimer;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSDate *)requestCreatedDate;
-(void)setRequestCreatedDate:(NSDate *)arg1 ;
-(long long)timeoutTimeInterval;
-(void)setTimeoutTimeInterval:(long long)arg1 ;
@end

