//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewController.h"

#import "IMYTLPhotoBrowserDelegate-Protocol.h"
#import "MWPhotoBrowserDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IMYButton, IMYCaptionView, IMYTLHucaiPrintSeletePhotoVM, IMYTLPhotoBrowser, NSMutableDictionary, NSString, UICollectionView, UIView;

@interface IMYTLHucaiPrintSelectPhotosVC : IMYTLViewController <UICollectionViewDelegate, UICollectionViewDataSource, MWPhotoBrowserDelegate, IMYTLPhotoBrowserDelegate>
{
    _Bool _isSelectForMore;
    _Bool _lastRequestIsNext;
    _Bool _noDataWaitingForGuide;
    _Bool _localDataNeedScrollToBottom;
    unsigned long long _type;
    unsigned long long _maxCount;
    CDUnknownBlockType _didSelectedPhotosBlock;
    CDUnknownBlockType _gotoUploadBlock;
    NSString *_replaceImageUrl;
    IMYTLHucaiPrintSeletePhotoVM *_vm;
    IMYCaptionView *_caption;
    UIView *_noDataView;
    UICollectionView *_collection;
    UIView *_tipView;
    NSMutableDictionary *_sectionHeadersDic;
    UIView *_onceSelectMoreTipView;
    IMYTLPhotoBrowser *_browser;
    UIView *_bottomView;
    IMYButton *_previewBtn;
    IMYButton *_completedBtn;
}

@property(nonatomic) _Bool localDataNeedScrollToBottom; // @synthesize localDataNeedScrollToBottom=_localDataNeedScrollToBottom;
@property(retain, nonatomic) IMYButton *completedBtn; // @synthesize completedBtn=_completedBtn;
@property(retain, nonatomic) IMYButton *previewBtn; // @synthesize previewBtn=_previewBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) IMYTLPhotoBrowser *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) UIView *onceSelectMoreTipView; // @synthesize onceSelectMoreTipView=_onceSelectMoreTipView;
@property(retain, nonatomic) NSMutableDictionary *sectionHeadersDic; // @synthesize sectionHeadersDic=_sectionHeadersDic;
@property(nonatomic) _Bool noDataWaitingForGuide; // @synthesize noDataWaitingForGuide=_noDataWaitingForGuide;
@property(nonatomic) _Bool lastRequestIsNext; // @synthesize lastRequestIsNext=_lastRequestIsNext;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UICollectionView *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) IMYCaptionView *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) IMYTLHucaiPrintSeletePhotoVM *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) NSString *replaceImageUrl; // @synthesize replaceImageUrl=_replaceImageUrl;
@property(copy, nonatomic) CDUnknownBlockType gotoUploadBlock; // @synthesize gotoUploadBlock=_gotoUploadBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectedPhotosBlock; // @synthesize didSelectedPhotosBlock=_didSelectedPhotosBlock;
@property(nonatomic) _Bool isSelectForMore; // @synthesize isSelectForMore=_isSelectForMore;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)showOnceSelectMoreTipForPhotosTapAction:(id)arg1;
- (void)showOnceSelectMoreTipForPhotos;
- (void)showOnceSelectMoreTipForAlums;
- (void)checkAndOnceSelectMoreTip;
- (void)resetNoDataView:(_Bool)arg1;
- (void)setupTipView;
- (void)completedPhotoBrowser:(id)arg1;
- (void)photoBrowser:(id)arg1 didSetupBottomView:(id)arg2;
- (_Bool)photoBrowser:(id)arg1 shouldPictureChangeToSelected:(_Bool)arg2 index:(unsigned long long)arg3;
- (void)photoBrowser:(id)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)enterBigBrowserPreview:(_Bool)arg1 startItem:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateBottomView;
- (void)enterTLHomeVC;
- (void)openBtnAciotn:(id)arg1;
- (void)enterExplainVC;
- (void)completedButtonAction:(id)arg1;
- (void)previewButtonAction:(id)arg1;
- (void)setupBottomView;
- (void)setupCollectionView;
- (void)imy_topRightButtonTouchupInside;
- (void)imy_topLeftButtonTouchupInside;
- (void)setupTopButtons;
- (void)setupCaptionView;
- (_Bool)checkAlbumAuthorization;
- (void)initViews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
