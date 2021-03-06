//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XLPagerTabStripViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, XLButtonBarView;
@protocol YQPagerTabStripCustomDatasource;

@interface YQTabButtonPagerViewController : XLPagerTabStripViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _shouldUpdateButtonBarView;
    _Bool _isViewAppearing;
    _Bool _isViewRotating;
    CDUnknownBlockType _changeCurrentIndexProgressiveBlock;
    CDUnknownBlockType _changeCurrentIndexBlock;
    id <YQPagerTabStripCustomDatasource> _customDatasource;
    XLButtonBarView *_buttonBarView;
}

@property(nonatomic) _Bool isViewRotating; // @synthesize isViewRotating=_isViewRotating;
@property(nonatomic) _Bool isViewAppearing; // @synthesize isViewAppearing=_isViewAppearing;
@property(nonatomic) _Bool shouldUpdateButtonBarView; // @synthesize shouldUpdateButtonBarView=_shouldUpdateButtonBarView;
@property(retain, nonatomic) XLButtonBarView *buttonBarView; // @synthesize buttonBarView=_buttonBarView;
@property(nonatomic) __weak id <YQPagerTabStripCustomDatasource> customDatasource; // @synthesize customDatasource=_customDatasource;
@property(copy) CDUnknownBlockType changeCurrentIndexBlock; // @synthesize changeCurrentIndexBlock=_changeCurrentIndexBlock;
@property(copy) CDUnknownBlockType changeCurrentIndexProgressiveBlock; // @synthesize changeCurrentIndexProgressiveBlock=_changeCurrentIndexProgressiveBlock;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)pagerTabStripViewController:(id)arg1 updateIndicatorFromIndex:(long long)arg2 toIndex:(long long)arg3 withProgressPercentage:(double)arg4 indexWasChanged:(_Bool)arg5;
- (void)pagerTabStripViewController:(id)arg1 updateIndicatorFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (double)calculateStretchedCellWidths:(id)arg1 suggestedStetchedCellWidth:(double)arg2 previousNumberOfLargeCells:(unsigned long long)arg3;
- (void)reloadPagerTabStripView;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

