//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString, WXMediaMessage;

@interface LaunchFromWXReq : BaseReq
{
    WXMediaMessage *_message;
    NSString *_lang;
    NSString *_country;
}

@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end

