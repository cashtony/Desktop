//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAdFeedControlView.h"

@class UIImageView, UILabel;

@interface IMYFeedAdLikeView : IMYAdFeedControlView
{
    UIImageView *_backgroundView;
    UIImageView *_iconView;
    UILabel *_label;
}

+ (struct UIEdgeInsets)edgeInsets;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutWithLikeCount:(id)arg1;

@end

