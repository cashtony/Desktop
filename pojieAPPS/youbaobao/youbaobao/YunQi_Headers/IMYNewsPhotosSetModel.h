//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYNewsPublisherModel, NSArray, NSString;
@protocol IMYNewsPhotoDetailModel;

@interface IMYNewsPhotosSetModel : NSObject
{
    _Bool _is_share;
    _Bool _is_favorite;
    unsigned long long _newsId;
    NSString *_title;
    NSString *_content;
    long long _status;
    NSArray<IMYNewsPhotoDetailModel> *_photos;
    long long _recommendCount;
    NSArray<IMYNewsPhotoDetailModel> *_recommendPhotos;
    NSString *_src;
    NSString *_url;
    NSString *_source;
    NSString *_copywriter;
    NSString *_review_url;
    NSString *_shareUrl;
    NSString *_shareThumb;
    NSString *_cust;
    NSString *_shareTitle;
    NSString *_shareContent;
    NSString *_pm_must_die;
    unsigned long long _review_count;
    IMYNewsPublisherModel *_publisher;
}

+ (void)initialize;
@property(retain, nonatomic) IMYNewsPublisherModel *publisher; // @synthesize publisher=_publisher;
@property(nonatomic) unsigned long long review_count; // @synthesize review_count=_review_count;
@property(nonatomic) _Bool is_favorite; // @synthesize is_favorite=_is_favorite;
@property(copy, nonatomic) NSString *pm_must_die; // @synthesize pm_must_die=_pm_must_die;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *cust; // @synthesize cust=_cust;
@property(copy, nonatomic) NSString *shareThumb; // @synthesize shareThumb=_shareThumb;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) _Bool is_share; // @synthesize is_share=_is_share;
@property(copy, nonatomic) NSString *review_url; // @synthesize review_url=_review_url;
@property(copy, nonatomic) NSString *copywriter; // @synthesize copywriter=_copywriter;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSArray<IMYNewsPhotoDetailModel> *recommendPhotos; // @synthesize recommendPhotos=_recommendPhotos;
@property(nonatomic) long long recommendCount; // @synthesize recommendCount=_recommendCount;
@property(retain, nonatomic) NSArray<IMYNewsPhotoDetailModel> *photos; // @synthesize photos=_photos;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long newsId; // @synthesize newsId=_newsId;
- (void).cxx_destruct;

@end
