//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMYVideoView, NSArray, NSError, NSNumber;

@protocol IMYVideoViewDelegate <NSObject>

@optional
- (_Bool)shouldPlayerView:(IMYVideoView *)arg1 changeStateTo:(long long)arg2;
- (_Bool)shouldPlayerViewStartVideo:(IMYVideoView *)arg1;
- (void)playerViewReachabilityDidChange:(IMYVideoView *)arg1;
- (void)playerViewAppDidBecomeActive:(IMYVideoView *)arg1;
- (void)playerViewAppWillResignActive:(IMYVideoView *)arg1;
- (void)playerView:(IMYVideoView *)arg1 didChangeFromOrientation:(long long)arg2;
- (void)playerView:(IMYVideoView *)arg1 willChangeToOrientation:(long long)arg2;
- (void)playerView:(IMYVideoView *)arg1 didChangeStateFrom:(long long)arg2;
- (void)playerView:(IMYVideoView *)arg1 willChangeStateTo:(long long)arg2;
- (void)playerView:(IMYVideoView *)arg1 readyForDisplay:(_Bool)arg2;
- (void)playerView:(IMYVideoView *)arg1 playbackLikelyToKeepUp:(_Bool)arg2;
- (void)playerView:(IMYVideoView *)arg1 playbackBufferEmpty:(_Bool)arg2;
- (void)playerView:(IMYVideoView *)arg1 durationDidLoad:(NSNumber *)arg2;
- (void)playerView:(IMYVideoView *)arg1 didControlByEvent:(long long)arg2 userInfo:(id)arg3;
- (void)playerView:(IMYVideoView *)arg1 didControlByEvent:(long long)arg2;
- (void)playerViewWillContinuePlaying:(IMYVideoView *)arg1;
- (void)playerView:(IMYVideoView *)arg1 loadedTimeRanges:(NSArray *)arg2;
- (void)playerView:(IMYVideoView *)arg1 didPlayFrame:(double)arg2;
- (void)playerView:(IMYVideoView *)arg1 didFailWithError:(NSError *)arg2;
- (void)playerViewDidFinishPlaying:(IMYVideoView *)arg1;
- (void)playerViewDidStartPlaying:(IMYVideoView *)arg1;
- (void)playerViewWillStartPlaying:(IMYVideoView *)arg1;
- (void)playerViewDidTapToPlay:(IMYVideoView *)arg1;
@end

