//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YQAttentionManager : NSObject
{
}

+ (id)requestParamDictWithType:(long long)arg1 userID:(long long)arg2 page:(long long)arg3;
+ (id)requestPathWithType:(long long)arg1;
+ (id)keyWithUserID:(long long)arg1;
+ (void)getUserListWithType:(long long)arg1 userID:(long long)arg2 page:(long long)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)reportUserID:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)searchKey:(id)arg1 page:(long long)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)removeFromBlackList:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)addToBlackList:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)cancelFocusFriend:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)addFocusFriend:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)delTopicRecordWithID:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)delTopicWithID:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)getTopicListWithTime:(id)arg1 userID:(long long)arg2 topicID:(long long)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)getUserProfileWithID:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)getUserHomepageWithID:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)getMyAttentionListWithTime:(id)arg1 topicID:(long long)arg2 beforeTime:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;

@end

