//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMANBaseEvent.h"

@class NSMutableDictionary, NSString;

@interface UMANEkv : UMANBaseEvent
{
    int du;
    NSString *_id;
    NSString *_key;
    NSMutableDictionary *_values;
}

+ (void)addEvent:(id)arg1;
+ (void)clearDataInTableWithVersion:(id)arg1;
+ (void)clearDataInTable:(id)arg1;
+ (id)loadTableWithVersion:(id)arg1;
+ (id)loadTable:(id)arg1;
+ (int)rowCountInTable;
+ (void)insertTable:(id)arg1 eventId:(id)arg2 event:(id)arg3 type:(id)arg4;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(nonatomic) int du; // @synthesize du;
- (id)deepLinkInitWithId:(id)arg1 key:(id)arg2 values:(id)arg3 isGKV:(_Bool)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)outputUMLog;
- (id)attributes;
- (void)updateDuWithEndEvent:(id)arg1;
- (void)updateDu;
- (id)processDictionary:(id)arg1;
- (id)initDplusWithId:(id)arg1 key:(id)arg2 values:(id)arg3 isGKV:(_Bool)arg4;
- (id)initWithId:(id)arg1 key:(id)arg2 values:(id)arg3 isGKV:(_Bool)arg4;
- (void)dealloc;

@end
