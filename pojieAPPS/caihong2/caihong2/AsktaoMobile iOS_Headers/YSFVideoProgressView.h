//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface YSFVideoProgressView : UIView
{
    double _progressValue;
    CALayer *_background;
    CALayer *_progressBar;
}

@property(retain, nonatomic) CALayer *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) CALayer *background; // @synthesize background=_background;
@property(nonatomic) double progressValue; // @synthesize progressValue=_progressValue;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

