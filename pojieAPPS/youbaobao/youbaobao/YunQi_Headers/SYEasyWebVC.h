//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYVKWebViewController.h"

@class NSArray;

@interface SYEasyWebVC : IMYVKWebViewController
{
    _Bool _isDisableInteractivePopGestureRecognizer;
    _Bool _isExchange;
    _Bool _hasAuthXDS;
    _Bool _topLeftIsCloseButton;
    CDUnknownBlockType _AppealCompleteBlock;
    CDUnknownBlockType _gotoVC;
    unsigned long long _shareType;
}

+ (void)shareSuccessPost:(id)arg1 isShowHud:(_Bool)arg2;
+ (id)vcWithUrlString:(id)arg1 navTitleString:(id)arg2;
@property(nonatomic) unsigned long long shareType; // @synthesize shareType=_shareType;
@property(nonatomic) _Bool topLeftIsCloseButton; // @synthesize topLeftIsCloseButton=_topLeftIsCloseButton;
@property(nonatomic) _Bool hasAuthXDS; // @synthesize hasAuthXDS=_hasAuthXDS;
@property(nonatomic) _Bool isExchange; // @synthesize isExchange=_isExchange;
@property(nonatomic) _Bool isDisableInteractivePopGestureRecognizer; // @synthesize isDisableInteractivePopGestureRecognizer=_isDisableInteractivePopGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType gotoVC; // @synthesize gotoVC=_gotoVC;
@property(copy, nonatomic) CDUnknownBlockType AppealCompleteBlock; // @synthesize AppealCompleteBlock=_AppealCompleteBlock;
- (void).cxx_destruct;
- (void)runActionWithMessageModel:(id)arg1;
- (void)closeViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)imy_topLeftButtonTouchupInside;
- (id)initWithUrlString:(id)arg1 navTitleString:(id)arg2;
- (void)segmentImy_topLeftButtonTouchupInside;
- (id)initWithSegmentModel:(id)arg1 initialSelectIndex:(long long)arg2;
@property(retain, nonatomic) NSArray *URLs;

@end
