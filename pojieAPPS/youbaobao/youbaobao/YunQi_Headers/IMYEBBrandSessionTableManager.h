//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBSessionViewManager.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYEBBannerView, NSArray, NSString, UITableView, UITableViewCell;
@protocol IMYEBBannerModel, IMYEBCategoryListModel, IMYEBShopwindowModel;

@interface IMYEBBrandSessionTableManager : IMYEBSessionViewManager <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSArray<IMYEBCategoryListModel> *_categoryList;
    NSArray<IMYEBBannerModel> *_bannerList;
    NSArray<IMYEBShopwindowModel> *_showWindowList;
    UITableViewCell *_bannerCell;
    IMYEBBannerView *_bannerView;
    NSArray *_categoryCells;
}

@property(retain, nonatomic) NSArray *categoryCells; // @synthesize categoryCells=_categoryCells;
@property(retain, nonatomic) IMYEBBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UITableViewCell *bannerCell; // @synthesize bannerCell=_bannerCell;
@property(retain, nonatomic) NSArray<IMYEBShopwindowModel> *showWindowList; // @synthesize showWindowList=_showWindowList;
@property(retain, nonatomic) NSArray<IMYEBBannerModel> *bannerList; // @synthesize bannerList=_bannerList;
@property(retain, nonatomic) NSArray<IMYEBCategoryListModel> *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)windowCellWithTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)hasBanner;
- (_Bool)hasShowWindow;
- (_Bool)hasCategory;
- (long long)numberOfCategoryCells;
- (void)refreshCategory;
- (void)refreshBanner;
- (void)initBanner;
- (void)reloadData;
- (void)refreshViewInfo;
- (void)initContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
