//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYNewsRootBaseCell.h"

@class UIImageView, UILabel;

@interface IMYNewsRootActivityCell : IMYNewsRootBaseCell
{
    UIImageView *_newsImageView;
    UILabel *_viewTimeLabel;
}

+ (struct CGSize)BigImageSize;
@property(retain, nonatomic) UILabel *viewTimeLabel; // @synthesize viewTimeLabel=_viewTimeLabel;
@property(retain, nonatomic) UIImageView *newsImageView; // @synthesize newsImageView=_newsImageView;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1;
- (void)prepareUI;
- (void)awakeFromNib;

@end

