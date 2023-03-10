/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:12 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <sharingd/sharingd-Structs.h>
@class NSString, NSData, NSArray;

@interface SDSuggestionNode : NSObject {

	char _hasGroupImage;
	NSString* _bundleID;
	NSString* _displayName;
	NSData* _iconData;
	CGImageRef _icon;
	NSString* _identifier;
	NSArray* _formattedHandles;
	NSArray* _actualHandles;
	NSString* _suggestionReason;
	NSArray* _contactIDs;
	NSString* _derivedIntentIdentifier;
	long long _iconIndex;

}

@property (nonatomic,retain) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSData * iconData;                             //@synthesize iconData=_iconData - In the implementation block
@property (assign,nonatomic) CGImageRef icon;                               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * formattedHandles;                    //@synthesize formattedHandles=_formattedHandles - In the implementation block
@property (nonatomic,retain) NSArray * actualHandles;                       //@synthesize actualHandles=_actualHandles - In the implementation block
@property (nonatomic,retain) NSString * suggestionReason;                   //@synthesize suggestionReason=_suggestionReason - In the implementation block
@property (assign,nonatomic) char hasGroupImage;                            //@synthesize hasGroupImage=_hasGroupImage - In the implementation block
@property (nonatomic,retain) NSArray * contactIDs;                          //@synthesize contactIDs=_contactIDs - In the implementation block
@property (nonatomic,copy) NSString * derivedIntentIdentifier;              //@synthesize derivedIntentIdentifier=_derivedIntentIdentifier - In the implementation block
@property (nonatomic,readonly) char isGroup; 
@property (nonatomic,readonly) char isIntentsBased; 
@property (assign,nonatomic) long long iconIndex;                           //@synthesize iconIndex=_iconIndex - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)displayName;
-(NSData *)iconData;
-(void)setIdentifier:(NSString *)arg1 ;
-(char)isGroup;
-(void)setIcon:(CGImageRef)arg1 ;
-(CGImageRef)icon;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)derivedIntentIdentifier;
-(void)setDerivedIntentIdentifier:(NSString *)arg1 ;
-(void)setIconData:(NSData *)arg1 ;
-(char)isIntentsBased;
-(NSArray *)formattedHandles;
-(void)setFormattedHandles:(NSArray *)arg1 ;
-(NSArray *)actualHandles;
-(void)setActualHandles:(NSArray *)arg1 ;
-(NSString *)suggestionReason;
-(void)setSuggestionReason:(NSString *)arg1 ;
-(char)hasGroupImage;
-(void)setHasGroupImage:(char)arg1 ;
-(NSArray *)contactIDs;
-(void)setContactIDs:(NSArray *)arg1 ;
-(long long)iconIndex;
-(void)setIconIndex:(long long)arg1 ;
@end

