/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:12 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSError;

@interface SDPeopleSuggestionsResult : NSObject {

	NSArray* _suggestions;
	NSError* _error;

}

@property (retain) NSArray * suggestions;              //@synthesize suggestions=_suggestions - In the implementation block
@property (retain) NSError * error;                    //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
@end

