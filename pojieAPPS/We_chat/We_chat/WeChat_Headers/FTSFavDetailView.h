//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTSResultView.h"

#import "IFTSFavMgrExt-Protocol.h"

@class NSString;

@interface FTSFavDetailView : FTSResultView <IFTSFavMgrExt>
{
}

- (void)onFTSDetailPageFavResultChanged;
- (void)selectFavSearchItem:(id)arg1 index:(unsigned int)arg2;
- (void)hideKeyboard;
- (_Bool)hasSearchDone:(id)arg1;
- (id)getSearchArray:(id)arg1;
- (void)pop;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)handleTextChanged:(id)arg1 immediately:(_Bool)arg2;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
