//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCBeaconGuideSwitch : MMObject <PBCoding>
{
    unsigned int channelOpenMethod;
    unsigned int channelOpenTime;
    unsigned int shakeTabDisplay;
}

+ (void)initialize;
@property(nonatomic) unsigned int shakeTabDisplay; // @synthesize shakeTabDisplay;
@property(nonatomic) unsigned int channelOpenTime; // @synthesize channelOpenTime;
@property(nonatomic) unsigned int channelOpenMethod; // @synthesize channelOpenMethod;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

