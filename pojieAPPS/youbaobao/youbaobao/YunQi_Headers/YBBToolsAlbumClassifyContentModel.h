//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface YBBToolsAlbumClassifyContentModel : NSObject
{
    _Bool _isAge;
    long long _classifyId;
    NSString *_name;
    long long _type;
    NSArray *_albumList;
}

+ (id)modelContainerPropertyGenericClass;
+ (void)initialize;
@property(copy, nonatomic) NSArray *albumList; // @synthesize albumList=_albumList;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isAge; // @synthesize isAge=_isAge;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long classifyId; // @synthesize classifyId=_classifyId;
- (void).cxx_destruct;

@end
