//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, IMYAdLocationModel, IMYAdSignal, NSArray, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMYAdvertisementConfigure : NSObject <CLLocationManagerDelegate>
{
    _Bool _isshowAdsPic;
    _Bool _isOpenTencentAd;
    _Bool _clicked_gray;
    _Bool _useOldLaunch;
    _Bool _isNotFirst;
    long long _wakeTime;
    long long _restatrShowLimit;
    long long _outTime;
    NSArray *_positions;
    long long _exposure_time;
    long long _padding_list_limits;
    long long _padding_detail_limits;
    long long _padding_disappear;
    long long _long_tail_intervals;
    long long _topic_long_tail_intervals;
    long long _video_long_tail_intervals;
    long long _tata_tab_tail_intervals;
    long long _tata_tab_tail_begin;
    long long _long_tail_begin;
    long long _topic_long_tail_begin;
    long long _video_long_tail_begin;
    long long _notFixedAdsIndex;
    long long _topicNotFixedAdsIndex;
    long long _videoNotFixedAdsIndex;
    NSArray *_inventory_cache_exclude;
    long long _inventory_cache_limit;
    long long _inventory_cache_expire;
    NSDictionary *_freq;
    NSString *_jsEmbedUrl;
    double _carousel_interval;
    IMYAdLocationModel *_locationModel;
    IMYAdSignal *_locationSignal;
    long long _close_ad_cache;
    NSRecursiveLock *_recursiveLock;
    NSMutableDictionary *_displayDic;
    NSArray *_validKeyArray;
    NSArray *_validUrlArray;
    NSArray *_ignoreKeyArray;
    NSArray *_ignoreUrlArray;
    NSDictionary *_sourceDic;
    CLLocationManager *_locationManager;
}

