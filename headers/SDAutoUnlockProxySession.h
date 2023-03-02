/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:07 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDAutoUnlockPairingSession.h>

@class NSString, NSDate, SFBLEDevice;

@interface SDAutoUnlockProxySession : SDAutoUnlockPairingSession {

	char _activeConnection;
	char _notified;
	char _invalidated;
	int _proxyRSSI;
	NSString* _model;
	double _proxyDiscoveryTime;
	NSDate* _startDate;
	SFBLEDevice* _bleDevice;
	double _connectionTime;
	long long _state;

}

@property (assign) char activeConnection;                            //@synthesize activeConnection=_activeConnection - In the implementation block
@property (assign) char notified;                                    //@synthesize notified=_notified - In the implementation block
@property (assign) char invalidated;                                 //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy) NSString * model;                         //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) int proxyRSSI;                          //@synthesize proxyRSSI=_proxyRSSI - In the implementation block
@property (assign,nonatomic) double proxyDiscoveryTime;              //@synthesize proxyDiscoveryTime=_proxyDiscoveryTime - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) SFBLEDevice * bleDevice;                //@synthesize bleDevice=_bleDevice - In the implementation block
@property (assign,nonatomic) double connectionTime;                  //@synthesize connectionTime=_connectionTime - In the implementation block
@property (assign,nonatomic) long long state;                        //@synthesize state=_state - In the implementation block
-(void)invalidate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)start;
-(id)results;
-(NSDate *)startDate;
-(void)_start;
-(NSString *)model;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setInvalidated:(char)arg1 ;
-(char)invalidated;
-(SFBLEDevice *)bleDevice;
-(void)setBleDevice:(SFBLEDevice *)arg1 ;
-(void)removeObservers;
-(void)deviceConnected:(id)arg1 ;
-(double)connectionTime;
-(void)setConnectionTime:(double)arg1 ;
-(char)activeConnection;
-(void)addObservers;
-(void)setActiveConnection:(char)arg1 ;
-(id)initWithDevice:(id)arg1 sessionID:(id)arg2 bleDevice:(id)arg3 ;
-(void)setProxyRSSI:(int)arg1 ;
-(int)proxyRSSI;
-(double)proxyDiscoveryTime;
-(void)handleFoundBLEDevice:(id)arg1 ;
-(void)notifyDelegateWithError:(id)arg1 ;
-(void)sendProxyTrigger;
-(void)setProxyDiscoveryTime:(double)arg1 ;
-(char)notified;
-(void)setNotified:(char)arg1 ;
@end

