//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView;

@interface YQMineFriendVersinonVM : NSObject
{
    NSArray *_datas;
    UIView *_myInfoView;
}

@property(retain, nonatomic) UIView *myInfoView; // @synthesize myInfoView=_myInfoView;
@property(retain, nonatomic) NSArray *datas; // @synthesize datas=_datas;
- (void).cxx_destruct;
- (_Bool)userCamearIVHiddenState;
- (id)modeIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelecetedCellIndexPath:(id)arg2;
- (double)heightForFooterIndexPaht:(long long)arg1;
- (double)heighForHeaderIndexPath:(long long)arg1;
- (double)heighForCellIndexPath:(id)arg1;
- (id)tableview:(id)arg1 cellForIndexPath:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSection;
- (void)refreshData;
- (void)loadDatas;
- (id)init;

@end

