/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:11 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <libobjc.A.dylib/SDSharePointBrowserDelegate.h>

@protocol OS_dispatch_queue, SDNodeBrowserDelegate, OS_xpc_object;
@class NSString, NSArray, NSObject, CUCoalescer, SDStatusMonitor, NSMutableSet, SDDomainBrowser, SDManagedBrowser, SDClassroomBrowser, SDConnectedBrowser, SDWorkgroupBrowser, SDSharePointBrowser, SDRapportBrowser, NSDictionary, NSMutableDictionary, SDXPCHelperConnection;

@interface SDNodeBrowser : NSObject <SDSharePointBrowserDelegate> {

	NSString* _kind;
	SFNodeRef _parent;
	NSArray* _protocols;
	NSString* _protocol;
	long long _mode;
	unsigned long long _flags;
	int _error;
	char _combineWorkgroups;
	NSObject*<OS_dispatch_queue> _queue;
	CUCoalescer* _coalescer;
	SDStatusMonitor* _monitor;
	NSMutableSet* _odiskDomains;
	NSMutableSet* _airDropDomains;
	NSMutableSet* _bonjourDomains;
	NSMutableSet* _windowsWorkgroups;
	SDDomainBrowser* _domainBrowser;
	SDManagedBrowser* _managedBrowser;
	SDClassroomBrowser* _classroomBrowser;
	SDConnectedBrowser* _connectedBrowser;
	SDWorkgroupBrowser* _workgroupBrowser;
	SDSharePointBrowser* _sharePointBrowser;
	SDRapportBrowser* _rapportBrowser;
	NSDictionary* _options;
	NSMutableDictionary* _managedURLTable;
	NSMutableDictionary* _commentHashTable;
	NSMutableDictionary* _originalNodes;
	NSString* _bundleID;
	SDXPCHelperConnection* _helperConnection;
	id<SDNodeBrowserDelegate> _delegate;
	NSObject*<OS_xpc_object> _connection;

}

@property (assign) long long mode; 
@property (nonatomic,copy) NSString * bundleID;                                            //@synthesize bundleID=_bundleID - In the implementation block
@property (copy,readonly) NSArray * nodes; 
@property (copy,readonly) NSArray * sidebarNodes; 
@property (assign,nonatomic,__weak) SDXPCHelperConnection * helperConnection;              //@synthesize helperConnection=_helperConnection - In the implementation block
@property (copy) NSDictionary * options; 
@property (__weak) id<SDNodeBrowserDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_xpc_object> connection;                                    //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SDNodeBrowserDelegate>)delegate;
-(void)setDelegate:(id<SDNodeBrowserDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setMode:(long long)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)bundleID;
-(NSDictionary *)options;
-(void)setError:(int)arg1 ;
-(void)start;
-(void)stop;
-(long long)mode;
-(void)setUserName:(id)arg1 ;
-(void)setConnectionState:(int)arg1 ;
-(NSArray *)nodes;
-(int)removeNode:(SFNodeRef)arg1 ;
-(int)addNode:(SFNodeRef)arg1 ;
-(SDXPCHelperConnection *)helperConnection;
-(void)setHelperConnection:(SDXPCHelperConnection *)arg1 ;
-(void)notifyClient;
-(id)odiskNodes;
-(id)airDropNodes;
-(id)initWithNode:(SFNodeRef)arg1 protocol:(id)arg2 flags:(unsigned long long)arg3 kind:(id)arg4 ;
-(NSArray *)sidebarNodes;
-(id)rangingMeasurementFromNode:(SFNodeRef)arg1 ;
-(id)mostRelevantMeasurementFromA:(id)arg1 andMeasurementB:(id)arg2 ;
-(void)loadWindows;
-(void)takeActionOnServerChanged:(id)arg1 neighborhood:(id)arg2 ;
-(void)notifyClientAboutWorkgroups;
-(void)serversChanged:(id)arg1 ;
-(void)domainsChanged:(id)arg1 ;
-(void)workgroupsChanged:(id)arg1 ;
-(char)onlySupportsADisk:(id)arg1 ;
-(void)connectedChanged:(id)arg1 ;
-(void)managedChanged:(id)arg1 ;
-(void)classroomChanged:(id)arg1 ;
-(void)sidebarPrefsChanged:(id)arg1 ;
-(id)domainChildren;
-(id)workgroupChildren;
-(void)addBonjourChildrenFromCache:(id)arg1 ;
-(void)addConnectedChildrenFromCache:(id)arg1 ;
-(void)addClassroomChildrenFromCache:(id)arg1 ;
-(void)addRapportChildrenFromCache:(id)arg1 ;
-(void)addFakeRangingMeasurementIfAppropriateToNodesInCache:(id)arg1 ;
-(id)coalescedNodesForNodesCache:(id)arg1 ;
-(void)updateSelectionReasonInNodes:(id)arg1 ;
-(void)loadBonjour;
-(void)loadDomains;
-(void)loadSharePoints;
-(void)loadWorkgroups;
-(void)loadConnected;
-(void)loadManaged;
-(void)loadClassroom;
-(void)loadODisk;
-(void)loadRapport;
-(void)loadAirDrop;
-(void)loadSidebarPrefsMonitor;
-(void)unloadBonjour;
-(void)unloadWindows;
-(void)unloadDomains;
-(void)unloadSharePoints;
-(void)unloadWorkgroups;
-(void)unloadConnected;
-(void)unloadManaged;
-(void)unloadClassroom;
-(void)unloadODisk;
-(void)unloadAirDrop;
-(void)unloadRapport;
-(void)unloadSidebarPrefsMonitor;
-(id)neighborhoodNodes;
-(void)addWindowsChildrenFromCache:(id)arg1 ;
-(void)addManagedChildrenFromCache:(id)arg1 ;
-(id)sidebarNodesFromServerNodes:(id)arg1 nonServerCount:(unsigned long long)arg2 addAllNode:(char*)arg3 ;
-(id)sharePointNodes;
-(void)appendAllNode:(id)arg1 ;
-(id)nodesInternal:(char)arg1 ;
-(void)sharePointBrowser:(id)arg1 nodesDidChangeWithError:(int)arg2 ;
-(void)copyOverBonjourInfo:(SFNodeRef)arg1 source:(SFNodeRef)arg2 ;
@end
