//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSString, UITableView, UIView, YBBToolsChildbirthBagAddHeaderView, YBBToolsChildbirthBagSearchHeaderView, YBBToolsChildbirthBagSearchVM;

@interface YBBToolsChildbirthBagSearchVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _captionAddViewState;
    CDUnknownBlockType _selectName;
    YBBToolsChildbirthBagSearchVM *_vm;
    YBBToolsChildbirthBagSearchHeaderView *_searchNavView;
    UITableView *_mainTableView;
    YBBToolsChildbirthBagAddHeaderView *_headerView;
    IMYCaptionView *_captionView;
    UIView *_captionAddView;
    long long _lastStatusBarStyle;
}

@property(nonatomic) long long lastStatusBarStyle; // @synthesize lastStatusBarStyle=_lastStatusBarStyle;
@property(nonatomic) _Bool captionAddViewState; // @synthesize captionAddViewState=_captionAddViewState;
@property(nonatomic) __weak UIView *captionAddView; // @synthesize captionAddView=_captionAddView;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) YBBToolsChildbirthBagAddHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) YBBToolsChildbirthBagSearchHeaderView *searchNavView; // @synthesize searchNavView=_searchNavView;
@property(retain, nonatomic) YBBToolsChildbirthBagSearchVM *vm; // @synthesize vm=_vm;
@property(copy, nonatomic) CDUnknownBlockType selectName; // @synthesize selectName=_selectName;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initViewControllerWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
