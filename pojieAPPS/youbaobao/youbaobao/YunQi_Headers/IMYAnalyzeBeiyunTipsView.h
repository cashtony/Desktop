//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYTouchEXButton, UILabel;

@interface IMYAnalyzeBeiyunTipsView : UIView
{
    CDUnknownBlockType _tapInstructionBlock;
    UILabel *_titlelabel;
    UILabel *_contentlabel;
    UIView *_lineView;
    IMYTouchEXButton *_resultButton;
}

@property(retain, nonatomic) IMYTouchEXButton *resultButton; // @synthesize resultButton=_resultButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *contentlabel; // @synthesize contentlabel=_contentlabel;
@property(retain, nonatomic) UILabel *titlelabel; // @synthesize titlelabel=_titlelabel;
@property(copy, nonatomic) CDUnknownBlockType tapInstructionBlock; // @synthesize tapInstructionBlock=_tapInstructionBlock;
- (void).cxx_destruct;
- (void)helpAction:(id)arg1;
- (void)setTitle:(id)arg1 withContent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
