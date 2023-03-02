/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:08 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <libobjc.A.dylib/SDNodeBrowserDelegate.h>

@protocol OS_os_transaction, OS_xpc_object, SDNetworkBrowserDelegate;
@class NSDictionary, NSObject, NSString, SDXPCHelperConnection, NSNumber;

@interface SDNetworkBrowser : NSObject <SDNodeBrowserDelegate> {

	SFNodeRef _rootNode;
	long long _mode;
	CFDictionaryRef _nodeBrowsers;
	NSDictionary* _options;
	NSObject*<OS_os_transaction> _transaction;
	NSString* _bundleID;
	SDXPCHelperConnection* _helperConnection;
	NSString* _kind;
	NSString* _objectKey;
	NSObject*<OS_xpc_object> _boostMessage;
	id<SDNetworkBrowserDelegate> _delegate;
	NSObject*<OS_xpc_object> _connection;
	NSNumber* _isEntitled;

}

@property (assign) long long mode; 
@property (nonatomic,copy) NSString * bundleID;                                            //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic,__weak) SDXPCHelperConnection * helperConnection;              //@synthesize helperConnection=_helperConnection - In the implementation block
@property (copy,readonly) NSString * kind;                                                 //@synthesize kind=_kind - In the implementation block
@property (copy) NSString * objectKey;                                                     //@synthesize objectKey=_objectKey - In the implementation block
@property (copy) NSDictionary * options; 
@property (retain) NSObject*<OS_xpc_object> boostMessage;                                  //@synthesize boostMessage=_boostMessage - In the implementation block
@property (__weak) id<SDNetworkBrowserDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_xpc_object> connection;                                    //@synthesize connection=_connection - In the implementation block
@property (retain) NSNumber * isEntitled;                                                  //@synthesize isEntitled=_isEntitled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<SDNetworkBrowserDelegate>)delegate;
-(void)setDelegate:(id<SDNetworkBrowserDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setMode:(long long)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)bundleID;
-(NSDictionary *)options;
-(NSString *)kind;
-(long long)mode;
-(int)removeNode:(SFNodeRef)arg1 ;
-(NSNumber *)isEntitled;
-(int)addNode:(SFNodeRef)arg1 ;
-(SDXPCHelperConnection *)helperConnection;
-(void)setHelperConnection:(SDXPCHelperConnection *)arg1 ;
-(void)setObjectKey:(NSString *)arg1 ;
-(id)childrenForNode:(SFNodeRef)arg1 ;
-(void)nodeBrowser:(id)arg1 nodesChangedForParent:(SFNodeRef)arg2 protocol:(id)arg3 error:(int)arg4 ;
-(id)initWithKind:(id)arg1 rootNode:(SFNodeRef)arg2 ;
-(int)openNode:(SFNodeRef)arg1 forProtocol:(id)arg2 flags:(unsigned long long)arg3 ;
-(SFNodeRef)copyRootNode;
-(id)sidebarChildren;
-(int)closeNode:(SFNodeRef)arg1 ;
-(NSString *)objectKey;
-(NSObject*<OS_xpc_object>)boostMessage;
-(void)setBoostMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setIsEntitled:(NSNumber *)arg1 ;
@end

