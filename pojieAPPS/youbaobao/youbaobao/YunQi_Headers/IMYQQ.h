//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAuthBase.h"

#import "IMYIShareInterface-Protocol.h"
#import "QQApiInterfaceDelegate-Protocol.h"
#import "TencentSessionDelegate-Protocol.h"

@class NSString, TencentOAuth;

@interface IMYQQ : IMYAuthBase <QQApiInterfaceDelegate, TencentSessionDelegate, IMYIShareInterface>
{
    CDUnknownBlockType _shareCompletion;
    CDUnknownBlockType _loginCompletion;
    TencentOAuth *_oauth;
}

+ (_Bool)isAppInstalled;
@property(retain, nonatomic) TencentOAuth *oauth; // @synthesize oauth=_oauth;
@property(copy, nonatomic) CDUnknownBlockType loginCompletion; // @synthesize loginCompletion=_loginCompletion;
@property(copy, nonatomic) CDUnknownBlockType shareCompletion; // @synthesize shareCompletion=_shareCompletion;
- (void).cxx_destruct;
- (void)getUserInfoResponse:(id)arg1;
- (void)tencentDidNotNetWork;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)tencentDidLogin;
- (void)isOnlineResponse:(id)arg1;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (void)handleSendMessageToQQResponse:(id)arg1;
- (void)handleTencentAuthDidFinishWithResult:(_Bool)arg1 cancelled:(_Bool)arg2;
- (void)syncUserInfoWithAccessToken:(id)arg1 userId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleLoginFailedWithError:(id)arg1;
- (void)handleLoginSuccess;
- (void)getUserInfoWithAuthOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareContent:(id)arg1 shareType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)canHandleURL:(id)arg1;
- (void)registerApp:(id)arg1 appSecret:(id)arg2 redirectUri:(id)arg3;
- (id)createUserWithNickname:(id)arg1 uid:(id)arg2;
- (void)checkExpired;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

