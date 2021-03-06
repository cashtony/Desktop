//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class NSMutableDictionary, UITextField;

@interface KeyboardToolBar : UIToolbar
{
    UITextField *_toolBarTextField;
    NSMutableDictionary *_allRegisters;
}

+ (id)shareKeyboardToolBar;
+ (void)unregisterKeyboardToolBarWithTextField:(id)arg1;
+ (void)registerKeyboardToolBarWithTextField:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *allRegisters; // @synthesize allRegisters=_allRegisters;
@property(retain, nonatomic) UITextField *toolBarTextField; // @synthesize toolBarTextField=_toolBarTextField;
- (void).cxx_destruct;
- (void)resignKeyboard;
- (void)reSetTextField:(id)arg1;
- (void)textFieldDidChangeWithTextField:(id)arg1;
- (void)textFieldDidBeginWithTextField:(id)arg1;

@end

