//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYButton, IMYLineView, IMYRoundButton, UIButton, UIImageView, UILabel;

@interface IMYActionMessageBox : UIView
{
    _Bool _singleButton;
    _Bool _isShowCloseButton;
    _Bool _isAnimating;
    int _style;
    UIView *_showInView;
    IMYRoundButton *_leftButton;
    IMYRoundButton *_rightButton;
    UILabel *_titleLabel;
    UIButton *_topRightButton;
    IMYButton *_closeButton;
    UIView *_contentView;
    id _userinfo;
    CDUnknownBlockType _onActionBlock;
    UIImageView *_containBox;
    IMYLineView *_lineView;
    UIView *_maskView;
}

+ (id)showBoxWithTitle:(id)arg1 view:(id)arg2 style:(int)arg3 action:(CDUnknownBlockType)arg4;
+ (id)showBoxWithTitle:(id)arg1 message:(id)arg2 style:(int)arg3 isShowCloseButton:(_Bool)arg4 textAlignment:(long long)arg5 cancelButtonTitle:(id)arg6 otherButtonTitle:(id)arg7 action:(CDUnknownBlockType)arg8;
+ (id)showBoxWithTitle:(id)arg1 view:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)showBoxWithTitle:(id)arg1 message:(id)arg2 style:(int)arg3 action:(CDUnknownBlockType)arg4;
+ (id)showBoxWithTitle:(id)arg1 message:(id)arg2 action:(CDUnknownBlockType)arg3;
@property _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isShowCloseButton; // @synthesize isShowCloseButton=_isShowCloseButton;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) IMYLineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *containBox; // @synthesize containBox=_containBox;
@property(copy, nonatomic) CDUnknownBlockType onActionBlock; // @synthesize onActionBlock=_onActionBlock;
@property(nonatomic) _Bool singleButton; // @synthesize singleButton=_singleButton;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) id userinfo; // @synthesize userinfo=_userinfo;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) IMYButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *topRightButton; // @synthesize topRightButton=_topRightButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) IMYRoundButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) IMYRoundButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *showInView; // @synthesize showInView=_showInView;
- (void).cxx_destruct;
- (void)dismissBoxToTopRightWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)show;
- (void)handleButtonPressed:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setOtherButtonTitle:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1 otherButtonTitle:(id)arg2;
- (void)_initMyself;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
