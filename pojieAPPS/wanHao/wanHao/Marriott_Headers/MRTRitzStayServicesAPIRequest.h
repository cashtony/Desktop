//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTRitzBackendAPIRequest.h"

@class NSString;

@interface MRTRitzStayServicesAPIRequest : MRTRitzBackendAPIRequest
{
    _Bool _inStay;
    NSString *_idNumber;
}

@property(nonatomic) _Bool inStay; // @synthesize inStay=_inStay;
@property(copy, nonatomic) NSString *idNumber; // @synthesize idNumber=_idNumber;
- (void).cxx_destruct;
- (id)requestsFromResponseObject:(id)arg1;
- (id)transformResponse:(id)arg1 error:(id *)arg2;
- (id)initWithReservation:(id)arg1 lastName:(id)arg2 force:(_Bool)arg3;

@end

