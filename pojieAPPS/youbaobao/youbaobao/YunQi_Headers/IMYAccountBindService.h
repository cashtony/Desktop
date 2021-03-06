//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYAccountBindService : NSObject
{
}

+ (id)changeMobile:(id)arg1 nationCode:(long long)arg2 authNum:(id)arg3 password:(id)arg4;
+ (id)unbind:(long long)arg1 model:(id)arg2;
+ (id)unbindWithType:(long long)arg1 account:(id)arg2;
+ (id)unbindMobile:(id)arg1;
+ (id)unbindSocial:(long long)arg1 account:(id)arg2;
+ (id)bindMobile:(id)arg1 nationCode:(long long)arg2 authNum:(id)arg3 needPass:(_Bool)arg4 password:(id)arg5 type:(long long)arg6;
+ (id)bindSocial:(long long)arg1 account:(id)arg2 password:(id)arg3 expires:(long long)arg4 nickname:(id)arg5 gender:(long long)arg6 unionid:(id)arg7 rawData:(id)arg8;
+ (long long)bindTypeToShareType:(unsigned long long)arg1;
+ (void)handleChangeSuccess:(long long)arg1 token:(id)arg2 uid:(id)arg3 expirationDate:(id)arg4 nickname:(id)arg5;
+ (void)handleUnbindSuccess:(long long)arg1 account:(id)arg2;
+ (void)handleBindSuccess:(long long)arg1 token:(id)arg2 uid:(id)arg3 expirationDate:(id)arg4 nickname:(id)arg5;
+ (void)sendBindEvent:(long long)arg1;
+ (void)sendUnbindEvent:(long long)arg1;
+ (id)bindMobile:(id)arg1 password:(id)arg2;
+ (id)loginAndBindWithType:(unsigned long long)arg1;
+ (id)mobileSignalInVC:(id)arg1;
+ (id)socialSignalWithType:(long long)arg1;
+ (id)getUserInfoSignal:(long long)arg1;
+ (void)loginAndBindWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)unbind:(long long)arg1 model:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)unbindMobile:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)unbindSocial:(long long)arg1 model:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)changeMobile:(id)arg1 nationCode:(long long)arg2 authNum:(id)arg3 password:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)bindMobile:(id)arg1 nationCode:(long long)arg2 authNum:(id)arg3 needPass:(_Bool)arg4 password:(id)arg5 type:(long long)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)bindSocial:(id)arg1 password:(id)arg2 expires:(long long)arg3 nickname:(id)arg4 gender:(long long)arg5 unionid:(id)arg6 shareType:(long long)arg7 rawData:(id)arg8 completion:(CDUnknownBlockType)arg9;

@end

