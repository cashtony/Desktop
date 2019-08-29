//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UIScrollView, UITextField, UITextView;
@protocol NTESCreateTeamAnnouncementDelegate;

@interface NIMCreateTeamAnnouncement : UIViewController <UITextFieldDelegate, UITextViewDelegate>
{
    _Bool _canCreateAnnouncement;
    id <NTESCreateTeamAnnouncementDelegate> _delegate;
    NSString *_defaultTitle;
    NSString *_defaultContent;
    UITextField *_titleTextField;
    UITextView *_contentTextView;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UITextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(nonatomic) _Bool canCreateAnnouncement; // @synthesize canCreateAnnouncement=_canCreateAnnouncement;
@property(copy, nonatomic) NSString *defaultContent; // @synthesize defaultContent=_defaultContent;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(nonatomic) __weak id <NTESCreateTeamAnnouncementDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldAutorotate;
- (void)onSave:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
