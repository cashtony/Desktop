//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdView.h"

@class NSArray, UIButton, UIImageView, UILabel, UIView;

@interface IMYMySignleOrDoublePicAdView : IMYBaseAdView
{
    CDUnknownBlockType _tappedBlock;
    UILabel *_firstTitleLabel;
    UILabel *_firstContentLabel;
    UIImageView *_firstIconView;
    UIImageView *_firstTagView;
    UILabel *_firstTagLabel;
    UIButton *_firstBackView;
    UILabel *_secondTitleLabel;
    UILabel *_secondContentLabel;
    UIImageView *_secondIconView;
    UIImageView *_secondTagView;
    UILabel *_secondTagLabel;
    UIButton *_secondBackView;
    UIView *_backView;
    NSArray *_modelArray;
}

+ (double)heightWithModel:(id)arg1;
+ (void)load;
@property(copy, nonatomic) NSArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIButton *secondBackView; // @synthesize secondBackView=_secondBackView;
@property(retain, nonatomic) UILabel *secondTagLabel; // @synthesize secondTagLabel=_secondTagLabel;
@property(retain, nonatomic) UIImageView *secondTagView; // @synthesize secondTagView=_secondTagView;
@property(retain, nonatomic) UIImageView *secondIconView; // @synthesize secondIconView=_secondIconView;
@property(retain, nonatomic) UILabel *secondContentLabel; // @synthesize secondContentLabel=_secondContentLabel;
@property(retain, nonatomic) UILabel *secondTitleLabel; // @synthesize secondTitleLabel=_secondTitleLabel;
@property(retain, nonatomic) UIButton *firstBackView; // @synthesize firstBackView=_firstBackView;
@property(retain, nonatomic) UILabel *firstTagLabel; // @synthesize firstTagLabel=_firstTagLabel;
@property(retain, nonatomic) UIImageView *firstTagView; // @synthesize firstTagView=_firstTagView;
@property(retain, nonatomic) UIImageView *firstIconView; // @synthesize firstIconView=_firstIconView;
@property(retain, nonatomic) UILabel *firstContentLabel; // @synthesize firstContentLabel=_firstContentLabel;
@property(retain, nonatomic) UILabel *firstTitleLabel; // @synthesize firstTitleLabel=_firstTitleLabel;
@property(copy, nonatomic) CDUnknownBlockType tappedBlock; // @synthesize tappedBlock=_tappedBlock;
- (void).cxx_destruct;
- (void)doublePiclayoutWithModels:(id)arg1;
- (void)singlePiclayoutWithModels:(id)arg1;
- (void)setPictureModel:(id)arg1 showStyle:(unsigned long long)arg2 radiusStyle:(unsigned long long)arg3;
- (void)layoutWithModel:(id)arg1;
- (void)clcikSecondBackView;
- (void)clcikFirstBackView;
- (void)setupSubviews;

@end
