//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYDaduTipModel : NSObject
{
    long long _day;
    NSString *_tips;
}

+ (id)getTipsAtDay:(long long)arg1;
+ (id)getTableName;
+ (id)getPrimaryKey;
+ (id)getUsingLKDBHelper;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) long long day; // @synthesize day=_day;
- (void).cxx_destruct;

@end
