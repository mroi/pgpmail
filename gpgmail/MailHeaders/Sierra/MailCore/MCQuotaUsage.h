//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@interface MCQuotaUsage : NSObject
{
    CDStruct_d3e19d9e _current;	// 8 = 0x8
    CDStruct_d3e19d9e _maximum;	// 24 = 0x18
}

@property(nonatomic) CDStruct_d3e19d9e maximum; // @synthesize maximum=_maximum;
@property(nonatomic) CDStruct_d3e19d9e current; // @synthesize current=_current;
- (id)description;	// IMP=0x000000000009009c
- (BOOL)isEqual:(id)arg1;	// IMP=0x000000000008ffe9
- (unsigned long long)hash;	// IMP=0x000000000008ffb1
- (void)incrementCurrentBy:(CDStruct_d3e19d9e)arg1;	// IMP=0x000000000008ff88
- (void)decrementCurrentBy:(CDStruct_d3e19d9e)arg1;	// IMP=0x000000000008ff5f

@end

