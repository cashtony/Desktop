//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewModel.h"

@class IMYTTQVCommentModel, NSMutableArray, RACSignal, UIViewController;
@protocol IMYITableViewAdManager, RACSubscriber;

@interface IMYTTQVCommentViewModel : IMYPublicBaseViewModel
{
    RACSignal *commentDeleteSignal;
    id <RACSubscriber> commentDeleteSubscriber;
    _Bool _hideRecommend;
    _Bool _isShowCommentAll;
    _Bool _showXiaoShiPinStyle;
    _Bool _isShowTag;
    _Bool _showTotalCommentPraise;
    _Bool _fromVideoFeeds;
    NSMutableArray *_fullData;
    NSMutableArray *_recommendArray;
    NSMutableArray *_commentArray;
    unsigned long long _stackCommentMaxCount;
    long long _newsId;
    IMYTTQVCommentModel *_commentModel;
    UIViewController *_currentVC;
    NSMutableArray *_tagsArray;
    unsigned long long _recommendSection;
    CDUnknownBlockType _onCellDidShowCommentDetail;
    id <IMYITableViewAdManager> _adManager;
    long long _lastCommentId;
    id _adSeparatorSection;
}

@property(retain, nonatomic) id adSeparatorSection; // @synthesize adSeparatorSection=_adSeparatorSection;
@property(nonatomic) long long lastCommentId; // @synthesize lastCommentId=_lastCommentId;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(copy, nonatomic) CDUnknownBlockType onCellDidShowCommentDetail; // @synthesize onCellDidShowCommentDetail=_onCellDidShowCommentDetail;
@property(nonatomic) unsigned long long recommendSection; // @synthesize recommendSection=_recommendSection;
@property(retain, nonatomic) NSMutableArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(nonatomic) _Bool fromVideoFeeds; // @synthesize fromVideoFeeds=_fromVideoFeeds;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) IMYTTQVCommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(nonatomic) _Bool showTotalCommentPraise; // @synthesize showTotalCommentPraise=_showTotalCommentPraise;
@property(nonatomic) _Bool isShowTag; // @synthesize isShowTag=_isShowTag;
@property(nonatomic) _Bool showXiaoShiPinStyle; // @synthesize showXiaoShiPinStyle=_showXiaoShiPinStyle;
@property(nonatomic) _Bool isShowCommentAll; // @synthesize isShowCommentAll=_isShowCommentAll;
@property(nonatomic) _Bool hideRecommend; // @synthesize hideRecommend=_hideRecommend;
@property(nonatomic) long long newsId; // @synthesize newsId=_newsId;
@property(nonatomic) unsigned long long stackCommentMaxCount; // @synthesize stackCommentMaxCount=_stackCommentMaxCount;
@property(retain, nonatomic) NSMutableArray *commentArray; // @synthesize commentArray=_commentArray;
@property(retain, nonatomic) NSMutableArray *recommendArray; // @synthesize recommendArray=_recommendArray;
@property(retain, nonatomic) NSMutableArray *fullData; // @synthesize fullData=_fullData;
- (void).cxx_destruct;
- (void)addStackComment:(id)arg1 toReview:(id)arg2;
- (void)addCommentAtTop:(id)arg1;
- (id)commentDeleteSubscriber;
- (id)commentDeleteSignal;
- (void)handleRequestFinishState:(id)arg1;
- (void)loadMore;
- (void)requestFinished:(id)arg1;
- (void)requestData;
- (void)refresh;
- (id)init;
- (id)newsCommentDetailViewController:(long long)arg1 gotoId:(long long)arg2 referenceName:(id)arg3 showKeyboard:(_Bool)arg4;
- (void)showNewsCommentDetailViewController:(long long)arg1 gotoId:(long long)arg2 referenceName:(id)arg3 showKeyboard:(_Bool)arg4;
- (void)showReportActionSheetWithCellModel:(id)arg1;
- (void)showActionSheetWithCellModel:(id)arg1;
- (void)postGAEvent;
- (id)convertStackCommentCellModel:(id)arg1 mainComment:(id)arg2 atIndex:(long long)arg3;
- (id)convertCommentNOSubCellModel:(id)arg1;
- (id)convertCommentCellModel:(id)arg1;
- (id)convertRecommendCellModel:(id)arg1;
- (id)convertCommentPraiseCellModel:(id)arg1 cellHeight:(double)arg2 bottomSeparator:(_Bool)arg3;
- (id)convertTagsCellModel:(id)arg1 bottomSeparator:(_Bool)arg2;

@end
