//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YSF_NIMCustomAttachment-Protocol.h"

@class NSDictionary, NSString;

@interface YSFOrderOperation : NSObject <YSF_NIMCustomAttachment>
{
    long long _command;
    NSString *_target;
    NSString *_params;
    NSString *_label;
    NSString *_type;
    NSDictionary *_templateInfo;
}

+ (id)objectByDict:(id)arg1;
@property(copy, nonatomic) NSDictionary *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(nonatomic) long long command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)encodeAttachment;
- (id)thumbText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

