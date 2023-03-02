/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:10 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDXPCDaemon.h>
#import <libobjc.A.dylib/SDAirDropTransferManagerProtocol.h>
#import <libobjc.A.dylib/SDAirDropAlertManager.h>

@protocol SDAirDropAlertManagerDelegate;
@class NSObject, NSMutableDictionary, NSArray, NSString;

@interface SDAirDropTransferManager : SDXPCDaemon <SDAirDropTransferManagerProtocol, SDAirDropAlertManager> {

	NSObject*<SDAirDropAlertManagerDelegate> delegate;
	NSObject*<SDAirDropAlertManagerDelegate> _classroomDelegate;
	NSMutableDictionary* _transferIdentifierToTransfer;
	NSMutableDictionary* _transferIdentifierToHandler;
	NSArray* _kvoObservingKeys;

}

@property (retain) NSMutableDictionary * transferIdentifierToTransfer;                                       //@synthesize transferIdentifierToTransfer=_transferIdentifierToTransfer - In the implementation block
@property (retain) NSMutableDictionary * transferIdentifierToHandler;                                        //@synthesize transferIdentifierToHandler=_transferIdentifierToHandler - In the implementation block
@property (retain) NSArray * kvoObservingKeys;                                                               //@synthesize kvoObservingKeys=_kvoObservingKeys - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SDAirDropAlertManagerDelegate> classroomDelegate;              //@synthesize classroomDelegate=_classroomDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) NSObject*<SDAirDropAlertManagerDelegate> delegate; 
-(id)init;
-(void)invalidate;
-(NSObject*<SDAirDropAlertManagerDelegate>)delegate;
-(void)setDelegate:(NSObject*<SDAirDropAlertManagerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)activate;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)connectionInvalidated:(id)arg1 ;
-(char)shouldAcceptNewConnection:(id)arg1 ;
-(void)askEventForRecordID:(id)arg1 withResults:(id)arg2 ;
-(void)progressEventForRecordID:(id)arg1 withResults:(id)arg2 ;
-(void)cancelEventForRecordID:(id)arg1 withResults:(id)arg2 ;
-(void)errorEventForRecordID:(id)arg1 withResults:(id)arg2 ;
-(void)finishedEventForRecordID:(id)arg1 withResults:(id)arg2 ;
-(void)_enumerateRemoteObjectProxiesUsingBlock:(/*^block*/id)arg1 ;
-(void)setClassroomDelegate:(NSObject*<SDAirDropAlertManagerDelegate>)arg1 ;
-(void)connectionEstablished:(id)arg1 ;
-(void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)loadAllPersistedTransfers;
-(NSMutableDictionary *)transferIdentifierToHandler;
-(NSMutableDictionary *)transferIdentifierToTransfer;
-(NSArray *)kvoObservingKeys;
-(void)notifyObserversOfRemovedTransfer:(id)arg1 ;
-(void)cleanUpTransfer:(id)arg1 ;
-(id)transferURLForTransfer:(id)arg1 ;
-(void)cleanUpURL:(id)arg1 ;
-(id)itemTypesForTransfer:(id)arg1 ;
-(id)determineHandlerForTransfer:(id)arg1 ;
-(void)setHandler:(id)arg1 forTransfer:(id)arg2 ;
-(void)setTransferState:(unsigned long long)arg1 forTransfer:(id)arg2 shouldNotify:(char)arg3 ;
-(void)transfer:(id)arg1 actionTriggeredForAction:(id)arg2 ;
-(void)failTransfer:(id)arg1 withState:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 ;
-(void)transferUserResponseUpdated:(id)arg1 ;
-(void)notifyObserversOfUpdatedTransfer:(id)arg1 ;
-(NSObject*<SDAirDropAlertManagerDelegate>)classroomDelegate;
-(void)removeTransfer:(id)arg1 shouldCleanup:(char)arg2 ;
-(void)setTransferState:(unsigned long long)arg1 forTransfer:(id)arg2 shouldNotify:(char)arg3 shouldCleanup:(char)arg4 ;
-(void)handlerFailedForTransfer:(id)arg1 ;
-(id)persistedTransfersBaseURL;
-(void)setTransferIdentifierToTransfer:(NSMutableDictionary *)arg1 ;
-(void)setTransferIdentifierToHandler:(NSMutableDictionary *)arg1 ;
-(void)setKvoObservingKeys:(NSArray *)arg1 ;
@end
