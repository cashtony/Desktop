//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, YSFInputTextView;

@interface YSFInputToolBar : UIView
{
    _Bool _humanOrMachine;
    UIButton *_voiceBtn;
    UIButton *_emoticonBtn;
    UIButton *_recordButton;
    UILabel *_recordLabel;
    UIImageView *_inputTextBkgImage;
    YSFInputTextView *_inputTextView;
    UIButton *_imageButton;
    UIButton *_moreMediaBtn;
    UIView *_topSep;
}

@property(retain, nonatomic) UIView *topSep; // @synthesize topSep=_topSep;
@property(retain, nonatomic) UIButton *moreMediaBtn; // @synthesize moreMediaBtn=_moreMediaBtn;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) YSFInputTextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) UIImageView *inputTextBkgImage; // @synthesize inputTextBkgImage=_inputTextBkgImage;
@property(retain, nonatomic) UILabel *recordLabel; // @synthesize recordLabel=_recordLabel;
@property(retain, nonatomic) UIButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) UIButton *emoticonBtn; // @synthesize emoticonBtn=_emoticonBtn;
@property(retain, nonatomic) UIButton *voiceBtn; // @synthesize voiceBtn=_voiceBtn;
@property(nonatomic) _Bool humanOrMachine; // @synthesize humanOrMachine=_humanOrMachine;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
