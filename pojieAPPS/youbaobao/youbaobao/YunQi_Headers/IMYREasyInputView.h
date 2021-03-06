//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HPGrowingTextViewDelegate-Protocol.h"

@class HPGrowingTextView, UIImageView;
@protocol IMYREasyInputViewDelegate;

@interface IMYREasyInputView : UIView <HPGrowingTextViewDelegate>
{
    int _leftAlignType;
    int _rightAlignType;
    HPGrowingTextView *_textView;
    UIView *_leftView;
    UIView *_rightView;
    id <IMYREasyInputViewDelegate> _delegate;
    double _keyboardHeight;
    UIImageView *_bg;
}

+ (void)alertWithTitle:(id)arg1;
+ (_Bool)isBlankString:(id)arg1;
+ (id)inputView;
@property(retain, nonatomic) UIImageView *bg; // @synthesize bg=_bg;
@property double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) __weak id <IMYREasyInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int rightAlignType; // @synthesize rightAlignType=_rightAlignType;
@property(nonatomic) int leftAlignType; // @synthesize leftAlignType=_leftAlignType;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) HPGrowingTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (_Bool)isFirstResponder;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidChangeSelection:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)removeKeyboardNotify;
- (void)addKeyboardNotify;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

