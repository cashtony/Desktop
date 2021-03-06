//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, UITableView;

@interface YBBToolsAlbumDropUpView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_coverView;
    UIView *_bottomContainView;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
    UITableView *_tableView;
    NSArray *_dataArray;
    long long _currentId;
    unsigned long long _trackTag;
    CDUnknownBlockType _handler;
}

+ (void)showWithTitle:(id)arg1 cancel:(id)arg2 currentId:(long long)arg3 trackTag:(unsigned long long)arg4 dataArray:(id)arg5 handler:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) unsigned long long trackTag; // @synthesize trackTag=_trackTag;
@property(nonatomic) long long currentId; // @synthesize currentId=_currentId;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bottomContainView; // @synthesize bottomContainView=_bottomContainView;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
- (void).cxx_destruct;
- (double)albumDropUpViewBottomHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)hide;
- (void)show;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

