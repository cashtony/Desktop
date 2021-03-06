//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYTTQVPublisherModel, NSString;

@interface IMYTTQVRecommendModel : NSObject
{
    long long _news_id;
    NSString *_title;
    NSString *_src;
    long long *_algorithm;
    NSString *_thumb;
    NSString *_video_time;
    NSString *_author;
    unsigned long long _view_times;
    NSString *_url;
    NSString *_sd_url;
    NSString *_redirect_url;
    NSString *_circle_redirect_url;
    IMYTTQVPublisherModel *_publisher;
    NSString *_h5_player_url;
    unsigned long long _total_review;
}

+ (void)initialize;
@property(nonatomic) unsigned long long total_review; // @synthesize total_review=_total_review;
@property(copy, nonatomic) NSString *h5_player_url; // @synthesize h5_player_url=_h5_player_url;
@property(retain, nonatomic) IMYTTQVPublisherModel *publisher; // @synthesize publisher=_publisher;
@property(copy, nonatomic) NSString *circle_redirect_url; // @synthesize circle_redirect_url=_circle_redirect_url;
@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(copy, nonatomic) NSString *sd_url; // @synthesize sd_url=_sd_url;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long view_times; // @synthesize view_times=_view_times;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *video_time; // @synthesize video_time=_video_time;
@property(copy, nonatomic) NSString *thumb; // @synthesize thumb=_thumb;
@property(nonatomic) long long *algorithm; // @synthesize algorithm=_algorithm;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long news_id; // @synthesize news_id=_news_id;
- (void).cxx_destruct;

@end

