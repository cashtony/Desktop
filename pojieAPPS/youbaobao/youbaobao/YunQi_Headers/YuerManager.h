//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYTLBabyModel;

@interface YuerManager : NSObject
{
    IMYTLBabyModel *_lastBaby;
}

+ (_Bool)isNeedRequestBackgroundModeForTimelineSync;
+ (id)shareManager;
+ (void)load;
@property(retain, nonatomic) IMYTLBabyModel *lastBaby; // @synthesize lastBaby=_lastBaby;
- (void).cxx_destruct;
- (void)switchBabyBabyId:(id)arg1;
- (void)refreshTimelineHomepage;
- (void)updateTLUnuploadLocalNotificationTimes;
- (void)registTimelineLocalNotifications;
- (void)updateTimelineLocalNotifications;
- (void)syncBabyBirthdayAndSex;
- (void)resetBabyInfo;
- (void)babyInfoYunqiSyncToTimeline;
- (void)babyInfoTimelineSyncToYunqi;
- (void)babyInfoSync;
- (void)setup;
- (_Bool)needSaveBabyInfo;
- (id)init;

@end
