//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTabViewItem.h"

#import "TabBarViewItem.h"

@class ComposeViewController, NSArray, NSImage, NSString;

@interface ComposeTabViewItem : NSTabViewItem <TabBarViewItem>
{
    NSArray *_accessoryViews;	// 144 = 0x90
}

@property(readonly, copy, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
- (void).cxx_destruct;	// IMP=0x000000010010845f
@property(retain) ComposeViewController *viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *toolTip;

@end

