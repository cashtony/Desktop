//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTNightsDetailLineItem, MRTNightsDetailLineItemCollection, NSArray;

@interface MRTNightsDetailViewModel : MRTObject
{
    NSArray *_nightDetailsLineItems;
    MRTNightsDetailLineItemCollection *_loyaltyBenefitsLineItems;
    MRTNightsDetailLineItem *_learnMoreButton;
}

@property(retain, nonatomic) MRTNightsDetailLineItem *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) MRTNightsDetailLineItemCollection *loyaltyBenefitsLineItems; // @synthesize loyaltyBenefitsLineItems=_loyaltyBenefitsLineItems;
@property(copy, nonatomic) NSArray *nightDetailsLineItems; // @synthesize nightDetailsLineItems=_nightDetailsLineItems;
- (void).cxx_destruct;
- (id)learnMoreURL;
- (id)loyaltyLevelTitle;
- (id)nightsTitle;
- (id)benefitsTitle;
- (void)_buildFromConsumer:(id)arg1;
- (id)initWithConsumer:(id)arg1;

@end
