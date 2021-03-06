//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YSFSessionMessageContentView.h"

@class UIImageView, UILabel;

@interface YSFSessionFileTransContentView : YSFSessionMessageContentView
{
    _Bool _canTapContent;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_sizeLabel;
    UILabel *_downloadStatusLabel;
    UIImageView *_fileIconView;
}

@property(nonatomic) _Bool canTapContent; // @synthesize canTapContent=_canTapContent;
@property(retain, nonatomic) UIImageView *fileIconView; // @synthesize fileIconView=_fileIconView;
@property(retain, nonatomic) UILabel *downloadStatusLabel; // @synthesize downloadStatusLabel=_downloadStatusLabel;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)chatHighlightedBubbleImage;
- (id)chatNormalBubbleImage;
- (void)onTouchUpInside:(id)arg1;
- (void)layoutSubviews;
- (void)refresh:(id)arg1;
- (void)initUI;
- (id)initSessionMessageContentView;

@end

