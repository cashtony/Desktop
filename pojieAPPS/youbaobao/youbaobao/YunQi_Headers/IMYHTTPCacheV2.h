//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLCacheLike-Protocol.h"

@class NSString, PINCache;

@interface IMYHTTPCacheV2 : NSObject <NSURLCacheLike>
{
    PINCache *_underlyingCache;
}

@property(retain, nonatomic) PINCache *underlyingCache; // @synthesize underlyingCache=_underlyingCache;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long currentMemoryUsage;
@property(readonly, nonatomic) unsigned long long currentDiskUsage;
@property(readonly, nonatomic) unsigned long long diskCapacity;
@property(readonly, nonatomic) unsigned long long memoryCapacity;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
