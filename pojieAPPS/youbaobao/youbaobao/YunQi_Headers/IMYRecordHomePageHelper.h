//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYRecordHomePageHelper : NSObject
{
}

+ (_Bool)todayUpdateOOXXForCurrentPeriod;
+ (_Bool)updateOOXXForCurrentPeriod:(id)arg1;
+ (id)bubbleStringForType:(unsigned long long)arg1;
+ (void)saveBubbleDateForBeiyunType:(unsigned long long)arg1;
+ (id)dateForBubble:(unsigned long long)arg1;
+ (void)saveBubbleDate:(unsigned long long)arg1;
+ (id)bubbleKey:(unsigned long long)arg1;
+ (_Bool)isBeiyunType:(unsigned long long)arg1;
+ (void)removeFromShowList:(unsigned long long)arg1;
+ (void)addToShowList:(unsigned long long)arg1;
+ (_Bool)isPeriodType:(unsigned long long)arg1;
+ (id)bubbleShowListKey;
+ (void)showTips:(unsigned long long)arg1 inView:(id)arg2;
+ (void)showTipsInView:(id)arg1;
+ (unsigned long long)priorityTypeInList:(id)arg1;
+ (long long)needRefreshBeiyunBubbleType;
+ (void)setNeedRefreshBeiyunBubbleType:(long long)arg1;

@end
