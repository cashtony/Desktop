//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSString, UITableView, YBBTipsViewModel;

@interface YBBTipsKnowledgeVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    long long _categoryID;
    long long _wordID;
    NSString *_source;
    unsigned long long _userMode;
    UITableView *_tableView;
    IMYCaptionView *_captionView;
    YBBTipsViewModel *_viewModel;
}

@property(retain, nonatomic) YBBTipsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long userMode; // @synthesize userMode=_userMode;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) long long wordID; // @synthesize wordID=_wordID;
@property(nonatomic) long long categoryID; // @synthesize categoryID=_categoryID;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadCellImage;
- (void)initData;
- (void)setupCaptionView;
- (void)initTableView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

