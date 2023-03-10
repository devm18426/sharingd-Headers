/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:12 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SDBonjourBrowserDelegate.h>

@protocol SDWindowsBrowserDelegate;
@class SDBonjourBrowser, NSString, NSArray;

@interface SDWindowsBrowser : NSObject <SDBonjourBrowserDelegate> {

	SDBonjourBrowser* _browser;
	NSString* _workgroup;
	id<SDWindowsBrowserDelegate> _delegate;

}

@property (copy,readonly) NSArray * nodes; 
@property (copy,readonly) NSString * workgroup;                        //@synthesize workgroup=_workgroup - In the implementation block
@property (__weak) id<SDWindowsBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SDWindowsBrowserDelegate>)delegate;
-(void)setDelegate:(id<SDWindowsBrowserDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(NSArray *)nodes;
-(void)bonjourNodesDidChange:(id)arg1 ;
-(NSString *)workgroup;
-(id)initWithWorkgroup:(id)arg1 ;
@end

