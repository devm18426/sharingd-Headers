/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:07 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSNetServiceBrowserDelegate <NSObject>
@optional
-(void)netServiceBrowserWillSearch:(id)arg1;
-(void)netServiceBrowserDidStopSearch:(id)arg1;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
-(void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(char)arg3;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(char)arg3;
-(void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(char)arg3;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(char)arg3;

@end
