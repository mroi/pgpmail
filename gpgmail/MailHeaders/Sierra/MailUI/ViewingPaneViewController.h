//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class ConversationViewController, MailStackViewController, MessageSelection, MessageViewController, NSArray, NSView, NoSelectionPlaceholderViewController, ViewingPaneView;

@interface ViewingPaneViewController : NSViewController
{
    MailStackViewController *_stackViewController;	// 104 = 0x68
    BOOL _disableSnapshots;	// 112 = 0x70
    BOOL _vibrant;	// 113 = 0x71
    BOOL _showMailboxNames;	// 114 = 0x72
    NoSelectionPlaceholderViewController *_placeholderViewController;	// 120 = 0x78
    ConversationViewController *_conversationViewController;	// 128 = 0x80
    NSView *_snapshotView;	// 136 = 0x88
}

@property BOOL showMailboxNames; // @synthesize showMailboxNames=_showMailboxNames;
@property(nonatomic) BOOL vibrant; // @synthesize vibrant=_vibrant;
@property(retain, nonatomic) NSView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(readonly, nonatomic) ConversationViewController *conversationViewController; // @synthesize conversationViewController=_conversationViewController;
@property(retain, nonatomic) NoSelectionPlaceholderViewController *placeholderViewController; // @synthesize placeholderViewController=_placeholderViewController;
@property BOOL disableSnapshots; // @synthesize disableSnapshots=_disableSnapshots;
- (void).cxx_destruct;	// IMP=0x0000000100317ad9
- (BOOL)validateToolbarItem:(id)arg1;	// IMP=0x0000000100317980
- (BOOL)validateMenuItem:(id)arg1;	// IMP=0x0000000100317908
- (id)currentlyReadMessage;	// IMP=0x000000010031788e
- (void)_snapshotTimeout;	// IMP=0x00000001000a9df8
- (void)_viewControllerDidLoad;	// IMP=0x0000000100317731
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010001ff77
@property(readonly, nonatomic) __weak NSView *accessibilityLinkTarget;
- (void)setVertical:(BOOL)arg1;	// IMP=0x0000000100317695
- (void)_presentSnapshotForPendingView:(id)arg1 loadingOption:(long long)arg2 titlebarAligned:(BOOL)arg3;	// IMP=0x0000000100317553
- (void)_displayStackView;	// IMP=0x0000000100317408
- (void)_displayConversationView;	// IMP=0x000000010003a2e3
- (void)_displayNoSelectionPlaceholder;	// IMP=0x000000010001f321
@property(readonly, nonatomic) MessageViewController *actionViewController;
@property(readonly, copy, nonatomic) NSArray *actionConversationMembers;
- (id)actionMessagesIncludingDuplicates:(BOOL)arg1;	// IMP=0x0000000100317309
@property(readonly, nonatomic) MessageSelection *currentMessageSelection;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;	// IMP=0x0000000100317262
@property(retain, nonatomic) MailStackViewController *stackViewController;
@property(retain) MessageSelection *representedObject;
@property(retain) ViewingPaneView *view;
- (void)loadView;	// IMP=0x000000010001ef07
- (void)dealloc;	// IMP=0x00000001000ba5be
- (void)_viewingPaneViewControllerCommonInit;	// IMP=0x00000001003171d7
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100317165
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100317120

@end

