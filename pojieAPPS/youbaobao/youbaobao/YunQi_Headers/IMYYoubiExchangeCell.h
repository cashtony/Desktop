//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface IMYYoubiExchangeCell : UITableViewCell
{
    UIImageView *_iv_icon;
    UILabel *_l_title;
    UILabel *_l_time;
    UILabel *_l_status;
    UIButton *_bt_report;
    UIImageView *_iv_lucky;
}

@property(nonatomic) __weak UIImageView *iv_lucky; // @synthesize iv_lucky=_iv_lucky;
@property(nonatomic) __weak UIButton *bt_report; // @synthesize bt_report=_bt_report;
@property(nonatomic) __weak UILabel *l_status; // @synthesize l_status=_l_status;
@property(nonatomic) __weak UILabel *l_time; // @synthesize l_time=_l_time;
@property(nonatomic) __weak UILabel *l_title; // @synthesize l_title=_l_title;
@property(nonatomic) __weak UIImageView *iv_icon; // @synthesize iv_icon=_iv_icon;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

