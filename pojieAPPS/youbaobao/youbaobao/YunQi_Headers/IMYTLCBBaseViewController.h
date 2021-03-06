//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSString, UIButton, UILabel, UITableView, UIView;
@protocol IMYTLCBBaseVMProtocol;

@interface IMYTLCBBaseViewController : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    IMYCaptionView *_caption;
    UITableView *_tableview;
    id <IMYTLCBBaseVMProtocol> _vm;
    UIView *_noDataView;
    UILabel *_noDataTipLabel;
    UIButton *_noDataViewButton;
}

@property(retain, nonatomic) UIButton *noDataViewButton; // @synthesize noDataViewButton=_noDataViewButton;
@property(retain, nonatomic) UILabel *noDataTipLabel; // @synthesize noDataTipLabel=_noDataTipLabel;
@property(retain, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) id <IMYTLCBBaseVMProtocol> vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) IMYCaptionView *caption; // @synthesize caption=_caption;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)noDataButtonAction:(id)arg1;
- (id)cellIdentiyIndexPath:(id)arg1;
- (id)registeCellNibNameDictionary;
- (id)registeCellNameDictionary;
- (id)vmClass;
- (void)setupNoDataView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

