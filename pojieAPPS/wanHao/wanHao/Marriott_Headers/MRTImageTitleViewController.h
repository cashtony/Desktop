//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MRTActivityIndicatorView, NSURL, UIImageView;

@interface MRTImageTitleViewController : UIViewController
{
    long long _index;
    UIImageView *_imageView;
    NSURL *_imageURL;
    MRTActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) MRTActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)configureConstraintsForViews;
- (id)urlWithSizingForMediaItem:(id)arg1;
- (void)viewDidLoad;
- (id)initWithImageURL:(id)arg1 index:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
