//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol BaseRoomBottomToolbarDelegate;

@interface BaseRoomBottomToolbar : UIView
{
    UIView *_btnContenView;
    UIButton *_oneBtn;
    UIButton *_twoBtn;
    UIButton *_threeBtn;
    UIButton *_fourBtn;
    UIButton *_fiveBtn;
    UIButton *_sixeBtn;
    UIButton *_sevenBtn;
    id <BaseRoomBottomToolbarDelegate> _delegate;
}

@property(nonatomic) __weak id <BaseRoomBottomToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *sevenBtn; // @synthesize sevenBtn=_sevenBtn;
@property(retain, nonatomic) UIButton *sixeBtn; // @synthesize sixeBtn=_sixeBtn;
@property(retain, nonatomic) UIButton *fiveBtn; // @synthesize fiveBtn=_fiveBtn;
@property(retain, nonatomic) UIButton *fourBtn; // @synthesize fourBtn=_fourBtn;
@property(retain, nonatomic) UIButton *threeBtn; // @synthesize threeBtn=_threeBtn;
@property(retain, nonatomic) UIButton *twoBtn; // @synthesize twoBtn=_twoBtn;
@property(retain, nonatomic) UIButton *oneBtn; // @synthesize oneBtn=_oneBtn;
@property(retain, nonatomic) UIView *btnContenView; // @synthesize btnContenView=_btnContenView;
- (void).cxx_destruct;
- (void)changeRoomToType:(unsigned long long)arg1;
- (void)startSwitchRoomTypeAnimation;
- (void)clickedBaseRoomBottomBtn:(id)arg1;
- (void)setBtnImage:(id)arg1;
- (void)remindUserNoticeButtonWithTag:(unsigned long long)arg1;
- (void)setUI;
- (id)init;

@end

