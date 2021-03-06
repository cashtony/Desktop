//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IMYClickEventHelper : NSObject
{
    double _durtion;
    NSMutableDictionary *_formatMap;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_eventPostBlocks;
}

+ (id)mutableObjectFromObject:(id)arg1;
+ (id)shareClickHelper;
@property(retain, nonatomic) NSMutableArray *eventPostBlocks; // @synthesize eventPostBlocks=_eventPostBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *formatMap; // @synthesize formatMap=_formatMap;
@property(nonatomic) double durtion; // @synthesize durtion=_durtion;
- (void).cxx_destruct;
- (void)addEventPostBlock:(CDUnknownBlockType)arg1;
- (void)findEventName:(id)arg1 toValue:(id)arg2 parent:(id)arg3;
- (void)insertWithParent:(id)arg1 value:(id)arg2;
- (id)postParamsWithClickObject:(id)arg1;
- (void)startPostEvents;
- (void)registClickEventFormat:(id)arg1 forKey:(id)arg2 host:(id)arg3 path:(id)arg4;
- (void)addClickEventName:(id)arg1 forKey:(id)arg2;
- (void)addPostEventParams:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)init;

@end

