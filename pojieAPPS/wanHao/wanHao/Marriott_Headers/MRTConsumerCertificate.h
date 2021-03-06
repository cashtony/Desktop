//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

#import "NSCopying-Protocol.h"

@class MRTLookupType, NSDateComponents, NSNumber;

@interface MRTConsumerCertificate : MRTObject <NSCopying>
{
    _Bool _cancellable;
    MRTLookupType *_awardType;
    NSDateComponents *_expirationDateComponents;
    NSDateComponents *_issueDateComponents;
    NSNumber *_benefitKey;
    NSNumber *_certificateKey;
    NSNumber *_certificateNumber;
    long long _numberOfNights;
    long long _points;
}

@property(nonatomic) long long points; // @synthesize points=_points;
@property(nonatomic) long long numberOfNights; // @synthesize numberOfNights=_numberOfNights;
@property(nonatomic, getter=isCancellable) _Bool cancellable; // @synthesize cancellable=_cancellable;
@property(copy, nonatomic) NSNumber *certificateNumber; // @synthesize certificateNumber=_certificateNumber;
@property(copy, nonatomic) NSNumber *certificateKey; // @synthesize certificateKey=_certificateKey;
@property(copy, nonatomic) NSNumber *benefitKey; // @synthesize benefitKey=_benefitKey;
@property(copy, nonatomic) NSDateComponents *issueDateComponents; // @synthesize issueDateComponents=_issueDateComponents;
@property(copy, nonatomic) NSDateComponents *expirationDateComponents; // @synthesize expirationDateComponents=_expirationDateComponents;
@property(retain, nonatomic) MRTLookupType *awardType; // @synthesize awardType=_awardType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)expireDateDisplayString;
- (id)issueDateDisplayString;
- (id)_dateFormatter;
- (id)nightsDisplayString;
- (id)pointsDisplayString;
- (id)expirationDate;
- (id)issueDate;
- (id)initWithJSONDictionary:(id)arg1;

@end

