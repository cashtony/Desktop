//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (IMYAsyncBlock)
+ (id)imy_queueWithLevel:(long long)arg1;
+ (void)imy_asyncMainExecuteBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
+ (void)imy_asyncBlockExecuteBlock:(CDUnknownBlockType)arg1;
+ (void)imy_asyncBlock:(CDUnknownBlockType)arg1 onLevel:(long long)arg2 afterSecond:(double)arg3 forKey:(id)arg4;
+ (void)imy_asyncBlock:(CDUnknownBlockType)arg1 afterSecond:(double)arg2 level:(long long)arg3;
+ (void)imy_asyncBlock:(CDUnknownBlockType)arg1 afterSecond:(double)arg2;
+ (void)imy_asyncBlock:(CDUnknownBlockType)arg1 level:(long long)arg2;
+ (void)imy_asyncBlock:(CDUnknownBlockType)arg1;
+ (void)imy_executeAsyncBlockQueue;
+ (void)load;
@end

