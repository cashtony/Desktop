//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYREasyInputView.h"

#import "IMYREmoticonInputViewDelegate-Protocol.h"

@class IMYREmoticonInputView, IMYTouchEXButton, NSString, TTQCameraButton, TTQPublishPhotoView, UIScrollView, UIView;

@interface TTQInputView : IMYREasyInputView <IMYREmoticonInputViewDelegate>
{
    _Bool _open_pregnancy_album;
    _Bool _isFirstTime;
    TTQCameraButton *_cameraButton;
    IMYTouchEXButton *_emoticonButton;
    IMYTouchEXButton *_sendButton;
    TTQPublishPhotoView *_photoView;
    UIView *_bottomView;
    UIScrollView *_photoScrollView;
    long long _inputStatus;
    long long _inputType;
    UIView *_maskView;
    double _inputBottomForNone;
    double _hindenTopForPhotoScrollView;
    double _inputBottomForPhotoScrollView;
    double _inputBottomOffset;
    UIView *_textViewEmojiCover;
    IMYREmoticonInputView *_emojiInputView;
}

@property(nonatomic) _Bool isFirstTime; // @synthesize isFirstTime=_isFirstTime;
@property(retain, nonatomic) IMYREmoticonInputView *emojiInputView; // @synthesize emojiInputView=_emojiInputView;
@property(retain, nonatomic) UIView *textViewEmojiCover; // @synthesize textViewEmojiCover=_textViewEmojiCover;
@property(nonatomic) double inputBottomOffset; // @synthesize inputBottomOffset=_inputBottomOffset;
@property(nonatomic) double inputBottomForPhotoScrollView; // @synthesize inputBottomForPhotoScrollView=_inputBottomForPhotoScrollView;
@property(nonatomic) double hindenTopForPhotoScrollView; // @synthesize hindenTopForPhotoScrollView=_hindenTopForPhotoScrollView;
@property(nonatomic) double inputBottomForNone; // @synthesize inputBottomForNone=_inputBottomForNone;
@property(nonatomic) _Bool open_pregnancy_album; // @synthesize open_pregnancy_album=_open_pregnancy_album;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) long long inputType; // @synthesize inputType=_inputType;
@property(nonatomic) long long inputStatus; // @synthesize inputStatus=_inputStatus;
@property(retain, nonatomic) UIScrollView *photoScrollView; // @synthesize photoScrollView=_photoScrollView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) TTQPublishPhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) IMYTouchEXButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) IMYTouchEXButton *emoticonButton; // @synthesize emoticonButton=_emoticonButton;
@property(retain, nonatomic) TTQCameraButton *cameraButton; // @synthesize cameraButton=_cameraButton;
- (void).cxx_destruct;
- (void)didSendEmojiView:(id)arg1;
- (void)didDelEmojiView:(id)arg1;
- (void)didTouchEmojiView:(id)arg1 touchedEmoji:(id)arg2;
- (void)hidenMaskView;
- (void)showMaskView;
- (void)clearPhoto;
- (void)restPoseForInputEmoji;
- (void)restPoseForInputText;
- (void)restPoseForMultitudeInputPhoto;
- (void)restPose;
- (void)setupPhotoView;
- (void)showCameraButton;
- (void)hidenCameraButton;
- (void)setupCameraButton;
- (void)setupSendButtonForFill;
- (void)setupSendButton;
- (void)showPhoto;
- (void)emojiAction;
- (void)setupEmoticonButton;
- (void)setupTextView;
- (void)setupOnlyText;
- (void)setupPhotoMultitudeInner;
- (void)setupPhotoSingleOutlier;
- (id)initOnlyTextWithFrame:(struct CGRect)arg1;
- (id)initPhotoMultitudeInnerWithFrame:(struct CGRect)arg1;
- (id)initPhotoSingleOutlierWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

