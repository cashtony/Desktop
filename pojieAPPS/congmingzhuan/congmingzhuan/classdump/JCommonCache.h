//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JCommonCache : NSObject
{
}

+ (void)removeObjectForFile:(id)arg1;
+ (void)setObject:(id)arg1 forFile:(id)arg2;
+ (id)objectForFile:(id)arg1;
+ (void)removeObjectForKey:(id)arg1;
+ (void)setObject:(id)arg1 forKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (void)objectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)objectForKey:(id)arg1;

@end
