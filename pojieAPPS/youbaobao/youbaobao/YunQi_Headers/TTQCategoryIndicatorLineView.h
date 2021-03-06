//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTQCategoryIndicatorProtocol-Protocol.h"

@class NSString, UIColor;

@interface TTQCategoryIndicatorLineView : UIView <TTQCategoryIndicatorProtocol>
{
    _Bool _scrollEnabled;
    double _verticalMargin;
    double _indicatorLineViewHeight;
    double _indicatorLineWidth;
    double _indicatorLineViewCornerRadius;
    UIColor *_indicatorLineViewColor;
}

@property(retain, nonatomic) UIColor *indicatorLineViewColor; // @synthesize indicatorLineViewColor=_indicatorLineViewColor;
@property(nonatomic) double indicatorLineViewCornerRadius; // @synthesize indicatorLineViewCornerRadius=_indicatorLineViewCornerRadius;
@property(nonatomic) double indicatorLineWidth; // @synthesize indicatorLineWidth=_indicatorLineWidth;
@property(nonatomic) double indicatorLineViewHeight; // @synthesize indicatorLineViewHeight=_indicatorLineViewHeight;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) double verticalMargin; // @synthesize verticalMargin=_verticalMargin;
- (void).cxx_destruct;
- (double)getIndicatorLineViewWidth:(struct CGRect)arg1;
- (double)getIndicatorLineViewCornerRadius;
- (void)ls_selectedCell:(id)arg1;
- (void)ls_contentScrollViewDidScroll:(id)arg1;
- (void)ls_refreshState:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

