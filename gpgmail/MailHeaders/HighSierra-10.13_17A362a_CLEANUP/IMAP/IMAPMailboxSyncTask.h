//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAPTask.h>

#import "IMAPPersistDeletedMessagesOperationDelegate-Protocol.h"
#import "IMAPPersistFlagChangesOperationDelegate-Protocol.h"
#import "IMAPPersistLabelsOperationDelegate-Protocol.h"
#import "IMAPPersistMessagesOperationDelegate-Protocol.h"
#import "IMAPSelectMailboxOperationDelegate-Protocol.h"
#import "IMAPSyncSkeletonsOperationDelegate-Protocol.h"
#import "IMAPSyncUIDsFlagsAndLabelsOperationDelegate-Protocol.h"
#import "IMAPVerifyMailboxOperationDelegate-Protocol.h"

@class IMAPTaskManager, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSProgress, NSString;

@interface IMAPMailboxSyncTask : IMAPTask <IMAPPersistDeletedMessagesOperationDelegate, IMAPPersistFlagChangesOperationDelegate, IMAPPersistLabelsOperationDelegate, IMAPPersistMessagesOperationDelegate, IMAPSelectMailboxOperationDelegate, IMAPSyncSkeletonsOperationDelegate, IMAPSyncUIDsFlagsAndLabelsOperationDelegate, IMAPVerifyMailboxOperationDelegate>
{
    NSMutableIndexSet *_messageNumbersNeedingUIDs;
    NSMutableIndexSet *_messageNumbersNeedingSkeletons;
    NSMutableIndexSet *_uidsNeedingSkeletons;
    NSMutableOrderedSet *_messagesToPersist;
    NSMutableIndexSet *_uidsToDelete;
    NSMutableDictionary *_flagChangesByDetails;
    NSMutableDictionary *_labelsToPersist;
    NSMutableArray *_messagesNeedingUIDs;
    NSMutableIndexSet *_uidsAddedLocally;
    BOOL _userInitiated;
    BOOL _wasReset;
    BOOL _shouldVerifyLocalCount;
    BOOL _isGmail;
    BOOL _dataSourceIsInboxOrAllMail;
    BOOL _hasUnseen;
    BOOL _networkPriorityNeedsRecalculation;
    BOOL _persistencePriorityNeedsRecalculation;
    BOOL _needsUpdate;
    BOOL _isEnding;
    BOOL _foundNewUnreadInboxMessage;
    unsigned int _uidNext;
    unsigned int _lastSyncedUIDNext;
    unsigned int _newUIDValidity;
    unsigned int _localHighestUIDToCheck;
    id /*<IMAPMessageDataSource>*/ _dataSource;
    IMAPTaskManager *_taskManager;
    unsigned long long _serverModificationSequence;
    unsigned long long _lastSyncedModificationSequence;
    unsigned long long _exists;
    NSProgress *_checkProgress;
    long long _verificationState;
}

