//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseItemCellViewModel.h"

@class NSMutableArray, UIFont;

@interface BTHeaderItemCellViewModel : BTBaseItemCellViewModel
{
    NSMutableArray *_contactLabelStyles;
    UIFont *_contactLabelFont;
    double _contactLabelMaxWidth;
    struct CGSize _contactLabelSize;
}

@property(nonatomic) double contactLabelMaxWidth; // @synthesize contactLabelMaxWidth=_contactLabelMaxWidth;
@property(retain, nonatomic) UIFont *contactLabelFont; // @synthesize contactLabelFont=_contactLabelFont;
@property(nonatomic) struct CGSize contactLabelSize; // @synthesize contactLabelSize=_contactLabelSize;
@property(retain, nonatomic) NSMutableArray *contactLabelStyles; // @synthesize contactLabelStyles=_contactLabelStyles;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *timeLabelFont;
@property(readonly, nonatomic) double headerWidth;
@property(readonly, nonatomic) _Bool isBrowsed;
- (void)clearCache;
- (double)viewHeight;
- (id)itemViewClassName;
- (void)updateWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;

@end
