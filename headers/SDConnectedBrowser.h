/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:06 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <sharingd/sharingd-Structs.h>
@class NSDictionary, NSObject, SDStatusMonitor, NSArray;

@interface SDConnectedBrowser : NSObject {

	int _clientCount;
	int _recentsCount;
	int _connectedCount;
	char _sendNotification;
	NSDictionary* _servers;
	NSDictionary* _odiskServers;
	NSObject*<OS_dispatch_source> _timer;
	SDStatusMonitor* _monitor;
	CFBagRef _airDropPeople;
	OpaqueLSSharedFileListRefRef _recentsList;

}

@property (copy,readonly) NSArray * nodes; 
@property (copy,readonly) NSArray * odiskNodes; 
@property (copy,readonly) NSArray * airDropNodes; 
+(id)sharedBrowser;
-(id)init;
-(void)start;
-(void)stop;
-(NSArray *)nodes;
-(void)postNotification;
-(int)removeNode:(SFNodeRef)arg1 ;
-(int)addNode:(SFNodeRef)arg1 ;
-(void)setServers:(id)arg1 ;
-(id)connectedNodes;
-(char)opticalDisk:(id)arg1 ;
-(id)URLForRemounting:(id)arg1 ;
-(void)setNodeModel:(SFNodeRef)arg1 protocol:(id)arg2 url:(id)arg3 ;
-(void)setODiskServers:(id)arg1 ;
-(id)recentNodes;
-(void)addToRecents:(id)arg1 ;
-(void)combineRecentAndConnectedNodes:(char)arg1 ;
-(void)removeAirDropPersonInternal:(SFNodeRef)arg1 ;
-(void)browseAfterDelay:(double)arg1 ;
-(void)buildNodesAndNotify:(char)arg1 ;
-(void)volumesChanged:(id)arg1 ;
-(NSArray *)odiskNodes;
-(void)addAirDropPerson:(SFNodeRef)arg1 ;
-(NSArray *)airDropNodes;
-(void)removeAirDropPerson:(SFNodeRef)arg1 ;
@end

