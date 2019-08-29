//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class NSArray;

@interface MRTMultiRoomAddOns : MRTObject
{
    NSArray *_otherAddOns;
    NSArray *_guaranteeableAddOns;
    NSArray *_beddingAddOns;
}

+ (id)sortPreferencesAlphabetically:(id)arg1;
+ (id)sortPreferencesByPriority:(id)arg1;
+ (id)createMutableCopy:(id)arg1;
+ (id)sortUserPreferencesIntoRoomsAddons:(long long)arg1 selectedRoom:(id)arg2;
+ (id)createMultiRoomAddOns:(id)arg1 numberOfRooms:(long long)arg2 brand:(id)arg3;
@property(copy, nonatomic) NSArray *beddingAddOns; // @synthesize beddingAddOns=_beddingAddOns;
@property(copy, nonatomic) NSArray *guaranteeableAddOns; // @synthesize guaranteeableAddOns=_guaranteeableAddOns;
@property(copy, nonatomic) NSArray *otherAddOns; // @synthesize otherAddOns=_otherAddOns;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createMutableArray:(id)arg1;
- (id)allUserPreferenceAddOns;

@end
