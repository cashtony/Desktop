//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBBToolsCategoryModel : NSObject
{
    _Bool _isNew;
    _Bool _canShowNew;
    unsigned long long _categoryId;
    NSString *_title;
    NSString *_icon;
    unsigned long long _updateTime;
    NSString *_color;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) _Bool canShowNew; // @synthesize canShowNew=_canShowNew;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) unsigned long long updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;

@end

