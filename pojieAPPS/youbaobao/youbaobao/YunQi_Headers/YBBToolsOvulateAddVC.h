//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

@class NSString, UIImage, YBBToolsCameraView, YBBToolsOvulateCellVM;
@protocol YBBToolsOvulateAddVCDelegate;

@interface YBBToolsOvulateAddVC : IMYPublicBaseViewController
{
    _Bool _isInvert;
    _Bool _fromCamera;
    _Bool _isCamera;
    id <YBBToolsOvulateAddVCDelegate> _delegate;
    UIImage *_image;
    NSString *_imageDateString;
    CDUnknownBlockType _getImageAgainBlock;
    YBBToolsCameraView *_cameraView;
    YBBToolsOvulateCellVM *_cellVM;
    UIImage *_clipedImage;
    double _cameraBottomBarHeight;
}

@property(nonatomic) double cameraBottomBarHeight; // @synthesize cameraBottomBarHeight=_cameraBottomBarHeight;
@property(retain, nonatomic) UIImage *clipedImage; // @synthesize clipedImage=_clipedImage;
@property(retain, nonatomic) YBBToolsOvulateCellVM *cellVM; // @synthesize cellVM=_cellVM;
@property(retain, nonatomic) YBBToolsCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic) _Bool isCamera; // @synthesize isCamera=_isCamera;
@property(copy, nonatomic) CDUnknownBlockType getImageAgainBlock; // @synthesize getImageAgainBlock=_getImageAgainBlock;
@property(nonatomic) _Bool fromCamera; // @synthesize fromCamera=_fromCamera;
@property(nonatomic) _Bool isInvert; // @synthesize isInvert=_isInvert;
@property(retain, nonatomic) NSString *imageDateString; // @synthesize imageDateString=_imageDateString;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak id <YBBToolsOvulateAddVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cutImgae;
- (void)getOvulateVM;
- (void)bottomRightButtonAction;
- (void)bottomLeftButtonAction;
- (void)setupBottomBar;
- (void)setupCoverView;
- (void)setupEasyImageView;
- (void)setupNavBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1 isCamera:(_Bool)arg2;

@end
