/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:15 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <libobjc.A.dylib/SDAirDropClientDelegate.h>

@protocol OS_os_transaction, SDAirDropSessionDelegate;
@class NSMutableArray, NSString, NSProgress, NSArray, NSMutableDictionary, SDAirDropClient, NSDictionary, NSObject;

@interface SDAirDropSession : NSObject <SDAirDropClientDelegate> {

	NSMutableArray* _airDropClients;
	char _allowedWaiting;
	NSString* _clientBundleID;
	char _conversionActive;
	char _conversionNotified;
	char _conversionObserver;
	NSProgress* _conversionProgress;
	NSMutableArray* _currentNames;
	char _hadConversion;
	NSArray* _items;
	long long _lastEvent;
	SFNodeRef _person;
	NSProgress* _progress;
	char _progressObserver;
	NSMutableDictionary* _properties;
	SDAirDropClient* _responseClient;
	NSMutableDictionary* _results;
	NSString* _rootNodeName;
	NSDictionary* _sandboxExtensions;
	NSMutableArray* _sandboxExtensionHandles;
	NSMutableArray* _siblingNodes;
	NSProgress* _transferProgress;
	NSObject*<OS_os_transaction> _transaction;
	int _clientPid;
	id<SDAirDropSessionDelegate> _delegate;
	SCD_Struct_SD24 _auditToken;

}

@property (assign) SCD_Struct_SD24 auditToken;                         //@synthesize auditToken=_auditToken - In the implementation block
@property (assign) int clientPid;                                      //@synthesize clientPid=_clientPid - In the implementation block
@property (copy) NSString * clientBundleID;                            //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (__weak) id<SDAirDropSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SDAirDropSessionDelegate>)delegate;
-(void)setDelegate:(id<SDAirDropSessionDelegate>)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(SCD_Struct_SD24)auditToken;
-(void)setAuditToken:(SCD_Struct_SD24)arg1 ;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stop;
-(char)send;
-(int)clientPid;
-(NSString *)clientBundleID;
-(void)setClientBundleID:(NSString *)arg1 ;
-(void)startProgress;
-(void)airDropClient:(id)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)handleConversionProgress:(id)arg1 ;
-(void)setClientPid:(int)arg1 ;
-(id)initWithPerson:(SFNodeRef)arg1 items:(id)arg2 sandboxExtensions:(id)arg3 ;
-(void)serversChanged:(id)arg1 ;
-(void)postNotificationForTransferStatus:(long long)arg1 progress:(double)arg2 ;
-(void)consumeSandboxExtensions;
-(void)addClientForNode:(SFNodeRef)arg1 shouldPublishProgress:(char)arg2 ;
-(void)releaseSandboxExtensions;
-(void)removeClientAlerts;
@end

