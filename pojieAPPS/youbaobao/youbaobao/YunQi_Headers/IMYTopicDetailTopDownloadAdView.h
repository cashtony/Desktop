//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdView.h"

@class IMYCapsuleButton, UIImageView, UILabel;

@interface IMYTopicDetailTopDownloadAdView : IMYBaseAdView
{
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_recommendLabel;
    UILabel *_titleLabel;
    IMYCapsuleButton *_downloadButton;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) IMYCapsuleButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (id)actionView;
- (id)tagView;
- (void)layoutWithModel:(id)arg1;
- (void)setupSubviews;

@end

