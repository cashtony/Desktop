//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface NSTNConfig : NSObject
{
    NSDictionary *config;
    NSString *configVersion;
    NSDate *lastConfigRefresh;
    int configRefreshInterval;
}

- (void).cxx_destruct;
- (int)assertConfig;
- (int)canStoreToDisk;
- (_Bool)screenDumpFlag;
- (id)getAdminKey;
- (id)getMovieWatcher;
- (id)getEvents;
- (id)getMethods;
- (id)getInitRules;
- (id)getNotifications;
- (id)getClasses;
- (id)classesToDump;
- (id)classInfoURL;
- (id)uploadURL;
- (int)canOptOut;
- (id)optOutMessage;
- (int)isGatewayEnabled;
- (id)whiteList;
- (id)getBatteryLevelClient;
- (id)getBatteryEnabled;
- (id)dataForBatteryWatcher;
- (id)appVersion;
- (id)queueExclusions;
- (int)queueDepth;
- (int)pullRefreshInterval;
- (int)refreshInterval;
- (id)lastRefresh;
- (id)version;
- (id)objectForConfigKey:(id)arg1;
- (void)updateInterval:(int)arg1;
- (void)updateVersion:(id)arg1;
- (void)updateLastConfigRefresh:(id)arg1;
- (void)updateMainVars;
- (void)setConfigDictionary:(id)arg1;
- (id)latestLbVersion;
- (id)init;

@end

