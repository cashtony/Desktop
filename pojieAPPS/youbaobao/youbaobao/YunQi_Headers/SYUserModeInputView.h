//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SYUserModeInputContentViewDelegate-Protocol.h"

@class NSString, SYUserModeInputContentView, SYUserModeInputResult, SYUserModeInputTopArrowView;

@interface SYUserModeInputView : UIView <SYUserModeInputContentViewDelegate>
{
    _Bool _isChangeMode;
    unsigned long long _userMode;
    CDUnknownBlockType _finishEdit;
    CDUnknownBlockType _bottomButtonClick;
    SYUserModeInputTopArrowView *_topArrowView;
    SYUserModeInputContentView *_currentContent;
    SYUserModeInputContentView *_forPregnantContent;
    SYUserModeInputContentView *_pregnancyContent;
    SYUserModeInputContentView *_lamaContent;
    UIView *_pregnancyBottomView;
    SYUserModeInputResult *_userInfo;
}

+ (double)mainViewHeightOfScreenSizeWithVCHeight:(double)arg1;
@property(retain, nonatomic) SYUserModeInputResult *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool isChangeMode; // @synthesize isChangeMode=_isChangeMode;
@property(retain, nonatomic) UIView *pregnancyBottomView; // @synthesize pregnancyBottomView=_pregnancyBottomView;
@property(retain, nonatomic) SYUserModeInputContentView *lamaContent; // @synthesize lamaContent=_lamaContent;
@property(retain, nonatomic) SYUserModeInputContentView *pregnancyContent; // @synthesize pregnancyContent=_pregnancyContent;
@property(retain, nonatomic) SYUserModeInputContentView *forPregnantContent; // @synthesize forPregnantContent=_forPregnantContent;
@property(retain, nonatomic) SYUserModeInputContentView *currentContent; // @synthesize currentContent=_currentContent;
@property(retain, nonatomic) SYUserModeInputTopArrowView *topArrowView; // @synthesize topArrowView=_topArrowView;
@property(copy, nonatomic) CDUnknownBlockType bottomButtonClick; // @synthesize bottomButtonClick=_bottomButtonClick;
@property(copy, nonatomic) CDUnknownBlockType finishEdit; // @synthesize finishEdit=_finishEdit;
@property(nonatomic) unsigned long long userMode; // @synthesize userMode=_userMode;
- (void).cxx_destruct;
- (id)checkIsFinishEdit;
- (id)contentWithType;
- (void)selectToBeFirstResponderWithIsInit:(_Bool)arg1;
- (void)changeContentView;
- (void)keyChange;
- (void)contentViewBottom:(double)arg1 hidden:(_Bool)arg2;
- (void)contentViewEditResultModel:(id)arg1;
- (void)setupContentView;
- (void)setupArrowViewWithArrowCenterXDict:(id)arg1 andUserMode:(unsigned long long)arg2;
- (id)initInputViewWithFrame:(struct CGRect)arg1 andUserInfo:(id)arg2 arrowCenterXsDict:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
