//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, UIScrollView, UIView, UIViewController;

@protocol IMYNewsRootContainerViewDelegate <NSObject>

@optional
- (void)IMYNewsRootContainerViewCheckScroll:(UIScrollView *)arg1;
- (long long)IMYNewsRootContainerViewGetUserModeForAd;
- (void)IMYNewsRootContainerViewSendLocalMessage:(NSDictionary *)arg1;
- (void)IMYNewsRootContainerView:(UIViewController *)arg1 adBannerRefresh:(UIView *)arg2 isClose:(_Bool)arg3;
- (_Bool)IMYNewsRootContainerViewCanShowScrollTopBtn;
- (unsigned long long)IMYNewsRootContainerViewCategoryIndex:(unsigned long long)arg1;
- (void)IMYNewsRootContainerViewDidRequestCategory:(UIViewController *)arg1 categorys:(NSArray *)arg2;
@end