@property(nonatomic) long long verificationState; // @synthesize verificationState=_verificationState;
@property(nonatomic) BOOL foundNewUnreadInboxMessage; // @synthesize foundNewUnreadInboxMessage=_foundNewUnreadInboxMessage;
@property(readonly, nonatomic) NSProgress *checkProgress; // @synthesize checkProgress=_checkProgress;
@property(nonatomic) BOOL isEnding; // @synthesize isEnding=_isEnding;
@property(nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic) BOOL persistencePriorityNeedsRecalculation; // @synthesize persistencePriorityNeedsRecalculation=_persistencePriorityNeedsRecalculation;
@property(nonatomic) BOOL networkPriorityNeedsRecalculation; // @synthesize networkPriorityNeedsRecalculation=_networkPriorityNeedsRecalculation;
@property(nonatomic) BOOL hasUnseen; // @synthesize hasUnseen=_hasUnseen;
@property unsigned int localHighestUIDToCheck; // @synthesize localHighestUIDToCheck=_localHighestUIDToCheck;
@property(readonly, nonatomic) BOOL dataSourceIsInboxOrAllMail; // @synthesize dataSourceIsInboxOrAllMail=_dataSourceIsInboxOrAllMail;
@property(readonly, nonatomic) BOOL isGmail; // @synthesize isGmail=_isGmail;
@property(nonatomic) unsigned int newUIDValidity; // @synthesize newUIDValidity=_newUIDValidity;
@property(nonatomic) unsigned int lastSyncedUIDNext; // @synthesize lastSyncedUIDNext=_lastSyncedUIDNext;
@property(nonatomic) unsigned int uidNext; // @synthesize uidNext=_uidNext;
@property(nonatomic) unsigned long long exists; // @synthesize exists=_exists;
@property(nonatomic) BOOL shouldVerifyLocalCount; // @synthesize shouldVerifyLocalCount=_shouldVerifyLocalCount;
@property(nonatomic) unsigned long long lastSyncedModificationSequence; // @synthesize lastSyncedModificationSequence=_lastSyncedModificationSequence;
@property(nonatomic) unsigned long long serverModificationSequence; // @synthesize serverModificationSequence=_serverModificationSequence;
@property(readonly) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(nonatomic) BOOL wasReset; // @synthesize wasReset=_wasReset;
@property(readonly, nonatomic) id /*<IMAPMessageDataSource>*/ dataSource; // @synthesize dataSource=_dataSource;
//- (void).cxx_destruct;
- (void)verifyMailboxOperation:(id)arg1 foundInconsistencies:(BOOL)arg2;
- (void)_finishCheckForMailProgressIfNecessary;
- (void)_setFoundNewUnreadMessageInInbox;
- (void)_incrementFoundMessages:(unsigned long long)arg1;
- (void)persistDeletedMessagesOperation:(id)arg1 deletedUIDs:(id)arg2;
- (void)persistLabelsOperation:(id)arg1 persistedLabelsForPersistentIDs:(id)arg2;
- (void)persistFlagChangesOperation:(id)arg1 persistedFlagChangesForUIDs:(id)arg2;
- (void)persistMessagesOperation:(id)arg1 persistedMessagesAndGotNewMessages:(id)arg2 missedMessages:(id)arg3;
- (id)_gmailLabelsForNames:(id)arg1;
- (void)_updateLastSyncedModificationSequenceIfNeeded;
- (void)syncSkeletonsOperationFinished:(id)arg1 withFetchResponses:(id)arg2 serverInterface:(id)arg3;
- (void)syncUIDsOperationFinished:(id)arg1 withFetchResponses:(id)arg2 vanishedUIDs:(id)arg3;
- (void)_updateWithIMAPMailboxFromSelectForMailboxName:(id)arg1;
- (void)selectMailboxOperation:(id)arg1 selectedMailbox:(id)arg2;
- (void)end;
- (void)_sendMailboxDidStartSyncTaskNotification;
- (void)operationFinished:(id)arg1;
- (void)recalculatePriorities;
- (long long)_nextPersistencePriorityAndOperation:(id *)arg1;
- (id)nextPersistenceOperation;
- (void)_checkForOfflineExpungesIfNeeded;
- (id)_batchedUIDsNeedingSkeletonsOfSize:(unsigned long long)arg1;
- (long long)_nextNetworkPriorityAndOperation:(id *)arg1 reservedNetworkPriority:(long long *)arg2;
- (id)nextNetworkOperation;
- (void)cancel;
- (void)didAddMessagesWithUnknownUID:(id)arg1;
- (void)newUIDsAddedLocally:(id)arg1;
- (void)reset;
- (void)_updateStateForFullSyncRecalculatingPrioritiesIfNecessary:(BOOL)arg1;
- (void)syncUIDsIgnoringModificationSequence;
- (void)fetchFlagsForMessageNumbers:(id)arg1;
- (BOOL)_uidIsBeingPersisted:(unsigned int)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)uidIsBeingPersisted:(unsigned int)arg1;
- (BOOL)handleVanishedMessageWithUID:(unsigned int)arg1 range:(struct _NSRange)arg2;
- (BOOL)handleExpungedMessageWithMessageNumber:(unsigned long long)arg1 uid:(unsigned int)arg2;
- (void)updateWithExists:(unsigned long long)arg1;
- (BOOL)_checkForWorkWithIMAPMailbox:(id)arg1 canTrustExists:(BOOL)arg2 canTrustUnseen:(BOOL)arg3 allowUpdate:(BOOL)arg4 forceUpdate:(BOOL)arg5;
@property(nonatomic) BOOL userInitiated;
- (id)initWithMailboxName:(id)arg1;
- (void)_imapMailboxSyncTaskCommonInitWithDataSource:(id)arg1 taskManager:(id)arg2;
- (id)initWithDataSource:(id)arg1 taskManager:(id)arg2 exists:(unsigned long long)arg3;
- (id)initWithDataSource:(id)arg1 taskManager:(id)arg2 messageNumbersNeedingFlags:(id)arg3;
- (id)initWithDataSource:(id)arg1 taskManager:(id)arg2 imapMailbox:(id)arg3 fromStatus:(BOOL)arg4 forceFullSync:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

