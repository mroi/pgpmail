//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class NSMutableIndexSet;

@interface _UIDsBatch : NSObject
{
    unsigned int _expectedLength;
    NSMutableIndexSet *_uids;
}

@property(nonatomic) unsigned int expectedLength; // @synthesize expectedLength=_expectedLength;
@property(retain, nonatomic) NSMutableIndexSet *uids; // @synthesize uids=_uids;
//- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

