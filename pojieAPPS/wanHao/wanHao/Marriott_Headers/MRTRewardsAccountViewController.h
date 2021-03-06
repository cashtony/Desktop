//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "MRTBusinessChatLauncherViewControllerDelegate-Protocol.h"
#import "MRTRewardsProgressContainerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MRTAppNavigationPath, MRTContextButtonItem, MRTFeaturedTileItem, MRTStyledLabel, NSArray, NSString;

@interface MRTRewardsAccountViewController : UITableViewController <UIScrollViewDelegate, MRTBusinessChatLauncherViewControllerDelegate, MRTRewardsProgressContainerDelegate>
{
    _Bool _isTitleLabelAnchored;
    NSArray *_cellIdentifiers;
    MRTAppNavigationPath *_nextNavigationPathForSegue;
    double _lastContentOffset;
    MRTFeaturedTileItem *_creditCardTileItem;
    MRTFeaturedTileItem *_promotionalOfferTileItem;
    MRTFeaturedTileItem *_memberLevelTileItem;
    MRTFeaturedTileItem *_updateProfileTileItem;
    MRTStyledLabel *_customTitleLabel;
    MRTContextButtonItem *_settingsButtonItem;
    MRTContextButtonItem *_businessChatButtonItem;
}

+ (id)settingsCoachMarkSkipText;
+ (id)settingsCoachMarkMessage;
+ (void)resetAllCoachMarks;
@property(retain, nonatomic) MRTContextButtonItem *businessChatButtonItem; // @synthesize businessChatButtonItem=_businessChatButtonItem;
@property(retain, nonatomic) MRTContextButtonItem *settingsButtonItem; // @synthesize settingsButtonItem=_settingsButtonItem;
@property(nonatomic) _Bool isTitleLabelAnchored; // @synthesize isTitleLabelAnchored=_isTitleLabelAnchored;
@property(retain, nonatomic) MRTStyledLabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(retain, nonatomic) MRTFeaturedTileItem *updateProfileTileItem; // @synthesize updateProfileTileItem=_updateProfileTileItem;
@property(retain, nonatomic) MRTFeaturedTileItem *memberLevelTileItem; // @synthesize memberLevelTileItem=_memberLevelTileItem;
@property(retain, nonatomic) MRTFeaturedTileItem *promotionalOfferTileItem; // @synthesize promotionalOfferTileItem=_promotionalOfferTileItem;
@property(retain, nonatomic) MRTFeaturedTileItem *creditCardTileItem; // @synthesize creditCardTileItem=_creditCardTileItem;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) MRTAppNavigationPath *nextNavigationPathForSegue; // @synthesize nextNavigationPathForSegue=_nextNavigationPathForSegue;
@property(retain, nonatomic) NSArray *cellIdentifiers; // @synthesize cellIdentifiers=_cellIdentifiers;
- (void).cxx_destruct;
- (void)unwindFromEditConsumer:(id)arg1;
- (void)rewardsProgressContainerCollectionViewCellMemberButtonWasTapped:(id)arg1;
- (id)settingsCoachMarkConfiguration;
- (_Bool)_settingsCoachMarkIsCompleted;
- (void)_markSettingsCoachMarkAsComplete;
- (void)_closeCoachMark;
- (void)_handleCoachMarkSkipTap;
- (_Bool)_shouldShowSettingsCoachMark;
- (void)showSettingsCoachMarkIfNeeded;
- (Class)rewardsProgressCellClass;
- (id)tileItemFromPageLayoutTemplate:(id)arg1;
- (void)_fetchTemplates;
- (void)navigateToPath:(id)arg1;
- (void)businessChatLauncherViewControllerDidChat:(id)arg1;
- (void)businessChatLauncherViewControllerDidCancel:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)rewardsProgressContainerCell:(id)arg1 foregroundColorDidChange:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)chatButtonTapped:(id)arg1;
- (void)showSettings:(id)arg1;
- (void)showNextLevelAchievement;
- (_Bool)shouldShowNextLevelAchievement;
- (_Bool)countrySupportsBusinessChat;
- (_Bool)supportsBusinessChat;
- (id)contextButtonItems;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)oneButtonOverlayLayoutMarginsWillChange:(struct UIEdgeInsets)arg1;
- (void)updateView:(id)arg1 withMargins:(struct UIEdgeInsets)arg2;
- (void)reloadData;
- (void)updateUI;
- (void)updateTintColor;
- (void)setupOneButton;
- (long long)preferredStatusBarStyle;
- (void)updateCellIdentifiers;
- (id)appNavigationIdentifier;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)oneButtonOverlayViewWillDisplay;
- (void)updateAccessibility;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_dataUpdated;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

