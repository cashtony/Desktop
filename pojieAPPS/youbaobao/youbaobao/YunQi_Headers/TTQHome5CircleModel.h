//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSArray, NSString, TTQHome5CircleEntryModel;
@protocol TTQHome5CircleItemModel;

@interface TTQHome5CircleModel : NSObject <YYJSONHelperProtocol>
{
    NSString *_title;
    NSArray<TTQHome5CircleItemModel> *_items;
    TTQHome5CircleEntryModel *_entry;
}

@property(retain, nonatomic) TTQHome5CircleEntryModel *entry; // @synthesize entry=_entry;
@property(retain, nonatomic) NSArray<TTQHome5CircleItemModel> *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

