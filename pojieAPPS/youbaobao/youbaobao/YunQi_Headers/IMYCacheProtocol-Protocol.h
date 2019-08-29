//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol NSCoding, NSCopying;

@protocol IMYCacheProtocol <NSObject>

@optional
@property unsigned long long totalCostLimit;
@property unsigned long long countLimit;
@property(retain) NSString *name;
- (void)removeAllObjects:(void (^)(id <IMYCacheProtocol>))arg1;
- (void)removeObjectForKey:(NSString *)arg1 block:(void (^)(id <IMYCacheProtocol>, NSString *, id))arg2;
- (void)setObject:(id <NSCoding>)arg1 forKey:(NSString *)arg2 block:(void (^)(id <IMYCacheProtocol>))arg3;
- (void)objectForKey:(NSString *)arg1 block:(void (^)(id <IMYCacheProtocol>, NSString *, id))arg2;
- (_Bool)containsObjectForKey:(NSString *)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(id <NSCoding>)arg1 forKey:(NSString *)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id <NSCopying>)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
@end
