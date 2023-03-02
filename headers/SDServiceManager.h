/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:03 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SDCompanionStreamDelegate.h>
#import <libobjc.A.dylib/SFCompanionServiceManagerProtocol.h>
#import <libobjc.A.dylib/SDCompanionPublisherProtocol.h>

@protocol SFCompanionServiceManagerClient;
@class NSString, NSMutableDictionary, NSMutableArray;

@interface SDServiceManager : NSObject <SDCompanionStreamDelegate, SFCompanionServiceManagerProtocol, SDCompanionPublisherProtocol> {

	NSString* _bundleID;
	NSString* _managerID;
	id<SFCompanionServiceManagerClient> _clientProxy;
	NSMutableDictionary* _streamHandlers;
	NSMutableArray* _enabledServices;
	NSMutableArray* _companionStreams;

}

@property (retain) id<SFCompanionServiceManagerClient> clientProxy;              //@synthesize clientProxy=_clientProxy - In the implementation block
@property (retain) NSMutableDictionary * streamHandlers;                         //@synthesize streamHandlers=_streamHandlers - In the implementation block
@property (retain) NSMutableArray * enabledServices;                             //@synthesize enabledServices=_enabledServices - In the implementation block
@property (retain) NSMutableArray * companionStreams;                            //@synthesize companionStreams=_companionStreams - In the implementation block
@property (retain) NSString * bundleID;                                          //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) NSString * managerID;                                       //@synthesize managerID=_managerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)start;
-(void)stop;
-(void)disableService:(id)arg1 ;
-(void)enableService:(id)arg1 ;
-(NSString *)managerID;
-(NSMutableArray *)enabledServices;
-(id<SFCompanionServiceManagerClient>)clientProxy;
-(void)setClientProxy:(id<SFCompanionServiceManagerClient>)arg1 ;
-(void)manager:(id)arg1 connectedToService:(id)arg2 withFileHandle:(id)arg3 acceptHandler:(/*^block*/id)arg4 ;
-(void)companionStreamClosedStreams:(id)arg1 ;
-(id)initWithClientProxy:(id)arg1 withIdentifier:(id)arg2 ;
-(id)streamHandlerForService:(id)arg1 ;
-(NSMutableDictionary *)streamHandlers;
-(void)setStreamHandlers:(NSMutableDictionary *)arg1 ;
-(void)setEnabledServices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)companionStreams;
-(void)setCompanionStreams:(NSMutableArray *)arg1 ;
@end

