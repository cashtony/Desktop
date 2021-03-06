//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GXGBDMessageStore-Protocol.h"

@class NSString;

@interface GXGBDInDatabaseMessageStore : NSObject <GXGBDMessageStore>
{
    struct sqlite3 *database;
}

+ (id)sharedInstance;
- (void)sendRquestToRemote:(id)arg1;
- (id)formatRequestUrl;
- (void)sendUrlRquest:(id)arg1;
- (void)cleanExpireData;
- (void)deleteAllCacheData;
- (void)deleteCacheDataForRdid:(id)arg1;
- (id)getCacheDataForGivenLine:(int)arg1;
- (id)cacheData:(id)arg1 onlyRdid:(id)arg2 type:(id)arg3 action:(int)arg4;
- (_Bool)deleteRequestCacheForTimestamp:(double)arg1;
- (_Bool)deleteRequestCacheForRdid:(id)arg1;
- (id)selectRequestCacheDataForLine:(long long)arg1;
- (_Bool)saveRequestCache:(id)arg1 rdid:(id)arg2 type:(id)arg3 action:(id)arg4;
- (_Bool)insertRequestCache:(id)arg1 rdid:(id)arg2 type:(id)arg3 action:(id)arg4;
- (_Bool)updateRequestCache:(id)arg1 rdid:(id)arg2 type:(id)arg3 action:(id)arg4;
- (long long)selectRequestCacheCount;
- (_Bool)hasRequestCacheByRdid:(id)arg1;
- (void)removeGXCheckCodeAndAppKey:(id)arg1;
- (void)removeGXRegisterIdAndAppKey:(id)arg1;
- (void)removeGXClientIdAndAppKey:(id)arg1;
- (void)removeGXLoginTokenAndAppKey:(id)arg1;
- (id)getGxCheckCodeAndAppKey:(id)arg1;
- (id)getGXRegisterIdAndAppKey:(id)arg1;
- (id)getGXClientIdAndAppKey:(id)arg1;
- (id)getGXLoginTokenAndAppKey:(id)arg1;
- (void)saveGXCheckCode:(id)arg1 andAppKey:(id)arg2;
- (void)saveGXRegisterId:(id)arg1 andAppKey:(id)arg2;
- (void)saveGXClientId:(id)arg1 andAppKey:(id)arg2;
- (void)saveGXLoginToken:(id)arg1 andAppKey:(id)arg2;
- (id)selectSdkUserValueForKey:(id)arg1 andAppKey:(id)arg2;
- (_Bool)saveSdkUserValue:(id)arg1 key:(id)arg2 andAppKey:(id)arg3;
- (_Bool)updateSdkUserDataForAppKey:(id)arg1 value:(id)arg2 key:(id)arg3;
- (_Bool)insertSdkUserDataForAppKey:(id)arg1;
- (_Bool)hasSdkUserDataForAppKey:(id)arg1;
- (id)queryMsgByMsgId:(id)arg1;
- (_Bool)addNewMsg:(id)arg1 withMsgID:(id)arg2 andKey:(id)arg3;
- (_Bool)deleteMsgByMsgId:(id)arg1;
- (_Bool)createReportCacheTable;
- (_Bool)createUserTable;
- (_Bool)createMsgTable;
- (_Bool)openDatabase;
- (_Bool)deleteStoreMessageForTimestamp:(double)arg1;
- (void)clear:(id)arg1;
- (void)cleanExpireDataForStoreMessage;
- (id)storeMessage:(id)arg1 msgId:(id)arg2 taskId:(id)arg3 appId:(id)arg4;
- (id)retriveMsgById:(id)arg1;
- (_Bool)hasStoredMsgId:(id)arg1 taskId:(id)arg2 appId:(id)arg3;
- (void)dealloc;
- (void)initDatabaseInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

