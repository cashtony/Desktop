//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBBaseViewController.h"

#import "IMYEBCategorySelectionViewDelegate-Protocol.h"
#import "IMYEBSessionCouponViewDelegate-Protocol.h"
#import "IMYEBSessionHybridTableManagerDelegate-Protocol.h"
#import "IMYFakeNavigationBarTransitionDelegate-Protocol.h"

@class IMYButton, IMYCaptionView, IMYEBBaseViewModel, IMYEBQuickMenu, IMYEBScrollToTopButton, IMYEBSessionCommonModel, IMYEBSessionDataModel, IMYEBSessionHeaderManager, IMYEBSessionHybridTableManager, IMYEBSessionTableManager, IMYEBSessionVM, IMYEBSessionViewManager, IMYEBSessionWaterManager, NSString, RACDisposable, UILabel, UIView;

@interface IMYEBSessionVC : IMYEBBaseViewController <IMYEBCategorySelectionViewDelegate, IMYEBSessionHybridTableManagerDelegate, IMYFakeNavigationBarTransitionDelegate, IMYEBSessionCouponViewDelegate>
{
    _Bool _no_next_brand;
    _Bool _isFooterHeightChanged;
    long long _item_id;
    long long _brand_area_id;
    long long _activity_id;
    long long _channelId;
    NSString *_pid;
    NSString *_adzone_id;
    IMYEBBaseViewModel *_viewModel;
    IMYCaptionView *_captionView;
    IMYCaptionView *_tabCaptionView;
    IMYEBSessionViewManager *_currentViewManager;
    IMYEBSessionCommonModel *_commonModel;
    IMYEBSessionDataModel *_dataModel;
    IMYEBSessionVM *_sessionVM;
    IMYEBSessionWaterManager *_waterManager;
    IMYEBSessionTableManager *_tableManager;
    IMYEBSessionHybridTableManager *_hybridManager;
    IMYEBSessionHeaderManager *_headerManager;
    RACDisposable *_meiyouOnlyDisposable;
    IMYButton *_nextButton;
    UILabel *_footLabel;
    UIView *_footerView;
    IMYEBQuickMenu *_quickMenu;
    IMYEBScrollToTopButton *_scrollToUpButton;
    UIView *_maskView;
    double _footerViewORIGHeight;
}

@property(nonatomic) _Bool isFooterHeightChanged; // @synthesize isFooterHeightChanged=_isFooterHeightChanged;
@property(nonatomic) double footerViewORIGHeight; // @synthesize footerViewORIGHeight=_footerViewORIGHeight;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) IMYEBScrollToTopButton *scrollToUpButton; // @synthesize scrollToUpButton=_scrollToUpButton;
@property(retain, nonatomic) IMYEBQuickMenu *quickMenu; // @synthesize quickMenu=_quickMenu;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *footLabel; // @synthesize footLabel=_footLabel;
@property(retain, nonatomic) IMYButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) __weak RACDisposable *meiyouOnlyDisposable; // @synthesize meiyouOnlyDisposable=_meiyouOnlyDisposable;
@property(retain, nonatomic) IMYEBSessionHeaderManager *headerManager; // @synthesize headerManager=_headerManager;
@property(retain, nonatomic) IMYEBSessionHybridTableManager *hybridManager; // @synthesize hybridManager=_hybridManager;
@property(retain, nonatomic) IMYEBSessionTableManager *tableManager; // @synthesize tableManager=_tableManager;
@property(retain, nonatomic) IMYEBSessionWaterManager *waterManager; // @synthesize waterManager=_waterManager;
@property(retain, nonatomic) IMYEBSessionVM *sessionVM; // @synthesize sessionVM=_sessionVM;
@property(retain, nonatomic) IMYEBSessionDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) IMYEBSessionCommonModel *commonModel; // @synthesize commonModel=_commonModel;
@property(retain, nonatomic) IMYEBSessionViewManager *currentViewManager; // @synthesize currentViewManager=_currentViewManager;
@property(retain, nonatomic) IMYCaptionView *tabCaptionView; // @synthesize tabCaptionView=_tabCaptionView;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) IMYEBBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *adzone_id; // @synthesize adzone_id=_adzone_id;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(nonatomic) _Bool no_next_brand; // @synthesize no_next_brand=_no_next_brand;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(nonatomic) long long activity_id; // @synthesize activity_id=_activity_id;
@property(nonatomic) long long brand_area_id; // @synthesize brand_area_id=_brand_area_id;
@property(nonatomic) long long item_id; // @synthesize item_id=_item_id;
- (void).cxx_destruct;
- (void)topRightShareButtonTouchUpAction:(id)arg1;
- (void)onCouponClick:(id)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (void)setVarID:(long long)arg1;
- (void)nextBrandButtonPressed;
- (void)changeFooterViewHeight;
- (void)setupFooterView;
- (void)reloadShowData;
- (_Bool)refreshViewWithSessionDataModel:(id)arg1 sessionCommonModel:(id)arg2;
- (void)loadViewManagerWithStyle:(long long)arg1;
- (void)requestFinishedWithSessionDataModel:(id)arg1 commonModel:(id)arg2 isRequest:(_Bool)arg3;
- (void)showSessionToast;
- (void)initViewModel;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldFakeNavigationBarTransition;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onMaskViewTap:(id)arg1;
- (void)loadView;
- (void)didScrollViewScrollToSection:(long long)arg1;
- (_Bool)fullPopGestureRecognizerShouldBegin:(id)arg1;
- (void)categorySelectionView:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)categorySelectionView:(id)arg1 didSelectAtIndex:(long long)arg2;
- (void)onCouponTabClick:(id)arg1 atIndex:(long long)arg2;
- (id)getShareType;
- (id)getShareURIPath;
- (id)getShareParams;
- (_Bool)cellShouldSelected:(id)arg1;
- (void)cellDidSetting:(id)arg1;
- (id)footerLabelString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
