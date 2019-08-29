//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MRTAppNavigationPath, MRTLabeledContextButtonCell, MRTReservation, MRTStayServices, NSString, UICollectionView;

@interface MRTStayServicesHighlightViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_iconCollectionView;
    MRTAppNavigationPath *_nextNavigationPathForSegue;
    MRTLabeledContextButtonCell *_sizingCell;
    MRTStayServices *_currentStayServices;
    MRTReservation *_reservation;
}

+ (void)initialize;
@property(retain, nonatomic) MRTReservation *reservation; // @synthesize reservation=_reservation;
@property(retain, nonatomic) MRTStayServices *currentStayServices; // @synthesize currentStayServices=_currentStayServices;
@property(retain, nonatomic) MRTLabeledContextButtonCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) MRTAppNavigationPath *nextNavigationPathForSegue; // @synthesize nextNavigationPathForSegue=_nextNavigationPathForSegue;
@property(retain, nonatomic) UICollectionView *iconCollectionView; // @synthesize iconCollectionView=_iconCollectionView;
- (void).cxx_destruct;
- (void)navigateToPath:(id)arg1;
- (void)didTapPassForPoints;
- (void)didTapCallButton;
- (void)didTapChatButtonWithCompletion:(CDUnknownBlockType)arg1;
- (void)didTapChatButton;
- (unsigned long long)countOfCurrentSection:(unsigned long long)arg1 maxRowCount:(unsigned long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setUpSizingCell;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)insetAndInterItemSpacing;
- (id)formattedPropertyTelephoneNumber:(id)arg1;
- (void)addSelectorFromCategoryIdentifier:(id)arg1 withContextButtonCell:(id)arg2;
- (void)viewDidLoad;
- (void)setupHighlightParameters:(id)arg1 reservation:(id)arg2 sizingCell:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
