//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQCategoryBaseView.h"

@class NSArray, UIColor, UIFont;

@interface TTQCategoryTitleView : TTQCategoryBaseView
{
    _Bool _titleColorGradientEnabled;
    _Bool _titleLabelZoomEnabled;
    _Bool _titleLabelZoomScrollGradientEnabled;
    NSArray *_indicators;
    CDUnknownBlockType _selectAction;
    NSArray *_titles;
    UIColor *_titleColor;
    UIColor *_titleSelectedColor;
    UIFont *_titleFont;
    UIFont *_titleSelectedFont;
    double _titleLabelZoomScale;
    double _titleLabelStrokeWidthEnabled;
    double _titleLabelSelectedStrokeWidth;
}

@property(nonatomic) double titleLabelSelectedStrokeWidth; // @synthesize titleLabelSelectedStrokeWidth=_titleLabelSelectedStrokeWidth;
@property(nonatomic) double titleLabelStrokeWidthEnabled; // @synthesize titleLabelStrokeWidthEnabled=_titleLabelStrokeWidthEnabled;
@property(nonatomic) double titleLabelZoomScale; // @synthesize titleLabelZoomScale=_titleLabelZoomScale;
@property(nonatomic) _Bool titleLabelZoomScrollGradientEnabled; // @synthesize titleLabelZoomScrollGradientEnabled=_titleLabelZoomScrollGradientEnabled;
@property(nonatomic) _Bool titleLabelZoomEnabled; // @synthesize titleLabelZoomEnabled=_titleLabelZoomEnabled;
@property(nonatomic) _Bool titleColorGradientEnabled; // @synthesize titleColorGradientEnabled=_titleColorGradientEnabled;
@property(retain, nonatomic) UIFont *titleSelectedFont; // @synthesize titleSelectedFont=_titleSelectedFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleSelectedColor; // @synthesize titleSelectedColor=_titleSelectedColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
@property(retain, nonatomic) NSArray *indicators; // @synthesize indicators=_indicators;
- (void).cxx_destruct;
- (_Bool)selectCellAtIndex:(long long)arg1 isClicked:(_Bool)arg2;
- (void)contentOffsetOfContentScrollViewDidChanged:(struct CGPoint)arg1;
- (void)refreshState;
- (void)refreshCellModel:(id)arg1 index:(long long)arg2;
- (double)preferredCellWidthAtIndex:(long long)arg1;
- (void)refreshLeftCellModel:(id)arg1 rightCellModel:(id)arg2 ratio:(double)arg3;
- (void)refreshSelectedCellModel:(id)arg1 unselectedCellModel:(id)arg2;
- (void)refreshDataSource;
- (Class)preferredCellClass;
- (void)initializeData;

@end

