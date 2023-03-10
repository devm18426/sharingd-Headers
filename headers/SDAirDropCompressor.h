/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:03 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <sharingd/sharingd-Structs.h>
@class NSObject;

@interface SDAirDropCompressor : NSObject {

	char _compressible;
	unsigned _totalBytesSent;
	double _totalNetworkDelay;
	char _keepingUpWithNetwork;
	long long _numBlocksProcessed;
	unsigned _totalBytesProcessed;
	long long _numBlocksCompressed;
	double _lastCompressionRatio;
	double _totalCompressionTime;
	unsigned _totalCompressedOutput;
	CFReadStreamRef _readStream;
	CFWriteStreamRef _writeStream;
	NSObject*<OS_dispatch_queue> _adjustmentQueue;

}
-(void)dealloc;
-(char)readData:(char*)arg1 length:(long long)arg2 fromStream:(CFReadStreamRef)arg3 ;
-(char)writeData:(char*)arg1 length:(long long)arg2 toStream:(CFWriteStreamRef)arg3 ;
-(void)openStreams;
-(char)readIncomingChunk;
-(void)sendOutgoingChunk:(char*)arg1 length:(long long)arg2 compressed:(char)arg3 ;
-(void)processNetworkStatistics:(double)arg1 ;
-(void)processCompressibilityStatistics;
-(id)initWithReadStream:(CFReadStreamRef)arg1 writeStream:(CFWriteStreamRef)arg2 ;
-(CFReadStreamRef)copyReadStream;
-(void)fileComplete;
-(void)executeReadWithAdaptiveCompression;
-(void)executeWriteWithAdaptiveCompression;
@end

