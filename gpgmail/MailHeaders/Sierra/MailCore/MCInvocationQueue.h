//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

@class NSPort;

@interface MCInvocationQueue : NSOperationQueue
{
    id _runLoopCancelPortOnceLock;	// 24 = 0x18
    NSPort *_runLoopCancelPort;	// 32 = 0x20
    NSOperationQueue *_secondaryQueue;	// 40 = 0x28
}

+ (BOOL)didCancelAllMonitoredItems;	// IMP=0x00000000000349c3
+ (void)cancelAllMonitoredItems;	// IMP=0x00000000000349b6
@property(readonly, nonatomic) NSOperationQueue *secondaryQueue; // @synthesize secondaryQueue=_secondaryQueue;
- (void).cxx_destruct;	// IMP=0x0000000000035449
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000035271
- (id)_newOperationWithInvocation:(id)arg1;	// IMP=0x00000000000350ad
- (void)runInvocationOnQueueSynchronously:(id)arg1;	// IMP=0x0000000000034de7
- (void)addInvocation:(id)arg1;	// IMP=0x0000000000034d54
- (void)waitUntilAllOperationsAreFinished;	// IMP=0x0000000000034ce6
- (void)cancelAllOperations;	// IMP=0x0000000000034c78
- (unsigned long long)operationCount;	// IMP=0x0000000000034bf6
- (id)operations;	// IMP=0x0000000000034b22
- (void)dealloc;	// IMP=0x0000000000034ad8
- (id)initWithMaxConcurrentOperationCount:(long long)arg1;	// IMP=0x0000000000034a9c
- (id)init;	// IMP=0x0000000000034a88
- (id)initWithSecondaryQueue:(BOOL)arg1;	// IMP=0x00000000000349d3

@end

