//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@interface IMAPIDCommand : IMAPSingleCommand
{
}

- (long long)maxAllowedConnectionState;	// IMP=0x000000000002e134
- (long long)minRequiredConnectionState;	// IMP=0x000000000002e129
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x000000000002e10e
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;	// IMP=0x000000000002de83
- (id)activityString;	// IMP=0x000000000002de17
- (id)commandTypeString;	// IMP=0x000000000002ddf8

@end

