/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:11 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDAirDropHandler.h>

@class NSString;

@interface SDAirDropHandlerFailed : SDAirDropHandler

@property (nonatomic,readonly) NSString * errorString; 
@property (nonatomic,readonly) NSString * errorDetailedString; 
-(NSString *)errorString;
-(void)activate;
-(char)canHandleTransfer;
-(id)suitableContentsDescription;
-(id)suitableContentsTitle;
-(NSString *)errorDetailedString;
@end

