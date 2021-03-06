//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, PLPlayer;

@protocol PLPlayerDelegate <NSObject>

@optional
- (void)playerSeekToCompleted:(PLPlayer *)arg1;
- (void)player:(PLPlayer *)arg1 width:(int)arg2 height:(int)arg3;
- (void)player:(PLPlayer *)arg1 firstRender:(long long)arg2;
- (void)player:(PLPlayer *)arg1 SEIData:(NSData *)arg2;
- (struct AudioBufferList *)player:(PLPlayer *)arg1 willAudioRenderBuffer:(struct AudioBufferList *)arg2 asbd:(struct AudioStreamBasicDescription)arg3 pts:(long long)arg4 sampleFormat:(long long)arg5;
- (void)player:(PLPlayer *)arg1 willRenderFrame:(struct __CVBuffer *)arg2 pts:(long long)arg3 sarNumerator:(int)arg4 sarDenominator:(int)arg5;
- (void)player:(PLPlayer *)arg1 loadedTimeRange:(CDStruct_3c1748cc)arg2;
- (void)player:(PLPlayer *)arg1 stoppedWithError:(NSError *)arg2;
- (void)player:(PLPlayer *)arg1 statusDidChange:(long long)arg2;
- (void)playerWillEndBackgroundTask:(PLPlayer *)arg1;
- (void)playerWillBeginBackgroundTask:(PLPlayer *)arg1;
@end

