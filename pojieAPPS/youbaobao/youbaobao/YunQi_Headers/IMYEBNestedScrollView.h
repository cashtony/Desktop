//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString;
@protocol IMYEBNestedScrollViewDelegate;

@interface IMYEBNestedScrollView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _canNestedScrollViewScroll;
    _Bool _canScroll;
    UIScrollView *_nestedScrollView;
    id <IMYEBNestedScrollViewDelegate> _nestedScrollViewDelegate;
    double _nestedScrollY;
}

@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
@property(nonatomic) _Bool canNestedScrollViewScroll; // @synthesize canNestedScrollViewScroll=_canNestedScrollViewScroll;
@property(nonatomic) double nestedScrollY; // @synthesize nestedScrollY=_nestedScrollY;
@property(nonatomic) __weak id <IMYEBNestedScrollViewDelegate> nestedScrollViewDelegate; // @synthesize nestedScrollViewDelegate=_nestedScrollViewDelegate;
@property(retain, nonatomic) UIScrollView *nestedScrollView; // @synthesize nestedScrollView=_nestedScrollView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 nestedScrollY:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

