//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

#import "NSCopying-Protocol.h"

@class MRTProductDescription, MRTProductTermsAndConditions, MRTProductTotalPricing, MRTProperty, MRTRate, MRTRateCategory, MRTRateType, NSArray, NSDateComponents, NSNumber, NSString;

@interface MRTProduct : MRTObject <NSCopying>
{
    _Bool _isNonERSRate;
    _Bool _isMarkedAsRedemption;
    _Bool _membersOnly;
    _Bool _representativeRoom;
    NSString *_name;
    NSString *_descriptor;
    NSNumber *_isUserAccessibleOrNil;
    NSString *_ERSProductName;
    unsigned long long _lengthOfStay;
    NSDateComponents *_startDateComponents;
    NSDateComponents *_endDateComponents;
    MRTProductTermsAndConditions *_termsAndConditions;
    MRTProductTotalPricing *_totalPricing;
    MRTRate *_averageRate;
    NSArray *_directChildren;
    NSArray *_directParents;
    NSArray *_productAttributes;
    NSArray *_rates;
    NSArray *_rateAmounts;
    NSArray *_links;
    MRTRateType *_rateType;
    MRTProperty *_property;
    NSString *_roomPoolCode;
    NSString *_productRateDescription;
    NSString *_identifier;
    NSString *_rateTypeCode;
    MRTRateCategory *_rateCategory;
    unsigned long long _unnamedGuests;
    MRTProductDescription *_productDescription;
    NSArray *_availableAddOns;
    NSArray *_acceptedCreditCardTypes;
    NSArray *_paymentMethods;
}

@property(copy, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(copy, nonatomic) NSArray *acceptedCreditCardTypes; // @synthesize acceptedCreditCardTypes=_acceptedCreditCardTypes;
@property(copy, nonatomic) NSArray *availableAddOns; // @synthesize availableAddOns=_availableAddOns;
@property(retain, nonatomic) MRTProductDescription *productDescription; // @synthesize productDescription=_productDescription;
@property(nonatomic) unsigned long long unnamedGuests; // @synthesize unnamedGuests=_unnamedGuests;
@property(retain, nonatomic) MRTRateCategory *rateCategory; // @synthesize rateCategory=_rateCategory;
@property(copy, nonatomic) NSString *rateTypeCode; // @synthesize rateTypeCode=_rateTypeCode;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *productRateDescription; // @synthesize productRateDescription=_productRateDescription;
@property(copy, nonatomic) NSString *roomPoolCode; // @synthesize roomPoolCode=_roomPoolCode;
@property(retain, nonatomic) MRTProperty *property; // @synthesize property=_property;
@property(retain, nonatomic) MRTRateType *rateType; // @synthesize rateType=_rateType;
@property(copy, nonatomic) NSArray *links; // @synthesize links=_links;
@property(copy, nonatomic) NSArray *rateAmounts; // @synthesize rateAmounts=_rateAmounts;
@property(copy, nonatomic) NSArray *rates; // @synthesize rates=_rates;
@property(copy, nonatomic) NSArray *productAttributes; // @synthesize productAttributes=_productAttributes;
@property(copy, nonatomic) NSArray *directParents; // @synthesize directParents=_directParents;
@property(copy, nonatomic) NSArray *directChildren; // @synthesize directChildren=_directChildren;
@property(readonly, nonatomic, getter=isRepresentativeRoom) _Bool representativeRoom; // @synthesize representativeRoom=_representativeRoom;
@property(retain, nonatomic) MRTRate *averageRate; // @synthesize averageRate=_averageRate;
@property(retain, nonatomic) MRTProductTotalPricing *totalPricing; // @synthesize totalPricing=_totalPricing;
@property(retain, nonatomic) MRTProductTermsAndConditions *termsAndConditions; // @synthesize termsAndConditions=_termsAndConditions;
@property(nonatomic, getter=isMembersOnly) _Bool membersOnly; // @synthesize membersOnly=_membersOnly;
@property(nonatomic) _Bool isMarkedAsRedemption; // @synthesize isMarkedAsRedemption=_isMarkedAsRedemption;
@property(nonatomic) _Bool isNonERSRate; // @synthesize isNonERSRate=_isNonERSRate;
@property(retain, nonatomic) NSDateComponents *endDateComponents; // @synthesize endDateComponents=_endDateComponents;
@property(retain, nonatomic) NSDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;
@property(nonatomic) unsigned long long lengthOfStay; // @synthesize lengthOfStay=_lengthOfStay;
@property(copy, nonatomic) NSString *ERSProductName; // @synthesize ERSProductName=_ERSProductName;
@property(copy, nonatomic) NSNumber *isUserAccessibleOrNil; // @synthesize isUserAccessibleOrNil=_isUserAccessibleOrNil;
@property(copy, nonatomic) NSString *descriptor; // @synthesize descriptor=_descriptor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)shouldBeUserAccessible;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addRulesFromTerms:(id)arg1;
- (_Bool)hasRule:(id)arg1;
- (id)acceptedCreditCardPaymentType;
- (id)groupDescription;
- (id)groupNameIdentifier;
- (long long)compareByRateCategory:(id)arg1 searchedRateCode:(id)arg2;
- (long long)compareRoomRate:(id)arg1;
- (double)totalFees;
- (id)totalTaxes;
- (id)flattenedFees;
- (id)grandTotalCostWithoutTaxes;
- (id)grandTotalCost;
- (id)beforeTaxCost;
- (id)fees;
- (unsigned long long)perStayPoints;
- (_Bool)isRegularRedemptionRate;
- (_Bool)isRedemption;
- (_Bool)hasRateChange;
- (_Bool)isAdvancePurchase;
- (id)roomDescription;
- (void)awakeFromJSONDeserialization;
- (id)initWithJSONDictionary:(id)arg1;

@end

