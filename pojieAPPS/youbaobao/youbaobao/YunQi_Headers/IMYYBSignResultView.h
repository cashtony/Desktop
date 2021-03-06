//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYTouchEXButton, NSString, UIButton, UIImageView, UILabel;

@interface IMYYBSignResultView : UIView
{
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _clickBlock;
    UILabel *_textLabel;
    UIImageView *_imageView;
    UIButton *_button;
    NSString *_redirectUrl;
    IMYTouchEXButton *_closeButton;
    UIView *_maskView;
}

+ (id)showResult:(id)arg1 imageUrl:(id)arg2 redirectUrl:(id)arg3 inView:(id)arg4;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) IMYTouchEXButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 result:(id)arg2 imageUrl:(id)arg3 redirectUrl:(id)arg4;

@end

