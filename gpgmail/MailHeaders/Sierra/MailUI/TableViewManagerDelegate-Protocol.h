//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MCMessage, NSArray, NSMenu, NSTableHeaderView, NSView, TableViewManager;

@protocol TableViewManagerDelegate <NSObject>
- (NSView *)accessibilityLinkTargetForTableViewManager:(TableViewManager *)arg1;
- (void)tableViewManagerNeedsUndoStackReset:(TableViewManager *)arg1 unconditionally:(BOOL)arg2;
- (void)tableViewManagerContentUpdated:(TableViewManager *)arg1;
- (BOOL)allowShowingDeletedMessagesInTableViewManager:(TableViewManager *)arg1;
- (void)tableViewManagerDidFinishSearch:(TableViewManager *)arg1;
- (void)tableViewManagerDidUpdateSearch:(TableViewManager *)arg1;
- (void)tableViewManagerWillBeginSearch:(TableViewManager *)arg1;
- (void)tableViewManager:(TableViewManager *)arg1 archiveMessages:(NSArray *)arg2 allowUndo:(BOOL)arg3 withAnimationOptions:(unsigned long long)arg4;
- (void)tableViewManager:(TableViewManager *)arg1 deleteMessages:(NSArray *)arg2 allowMoveToTrash:(BOOL)arg3 allowUndo:(BOOL)arg4 selectingNextMessage:(BOOL)arg5 withAnimationOptions:(unsigned long long)arg6;
- (MCMessage *)currentReadMessage;
- (void)tableViewManagerRequestSelectionChange:(TableViewManager *)arg1;
- (void)tableViewManagerRequestSelectionOpen:(TableViewManager *)arg1;
- (void)tableViewManager:(TableViewManager *)arg1 didMarkMessagesAsUnread:(NSArray *)arg2;
- (void)tableViewManager:(TableViewManager *)arg1 didMarkMessagesAsRead:(NSArray *)arg2;
- (void)tableViewManagerDidChangeMessageSelection:(TableViewManager *)arg1;
- (void)tableViewManager:(TableViewManager *)arg1 showFollowupsToMessage:(MCMessage *)arg2;
- (NSMenu *)defaultMenuForTableViewHeader:(NSTableHeaderView *)arg1;
@end

