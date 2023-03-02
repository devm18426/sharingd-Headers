/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:06 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/SDXPCDaemonProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSSet, NSObject, NSXPCConnection, NSString, NSXPCInterface;

@interface SDXPCDaemon : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, SDXPCDaemonProtocol> {

	NSXPCListener* _xpcListener;
	char _activateCalled;
	char _invalidateCalled;
	char _invalidateDone;
	NSSet* _activeConnections;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,copy) NSSet * activeConnections;                                 //@synthesize activeConnections=_activeConnections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy,readonly) NSXPCConnection * currentConnection; 
@property (nonatomic,readonly) NSString * machServiceName; 
@property (nonatomic,readonly) NSXPCInterface * exportedInterface; 
@property (nonatomic,readonly) NSXPCInterface * remoteObjectInterface; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)_activate;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(char)arg3 ;
-(NSXPCConnection *)currentConnection;
-(NSXPCInterface *)exportedInterface;
-(NSXPCInterface *)remoteObjectInterface;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSSet *)activeConnections;
-(NSString *)machServiceName;
-(void)connectionInvalidated:(id)arg1 ;
-(void)setActiveConnections:(NSSet *)arg1 ;
-(char)shouldAcceptNewConnection:(id)arg1 ;
-(void)enumerateRemoteObjectProxiesUsingBlock:(/*^block*/id)arg1 ;
-(void)establishConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)connectionEstablished:(id)arg1 ;
-(void)remoteObjectProxyForConnection:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)onqueue_enumerateRemoteObjectProxiesUsingBlock:(/*^block*/id)arg1 ;
-(void)onqueue_remoteObjectProxyForConnection:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)onqueue_activate;
-(void)onqueue_invalidate;
-(void)onqueue_connectionInvalidated:(id)arg1 ;
@end

