/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:09 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction, SDAirDropControllerDelegate;
@class SDStatusMonitor, NSMutableDictionary, SFUserAlert, NSObject;

@interface SDAirDropController : NSObject {

	char _started;
	SDStatusMonitor* _monitor;
	NSMutableDictionary* _properties;
	SFUserAlert* _phUserNotification;
	SFUserAlert* _radiosUserNotification;
	NSObject*<OS_os_transaction> _transaction;
	id<SDAirDropControllerDelegate> _delegate;

}

@property (__weak) id<SDAirDropControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)init;
-(id<SDAirDropControllerDelegate>)delegate;
-(void)setDelegate:(id<SDAirDropControllerDelegate>)arg1 ;
-(void)setProperty:(void*)arg1 forKey:(id)arg2 ;
-(void)start;
-(void)stop;
-(void)removeObservers;
-(void)addObservers;
-(void)somethingChanged:(id)arg1 ;
-(void)presentEnableRadiosAlertForBluetooth:(char)arg1 andWLAN:(char)arg2 ;
-(void)configureSettingsForAirDrop;
-(void)setStatusAndNotify;
-(void)presentDisablePersonalHotspotAlert;
@end

