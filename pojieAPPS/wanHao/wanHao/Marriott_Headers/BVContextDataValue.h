//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BVContextDataValue : NSObject
{
    NSString *_value;
    NSString *_valueLabel;
    NSString *_dimensionLabel;
    NSString *_identifier;
}

@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *dimensionLabel; // @synthesize dimensionLabel=_dimensionLabel;
@property(retain) NSString *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithApiResponse:(id)arg1;

@end
