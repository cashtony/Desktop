//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLView.h"

@class IMYTLTabSettingIndexMenuModel, NSMutableArray, UILabel, UIView;

@interface IMYTLHomelistHeaderItemView : IMYTLView
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UIView *_rightLine;
    IMYTLTabSettingIndexMenuModel *_model;
    NSMutableArray *_avaterImgVs;
    CDUnknownBlockType _tapBlock;
    double _minFitWidth;
}

@property(nonatomic) double minFitWidth; // @synthesize minFitWidth=_minFitWidth;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) NSMutableArray *avaterImgVs; // @synthesize avaterImgVs=_avaterImgVs;
@property(retain, nonatomic) IMYTLTabSettingIndexMenuModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadFamilyAvater;
- (id)initWithFrame:(struct CGRect)arg1;

@end
