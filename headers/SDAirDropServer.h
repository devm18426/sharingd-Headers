/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:14 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <libobjc.A.dylib/SDAirDropPublisherDelegate.h>
#import <libobjc.A.dylib/SDAirDropInformationDelegate.h>
#import <libobjc.A.dylib/WPAWDLDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction, SDAirDropServerDelegate;
@class WPAWDL, NSNumber, NSTimer, CUCoalescer, NSObject, SDStatusMonitor, NSString, SDAirDropPublisher, NSMutableSet, NSMutableDictionary, SDAirDropInformation;

@interface SDAirDropServer : NSObject <SDAirDropPublisherDelegate, SDAirDropInformationDelegate, WPAWDLDelegate> {

	char _screenOn;
	char _contactsOnly;
	WPAWDL* _proximity;
	NSNumber* _portNumber;
	NSTimer* _awdlTimer;
	NSTimer* _bluetoothTimer;
	CUCoalescer* _coalescer;
	NSObject*<OS_dispatch_queue> _queue;
	SecIdentityRef _identity;
	CFHTTPServerRef _server;
	double _startTime;
	SDStatusMonitor* _monitor;
	NSString* _discoverableMode;
	SDAirDropPublisher* _publisher;
	NSMutableSet* _discoveredHashes;
	NSMutableDictionary* _properties;
	SDAirDropInformation* _information;
	CFDictionaryRef _connections;
	NSObject*<OS_os_transaction> _transaction;
	int _clientPid;
	NSString* _clientBundleID;
	id<SDAirDropServerDelegate> _delegate;

}

@property (assign) int clientPid;                                     //@synthesize clientPid=_clientPid - In the implementation block
@property (copy) NSString * clientBundleID;                           //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (__weak) id<SDAirDropServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)invalidate;
-(id<SDAirDropServerDelegate>)delegate;
-(void)setDelegate:(id<SDAirDropServerDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(void)activate;
-(int)clientPid;
-(NSString *)clientBundleID;
-(void)setClientBundleID:(NSString *)arg1 ;
-(void)startTimers;
-(void)awdlDidUpdateState:(id)arg1 ;
-(void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3 ;
-(void)removeObservers;
-(void)startServer;
-(void)didReceiveError:(CFErrorRef)arg1 ;
-(void)addObservers;
-(void)consoleUserChanged:(id)arg1 ;
-(char)thisIsTheFinder;
-(void)bonjourPublisher:(id)arg1 propertiesDidChange:(id)arg2 ;
-(void)systemWillSleep:(id)arg1 ;
-(void)setClientPid:(int)arg1 ;
-(void)systemHasPoweredOn:(id)arg1 ;
-(void)airDropInformation:(id)arg1 didChange:(id)arg2 ;
-(void)appleIDChanged:(id)arg1 ;
-(void)appleIDAccountInfoChanged:(id)arg1 ;
-(void)notifyClient:(long long)arg1 withResults:(id)arg2 ;
-(void)handleTerminalCallBack;
-(void)updateServerState;
-(void)awdlTimeoutFired:(id)arg1 ;
-(void)bluetoothTimeoutFired:(id)arg1 ;
-(void)invalidateTimers;
-(void)startHTTPServer:(unsigned short)arg1 ;
-(void)publishedInfoChanged:(id)arg1 ;
-(void)stopProximityScanner;
-(void)logDiscoveryWithHash:(id)arg1 rssi:(id)arg2 ;
-(char)discoverableByEveryone;
-(void)stopScanningAndStartServer;
-(char)discoverableByContactsOnly;
-(void)startProximityScanner;
-(void)finderAirDropEnabled:(id)arg1 ;
-(void)airDropUnpublished:(id)arg1 ;
-(void)airDropStatusChanged:(id)arg1 ;
-(void)wirelessChanged:(id)arg1 ;
-(void)screenStateChange:(id)arg1 ;
-(void)bluetoothChanged:(id)arg1 ;
-(void)discoverableModeChanged:(id)arg1 ;
-(id)sslSettings;
-(void)didOpenConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)didCloseConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)keyBagFirstUnlock:(id)arg1 ;
@end

