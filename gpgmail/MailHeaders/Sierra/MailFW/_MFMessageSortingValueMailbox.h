//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFMessageSortingValue.h>

@class MFMailbox;

@interface _MFMessageSortingValueMailbox : MFMessageSortingValue
{
    MFMailbox *_mailbox;	// 8 = 0x8
}

@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
- (id)description;	// IMP=0x00000000001e1f90
- (void)dealloc;	// IMP=0x00000000001e1f46

@end

