//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ReactiveTableViewCell-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IMYLineView, IMYRM80AttributedLabel, NSMutableArray, NSString, TTQRecommendTopicItemUserInfoView, TTQTopicModel, UIColor;

@interface TTQRecommendTopicItemView : UIView <UIGestureRecognizerDelegate, ReactiveTableViewCell>
{
    UIColor *bgColor;
    IMYRM80AttributedLabel *_contentLabel;
    NSMutableArray *_imageViews;
    TTQRecommendTopicItemUserInfoView *_userInfoView;
    IMYLineView *_lineView;
    TTQTopicModel *_data;
}

@property(retain, nonatomic) TTQTopicModel *data; // @synthesize data=_data;
@property(retain, nonatomic) IMYLineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) TTQRecommendTopicItemUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) IMYRM80AttributedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (struct CGSize)imageWidthWithCount:(long long)arg1 imageType:(unsigned long long)arg2;
- (double)bindModel:(id)arg1 heightForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (id)bindModel:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)setupUI;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
