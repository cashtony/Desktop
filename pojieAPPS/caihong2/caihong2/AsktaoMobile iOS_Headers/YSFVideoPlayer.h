//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSURL, UIActivityIndicatorView, UIImageView;

@interface YSFVideoPlayer : UIView
{
    id _timeObserver;
    double _totalTime;
    CDUnknownBlockType _block;
    _Bool _soundOff;
    NSURL *_videoURL;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
    UIImageView *_coverImageView;
    UIActivityIndicatorView *_indicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (void)showToast:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateHandleBarWithTime:(CDStruct_198678f7)arg1;
- (void)cancel;
- (void)pause;
- (void)play;
- (void)playFromTime:(CDStruct_198678f7)arg1;
- (void)setupPlayer;
- (void)startWithMessage:(id)arg1 soundOff:(_Bool)arg2 statusBlock:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

