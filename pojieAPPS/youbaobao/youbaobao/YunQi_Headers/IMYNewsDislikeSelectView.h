//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IMYButton, IMYTouchEXImageView, NSArray, NSString, UICollectionView, UILabel;

@interface IMYNewsDislikeSelectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    CDUnknownBlockType _nextAction;
    CDUnknownBlockType _submitAction;
    IMYButton *_submitButton;
    UILabel *_titleLabel;
    UILabel *_complainLabel;
    IMYTouchEXImageView *_nextImageView;
    UICollectionView *_collectionView;
    NSArray *_dataArray;
}

@property(copy, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) IMYTouchEXImageView *nextImageView; // @synthesize nextImageView=_nextImageView;
@property(retain, nonatomic) UILabel *complainLabel; // @synthesize complainLabel=_complainLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IMYButton *submitButton; // @synthesize submitButton=_submitButton;
@property(copy, nonatomic) CDUnknownBlockType submitAction; // @synthesize submitAction=_submitAction;
@property(copy, nonatomic) CDUnknownBlockType nextAction; // @synthesize nextAction=_nextAction;
- (void).cxx_destruct;
- (void)updateSubmitButtonStatus:(_Bool)arg1;
- (void)setupUI;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)submitButtonClicked:(id)arg1;
- (void)nextTap:(id)arg1;
- (void)updateModels:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

