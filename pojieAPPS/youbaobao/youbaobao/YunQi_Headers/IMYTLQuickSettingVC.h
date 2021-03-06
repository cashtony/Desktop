//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewController.h"

@class IMYSimpleTableView, IMYTLQuickSettingVM, UIButton, UIView;

@interface IMYTLQuickSettingVC : IMYTLViewController
{
    _Bool _hasLogin;
    _Bool _showBack;
    _Bool _completeBackToHomeVC;
    _Bool _shouldDismiss;
    IMYTLQuickSettingVM *_viewModel;
    CDUnknownBlockType _complete;
    IMYSimpleTableView *_tableView;
    UIView *_footerView;
    UIButton *_confirmButton;
    UIButton *_go2longinButton;
}

@property(retain, nonatomic) UIButton *go2longinButton; // @synthesize go2longinButton=_go2longinButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak IMYSimpleTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(nonatomic) _Bool shouldDismiss; // @synthesize shouldDismiss=_shouldDismiss;
@property(nonatomic) _Bool completeBackToHomeVC; // @synthesize completeBackToHomeVC=_completeBackToHomeVC;
@property(nonatomic) _Bool showBack; // @synthesize showBack=_showBack;
@property(nonatomic) _Bool hasLogin; // @synthesize hasLogin=_hasLogin;
@property(retain, nonatomic) IMYTLQuickSettingVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)welcomeStartToShow;
- (_Bool)welcomeShowNavigationBar;
- (id)imy_pop:(_Bool)arg1;
- (void)initView;
- (void)initTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

