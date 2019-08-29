//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKProductsRequestDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, NSURLSessionDataTask, SKProduct, SKProductsRequest, UITableView, UserModel;

@interface IAPViewController : BaseViewController <UITableViewDelegate, UITableViewDataSource, SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    _Bool _isOpen;
    SKProductsRequest *_request;
    SKProduct *_product;
    NSDictionary *_compareDict;
    long long _index;
    NSMutableArray *_TransactionArray;
    NSMutableArray *_productsIDarray;
    NSMutableArray *_dataList;
    NSURLSessionDataTask *task;
    NSString *_price;
    long long payType;
    _Bool _isAppPay;
    _Bool _iskamiPay;
    _Bool _isHome;
    UserModel *_userModel;
    UITableView *_tableView;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isHome; // @synthesize isHome=_isHome;
@property(retain, nonatomic) UserModel *userModel; // @synthesize userModel=_userModel;
- (void).cxx_destruct;
- (void)restoreTransaction:(id)arg1;
- (void)dealloc;
- (void)action_BarButtonPressed;
- (void)failedTransaction:(id)arg1;
- (void)errorkicked:(id)arg1;
- (void)completedTransactions:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)sendBuyRequest;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestProducts;
- (void)myrequest;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
