//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject-Protocol.h"

@class IMAPMailbox;

@protocol IMAPMailboxDelegate <NSObject>
- (void)updateComputedHighestModificationSequence:(unsigned long long)arg1 forMailbox:(IMAPMailbox *)arg2;
- (unsigned long long)computedHighestModificationSequenceForMailbox:(IMAPMailbox *)arg1;
- (unsigned long long)allegedHighestModificationSequenceForMailbox:(IMAPMailbox *)arg1;
- (void)updateUidValidityFromMailbox:(IMAPMailbox *)arg1;
@end

