//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YBBToolsMusicAssitantManager : NSObject
{
}

+ (void)uploadBIWithPosition:(long long)arg1 toolsID:(id)arg2;
+ (void)uploadBIWithPosition:(long long)arg1 toolAlias:(unsigned long long)arg2;
+ (void)uploadBIFromHomeWithToolAlias:(unsigned long long)arg1;
+ (void)uploadBIFromOtherWithToolsId:(id)arg1;
+ (void)uploadBIFromOtherWithToolAlias:(unsigned long long)arg1;
+ (id)getBabyMother;
+ (void)searchHotWordWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (void)requestPictureBookAlbumDetail:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)requestCartoonAlbumDetail:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)updateStoryCollectionPlayTimesWithCollectionID:(long long)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)getStoryDetailWithStoryID:(long long)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)getStoryListWithAlbumID:(long long)arg1 offset:(long long)arg2 size:(long long)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)getSongListWithAlbumID:(long long)arg1 offset:(long long)arg2 size:(long long)arg3 handle:(CDUnknownBlockType)arg4;
+ (void)getAlbumListWithTrackType:(unsigned long long)arg1 albumID:(long long)arg2 offset:(long long)arg3 size:(long long)arg4 handle:(CDUnknownBlockType)arg5;
+ (void)uploadPlayCount:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)putAlbumCountIncreaseWithID:(long long)arg1 handle:(CDUnknownBlockType)arg2;
+ (void)getRankList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)getTrackCategoryWithType:(long long)arg1;
+ (void)requestClassifyDetailContent:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)requestClassifyDetailTab:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)requestClassifyList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)requestCardList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)requestRecommendList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)getAssitantTabs;
+ (void)requestAssitantTabs:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

