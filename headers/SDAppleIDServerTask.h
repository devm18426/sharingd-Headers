/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:12 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSURLSession, NSDictionary, NSURLRequest;

@interface SDAppleIDServerTask : NSObject {

	char _activated;
	char _invalidated;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _responseHandler;
	NSString* _appleID;
	NSString* _gsToken;
	NSURLSession* _session;
	NSDictionary* _taskInfo;
	long long _type;
	NSURLRequest* _urlRequest;

}

@property (assign,nonatomic) char activated;                                          //@synthesize activated=_activated - In the implementation block
@property (nonatomic,readonly) NSString * appleID;                                    //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * gsToken;                                      //@synthesize gsToken=_gsToken - In the implementation block
@property (assign,nonatomic) char invalidated;                                        //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSDictionary * taskInfo;                               //@synthesize taskInfo=_taskInfo - In the implementation block
@property (nonatomic,readonly) long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURLRequest * urlRequest;                               //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id responseHandler;                                        //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)description;
-(void)_activate;
-(void)invalidate;
-(long long)type;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(NSURLSession *)session;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)activated;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSString *)appleID;
-(id)responseHandler;
-(NSURLRequest *)urlRequest;
-(id)_parseServerResponse:(id)arg1 error:(int*)arg2 ;
-(void)setInvalidated:(char)arg1 ;
-(char)invalidated;
-(void)setResponseHandler:(id)arg1 ;
-(NSDictionary *)taskInfo;
-(void)setUrlRequest:(NSURLRequest *)arg1 ;
-(void)setActivated:(char)arg1 ;
-(void)_sendRequest;
-(id)initWithType:(long long)arg1 appleID:(id)arg2 info:(id)arg3 ;
-(void)_callResponseHandlerWithInfo:(id)arg1 errorInfo:(id)arg2 error:(int)arg3 ;
-(NSString *)gsToken;
-(void)_handleURLIsAvailable:(id)arg1 error:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)_urlWithCompletion:(/*^block*/id)arg1 ;
-(char)_isTaskInfoValid;
-(void)_callResponseHandlerWithInfo:(id)arg1 error:(int)arg2 ;
-(void)_handleTaskResponse:(id)arg1 withData:(id)arg2 error:(int)arg3 ;
-(void)_handleURLRequestIsAvailable;
-(void)_urlRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleServerError:(long long)arg1 withStatusCode:(long long)arg2 nextSuggestedAttemptDelay:(long long)arg3 ;
-(id)_parseCreateCertificateResponse:(id)arg1 error:(int*)arg2 ;
-(id)_parseFetchCertificateResponse:(id)arg1 error:(int*)arg2 ;
-(id)_parseGetMyInfoResponse:(id)arg1 error:(int*)arg2 ;
-(id)_parseFindPersonResponse:(id)arg1 error:(int*)arg2 ;
-(void)setGsToken:(NSString *)arg1 ;
-(void)_handleGSTokenIsAvailable;
@end
