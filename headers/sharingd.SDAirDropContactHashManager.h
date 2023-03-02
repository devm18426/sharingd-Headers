/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:17 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface sharingd.SDAirDropContactHashManager : NSObject {

	 systemMonitor;
	 hashManagerQ;
	 bucket;
	 contactStore;
	 hashDB;
	 activated;
	 updateTimer;
	 meCardInfo;
	 numUnpersisted;

}
+(id)generateShortHashDataFromEmails:(id)arg1 ;
+(id)GeneralContactKeysToFetch;
+(id)myMediumHashes:(id)arg1 ;
+(id)ContactHashableKeysToFetch;
+(id)iOSDisplayContactKeysToFetch;
+(id)macOSDisplayContactKeysToFetch;
+(id)shared;
-(void)activate;
-(id)contactForCombinedHash:(id)arg1 ;
-(id)contactIdentifierForMediumHashes:(id)arg1 ;
-(char)contactsContainsShortHashes:(id)arg1 ;
-(id)addressOrNumForHash:(id)arg1 ;
-(void)updateMeCard:(id)arg1 ;
-(void)hashesNeedUpdating;
-(void)forcePersistNow;
-(id)contactOrFakeMeCardWithIdentifier:(id)arg1 ;
-(id)_contactIDForEmailOrPhone:(id)arg1 ;
-(id)init;
-(char)acquireTokenForIdentifier:(unsigned long long)arg1 ;
@end

