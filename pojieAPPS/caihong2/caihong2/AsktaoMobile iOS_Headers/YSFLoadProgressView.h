//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface YSFLoadProgressView : UIView
{
    UIImageView *_maskView;
    UILabel *_progressLabel;
    UIActivityIndicatorView *_activity;
    double _maxProgress;
}

@property(nonatomic) double maxProgress; // @synthesize maxProgress=_maxProgress;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1;
- (void)layoutSubviews;
- (void)maskBubbleImageView:(struct CGRect)arg1 markImageView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
