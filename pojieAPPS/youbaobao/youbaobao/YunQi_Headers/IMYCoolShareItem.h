//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYCoolShareItem : NSObject
{
    NSString *_name;
    NSString *_normalIcon;
    NSString *_selectedIcon;
    NSString *_selectedName;
    long long _tag;
    CDUnknownBlockType _shareBlock;
}

+ (id)itemWithName:(id)arg1 icon:(id)arg2 tag:(long long)arg3;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *selectedName; // @synthesize selectedName=_selectedName;
@property(copy, nonatomic) NSString *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(copy, nonatomic) NSString *normalIcon; // @synthesize normalIcon=_normalIcon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
