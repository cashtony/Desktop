//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/GrowingEventManagerObserver-Protocol.h>

@class NSArray, NSHashTable, NSString;

@interface GrowingTaggedViews : NSObject <GrowingEventManagerObserver>
{
    _Bool _shouldDisplayTaggedViews;
    _Bool _isPaused;
    NSHashTable *_highlightedTaggedNodes;
    NSHashTable *_asyncNativeHandlers;
    NSArray *_currentPageTagItems;
    NSArray *_currentPageHtml5TagItems;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSArray *currentPageHtml5TagItems; // @synthesize currentPageHtml5TagItems=_currentPageHtml5TagItems;
@property(retain, nonatomic) NSArray *currentPageTagItems; // @synthesize currentPageTagItems=_currentPageTagItems;
@property(retain, nonatomic) NSHashTable *asyncNativeHandlers; // @synthesize asyncNativeHandlers=_asyncNativeHandlers;
@property(retain, nonatomic) NSHashTable *highlightedTaggedNodes; // @synthesize highlightedTaggedNodes=_highlightedTaggedNodes;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) _Bool shouldDisplayTaggedViews; // @synthesize shouldDisplayTaggedViews=_shouldDisplayTaggedViews;
- (void).cxx_destruct;
- (void)growingEventManagerWillAddEvent:(id)arg1 thisNode:(id)arg2 triggerNode:(id)arg3 withContext:(id)arg4;
- (void)hide;
- (void)show;
- (void)reset;
- (_Bool)checkTaggedNodeWithXPath:(id)arg1 andKeyIndex:(long long)arg2 andContent:(id)arg3 withinCurrentPageTagItems:(id)arg4;
- (id)getCurrentPageHtml5TagItems;
- (id)getCurrentPageTagItems;
- (_Bool)isDisplaying;
- (void)didlogout;
- (id)init;
- (void)removeAsyncNativeHandler:(id)arg1;
- (void)removeNodeHighlight:(id)arg1;
- (void)setNeedShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

