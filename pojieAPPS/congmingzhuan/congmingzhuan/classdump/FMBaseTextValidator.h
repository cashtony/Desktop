//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/FMTextValidator-Protocol.h>

@class NSString;

@interface FMBaseTextValidator : NSObject <FMTextValidator>
{
    unsigned long long _maxLength;
    unsigned long long _minLength;
    NSString *_characterSet;
}

@property(copy, nonatomic) NSString *characterSet; // @synthesize characterSet=_characterSet;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
- (void).cxx_destruct;
- (_Bool)validateInputText:(id)arg1 atTriggerTiming:(unsigned long long)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

