//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol IMYEBFlashSaleCommonItemModel;

@interface IMYEBFlashSaleCommonModel : NSObject
{
    long long _current_time;
    NSString *_head_title;
    NSString *_head_image;
    NSArray<IMYEBFlashSaleCommonItemModel> *_date_list;
    NSArray *_multiple_banner_list;
}

@property(retain, nonatomic) NSArray *multiple_banner_list; // @synthesize multiple_banner_list=_multiple_banner_list;
@property(retain, nonatomic) NSArray<IMYEBFlashSaleCommonItemModel> *date_list; // @synthesize date_list=_date_list;
@property(copy, nonatomic) NSString *head_image; // @synthesize head_image=_head_image;
@property(copy, nonatomic) NSString *head_title; // @synthesize head_title=_head_title;
@property(nonatomic) long long current_time; // @synthesize current_time=_current_time;
- (void).cxx_destruct;
- (_Bool)isEqualToModel:(id)arg1;

@end

