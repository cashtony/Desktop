//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;
@protocol YBBToolsTodayTicDetailItem;

@interface YBBToolsTodayTicModel : NSObject
{
    _Bool _isDefault;
    _Bool _is_finish;
    NSString *_defaultDesc;
    long long _m_id;
    NSString *_title;
    NSString *_introduction;
    NSString *_thumbnails;
    NSString *_img;
    long long _category_id;
    NSString *_category;
    NSString *_icon;
    NSString *_url;
    NSDate *_updated_date;
    long long _forum_id;
    long long _topic_id;
    NSArray<YBBToolsTodayTicDetailItem> *_detail;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray<YBBToolsTodayTicDetailItem> *detail; // @synthesize detail=_detail;
@property(nonatomic) _Bool is_finish; // @synthesize is_finish=_is_finish;
@property(nonatomic) long long topic_id; // @synthesize topic_id=_topic_id;
@property(nonatomic) long long forum_id; // @synthesize forum_id=_forum_id;
@property(retain, nonatomic) NSDate *updated_date; // @synthesize updated_date=_updated_date;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) long long category_id; // @synthesize category_id=_category_id;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *thumbnails; // @synthesize thumbnails=_thumbnails;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long m_id; // @synthesize m_id=_m_id;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(copy, nonatomic) NSString *defaultDesc; // @synthesize defaultDesc=_defaultDesc;
- (void).cxx_destruct;

@end

