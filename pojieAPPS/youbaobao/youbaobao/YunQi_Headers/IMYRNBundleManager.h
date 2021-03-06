//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IMYRNBundleManager : NSObject
{
    NSString *_dirPath;
    NSMutableDictionary *_callbackMaps;
    NSMutableDictionary *_readTimeMap;
}

+ (id)createRNBundleDirectory;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *readTimeMap; // @synthesize readTimeMap=_readTimeMap;
@property(retain, nonatomic) NSMutableDictionary *callbackMaps; // @synthesize callbackMaps=_callbackMaps;
@property(copy, nonatomic) NSString *dirPath; // @synthesize dirPath=_dirPath;
- (void).cxx_destruct;
- (void)callbackWithBundleURLString:(id)arg1 indexPath:(id)arg2 bundlePath:(id)arg3 error:(id)arg4;
- (void)downloadWithBundleURL:(id)arg1 completedBlock:(CDUnknownBlockType)arg2;
- (_Bool)clearCache;
- (_Bool)containBundleURL:(id)arg1;
- (id)bundlePathWithURLString:(id)arg1;
- (id)init;

@end

