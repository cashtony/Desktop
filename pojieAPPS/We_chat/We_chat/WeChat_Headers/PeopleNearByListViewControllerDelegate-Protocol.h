//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLbsAdvertismentInfo;

@protocol PeopleNearByListViewControllerDelegate <NSObject>
- (void)onSelectAd:(MMLbsAdvertismentInfo *)arg1;
- (void)onCloseAd:(MMLbsAdvertismentInfo *)arg1;
- (void)onUploadAddressbookBtnClicked;
- (void)onBindPhoneBtnClicked;
- (void)onChatRoomNearByBtnClicked;
@end
