//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YSFQuickReplyKeyWordAndContent : NSObject
{
    NSString *_keyword;
    NSString *_content;
    NSString *_showContent;
    long long _isContentRich;
}

@property(nonatomic) long long isContentRich; // @synthesize isContentRich=_isContentRich;
@property(copy, nonatomic) NSString *showContent; // @synthesize showContent=_showContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;

@end

