//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIWindow;

@interface MOBFAdController : NSObject
{
    MOBFAdController *_selfRetain;
    NSDictionary *_adInfo;
    UIWindow *_window;
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) NSDictionary *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) MOBFAdController *selfRetain; // @synthesize selfRetain=_selfRetain;
- (void).cxx_destruct;
- (void)openWebView:(id)arg1;
- (void)dismiss;
- (void)show;
- (id)initWithAdInfo:(id)arg1;

@end

