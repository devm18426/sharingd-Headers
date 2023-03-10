/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:11 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate, SFAppleIDAccount, NSMutableDictionary;

@interface SDAppleIDDatabaseManager : NSObject {

	NSDictionary* _metaInfo;
	NSDate* _lastConnectionDate;
	NSDate* _lastSuccessfulConnectionDate;
	SFAppleIDAccount* _account;
	NSMutableDictionary* _personInfoCache;

}

@property (nonatomic,retain) SFAppleIDAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personInfoCache;              //@synthesize personInfoCache=_personInfoCache - In the implementation block
@property (nonatomic,retain) NSDate * lastConnectionDate;                        //@synthesize lastConnectionDate=_lastConnectionDate - In the implementation block
@property (nonatomic,retain) NSDate * lastSuccessfulConnectionDate;              //@synthesize lastSuccessfulConnectionDate=_lastSuccessfulConnectionDate - In the implementation block
@property (nonatomic,copy) NSDictionary * metaInfo; 
+(id)sharedManager;
-(id)init;
-(SFAppleIDAccount *)account;
-(void)setAccount:(SFAppleIDAccount *)arg1 ;
-(void)_setAccount:(id)arg1 ;
-(NSDictionary *)metaInfo;
-(void)setMetaInfo:(NSDictionary *)arg1 ;
-(void)_readPrefs;
-(void)setPersonInfoCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)personInfoCache;
-(id)_accountForAppleID:(id)arg1 ;
-(id)_identityForAppleID:(id)arg1 ;
-(id)_statusInfo;
-(void)_updateAccountInfoPrefs;
-(void)_postNotificationWithName:(id)arg1 ;
-(void)_addAppleID:(id)arg1 ;
-(void)_removeAppleID:(id)arg1 ;
-(void)_updatePersonInfoCachePrefs;
-(void)_addPersonInfoToCache:(id)arg1 ;
-(id)_cachedPersonInfoWithEmailOrPhone:(id)arg1 ;
-(void)_clearPersonInfoCache;
-(void)_setLastConnectionDate:(id)arg1 ;
-(void)_setLastSuccessfulConnectionDate:(id)arg1 ;
-(void)_setIdentity:(id)arg1 forAppleID:(id)arg2 ;
-(void)_setIdentityLinkedToCurrentUser:(char)arg1 forAppleID:(id)arg2 ;
-(void)_setCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3 ;
-(void)_setContactInfo:(id)arg1 validationRecord:(id)arg2 forAppleID:(id)arg3 ;
-(void)_updateMetaInfoPrefs;
-(void)_setMetaInfo:(id)arg1 ;
-(id)accountForAppleID:(id)arg1 ;
-(id)identityForAppleID:(id)arg1 ;
-(id)statusInfo;
-(void)addAppleID:(id)arg1 ;
-(void)removeAppleID:(id)arg1 ;
-(void)addPersonInfoToCache:(id)arg1 ;
-(id)cachedPersonInfoWithEmailOrPhone:(id)arg1 ;
-(void)clearPersonInfoCache;
-(void)setLastConnectionDate:(NSDate *)arg1 ;
-(void)setLastSuccessfulConnectionDate:(NSDate *)arg1 ;
-(void)setIdentity:(id)arg1 forAppleID:(id)arg2 ;
-(void)setIdentityLinkedToCurrentUser:(char)arg1 forAppleID:(id)arg2 ;
-(void)setCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3 ;
-(void)setContactInfo:(id)arg1 validationRecord:(id)arg2 forAppleID:(id)arg3 ;
-(NSDate *)lastConnectionDate;
-(NSDate *)lastSuccessfulConnectionDate;
@end

