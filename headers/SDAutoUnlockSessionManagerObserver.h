/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:00 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SDAutoUnlockSessionManagerObserver <NSObject>
@optional
-(void)session:(id)arg1 didReceiveKeyDeviceLocked:(id)arg2;
-(void)session:(id)arg1 didEnableWithDevice:(id)arg2;
-(void)session:(id)arg1 didFailToEnableDevice:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 didBeginAttemptWithDevice:(id)arg2;
-(void)session:(id)arg1 didCompleteUnlockWithDevice:(id)arg2;
-(void)session:(id)arg1 didFailUnlockWithResults:(id)arg2 error:(id)arg3 incrementedAttempt:(char)arg4;

@end

