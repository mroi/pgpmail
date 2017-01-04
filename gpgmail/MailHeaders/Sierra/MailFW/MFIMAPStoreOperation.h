//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFIMAPOperation.h>

@class NSArray, NSIndexSet, NSPointerArray;

@interface MFIMAPStoreOperation : MFIMAPOperation
{
    NSArray *_objectsToSet;	// 24 = 0x18
    NSArray *_objectsToClear;	// 32 = 0x20
    NSPointerArray *_uids;	// 40 = 0x28
}

@property(retain, nonatomic) NSPointerArray *uids; // @synthesize uids=_uids;
@property(copy, nonatomic) NSArray *objectsToClear; // @synthesize objectsToClear=_objectsToClear;
@property(copy, nonatomic) NSArray *objectsToSet; // @synthesize objectsToSet=_objectsToSet;
- (void).cxx_destruct;	// IMP=0x00000000000fddd9
- (void)serializeIntoData:(id)arg1;	// IMP=0x00000000000fd90a
- (void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long *)arg2;	// IMP=0x00000000000fd695
@property(readonly, copy, nonatomic) NSIndexSet *uidIndexSet;
- (id)_initWithObjectsToSet:(id)arg1 objectsToClear:(id)arg2 forUids:(id)arg3 inMailbox:(id)arg4;	// IMP=0x00000000000fd289

// Remaining properties
@property(nonatomic) BOOL usesRealUids; // @dynamic usesRealUids;

@end

