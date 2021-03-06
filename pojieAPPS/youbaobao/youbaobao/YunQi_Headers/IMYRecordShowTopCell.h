//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRecordShowBaseCell.h"

@class UIImageView, UILabel;

@interface IMYRecordShowTopCell : IMYRecordShowBaseCell
{
    UILabel *_lb_subtitle;
    UILabel *_lb_week;
    UILabel *_lb_month;
    UILabel *_lb_day;
    UIImageView *_lineView;
    UILabel *_lb_week_unit;
    UIImageView *_img_date_bg;
}

+ (int)getStaticCellHeight;
+ (id)loadFromXIB;
@property(nonatomic) __weak UIImageView *img_date_bg; // @synthesize img_date_bg=_img_date_bg;
@property(nonatomic) __weak UILabel *lb_week_unit; // @synthesize lb_week_unit=_lb_week_unit;
@property(nonatomic) __weak UIImageView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *lb_day; // @synthesize lb_day=_lb_day;
@property(nonatomic) __weak UILabel *lb_month; // @synthesize lb_month=_lb_month;
@property(nonatomic) __weak UILabel *lb_week; // @synthesize lb_week=_lb_week;
@property(nonatomic) __weak UILabel *lb_subtitle; // @synthesize lb_subtitle=_lb_subtitle;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

