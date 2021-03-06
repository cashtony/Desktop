//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface NIMKitDataRequest : NSObject
{
    NSMutableArray *_requstUserIdArray;
    _Bool _isRequesting;
    NSMutableSet *_failedUserIds;
    long long _maxMergeCount;
}

@property(nonatomic) long long maxMergeCount; // @synthesize maxMergeCount=_maxMergeCount;
@property(retain, nonatomic) NSMutableSet *failedUserIds; // @synthesize failedUserIds=_failedUserIds;
- (void).cxx_destruct;
- (_Bool)shouldAddToFailedUsers:(id)arg1;
- (void)afterReuquest:(id)arg1;
- (void)request;
- (void)requestUserIds:(id)arg1;
- (id)init;

@end

