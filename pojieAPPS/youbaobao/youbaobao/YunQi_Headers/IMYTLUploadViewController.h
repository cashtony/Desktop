//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewController.h"

#import "IMYTLPhotoBrowserDelegate-Protocol.h"
#import "MWPhotoBrowserDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYButton, IMYCaptionView, IMYTLAnimationPhotoBrowser, IMYTLHdUploadView, IMYTLPhotoPickerVM, NSDate, NSString, UIButton, UITableView, UIView;
@protocol IMYTLUploadViewControllerDelegate;

@interface IMYTLUploadViewController : IMYTLViewController <UITableViewDelegate, UITableViewDataSource, MWPhotoBrowserDelegate, IMYTLPhotoBrowserDelegate>
{
    _Bool _uploadedBackToTLHomeTab;
    _Bool _uploadedShowTLHomeVC;
    _Bool _isAddPhotos;
    _Bool _hasSelectedOrgnalPhoto;
    _Bool _backToRootVC;
    _Bool _firstLoadImage;
    _Bool _browserIsPreview;
    id <IMYTLUploadViewControllerDelegate> _delegate;
    NSDate *_dateToScroll;
    NSString *_addPhotosTitle;
    long long _hasAddedPhototCount;
    CDUnknownBlockType _addPhotosToDateBlock;
    CDUnknownBlockType _selectListBlock;
    IMYCaptionView *_captionView;
    UIView *_guideView;
    UITableView *_tableView;
    IMYTLPhotoPickerVM *_vm;
    UIView *_bottomView;
    UIButton *_orignalBtn;
    IMYButton *_previewBtn;
    IMYButton *_completedBtn;
    IMYTLHdUploadView *_hdUploaderView;
    IMYTLAnimationPhotoBrowser *_browser;
}

+ (id)uploadViewController:(id)arg1;
@property(nonatomic) _Bool browserIsPreview; // @synthesize browserIsPreview=_browserIsPreview;
@property(retain, nonatomic) IMYTLAnimationPhotoBrowser *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) IMYTLHdUploadView *hdUploaderView; // @synthesize hdUploaderView=_hdUploaderView;
@property(retain, nonatomic) IMYButton *completedBtn; // @synthesize completedBtn=_completedBtn;
@property(retain, nonatomic) IMYButton *previewBtn; // @synthesize previewBtn=_previewBtn;
@property(retain, nonatomic) UIButton *orignalBtn; // @synthesize orignalBtn=_orignalBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool firstLoadImage; // @synthesize firstLoadImage=_firstLoadImage;
@property(retain, nonatomic) IMYTLPhotoPickerVM *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) _Bool backToRootVC; // @synthesize backToRootVC=_backToRootVC;
@property(copy, nonatomic) CDUnknownBlockType selectListBlock; // @synthesize selectListBlock=_selectListBlock;
@property(copy, nonatomic) CDUnknownBlockType addPhotosToDateBlock; // @synthesize addPhotosToDateBlock=_addPhotosToDateBlock;
@property(nonatomic) _Bool hasSelectedOrgnalPhoto; // @synthesize hasSelectedOrgnalPhoto=_hasSelectedOrgnalPhoto;
@property(nonatomic) long long hasAddedPhototCount; // @synthesize hasAddedPhototCount=_hasAddedPhototCount;
@property(retain, nonatomic) NSString *addPhotosTitle; // @synthesize addPhotosTitle=_addPhotosTitle;
@property(nonatomic) _Bool isAddPhotos; // @synthesize isAddPhotos=_isAddPhotos;
@property(nonatomic) _Bool uploadedShowTLHomeVC; // @synthesize uploadedShowTLHomeVC=_uploadedShowTLHomeVC;
@property(nonatomic) _Bool uploadedBackToTLHomeTab; // @synthesize uploadedBackToTLHomeTab=_uploadedBackToTLHomeTab;
@property(retain, nonatomic) NSDate *dateToScroll; // @synthesize dateToScroll=_dateToScroll;
@property(nonatomic) __weak id <IMYTLUploadViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)guideKey;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)photoBrowser:(id)arg1 thumbModelForIndex:(unsigned long long)arg2;
- (void)cropVideoBrowser:(id)arg1 index:(long long)arg2;
- (void)completedPhotoBrowser:(id)arg1;
- (void)photoBrowser:(id)arg1 didSetupBottomView:(id)arg2;
- (void)photoBrowser:(id)arg1 orignalPictureSelected:(_Bool)arg2;
- (_Bool)photoBrowser:(id)arg1 shouldPictureChangeToSelected:(_Bool)arg2 index:(unsigned long long)arg3;
- (void)photoBrowser:(id)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)checkAction:(id)arg1;
- (void)previewButtonAction:(id)arg1;
- (void)addPhotosToDateCompleted:(id)arg1;
- (void)completedButtonAction:(id)arg1;
- (void)hiddenGuideAction;
- (void)cancelAction;
- (void)selectAlumAction;
- (void)enterBigBrowserPreview:(_Bool)arg1 startItem:(id)arg2;
- (void)enterCropVideoIndex:(long long)arg1;
- (void)enterCropVideoForPublish:(id)arg1 readyPublishModels:(id)arg2;
- (void)enterPublish:(id)arg1;
- (void)setupBottomView;
- (void)setupTableView;
- (void)setupVM;
- (void)scrollToDate:(id)arg1 animation:(_Bool)arg2;
- (void)changeBottomViewStatus;
- (_Bool)albumPowerCheckHandle;
- (void)setupTopButtons;
- (void)guideHandle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

