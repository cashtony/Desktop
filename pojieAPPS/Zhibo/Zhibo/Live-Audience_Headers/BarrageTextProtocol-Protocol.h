//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BarrageViewProtocol-Protocol.h"

@class NSAttributedString, NSString, UIColor;

@protocol BarrageTextProtocol <BarrageViewProtocol>
@property(retain, nonatomic) NSAttributedString *attributedText;
@property(nonatomic) struct CGSize shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor;
@property(retain, nonatomic) NSString *fontFamily;
@property(nonatomic) double fontSize;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) NSString *text;
@end

