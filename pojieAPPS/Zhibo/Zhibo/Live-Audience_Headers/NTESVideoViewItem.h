//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NIMSession, NSString;

@interface NTESVideoViewItem : NSObject
{
    NSString *_itemId;
    NSString *_path;
    NSString *_url;
    NIMSession *_session;
}

@property(retain, nonatomic) NIMSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

