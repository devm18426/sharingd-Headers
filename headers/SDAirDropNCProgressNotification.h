/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:10 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDAirDropNCNotification.h>

@protocol SDAirDropNCProgressNotificationDelegate;
@class NSProgress, NSObject;

@interface SDAirDropNCProgressNotification : SDAirDropNCNotification {

	NSProgress* _progress;
	NSObject*<SDAirDropNCProgressNotificationDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) NSObject*<SDAirDropNCProgressNotificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(NSObject*<SDAirDropNCProgressNotificationDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)timeRemaining;
-(char)worthShowingProgress;
-(id)initWithTransfer:(id)arg1 delegate:(id)arg2 ;
-(void)updateToOpen;
@end
