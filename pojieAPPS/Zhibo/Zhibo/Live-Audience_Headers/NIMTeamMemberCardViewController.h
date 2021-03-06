//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIActionSheetDelegate-Protocol.h"

@class NIMCommonTableDelegate, NIMTeamCardMemberItem, NIMUsrInfo, NSArray, NSString, UIAlertView, UITableView;
@protocol NIMTeamMemberCardActionDelegate;

@interface NIMTeamMemberCardViewController : UIViewController <UIActionSheetDelegate>
{
    UIAlertView *_kickAlertView;
    UIAlertView *_updateNickAlertView;
    id <NIMTeamMemberCardActionDelegate> _delegate;
    NIMTeamCardMemberItem *_member;
    NIMTeamCardMemberItem *_viewer;
    UITableView *_tableView;
    NIMUsrInfo *_usrInfo;
    NIMCommonTableDelegate *_delegator;
    NSArray *_data;
}

@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NIMCommonTableDelegate *delegator; // @synthesize delegator=_delegator;
@property(retain, nonatomic) NIMUsrInfo *usrInfo; // @synthesize usrInfo=_usrInfo;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NIMTeamCardMemberItem *viewer; // @synthesize viewer=_viewer;
@property(retain, nonatomic) NIMTeamCardMemberItem *member; // @synthesize member=_member;
@property(retain, nonatomic) id <NIMTeamMemberCardActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canUpdateTeamMember;
- (_Bool)canModifyTeamInfo;
- (_Bool)isOwner;
- (_Bool)isSelf;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)addManager:(id)arg1;
- (void)removeManager:(id)arg1;
- (void)updateMute:(id)arg1;
- (void)updateTeamRole;
- (void)updateTeamNick;
- (void)onKickBtnClick:(id)arg1;
- (id)memberTypeString:(long long)arg1;
- (void)refreshData;
- (void)buildData;
- (void)viewDidLoad;
- (id)initWithUserId:(id)arg1 team:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

