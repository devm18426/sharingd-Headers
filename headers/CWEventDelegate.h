/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:08 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CWEventDelegate
@optional
-(void)clientConnectionInterrupted;
-(void)clientConnectionInvalidated;
-(void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)ssidDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)bssidDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)countryCodeDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)linkDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)linkQualityDidChangeForWiFiInterfaceWithName:(id)arg1 rssi:(long long)arg2 transmitRate:(double)arg3;
-(void)modeDidChangeForWiFiInterfaceWithName:(id)arg1;
-(void)scanCacheUpdatedForWiFiInterfaceWithName:(id)arg1;

@end

