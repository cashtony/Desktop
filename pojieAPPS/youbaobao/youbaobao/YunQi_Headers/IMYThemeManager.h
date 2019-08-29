//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol IMYMemoryCacheProtocol;

@interface IMYThemeManager : NSObject
{
    struct _opaque_pthread_mutex_t _mutexlock;
    struct _opaque_pthread_rwlock_t _rwlock;
    _Bool _has3x;
    NSString *_themePath;
    CDUnknownBlockType _beforeThemeChangeCallback;
    NSMutableDictionary *_defaultColorDict;
    NSMutableDictionary *_colorDict;
    NSMutableDictionary *_defaultValueDict;
    NSMutableDictionary *_currentValueDict;
    NSMutableDictionary *_reserveKeyMap;
    NSMutableArray *_configFileQueue;
    NSMapTable *_actionMap;
    id <IMYMemoryCacheProtocol> _memoryCache;
    NSString *_mainBundlePath;
    NSString *_currentThemePath;
}

+ (id)componentsSeparatedCharacterSet;
+ (id)sharedIMYThemeManager;
@property(copy) NSString *currentThemePath; // @synthesize currentThemePath=_currentThemePath;
@property(copy, nonatomic) NSString *mainBundlePath; // @synthesize mainBundlePath=_mainBundlePath;
@property(retain, nonatomic) id <IMYMemoryCacheProtocol> memoryCache; // @synthesize memoryCache=_memoryCache;
@property(retain, nonatomic) NSMapTable *actionMap; // @synthesize actionMap=_actionMap;
@property(retain, nonatomic) NSMutableArray *configFileQueue; // @synthesize configFileQueue=_configFileQueue;
@property(retain, nonatomic) NSMutableDictionary *reserveKeyMap; // @synthesize reserveKeyMap=_reserveKeyMap;
@property(retain, nonatomic) NSMutableDictionary *currentValueDict; // @synthesize currentValueDict=_currentValueDict;
@property(retain, nonatomic) NSMutableDictionary *defaultValueDict; // @synthesize defaultValueDict=_defaultValueDict;
@property(retain, nonatomic) NSMutableDictionary *colorDict; // @synthesize colorDict=_colorDict;
@property(retain, nonatomic) NSMutableDictionary *defaultColorDict; // @synthesize defaultColorDict=_defaultColorDict;
@property(nonatomic) _Bool has3x; // @synthesize has3x=_has3x;
@property(copy, nonatomic) CDUnknownBlockType beforeThemeChangeCallback; // @synthesize beforeThemeChangeCallback=_beforeThemeChangeCallback;
@property(copy, nonatomic) NSString *themePath; // @synthesize themePath=_themePath;
- (void).cxx_destruct;
- (void)dealloc;
- (id)actionForObject:(id)arg1;
- (void)themeDidChanged;
- (void)registReserveKeyMap:(id)arg1;
- (void)addThemeChangeObserver:(id)arg1;
- (id)objectForComponentKeys:(id)arg1 fromDic:(id)arg2;
- (id)themeValueForKey:(id)arg1 isReserveKey:(_Bool)arg2;
- (id)themeValueForKey:(id)arg1;
- (id)colorForKey:(id)arg1 isReserveKey:(_Bool)arg2 redirectCount:(long long)arg3;
- (id)colorForKey:(id)arg1;
- (id)resourcePathForKey:(id)arg1 loadMain:(_Bool)arg2;
- (id)imageResourcePathForKey:(id)arg1 forDirPath:(id)arg2;
- (id)imageResourcePathForKey:(id)arg1;
- (void)loadThemeValueTo:(id)arg1 from:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2 toDic:(id)arg3;
- (void)loadThemeColorTo:(id)arg1 from:(id)arg2;
- (void)loadConfigDataWithColorMap:(id)arg1 valueMap:(id)arg2 isDefault:(_Bool)arg3;
- (id)loadColorConfig;
- (void)setupConfigFilesContainDefault:(_Bool)arg1;
- (void)addConfigFileName:(id)arg1 level:(long long)arg2;
- (void)addConfigFileName:(id)arg1;
- (id)init;

@end
