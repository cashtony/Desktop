//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FLAnimatedImageView, NSString, UIButton, UIImageView, UILabel;

@interface ZPOtherUserHomeInfoViewNavigationBar : UIView
{
    UIButton *_leftBtn;
    FLAnimatedImageView *_rightGifImage;
    UIButton *_rightBtn;
    UILabel *_titleLabel;
    UIView *_titleView;
    NSString *_title;
    UIImageView *_zuanshiImageView;
}

@property(retain, nonatomic) UIImageView *zuanshiImageView; // @synthesize zuanshiImageView=_zuanshiImageView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) FLAnimatedImageView *rightGifImage; // @synthesize rightGifImage=_rightGifImage;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
- (void).cxx_destruct;
- (void)setUI;
- (id)init;

@end

