//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTQCheckService : NSObject
{
}

+ (_Bool)userStatusCheckWithUserStatus:(long long)arg1 userErrorTipsMessage:(id)arg2;
+ (_Bool)checkShouldUnFollowWithUserStatus:(long long)arg1;
+ (_Bool)checkShouldFollowWithUserStatus:(long long)arg1;
+ (_Bool)checkShouldPraiseWithUserStatus:(long long)arg1 hasPraise:(_Bool)arg2;

@end
