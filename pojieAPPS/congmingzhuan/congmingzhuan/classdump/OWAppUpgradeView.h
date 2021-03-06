//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UITextView, UIWindow;
@protocol OWAppUpgradeDelegate;

@interface OWAppUpgradeView : UIView
{
    _Bool _isForced;
    id <OWAppUpgradeDelegate> _delegate;
    UIView *_backgroundView;
    UIView *_contentView;
    UIImageView *_image;
    UILabel *_title;
    UITextView *_textView;
    UIButton *_upgradeButton;
    UIButton *_closeButton;
    UIWindow *_upgradeWindow;
    UIWindow *_prevWindow;
}

+ (id)showWithDesc:(id)arg1 isForced:(_Bool)arg2;
@property(nonatomic) _Bool isForced; // @synthesize isForced=_isForced;
@property(retain, nonatomic) UIWindow *prevWindow; // @synthesize prevWindow=_prevWindow;
@property(retain, nonatomic) UIWindow *upgradeWindow; // @synthesize upgradeWindow=_upgradeWindow;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *upgradeButton; // @synthesize upgradeButton=_upgradeButton;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *image; // @synthesize image=_image;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) id <OWAppUpgradeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeButtonDidClick:(id)arg1;
- (void)upgradeButtonDidClick:(id)arg1;
- (void)startAnimation;
- (void)dismiss;
- (void)show;
- (id)initWithDesc:(id)arg1 isForced:(_Bool)arg2;

@end

