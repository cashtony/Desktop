//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor, UIImageView, YBBToolsMusicAlbum;

@interface YBBToolsMusicSuspensionView : UIView
{
    _Bool _hasObserve;
    _Bool _isCharts;
    double _progress;
    double _progressWidth;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    UIImageView *_imageView;
    CDUnknownBlockType _suspensionDidTapBlock;
    YBBToolsMusicAlbum *_album;
    CAShapeLayer *_trackLayer;
    CAShapeLayer *_progressLayer;
    struct UIEdgeInsets _superviewEdgeInsets;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isCharts; // @synthesize isCharts=_isCharts;
@property(nonatomic) _Bool hasObserve; // @synthesize hasObserve=_hasObserve;
@property(nonatomic) __weak CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(nonatomic) __weak CAShapeLayer *trackLayer; // @synthesize trackLayer=_trackLayer;
@property(retain, nonatomic) YBBToolsMusicAlbum *album; // @synthesize album=_album;
@property(copy, nonatomic) CDUnknownBlockType suspensionDidTapBlock; // @synthesize suspensionDidTapBlock=_suspensionDidTapBlock;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double progressWidth; // @synthesize progressWidth=_progressWidth;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) struct UIEdgeInsets superviewEdgeInsets; // @synthesize superviewEdgeInsets=_superviewEdgeInsets;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (id)circleBezierPath;
- (void)addInnerView;
- (void)addShadowview;
- (void)updateSuspensionFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)handlePanGestureRecognizer:(id)arg1;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)interruptPlay;
- (void)pausePlay;
- (void)autoUpdateProgress;
- (_Bool)shouldShow;
- (void)refreshStatePrivate;
- (void)refreshState;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)showInWindow;
- (void)initGestureRecognizer;
- (void)setAlbumFromSong:(id)arg1;
- (void)addObserver;
- (void)initUI;
- (void)initDataSource;
- (id)initWithFrame:(struct CGRect)arg1;

@end
