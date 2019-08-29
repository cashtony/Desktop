//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "YSFAttributedLabelDelegate-Protocol.h"

@class NSString, UIButton, YSFAttributedLabel;
@protocol YSFSessionTipViewDelegate;

@interface YSFSessionTipView : UIControl <YSFAttributedLabelDelegate>
{
    _Bool _showNumber;
    id <YSFSessionTipViewDelegate> _delegate;
    YSFAttributedLabel *_tipLabel;
    UIButton *_rightArraw;
    unsigned long long _type;
}

@property(nonatomic) _Bool showNumber; // @synthesize showNumber=_showNumber;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *rightArraw; // @synthesize rightArraw=_rightArraw;
@property(retain, nonatomic) YSFAttributedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak id <YSFSessionTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ysfAttributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (double)getTipLabelHeight;
- (void)layoutSubviews;
- (_Bool)shouldTip:(unsigned long long)arg1;
- (void)setSessionTipForNotExist:(id)arg1;
- (void)setSessionTipForWaiting:(_Bool)arg1 waitingNumber:(long long)arg2 inQueeuStr:(id)arg3;
- (void)setSessionTip:(unsigned long long)arg1;
- (void)onBack:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
