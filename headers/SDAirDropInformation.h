/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:14 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SDAirDropInformationDelegate;
@class SDStatusMonitor, NSMutableDictionary;

@interface SDAirDropInformation : NSObject {

	char _started;
	SDStatusMonitor* _monitor;
	NSMutableDictionary* _properties;
	id<SDAirDropInformationDelegate> _delegate;

}

@property (__weak) id<SDAirDropInformationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)init;
-(id<SDAirDropInformationDelegate>)delegate;
-(void)setDelegate:(id<SDAirDropInformationDelegate>)arg1 ;
-(void)setProperty:(void*)arg1 forKey:(id)arg2 ;
-(void)start;
-(void)stop;
-(void)removeObservers;
-(void)addObservers;
-(void)somethingChanged:(id)arg1 ;
-(char)boolValue:(void*)arg1 ;
-(void)setInformationAndNotify;
@end
