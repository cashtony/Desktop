//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MRTConsumer, MRTConsumerActivityOption, MRTConsumerRecentActivity, MRTGradientView, MRTRefreshControl, MRTStyledLabel, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UITableView, UIView;

@interface MRTConsumerActivityViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _fetching;
    _Bool _showingBalances;
    MRTConsumer *_consumer;
    MRTConsumerRecentActivity *_activity;
    UILabel *_pointsTitleLabel;
    UILabel *_pointsValueLabel;
    UILabel *_nightsTitleLabel;
    UILabel *_nightsValueLabel;
    MRTGradientView *_headerView;
    UIButton *_typeFilterButton;
    UIButton *_timeFilterButton;
    UIButton *_qualifyingActivityButton;
    UIButton *_missingStayButton;
    MRTStyledLabel *_hotelBillMessageLabel;
    UIView *_hotelBillMessageView;
    NSLayoutConstraint *_hotelBillMessageViewZeroHeightConstraint;
    UITableView *_tableView;
    UIView *_messageView;
    UILabel *_messageLabel;
    UIButton *_noActivityMissingStayButton;
    NSLayoutConstraint *_noActivityMissingStayLinkLeftMarginConstraint;
    NSLayoutConstraint *_noActivityMissingStayLinkBottomMarginConstraint;
    UIActivityIndicatorView *_activityView;
    MRTRefreshControl *_refreshControl;
    UIView *_tableHeaderView;
    MRTConsumerActivityOption *_timeFilter;
    MRTConsumerActivityOption *_typeFilter;
    NSArray *_currentActivities;
    NSArray *_currentBalances;
}

@property(nonatomic) _Bool showingBalances; // @synthesize showingBalances=_showingBalances;
@property(retain, nonatomic) NSArray *currentBalances; // @synthesize currentBalances=_currentBalances;
@property(retain, nonatomic) NSArray *currentActivities; // @synthesize currentActivities=_currentActivities;
@property(retain, nonatomic) MRTConsumerActivityOption *typeFilter; // @synthesize typeFilter=_typeFilter;
@property(retain, nonatomic) MRTConsumerActivityOption *timeFilter; // @synthesize timeFilter=_timeFilter;
@property(nonatomic) _Bool fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MRTRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) NSLayoutConstraint *noActivityMissingStayLinkBottomMarginConstraint; // @synthesize noActivityMissingStayLinkBottomMarginConstraint=_noActivityMissingStayLinkBottomMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *noActivityMissingStayLinkLeftMarginConstraint; // @synthesize noActivityMissingStayLinkLeftMarginConstraint=_noActivityMissingStayLinkLeftMarginConstraint;
@property(retain, nonatomic) UIButton *noActivityMissingStayButton; // @synthesize noActivityMissingStayButton=_noActivityMissingStayButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSLayoutConstraint *hotelBillMessageViewZeroHeightConstraint; // @synthesize hotelBillMessageViewZeroHeightConstraint=_hotelBillMessageViewZeroHeightConstraint;
@property(retain, nonatomic) UIView *hotelBillMessageView; // @synthesize hotelBillMessageView=_hotelBillMessageView;
@property(retain, nonatomic) MRTStyledLabel *hotelBillMessageLabel; // @synthesize hotelBillMessageLabel=_hotelBillMessageLabel;
@property(retain, nonatomic) UIButton *missingStayButton; // @synthesize missingStayButton=_missingStayButton;
@property(retain, nonatomic) UIButton *qualifyingActivityButton; // @synthesize qualifyingActivityButton=_qualifyingActivityButton;
@property(retain, nonatomic) UIButton *timeFilterButton; // @synthesize timeFilterButton=_timeFilterButton;
@property(retain, nonatomic) UIButton *typeFilterButton; // @synthesize typeFilterButton=_typeFilterButton;
@property(retain, nonatomic) MRTGradientView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *nightsValueLabel; // @synthesize nightsValueLabel=_nightsValueLabel;
@property(retain, nonatomic) UILabel *nightsTitleLabel; // @synthesize nightsTitleLabel=_nightsTitleLabel;
@property(retain, nonatomic) UILabel *pointsValueLabel; // @synthesize pointsValueLabel=_pointsValueLabel;
@property(retain, nonatomic) UILabel *pointsTitleLabel; // @synthesize pointsTitleLabel=_pointsTitleLabel;
@property(retain, nonatomic) MRTConsumerRecentActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) MRTConsumer *consumer; // @synthesize consumer=_consumer;
- (void).cxx_destruct;
- (void)reportMissingStay:(id)arg1;
- (void)showQualifyingDefinition:(id)arg1;
- (void)showTimeFilter:(id)arg1;
- (void)showTypeFilter:(id)arg1;
- (void)showOptionsSheetWithOptions:(id)arg1 sender:(id)arg2 selection:(CDUnknownBlockType)arg3;
- (id)missingStayRequestURL;
- (id)qualifyingPointsURL;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)activityCellForIndexPath:(id)arg1;
- (id)balanceCellForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)canShowDetail:(id)arg1;
- (void)loadTableView;
- (void)fetch:(_Bool)arg1;
- (void)updateProperties:(id)arg1 fetchIfNeeded:(_Bool)arg2;
- (void)refresh:(id)arg1;
- (void)oneButtonOverlayLayoutMarginsWillChange:(struct UIEdgeInsets)arg1;
- (void)setLayoutMarginsForCell:(id)arg1 withMargins:(struct UIEdgeInsets)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateFilterTitles;
- (void)viewDidLoad;
- (id)hotelBillMessage;
- (id)missingStayString;
- (id)qualifyingActivityString;
- (id)nightsThisYearTitleString;
- (id)pointsTitleString;
- (long long)preferredStatusBarStyle;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

