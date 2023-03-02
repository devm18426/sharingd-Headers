/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:13 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <libobjc.A.dylib/SDAirDropFileZipperDelegate.h>
#import <libobjc.A.dylib/SDBonjourResolverDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction, SDAirDropClientDelegate;
@class NSURLResponse, NSURLSessionUploadTask, NSString, PHMediaFormatConversionManager, NSProgress, NSMutableArray, NSMutableDictionary, NSMutableSet, NSArray, SDAirDropPeerMetric, SDStatusMonitor, NSObject, NSMutableData, SDBonjourResolver, NSNumber, NSURL, NSURLSession, SDXPCHelperConnection, SDAirDropFileZipper;

@interface SDAirDropClient : NSObject <SDAirDropFileZipperDelegate, SDBonjourResolverDelegate, NSURLSessionDataDelegate> {

	NSURLResponse* _askResponse;
	NSURLSessionUploadTask* _askTask;
	char _cancelled;
	NSString* _clientBundleID;
	NSString* _compressionType;
	NSString* _connectionKey;
	PHMediaFormatConversionManager* _conversionManager;
	char _conversionNotified;
	char _conversionObserver;
	NSProgress* _conversionProgress;
	char _discover;
	NSURLResponse* _discoverResponse;
	NSURLSessionUploadTask* _discoverTask;
	int _failCount;
	CGImageRef _fileIcon;
	NSMutableArray* _fileURLs;
	NSMutableDictionary* _fileURLToConversionNeeded;
	NSMutableSet* _generatedFiles;
	SecIdentityRef _identity;
	NSArray* _items;
	long long _lastEvent;
	NSMutableArray* _mediaFormatConversionDestinations;
	SDAirDropPeerMetric* _metric;
	SDStatusMonitor* _monitor;
	NSMutableArray* _otherStuff;
	char _p2pRetained;
	SFNodeRef _person;
	char _personAdded;
	unsigned _powerAssertionID;
	NSProgress* _progress;
	NSMutableDictionary* _properties;
	char _providedStream;
	NSObject*<OS_dispatch_queue> _queue;
	char _queueSuspended;
	NSMutableData* _receiverData;
	SDBonjourResolver* _resolver;
	NSNumber* _sendingLivePhotoJPEGs;
	SecTrustRef _serverTrust;
	NSURL* _serverURL;
	NSURLSession* _session;
	char _shouldPublishProgress;
	CGImageRef _smallFileIcon;
	double _startTime;
	NSURL* _tmpDirectoryToCleanUp;
	NSObject*<OS_os_transaction> _transaction;
	char _transactionStarted;
	NSProgress* _transferProgress;
	char _uploadFinished;
	NSURLResponse* _uploadResponse;
	NSURLSessionUploadTask* _uploadTask;
	NSMutableArray* _weblocURLs;
	SDXPCHelperConnection* _xpcHelperConnection;
	SDAirDropFileZipper* _zipper;
	char _zipperFinished;
	int _clientPid;
	id<SDAirDropClientDelegate> _delegate;
	SCD_Struct_SD24 _auditToken;

}

@property (assign) SCD_Struct_SD24 auditToken;                        //@synthesize auditToken=_auditToken - In the implementation block
@property (assign) int clientPid;                                     //@synthesize clientPid=_clientPid - In the implementation block
@property (readonly) NSString * personID; 
@property (copy) NSString * clientBundleID;                           //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign,nonatomic) char shouldPublishProgress;              //@synthesize shouldPublishProgress=_shouldPublishProgress - In the implementation block
@property (readonly) SecTrustRef secTrustRef; 
@property (__weak) id<SDAirDropClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<SDAirDropClientDelegate>)delegate;
-(void)setDelegate:(id<SDAirDropClientDelegate>)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(SCD_Struct_SD24)auditToken;
-(void)setAuditToken:(SCD_Struct_SD24)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)activate;
-(char)send;
-(void)resolve;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(int)clientPid;
-(id)tmpDirectory;
-(NSString *)clientBundleID;
-(void)setClientBundleID:(NSString *)arg1 ;
-(NSString *)personID;
-(void)sendRequest:(id)arg1 ;
-(void)finishOperation;
-(void)createSession;
-(void)removeObservers;
-(void)addObservers;
-(void)didFinishLoading;
-(void)wirelessPowerChanged:(id)arg1 ;
-(SecTrustRef)secTrustRef;
-(id)initWithPerson:(SFNodeRef)arg1 items:(id)arg2 forDiscovery:(char)arg3 ;
-(void)releaseIdleSleepAssertion;
-(void)systemWillSleep:(id)arg1 ;
-(void)bonjourResolverDidChange:(id)arg1 ;
-(void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void*)arg3 ;
-(void)notifyClientForEvent:(long long)arg1 withProperty:(void*)arg2 ;
-(void)setClientPid:(int)arg1 ;
-(char)requireAWDL;
-(void)storePropertyValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)postNotificationForTransferStatus:(long long)arg1 progress:(double)arg2 ;
-(void)setSpotlightMetadata:(id)arg1 ;
-(void)donateTransferInteractionToDuet;
-(double)getTransferRate;
-(void)cancelSendingClassroom;
-(void)startZipping;
-(id)whereFromInfo;
-(void)logInterfaceUsedForSending:(id)arg1 ;
-(void)storeDataValue:(CFDictionaryRef)arg1 forKey:(CFStringRef)arg2 ;
-(void)storeStringValue:(CFDictionaryRef)arg1 forKey:(CFStringRef)arg2 ;
-(void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2 ;
-(char)parseAskResponse:(_CFError*)arg1 ;
-(void)retryRequestForError:(id)arg1 ;
-(char)parseDiscoverResponse:(_CFError*)arg1 ;
-(void)didStartSendingAskBodyData;
-(void)didFinishSendingAskBodyData;
-(void)didFail:(id)arg1 ;
-(char)shouldCancelTransferForError:(id)arg1 ;
-(char)connectionOverP2P:(CFDataRef)arg1 ;
-(void)evaluateReceiverTrust:(SecTrustRef)arg1 completion:(/*^block*/id)arg2 ;
-(void)addHashesAndValidationRecordToRequest:(id)arg1 ;
-(id)discoverBodyDataInFormat:(long long)arg1 ;
-(id)askBodyDataInFormat:(long long)arg1 ;
-(id)temporaryWeblocURL:(CFURLRef)arg1 ;
-(id)webURLFromInternetLocationFile:(id)arg1 ;
-(SecKeyRef)copyReceiverPublicKey;
-(id)internetLocationFile:(CFURLRef)arg1 ;
-(id)realPathURL:(CFURLRef)arg1 ;
-(char)replaceFileURLsWithRealPaths;
-(void)generatePreviewForFileURL:(id)arg1 ;
-(void)appendFileURL:(id)arg1 withBase:(id)arg2 toItems:(id)arg3 ;
-(void)convertMediaItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startPublishingProgress;
-(void)startSendingClassroom;
-(void)removeFileIconsFromProperties;
-(void)validateAirDropItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)splitOutFileURLs;
-(void)startSending;
-(void)convertMediaItemFromURL:(id)arg1 forMediaCapabilities:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)convertLivePhotoBundleIfNeeded:(id)arg1 capabilities:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)convertWideGamutToClampedPhoto;
-(void)releasePeerToPeerIfPossible:(id)arg1 ;
-(char)shouldPublishProgress;
-(void)setShouldPublishProgress:(char)arg1 ;
@end
