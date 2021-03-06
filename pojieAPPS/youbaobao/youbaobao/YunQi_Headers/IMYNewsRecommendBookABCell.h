//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseTableViewCell.h"

@class IMYNovelCardModel, UIImageView, UILabel;

@interface IMYNewsRecommendBookABCell : IMYBaseTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_infoLabel;
    UILabel *_countLabel;
    UIImageView *_infoView;
    UIImageView *_bookView;
    UILabel *_tabLabel;
    IMYNovelCardModel *_model;
}

+ (double)cellHeight;
@property(retain, nonatomic) IMYNovelCardModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *tabLabel; // @synthesize tabLabel=_tabLabel;
@property(retain, nonatomic) UIImageView *bookView; // @synthesize bookView=_bookView;
@property(retain, nonatomic) UIImageView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1;
- (void)setTag:(id)arg1 text:(id)arg2;
- (void)prepareUI;

@end