+ (id)cityIdWithLocality:(id)arg1 subLocality:(id)arg2 isUseSubLocality:(_Bool *)arg3;
+ (id)getLocationCityIdByCityName:(id)arg1;
+ (void)didUpdateLocations:(id)arg1;
+ (id)shareConfigure;
+ (void)load;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSDictionary *sourceDic; // @synthesize sourceDic=_sourceDic;
@property(retain) NSArray *ignoreUrlArray; // @synthesize ignoreUrlArray=_ignoreUrlArray;
@property(retain) NSArray *ignoreKeyArray; // @synthesize ignoreKeyArray=_ignoreKeyArray;
@property(retain) NSArray *validUrlArray; // @synthesize validUrlArray=_validUrlArray;
@property(retain) NSArray *validKeyArray; // @synthesize validKeyArray=_validKeyArray;
@property(retain) NSMutableDictionary *displayDic; // @synthesize displayDic=_displayDic;
@property(retain) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
@property(nonatomic) long long close_ad_cache; // @synthesize close_ad_cache=_close_ad_cache;
@property(nonatomic) _Bool isNotFirst; // @synthesize isNotFirst=_isNotFirst;
@property(retain, nonatomic) IMYAdSignal *locationSignal; // @synthesize locationSignal=_locationSignal;
@property(retain, nonatomic) IMYAdLocationModel *locationModel; // @synthesize locationModel=_locationModel;
@property(nonatomic) double carousel_interval; // @synthesize carousel_interval=_carousel_interval;
@property(nonatomic) _Bool useOldLaunch; // @synthesize useOldLaunch=_useOldLaunch;
@property(copy, nonatomic) NSString *jsEmbedUrl; // @synthesize jsEmbedUrl=_jsEmbedUrl;
@property(retain, nonatomic) NSDictionary *freq; // @synthesize freq=_freq;
@property(nonatomic) long long inventory_cache_expire; // @synthesize inventory_cache_expire=_inventory_cache_expire;
@property(nonatomic) long long inventory_cache_limit; // @synthesize inventory_cache_limit=_inventory_cache_limit;
@property(retain, nonatomic) NSArray *inventory_cache_exclude; // @synthesize inventory_cache_exclude=_inventory_cache_exclude;
@property(nonatomic) long long videoNotFixedAdsIndex; // @synthesize videoNotFixedAdsIndex=_videoNotFixedAdsIndex;
@property(nonatomic) long long topicNotFixedAdsIndex; // @synthesize topicNotFixedAdsIndex=_topicNotFixedAdsIndex;
@property(nonatomic) long long notFixedAdsIndex; // @synthesize notFixedAdsIndex=_notFixedAdsIndex;
@property(nonatomic) long long video_long_tail_begin; // @synthesize video_long_tail_begin=_video_long_tail_begin;
@property(nonatomic) long long topic_long_tail_begin; // @synthesize topic_long_tail_begin=_topic_long_tail_begin;
@property(nonatomic) long long long_tail_begin; // @synthesize long_tail_begin=_long_tail_begin;
@property(nonatomic) long long tata_tab_tail_begin; // @synthesize tata_tab_tail_begin=_tata_tab_tail_begin;
@property(nonatomic) long long tata_tab_tail_intervals; // @synthesize tata_tab_tail_intervals=_tata_tab_tail_intervals;
@property(nonatomic) long long video_long_tail_intervals; // @synthesize video_long_tail_intervals=_video_long_tail_intervals;
@property(nonatomic) long long topic_long_tail_intervals; // @synthesize topic_long_tail_intervals=_topic_long_tail_intervals;
@property(nonatomic) long long long_tail_intervals; // @synthesize long_tail_intervals=_long_tail_intervals;
@property(nonatomic) _Bool clicked_gray; // @synthesize clicked_gray=_clicked_gray;
@property(nonatomic) long long padding_disappear; // @synthesize padding_disappear=_padding_disappear;
@property(nonatomic) long long padding_detail_limits; // @synthesize padding_detail_limits=_padding_detail_limits;
@property(nonatomic) long long padding_list_limits; // @synthesize padding_list_limits=_padding_list_limits;
@property long long exposure_time; // @synthesize exposure_time=_exposure_time;
@property(retain) NSArray *positions; // @synthesize positions=_positions;
@property(nonatomic) _Bool isOpenTencentAd; // @synthesize isOpenTencentAd=_isOpenTencentAd;
@property(nonatomic) _Bool isshowAdsPic; // @synthesize isshowAdsPic=_isshowAdsPic;
@property(nonatomic) long long outTime; // @synthesize outTime=_outTime;
@property(nonatomic) long long restatrShowLimit; // @synthesize restatrShowLimit=_restatrShowLimit;
@property(nonatomic) long long wakeTime; // @synthesize wakeTime=_wakeTime;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)startUpdatingLocation;
- (_Bool)batchAnalysisRealTimeReport:(id)arg1;
- (void)clearDicAtPage:(long long)arg1 otherTag:(id)arg2;
- (void)clearDicAtPage:(long long)arg1;
- (void)clearDicAtPosid:(long long)arg1 Posid:(long long)arg2 otherTag:(id)arg3;
- (void)clearDicAtPosid:(long long)arg1 Posid:(long long)arg2;
- (void)addDisplayAd:(id)arg1 action:(long long)arg2 otherTag:(id)arg3;
- (_Bool)haveDisplayAd:(id)arg1 action:(long long)arg2 otherTag:(id)arg3;
- (id)displayDicWithPosid:(long long)arg1;
- (_Bool)positionAvalide:(id)arg1;
- (void)calculateVideoNotFixedAdsIndex;
- (void)calculateTopicNotFixedAdsIndex;
- (void)calculateNotFixedAdsIndex;
- (void)updateDisplayPosition;
- (void)setupConfigWithDict:(id)arg1;
- (void)updateAwakeTime;
- (void)postInvalidationAdModel:(id)arg1 keyword:(id)arg2 url:(id)arg3;
- (_Bool)checkIgnoreAndValidAtionAdModel:(id)arg1;
- (_Bool)checkIgnoreationAdModel:(id)arg1;
- (void)checkValidationAdModel:(id)arg1;
- (void)updateValidationList;
- (void)setupData;
- (void)requestData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

