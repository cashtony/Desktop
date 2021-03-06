//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface MMLockMutableDictionary : MMObject
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_dict;
}

+ (id)dictionaryWithMutableDictionary:(id)arg1;
- (void).cxx_destruct;
- (int)count;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (id)allKeys;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (id)fetchDictionary;
- (void)setDictionary:(id)arg1;
- (id)initWithMutableDictionary:(id)arg1;
- (id)init;

@end

