//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRApp, CRSDKSettings, NSDate, NSNumber;

@interface CRAppLifecycleMonitor : NSObject
{
    CRApp *_app;
    CRSDKSettings *_sdkSettings;
    NSDate *_lastBackgroundDate;
    NSNumber *_appLoadSessionTimeoutThreshold;
    NSNumber *_appLoadMinThreshold;
}

@property(retain, nonatomic) NSNumber *appLoadMinThreshold; // @synthesize appLoadMinThreshold=_appLoadMinThreshold;
@property(retain, nonatomic) NSNumber *appLoadSessionTimeoutThreshold; // @synthesize appLoadSessionTimeoutThreshold=_appLoadSessionTimeoutThreshold;
@property(retain, nonatomic) NSDate *lastBackgroundDate; // @synthesize lastBackgroundDate=_lastBackgroundDate;
@property(readonly, nonatomic) CRSDKSettings *sdkSettings; // @synthesize sdkSettings=_sdkSettings;
@property(retain, nonatomic) CRApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (void)addAppVisibilityLogEntryWithTimestamp:(id)arg1 foregrounded:(_Bool)arg2;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)willTerminate;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithApp:(id)arg1 sdkSettings:(id)arg2;

@end
