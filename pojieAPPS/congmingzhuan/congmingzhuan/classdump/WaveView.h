//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAShapeLayer, UIColor;

@interface WaveView : UIView
{
    UIColor *_wavesColor;
    double _waveA;
    double _waveW;
    double _wavesSpeed;
    CADisplayLink *_wavesDisplayLink;
    CAShapeLayer *_wavesLayer;
    double _offsetX;
    double _currentK;
    double _wavesWidth;
}

@property(nonatomic) double wavesWidth; // @synthesize wavesWidth=_wavesWidth;
@property(nonatomic) double currentK; // @synthesize currentK=_currentK;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(retain, nonatomic) CAShapeLayer *wavesLayer; // @synthesize wavesLayer=_wavesLayer;
@property(retain, nonatomic) CADisplayLink *wavesDisplayLink; // @synthesize wavesDisplayLink=_wavesDisplayLink;
@property(nonatomic) double wavesSpeed; // @synthesize wavesSpeed=_wavesSpeed;
@property(nonatomic) double waveW; // @synthesize waveW=_waveW;
@property(nonatomic) double waveA; // @synthesize waveA=_waveA;
@property(retain, nonatomic) UIColor *wavesColor; // @synthesize wavesColor=_wavesColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCurrentFirstWaveLayerPath;
- (void)getCurrentWave:(id)arg1;
- (void)stop;
- (void)start;
- (void)setUpWaves;
- (id)initWithFrame:(struct CGRect)arg1;

@end
