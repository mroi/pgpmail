//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PrintingManager.h"

@class NSMutableArray;

@interface PrintingManagerForPrinting : PrintingManager
{
    NSMutableArray *_arraysOfConversationMembersToGenerateHTMLFor;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *arraysOfConversationMembersToGenerateHTMLFor; // @synthesize arraysOfConversationMembersToGenerateHTMLFor=_arraysOfConversationMembersToGenerateHTMLFor;
- (void).cxx_destruct;	// IMP=0x000000010027cd98
- (void)_print;	// IMP=0x000000010027c560
- (void)dispatch;	// IMP=0x000000010027baf1
- (id)progressMessage;	// IMP=0x000000010027ba8b
- (void)dealloc;	// IMP=0x000000010027ba38

@end

