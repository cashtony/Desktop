//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewModel.h"

@class IMYTLInviteService;

@interface IMYTLInviteVM : IMYTLViewModel
{
    IMYTLInviteService *_inviteService;
}

@property(retain, nonatomic) IMYTLInviteService *inviteService; // @synthesize inviteService=_inviteService;
- (void).cxx_destruct;
- (id)uploadIdentityID:(id)arg1 name:(id)arg2;
- (id)getInviteIdentitySignal;
- (id)getBabyImage;
- (id)getInviteEnabledSignal;
- (id)getInviteCodeSignal;
- (id)init;

@end
