//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTRangeSlider, MRTStyledLabel;

@interface MRTSearchFilterPriceSliderCell : UITableViewCell
{
    MRTStyledLabel *_titleLabel;
    MRTStyledLabel *_leftValueLabel;
    MRTStyledLabel *_rightValueLabel;
    MRTRangeSlider *_rangeSlider;
}

@property(nonatomic) __weak MRTRangeSlider *rangeSlider; // @synthesize rangeSlider=_rangeSlider;
@property(nonatomic) __weak MRTStyledLabel *rightValueLabel; // @synthesize rightValueLabel=_rightValueLabel;
@property(nonatomic) __weak MRTStyledLabel *leftValueLabel; // @synthesize leftValueLabel=_leftValueLabel;
@property(nonatomic) __weak MRTStyledLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateValueLabelsForSlider:(id)arg1;
- (void)slideValueChanged:(id)arg1;
- (void)registerForSliderChanges;
- (void)awakeFromNib;

@end

