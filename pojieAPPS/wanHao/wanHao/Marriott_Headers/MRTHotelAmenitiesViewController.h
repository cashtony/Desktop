//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTHotelInfoViewController.h"

@class NSArray;

@interface MRTHotelAmenitiesViewController : MRTHotelInfoViewController
{
    NSArray *_amenitiesArray;
}

@property(retain, nonatomic) NSArray *amenitiesArray; // @synthesize amenitiesArray=_amenitiesArray;
- (void).cxx_destruct;
- (id)bulletStringWithLines:(id)arg1 MRTStyle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)hotelPolicies;
- (id)hotelPoliciesWithAmenities:(id)arg1;
- (void)updateWithAmenities:(id)arg1;
- (void)setProperty:(id)arg1;

@end
