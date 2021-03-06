//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAdFeedControlView.h"

@class IMYADCallOutView, IMYADCloseView, UIImageView, UILabel, UIView;

@interface IMYFeedAdBarView : IMYAdFeedControlView
{
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_adLabel;
    UIView *_pointView;
    IMYADCloseView *_closeButton;
    IMYADCallOutView *_callOutBtn;
    IMYADCallOutView *_downloadBtn;
}

+ (struct CGSize)frameWithWidth:(double)arg1;
@property(retain, nonatomic) IMYADCallOutView *downloadBtn; // @synthesize downloadBtn=_downloadBtn;
@property(retain, nonatomic) IMYADCallOutView *callOutBtn; // @synthesize callOutBtn=_callOutBtn;
@property(retain, nonatomic) IMYADCloseView *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *pointView; // @synthesize pointView=_pointView;
@property(retain, nonatomic) UILabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutWithContentBoxBlock:(CDUnknownBlockType)arg1;
- (void)layoutWithContentBoxWidth:(double)arg1 viewStytle:(long long)arg2 iconUrl:(id)arg3 iconSize:(struct CGSize)arg4 name:(id)arg5 nameFont:(id)arg6 showTagTitle:(_Bool)arg7 tagTitle:(id)arg8 btnTitle:(id)arg9 showTeleIcon:(_Bool)arg10 showDownloadIcon:(_Bool)arg11;
- (void)layoutWithContentBoxWidth:(double)arg1 iconUrl:(id)arg2 iconSize:(struct CGSize)arg3 name:(id)arg4 nameFont:(id)arg5 showTagTitle:(_Bool)arg6 tagTitle:(id)arg7 btnTitle:(id)arg8 showTeleIcon:(_Bool)arg9 showDownloadIcon:(_Bool)arg10;
- (void)layoutWithContentBoxWidth:(double)arg1 iconUrl:(id)arg2 name:(id)arg3 nameFont:(id)arg4 showTagTitle:(_Bool)arg5 tagTitle:(id)arg6 btnTitle:(id)arg7 showTeleIcon:(_Bool)arg8 showDownloadIcon:(_Bool)arg9;
- (void)layoutWithContentBoxWidth:(double)arg1 iconUrl:(id)arg2 name:(id)arg3 showTagTitle:(_Bool)arg4 tagTitle:(id)arg5 btnTitle:(id)arg6 showTeleIcon:(_Bool)arg7 showDownloadIcon:(_Bool)arg8;
- (id)init;

@end

