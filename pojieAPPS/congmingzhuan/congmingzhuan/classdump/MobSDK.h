//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MobSDK : NSObject
{
}

+ (id)domainStrFromDomainType:(unsigned long long)arg1;
+ (void)setInternationalDomain:(unsigned long long)arg1;
+ (id)getInternationalDomain;
+ (void)waitForLogAuth:(CDUnknownBlockType)arg1;
+ (void)_setupService;
+ (void)_appDidChangeStatusBarOrientation:(id)arg1;
+ (void)_appDidFinishedLaunching:(id)arg1;
+ (void)clearUser;
+ (void)setUserWithUid:(id)arg1 nickName:(id)arg2 avatar:(id)arg3 sign:(id)arg4 userData:(id)arg5;
+ (void)setUserWithUid:(id)arg1 nickName:(id)arg2 avatar:(id)arg3 userData:(id)arg4;
+ (void)loadRegDomain;
+ (void)registerAppKey:(id)arg1 appSecret:(id)arg2;
+ (void)load;
+ (void)waitForInitSucceed:(CDUnknownBlockType)arg1;
+ (long long)statusBarOrientation;
+ (id)userIdentity;
+ (void)mustBeUsedFrameworkWithIdfa;
+ (id)duid;
+ (void)changeAppSecret:(id)arg1;
+ (id)appSecret;
+ (id)appKey;
+ (id)version;
+ (void)initialize;

@end

