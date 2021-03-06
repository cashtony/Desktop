//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITabBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, IMYLineView, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface YBBToolsAlbumChartsVC : IMYPublicBaseViewController <UITabBarDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasGetXMUrl;
    _Bool _hasBanner;
    UIView *_headView;
    UIImageView *_headImageView;
    UITableView *_tableView;
    UIView *_topView;
    IMYCaptionView *_captionView;
    NSMutableArray *_rankList;
    UIView *_navBar;
    UILabel *_navBarTitle;
    UIButton *_navLeftButton;
    IMYLineView *_lineView;
}

@property(nonatomic) _Bool hasBanner; // @synthesize hasBanner=_hasBanner;
@property(retain, nonatomic) IMYLineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *navLeftButton; // @synthesize navLeftButton=_navLeftButton;
@property(retain, nonatomic) UILabel *navBarTitle; // @synthesize navBarTitle=_navBarTitle;
@property(retain, nonatomic) UIView *navBar; // @synthesize navBar=_navBar;
@property(nonatomic) _Bool hasGetXMUrl; // @synthesize hasGetXMUrl=_hasGetXMUrl;
@property(retain, nonatomic) NSMutableArray *rankList; // @synthesize rankList=_rankList;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)playAlbum:(long long)arg1;
- (void)queryXMUrl:(long long)arg1;
- (void)playAllAction:(id)arg1;
- (void)setupNavigationBar;
- (void)setupUI;
- (void)hideNavBar;
- (void)showNavbar;
- (void)requestRankData;
- (void)viewWillLayoutSubviews;
- (double)headViewH;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

