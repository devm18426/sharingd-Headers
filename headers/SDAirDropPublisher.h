/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:05 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, SDAirDropPublisherDelegate;
#import <sharingd/sharingd-Structs.h>
@class NSNumber, SDStatusMonitor, NSObject, NSMutableDictionary;

@interface SDAirDropPublisher : NSObject {

	NSNumber* _port;
	long long _retryCount;
	SecIdentityRef _identity;
	CFNetServiceRef _service;
	SDStatusMonitor* _monitor;
	NSObject*<OS_dispatch_source> _restartTimer;
	NSMutableDictionary* _txtRecord;
	NSMutableDictionary* _properties;
	char _bonjourNameConflictDetected;
	id<SDAirDropPublisherDelegate> _delegate;

}

@property (__weak) id<SDAirDropPublisherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id<SDAirDropPublisherDelegate>)delegate;
-(void)setDelegate:(id<SDAirDropPublisherDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(void)publish;
-(void)removeObservers;
-(void)addObservers;
-(void)somethingChanged:(id)arg1 ;
-(void)updateTXTRecordAndNotify;
-(id)initWithPort:(id)arg1 identity:(SecIdentityRef)arg2 ;
-(void)publishCallBack:(SCD_Struct_SD16*)arg1 ;
@end

