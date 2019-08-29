//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTReviewReservationTableCell.h"

@class MRTCheckBox, MRTStyledLabel, UILabel;

@interface MRTReviewReservationAcceptTermsCell : MRTReviewReservationTableCell
{
    MRTCheckBox *_hasAcceptedControl;
    MRTStyledLabel *_errorLabel;
    UILabel *_acceptTermsLabel;
    long long _row;
}

@property(nonatomic) long long row; // @synthesize row=_row;
@property(retain, nonatomic) UILabel *acceptTermsLabel; // @synthesize acceptTermsLabel=_acceptTermsLabel;
@property(retain, nonatomic) MRTStyledLabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) MRTCheckBox *hasAcceptedControl; // @synthesize hasAcceptedControl=_hasAcceptedControl;
- (void).cxx_destruct;
- (id)termsAcceptanceRequiredErrorText;
- (void)acceptedSwitchChanged:(id)arg1;
- (void)setErrorText;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end
