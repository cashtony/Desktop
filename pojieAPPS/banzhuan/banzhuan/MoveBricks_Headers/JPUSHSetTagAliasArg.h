//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSInvocation, NSSet, NSString, NSTimer;

@interface JPUSHSetTagAliasArg : NSObject <NSCopying>
{
    NSTimer *_timeoutTimer;
    NSSet *_tags;
    NSString *_alias;
    unsigned long long _type;
    CDUnknownBlockType _completionHandler;
    NSInvocation *_cbInvocation;
    id _target;
    unsigned long long _sequence;
}

@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSInvocation *cbInvocation; // @synthesize cbInvocation=_cbInvocation;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSSet *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (void)p_deQueueFromTcpBlockQueue;
- (void)onTimeout:(id)arg1;
- (void)stopTimeoutTimer;
- (void)beginTimeoutTimer;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
