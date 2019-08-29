//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YSFRefreshComponent.h"

@interface YSFRefreshFooter : YSFRefreshComponent
{
    _Bool _automaticallyHidden;
    double _ignoredScrollViewContentInsetBottom;
}

+ (id)footerWithRefreshingTarget:(id)arg1 refreshingAction:(SEL)arg2;
+ (id)footerWithRefreshingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isAutomaticallyHidden) _Bool automaticallyHidden; // @synthesize automaticallyHidden=_automaticallyHidden;
@property(nonatomic) double ignoredScrollViewContentInsetBottom; // @synthesize ignoredScrollViewContentInsetBottom=_ignoredScrollViewContentInsetBottom;
- (void)resetNoMoreData;
- (void)noticeNoMoreData;
- (void)endRefreshingWithNoMoreData;
- (void)willMoveToSuperview:(id)arg1;
- (void)prepare;

@end
