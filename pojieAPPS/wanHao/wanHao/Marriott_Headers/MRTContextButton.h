//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MRTRingActivityView, NSDictionary, NSNumber, UIColor, UIImage, UILabel;

@interface MRTContextButton : UIButton
{
    _Bool _hasShadow;
    _Bool _activityIndicatorActive;
    unsigned long long _renderingStyle;
    UIImage *_image;
    NSNumber *_badgeNumber;
    UIColor *_badgeBackgroundColor;
    UIColor *_activityIndicatorColor;
    NSDictionary *_userInfo;
    UILabel *_badgeLabel;
    MRTRingActivityView *_ringActivityView;
}

+ (id)contextButtonBackgroundImageOfDiameter:(double)arg1;
@property(retain, nonatomic) MRTRingActivityView *ringActivityView; // @synthesize ringActivityView=_ringActivityView;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIColor *activityIndicatorColor; // @synthesize activityIndicatorColor=_activityIndicatorColor;
@property(nonatomic, getter=isPerformingActivityAnimation) _Bool activityIndicatorActive; // @synthesize activityIndicatorActive=_activityIndicatorActive;
@property(retain, nonatomic) UIColor *badgeBackgroundColor; // @synthesize badgeBackgroundColor=_badgeBackgroundColor;
@property(retain, nonatomic) NSNumber *badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long renderingStyle; // @synthesize renderingStyle=_renderingStyle;
- (void).cxx_destruct;
- (void)_updateShadow;
- (void)_updateDisplay;
- (void)_createBadgeLabelIfNeeded;
- (void)tintColorDidChange;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_commonInit;
- (id)initWithImage:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
