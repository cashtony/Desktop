//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MRTStyledLabel, NSLayoutConstraint, UIImageView, UIStackView;

@interface MRTFormNoticeView : UIView
{
    UIStackView *_contentStackView;
    UIView *_rootView;
    UIView *_noticeView;
    MRTStyledLabel *_noticeLabel;
    MRTStyledLabel *_spacerLabel;
    UIImageView *_imageView;
    UIView *_imageContainerView;
    NSLayoutConstraint *_noticeHeightAbsoluteConstraint;
    NSLayoutConstraint *_noticeHeightMinimumConstraint;
    NSLayoutConstraint *_noticeTopConstraint;
    NSLayoutConstraint *_noticeBottomConstraint;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // @synthesize imageHeightConstraint=_imageHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // @synthesize imageWidthConstraint=_imageWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *noticeBottomConstraint; // @synthesize noticeBottomConstraint=_noticeBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *noticeTopConstraint; // @synthesize noticeTopConstraint=_noticeTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *noticeHeightMinimumConstraint; // @synthesize noticeHeightMinimumConstraint=_noticeHeightMinimumConstraint;
@property(retain, nonatomic) NSLayoutConstraint *noticeHeightAbsoluteConstraint; // @synthesize noticeHeightAbsoluteConstraint=_noticeHeightAbsoluteConstraint;
@property(nonatomic) __weak UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak MRTStyledLabel *spacerLabel; // @synthesize spacerLabel=_spacerLabel;
@property(nonatomic) __weak MRTStyledLabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(nonatomic) __weak UIView *noticeView; // @synthesize noticeView=_noticeView;
@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
@property(nonatomic) __weak UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
- (void).cxx_destruct;
- (void)reset;
- (void)setupWithText:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end

