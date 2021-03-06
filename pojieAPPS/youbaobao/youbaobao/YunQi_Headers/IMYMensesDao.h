//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYMensesDao : NSObject
{
}

+ (void)calculatemenseIntervalDays:(id)arg1;
+ (id)getBeforeMenseWithDateAfterPregnan:(id)arg1;
+ (id)getBeforeMenseWithDate:(id)arg1;
+ (id)getAfterMenseWithDate:(id)arg1;
+ (id)getMensesWithDate:(id)arg1;
+ (void)calculateMensesAvg;
+ (void)avgIntervalDaysAllYear:(int *)arg1 menseDay:(int *)arg2;
+ (int)avgIntervalDaysAllYear;
+ (id)getNextForecastMenses;
+ (id)getNowNextForecastMenses;
+ (id)getFirstForecastMenses;
+ (id)getFirstMenses:(id)arg1;
+ (id)getLastNoEndOrFirstForecastMenses;
+ (id)getLastEndMenses;
+ (id)getLastMenses;
+ (id)getMensesAll;
+ (id)getLastMenseOrPregnancy:(id)arg1;
+ (id)getLastMensesOrPregnan;
+ (id)fakeMenseModel:(id)arg1;
+ (id)getMensesStart:(id)arg1 end:(id)arg2;
+ (id)getAfterPregnanAllMenses:(id)arg1;
+ (id)getAfterPregnanAllMenses;
+ (id)getAfterRealPregnanAllMenses;
+ (id)inLinegetAfterPregnanAllMenses;
+ (id)getBeforeAllMenses:(id)arg1;
+ (id)getAfterAllMenses:(id)arg1;
+ (id)getMensesWith3Month:(id)arg1;

@end

