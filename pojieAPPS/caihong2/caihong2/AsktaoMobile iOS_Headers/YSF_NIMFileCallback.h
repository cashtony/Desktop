//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YSF_NIMFileCallback : NSObject
{
    CDUnknownBlockType _progress;
    CDUnknownBlockType _downloadBlock;
    CDUnknownBlockType _uploadBlock;
}

@property(copy, nonatomic) CDUnknownBlockType uploadBlock; // @synthesize uploadBlock=_uploadBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadBlock; // @synthesize downloadBlock=_downloadBlock;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
- (void).cxx_destruct;

@end

