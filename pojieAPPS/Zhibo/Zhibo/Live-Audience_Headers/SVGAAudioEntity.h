//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SVGAAudioEntity : NSObject
{
    NSString *_audioKey;
    long long _startFrame;
    long long _endFrame;
    long long _startTime;
}

@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long endFrame; // @synthesize endFrame=_endFrame;
@property(nonatomic) long long startFrame; // @synthesize startFrame=_startFrame;
@property(retain, nonatomic) NSString *audioKey; // @synthesize audioKey=_audioKey;
- (void).cxx_destruct;
- (id)initWithProtoObject:(id)arg1;

@end

