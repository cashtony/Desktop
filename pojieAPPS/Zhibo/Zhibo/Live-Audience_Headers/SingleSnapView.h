//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NIMCustomObject, UIProgressView;

@interface SingleSnapView : UIImageView
{
    UIProgressView *_progressView;
    NIMCustomObject *_messageObject;
}

@property(copy, nonatomic) NIMCustomObject *messageObject; // @synthesize messageObject=_messageObject;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setProgress:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 messageObject:(id)arg2;

@end

