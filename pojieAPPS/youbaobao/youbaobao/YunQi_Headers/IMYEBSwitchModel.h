//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYEBSwitchData, NSDictionary, NSString;

@interface IMYEBSwitchModel : NSObject
{
    _Bool _status;
    NSString *_type;
    NSString *_message;
    IMYEBSwitchData *_data;
    NSDictionary *_dataDictionary;
}

+ (void)initialize;
@property(retain, nonatomic) NSDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
@property(retain, nonatomic) IMYEBSwitchData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) _Bool status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
