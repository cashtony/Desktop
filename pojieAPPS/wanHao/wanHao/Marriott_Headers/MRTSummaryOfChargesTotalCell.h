//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTReviewReservationTableCell.h"

@class MRTStyledLabel, NSLayoutConstraint;

@interface MRTSummaryOfChargesTotalCell : MRTReviewReservationTableCell
{
    _Bool _shouldHideSeparator;
    MRTStyledLabel *_totalTitleLabel;
    MRTStyledLabel *_totalValueLabel;
    MRTStyledLabel *_totalValue2Label;
    MRTStyledLabel *_totalValue3Label;
    NSLayoutConstraint *_totalValue3HeightConstraint;
    NSLayoutConstraint *_totalValue2TopConstraint;
    NSLayoutConstraint *_totalValue3TopConstraint;
    NSLayoutConstraint *_totalValue3BottomConstraint;
}

@property(nonatomic) _Bool shouldHideSeparator; // @synthesize shouldHideSeparator=_shouldHideSeparator;
@property(nonatomic) __weak NSLayoutConstraint *totalValue3BottomConstraint; // @synthesize totalValue3BottomConstraint=_totalValue3BottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *totalValue3TopConstraint; // @synthesize totalValue3TopConstraint=_totalValue3TopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *totalValue2TopConstraint; // @synthesize totalValue2TopConstraint=_totalValue2TopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *totalValue3HeightConstraint; // @synthesize totalValue3HeightConstraint=_totalValue3HeightConstraint;
@property(retain, nonatomic) MRTStyledLabel *totalValue3Label; // @synthesize totalValue3Label=_totalValue3Label;
@property(retain, nonatomic) MRTStyledLabel *totalValue2Label; // @synthesize totalValue2Label=_totalValue2Label;
@property(retain, nonatomic) MRTStyledLabel *totalValueLabel; // @synthesize totalValueLabel=_totalValueLabel;
@property(retain, nonatomic) MRTStyledLabel *totalTitleLabel; // @synthesize totalTitleLabel=_totalTitleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

