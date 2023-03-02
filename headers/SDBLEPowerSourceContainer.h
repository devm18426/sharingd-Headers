/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:03 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <sharingd/sharingd-Structs.h>
@class CUCoalescer, SFPowerSource;

@interface SDBLEPowerSourceContainer : NSObject {

	LogCategory* _ucat;
	CUCoalescer* _powerSourceIdleCoalescer;
	char _invalidateCalled;
	SFPowerSource* _powerSource;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) SFPowerSource * powerSource;              //@synthesize powerSource=_powerSource - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                       //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(int)publish;
-(id)invalidationHandler;
-(void)trigger;
-(SFPowerSource *)powerSource;
-(id)initWithPowerSource:(id)arg1 ;
@end
