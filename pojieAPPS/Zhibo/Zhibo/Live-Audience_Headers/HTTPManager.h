//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HTTPManager : NSObject
{
}

+ (void)getWithUrl:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (void)successCode:(id)arg1;
+ (void)handleError:(id)arg1 failHander:(CDUnknownBlockType)arg2;
+ (void)handleSuccessWithTask:(id)arg1 responseObject:(id)arg2 successHander:(CDUnknownBlockType)arg3 failHander:(CDUnknownBlockType)arg4;
+ (id)appendParams:(id)arg1;
+ (id)handleUrl:(id)arg1;
+ (id)UploadWithUrl:(id)arg1 Params:(id)arg2 uploadData:(id)arg3 successHander:(CDUnknownBlockType)arg4 failHander:(CDUnknownBlockType)arg5;
+ (id)PostWithUrl:(id)arg1 Params:(id)arg2 successHander:(CDUnknownBlockType)arg3 failHander:(CDUnknownBlockType)arg4;
+ (id)GetWithUrl:(id)arg1 Params:(id)arg2 successHander:(CDUnknownBlockType)arg3 failHander:(CDUnknownBlockType)arg4;

@end
