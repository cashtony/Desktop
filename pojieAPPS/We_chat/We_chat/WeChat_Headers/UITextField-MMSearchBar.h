//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UIButton;

@interface UITextField (MMSearchBar)
+ (void)load;
- (struct CGRect)mmTransferRect:(struct CGRect)arg1;
- (struct CGRect)mmEditingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)mmTextRectForBounds:(struct CGRect)arg1;
@property(retain, nonatomic) UIButton *coverRightButton;
- (void)mmSetMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@end

