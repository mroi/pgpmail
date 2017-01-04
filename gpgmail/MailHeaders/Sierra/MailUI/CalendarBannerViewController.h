//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BannerViewController.h"

@class NSButton, NSString, NSTextField;

@interface CalendarBannerViewController : BannerViewController
{
    NSTextField *_eventTitle;	// 104 = 0x68
    NSTextField *_eventTime;	// 112 = 0x70
    NSButton *_openCalendarButton;	// 120 = 0x78
    NSString *_alternateTimeProposal;	// 128 = 0x80
}

+ (id)keyPathsForValuesAffectingShouldHideMeetingCancellationOKButton;	// IMP=0x00000001000ed5a5
+ (id)keyPathsForValuesAffectingShouldHideMeetingRequestButtons;	// IMP=0x00000001000ed50d
@property(copy, nonatomic) NSString *alternateTimeProposal; // @synthesize alternateTimeProposal=_alternateTimeProposal;
@property(nonatomic) __weak NSButton *openCalendarButton; // @synthesize openCalendarButton=_openCalendarButton;
@property(nonatomic) __weak NSTextField *eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) __weak NSTextField *eventTitle; // @synthesize eventTitle=_eventTitle;
- (void).cxx_destruct;	// IMP=0x00000001000ee577
- (id)_dateStringForEvent:(id)arg1;	// IMP=0x00000001000ee02a
- (id)_titleForEvent:(id)arg1;	// IMP=0x00000001000ede86
- (id)_eventForCurrentMessage;	// IMP=0x00000001000edcc6
- (void)openInCalendar:(id)arg1;	// IMP=0x00000001000eda6e
- (void)sendMeetingResponse:(id)arg1;	// IMP=0x00000001000ed63d
@property(readonly, nonatomic) BOOL shouldHideMeetingCancellationOKButton;
@property(readonly, nonatomic) BOOL shouldHideMeetingRequestButtons;
- (void)updateBannerContents;	// IMP=0x00000001000ed341
- (id)_proposalStringForMessage:(id)arg1 withAttachments:(id)arg2;	// IMP=0x00000001000ece0a
- (void)updateWantsDisplay;	// IMP=0x000000010004a2aa
- (double)bannerHeight;	// IMP=0x00000001000ecdc3

@end

