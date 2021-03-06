//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, RACCommand, RACSubject, UITableView, YBBToolsMusicAssitantRHeaderView;

@interface YBBToolsMusicAssitantRecommendViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _bannerFold;
    RACCommand *_requestCommand;
    RACSubject *_selectSubject;
    RACSubject *_moreSubject;
    YBBToolsMusicAssitantRHeaderView *_bannerHeaderView;
    UITableView *_tableView;
    NSMutableArray *_groupList;
    NSMutableArray *_sceneList;
    NSMutableArray *_bannerList;
}

@property(nonatomic) _Bool bannerFold; // @synthesize bannerFold=_bannerFold;
@property(retain, nonatomic) NSMutableArray *bannerList; // @synthesize bannerList=_bannerList;
@property(retain, nonatomic) NSMutableArray *sceneList; // @synthesize sceneList=_sceneList;
@property(retain, nonatomic) NSMutableArray *groupList; // @synthesize groupList=_groupList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YBBToolsMusicAssitantRHeaderView *bannerHeaderView; // @synthesize bannerHeaderView=_bannerHeaderView;
@property(retain, nonatomic) RACSubject *moreSubject; // @synthesize moreSubject=_moreSubject;
@property(retain, nonatomic) RACSubject *selectSubject; // @synthesize selectSubject=_selectSubject;
@property(retain, nonatomic) RACCommand *requestCommand; // @synthesize requestCommand=_requestCommand;
- (void).cxx_destruct;
- (long long)musicAssitantRecommendClassifyCount;
- (double)musicAssitantRecommendSectionHeaderViewHeight;
- (double)musicAssitantRecommendTableHeaderViewHeight;
- (_Bool)classifyABTest;
- (id)classifyABTestSwitcher;
- (void)parseToObjectWithResponseData:(id)arg1;
- (void)layoutCell:(id)arg1 indexPath:(id)arg2;
- (void)layoutClassifyCell:(id)arg1 indexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetPlayHistoryPrivacy;
- (void)resetPlayHistory;
- (_Bool)dataIsEmpty;
- (void)addTableViewHeaderView;
- (void)setupTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

