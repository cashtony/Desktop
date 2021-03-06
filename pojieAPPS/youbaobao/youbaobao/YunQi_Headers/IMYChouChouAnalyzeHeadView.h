//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DACircularProgressView, UIImageView, UILabel, UIViewController;

@interface IMYChouChouAnalyzeHeadView : UIView
{
    UIImageView *_arrow;
    UIViewController *_vc;
    DACircularProgressView *_progressView;
    UILabel *_todayTimesLabel;
    UILabel *_yestodayTimesLabel;
    UILabel *_averageTimesLabel;
}

@property(retain, nonatomic) UILabel *averageTimesLabel; // @synthesize averageTimesLabel=_averageTimesLabel;
@property(retain, nonatomic) UILabel *yestodayTimesLabel; // @synthesize yestodayTimesLabel=_yestodayTimesLabel;
@property(retain, nonatomic) UILabel *todayTimesLabel; // @synthesize todayTimesLabel=_todayTimesLabel;
@property(retain, nonatomic) DACircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
- (void).cxx_destruct;
- (void)showContentData;
- (void)setCircleColor:(id)arg1;
- (void)setAverageTimes:(long long)arg1;
- (void)setYesterDayTimes:(long long)arg1;
- (void)setTodayTimes:(long long)arg1 isNone:(_Bool)arg2;
- (id)p_creatLabelWithFontColor:(id)arg1 size:(double)arg2 text:(id)arg3;
- (void)p_initCircle;
- (void)p_initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

