//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MFEWSAccount;

@interface _MFEWSAutodiscoveryTimerTarget : NSObject
{
    MFEWSAccount *_account;	// 8 = 0x8
}

@property(nonatomic) __weak MFEWSAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;	// IMP=0x000000000006b311
- (void)kickOffReautodiscovery:(id)arg1;	// IMP=0x000000000006b219

@end

