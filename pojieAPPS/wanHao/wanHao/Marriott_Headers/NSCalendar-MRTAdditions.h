//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCalendar.h>

@interface NSCalendar (MRTAdditions)
+ (id)mrt_expandWeekdayAbbreviationsInString:(id)arg1;
+ (long long)mrt_numberOfDaysInWeekend;
+ (long long)mrt_maxDaysInMonth:(long long)arg1;
+ (long long)mrt_numberOfDaysInWeek;
- (id)_mrt_expandWeekdayAbbreviationsInString:(id)arg1;
- (id)mrt_componentsForToday;
- (id)mrt_dateForFirstOfMonthOfDate:(id)arg1;
- (id)mrt_componentsForFirstWeekdayPriorToFirstOfMonthOfDate:(id)arg1;
- (id)mrt_normalizedComponentsForComponents:(id)arg1;
- (id)mrt_componentsForLastWeekdayAfterLastOfMonthOfDate:(id)arg1;
@end
