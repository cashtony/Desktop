//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol IMYYQAlbumBookImageViewDelegate;

@interface YBBToolsAlbumBookImageView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_models;
    id <IMYYQAlbumBookImageViewDelegate> _delegate;
    UICollectionView *_collectionViewBar;
    double _startContentOffsetX;
    double _willEndContentOffsetX;
}

@property(nonatomic) double willEndContentOffsetX; // @synthesize willEndContentOffsetX=_willEndContentOffsetX;
@property(nonatomic) double startContentOffsetX; // @synthesize startContentOffsetX=_startContentOffsetX;
@property(retain, nonatomic) UICollectionView *collectionViewBar; // @synthesize collectionViewBar=_collectionViewBar;
@property(nonatomic) __weak id <IMYYQAlbumBookImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

