//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSBaseDB.h"

@class NSDictionary, NSMutableDictionary, NSRecursiveLock, WCTTable;

@interface FTSMessageDB : FTSBaseDB
{
    NSRecursiveLock *m_oLock;
    NSDictionary *m_dictCreateTable;
    WCTTable *m_tableChatContext;
    NSMutableDictionary *m_dictChatContext;
}

+ (void)DeleteFTSMessageDB;
@property(retain, nonatomic) NSMutableDictionary *m_dictChatContext; // @synthesize m_dictChatContext;
@property(retain, nonatomic) WCTTable *m_tableChatContext; // @synthesize m_tableChatContext;
@property(retain, nonatomic) NSDictionary *m_dictCreateTable; // @synthesize m_dictCreateTable;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
- (void).cxx_destruct;
- (BOOL)deleteRowInChatContextTable:(unsigned int)arg1;
- (BOOL)updateChatContext:(unsigned int)arg1 lastMesLocalId:(unsigned int)arg2;
- (BOOL)insertRowInChatContextTable:(id)arg1 lastMsg:(id)arg2;
- (id)getLatestChatContextByChatName:(id)arg1;
- (BOOL)createChatContextTable;
- (BOOL)createNewChatContextForChat:(id)arg1;
- (unsigned long long)getLastMesLocalID:(id)arg1;
- (id)selectMsgsWithChatName:(id)arg1 limit:(unsigned int)arg2;
- (id)innerQueryMsgsWithKeyword:(id)arg1 tableIndex:(unsigned int)arg2;
- (id)queryWithKeyword:(id)arg1 chatName:(id)arg2;
- (BOOL)deleteAllRowsInChatTable:(id)arg1;
- (BOOL)innerDeleteRowInChatTable:(id)arg1 msgData:(id)arg2;
- (BOOL)deleteRowInChatTable:(id)arg1 arrMsgData:(id)arg2;
- (BOOL)deleteRowInChatTable:(id)arg1 msgData:(id)arg2;
- (id)innerSelectRowInChatTable:(id)arg1 msgData:(id)arg2;
- (BOOL)innerInsertRowsInChatTable:(id)arg1 arrMsgData:(id)arg2;
- (BOOL)insertRowInChatTable:(id)arg1 msgData:(id)arg2;
- (BOOL)insertRowsInChatTable:(id)arg1 arrMsgData:(id)arg2;
- (unsigned int)tableIndexOfChatName:(id)arg1;
- (id)msgTableWithChatName:(id)arg1;
- (id)msgTableWithIndex:(unsigned int)arg1;
- (id)msgTableNameWithIndex:(unsigned int)arg1;
- (BOOL)createFTSMsgTables;
- (id)init;

@end

