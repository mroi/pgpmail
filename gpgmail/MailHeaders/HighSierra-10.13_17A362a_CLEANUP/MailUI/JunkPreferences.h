//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSViewController.h"

@class NSButton, NSColor;

@interface JunkPreferences : NSViewController
{
    long long _junkMailBehavior;
    NSButton *_junkMailOnOffSwitch;
    NSButton *_markAsJunkOption;
    NSButton *_moveToJunkOption;
    NSButton *_performCustomActionOption;
    NSButton *_senderInMyContactsCase;
    NSButton *_senderInMyPreviousRecipientsCase;
    NSButton *_messageUsingFullNameCase;
}

+ (id)keyPathsForValuesAffectingIsAdvancedEnabled;
+ (id)keyPathsForValuesAffectingIsEnabled;
+ (id)sharedInstance;
+ (id)keyPathsForValuesAffectingLabelColor;
@property(nonatomic) NSButton *messageUsingFullNameCase; // @synthesize messageUsingFullNameCase=_messageUsingFullNameCase;
@property(nonatomic) NSButton *senderInMyPreviousRecipientsCase; // @synthesize senderInMyPreviousRecipientsCase=_senderInMyPreviousRecipientsCase;
@property(nonatomic) NSButton *senderInMyContactsCase; // @synthesize senderInMyContactsCase=_senderInMyContactsCase;
@property(nonatomic) NSButton *performCustomActionOption; // @synthesize performCustomActionOption=_performCustomActionOption;
@property(nonatomic) NSButton *moveToJunkOption; // @synthesize moveToJunkOption=_moveToJunkOption;
@property(nonatomic) NSButton *markAsJunkOption; // @synthesize markAsJunkOption=_markAsJunkOption;
@property(nonatomic) NSButton *junkMailOnOffSwitch; // @synthesize junkMailOnOffSwitch=_junkMailOnOffSwitch;
- (void)showCustomJunkMailSettings:(id)arg1;
- (void)resetJunkMailMap:(id)arg1;
- (void)changeJunkMailBehavior:(id)arg1;
@property(readonly, nonatomic) BOOL isAdvancedEnabled;
@property(readonly, nonatomic) BOOL isEnabled;
- (BOOL)junkMailIsOff;
@property(nonatomic) long long junkMailBehavior;
- (void)whitelistChanged:(id)arg1;
- (void)junkMailToggled:(id)arg1;
- (void)selectArrivalOptionForTag:(long long)arg1;
- (long long)tagForCurrentlySelectedArrivalOption;
- (void)initializeFromDefaults;
- (void)awakeFromNib;
@property(readonly, nonatomic) NSColor *labelColor;
- (void)_messageRuleChanged:(id)arg1;

@end

