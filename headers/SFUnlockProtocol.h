/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:00 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUnlockProtocol <NSObject>
@optional
-(void)autoUnlockStateWithCompletionHandler:(/*^block*/id)arg1;
-(void)repairCloudPairing;
-(void)cancelEnablingAutoUnlockForDevice:(id)arg1;
-(void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelAutoUnlock;
-(void)authPromptInfoWithCompletionHandler:(/*^block*/id)arg1;
-(void)eligibleAutoUnlockDevicesWithCompletionHandler:(/*^block*/id)arg1;
-(void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2 clientProxy:(id)arg3;
-(void)attemptAutoUnlockWithClientProxy:(id)arg1;
-(void)enableUnlockWithDevice:(id)arg1 fromKey:(char)arg2 withPasscode:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)disableUnlockWithDevice:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)unlockEnabledWithDevice:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)establishStashBagWithCompletionHandler:(/*^block*/id)arg1;
-(void)establishStashBagWithManifest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)unlockStateForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

