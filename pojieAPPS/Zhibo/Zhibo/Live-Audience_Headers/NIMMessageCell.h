//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NIMMessageContentViewDelegate-Protocol.h"
#import "NIMPlayAudioUIDelegate-Protocol.h"

@class NIMAvatarImageView, NIMBadgeView, NIMMessageModel, NIMSessionMessageContentView, NSArray, NSString, UIActivityIndicatorView, UIButton, UILabel, UILongPressGestureRecognizer, UIMenuController;
@protocol NIMMessageCellDelegate;

@interface NIMMessageCell : UITableViewCell <NIMPlayAudioUIDelegate, NIMMessageContentViewDelegate>
{
    UILongPressGestureRecognizer *_longPressGesture;
    UIMenuController *_menuController;
    NIMAvatarImageView *_headImageView;
    UILabel *_nameLabel;
    NIMSessionMessageContentView *_bubbleView;
    UIActivityIndicatorView *_traningActivityIndicator;
    UIButton *_retryButton;
    NIMBadgeView *_audioPlayedIcon;
    UIButton *_readButton;
    id <NIMMessageCellDelegate> _delegate;
    NIMMessageModel *_model;
    NSArray *_customViews;
}

@property(copy, nonatomic) NSArray *customViews; // @synthesize customViews=_customViews;
@property(retain, nonatomic) NIMMessageModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <NIMMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *readButton; // @synthesize readButton=_readButton;
@property(retain, nonatomic) NIMBadgeView *audioPlayedIcon; // @synthesize audioPlayedIcon=_audioPlayedIcon;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UIActivityIndicatorView *traningActivityIndicator; // @synthesize traningActivityIndicator=_traningActivityIndicator;
@property(retain, nonatomic) NIMSessionMessageContentView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NIMAvatarImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)onPressReadButton:(id)arg1;
- (void)onLongPressAvatar:(id)arg1;
- (void)onTapAvatar:(id)arg1;
- (struct CGSize)avatarSize;
- (struct CGPoint)cellPaddingToNick;
- (struct CGPoint)cellPaddingToAvatar;
- (double)readButtonBubblePadding;
- (double)audioPlayedIconBubblePadding;
- (_Bool)readLabelHidden;
- (_Bool)unreadHidden;
- (_Bool)activityIndicatorHidden;
- (double)retryButtonBubblePadding;
- (_Bool)retryButtonHidden;
- (_Bool)needShowNickName;
- (_Bool)needShowAvatar;
- (struct CGRect)avatarViewRect;
- (void)retryDownloadMsg;
- (void)startPlayingAudioUI;
- (void)longGesturePress:(id)arg1;
- (void)onRetryMessage:(id)arg1;
- (void)onCatchEvent:(id)arg1;
- (void)layoutReadButton;
- (void)layoutAudioPlayedIcon;
- (void)layoutRetryButton;
- (void)layoutActivityIndicator;
- (void)layoutBubbleView;
- (void)layoutNameLabel;
- (void)layoutAvatar;
- (void)layoutSubviews;
- (void)addUserCustomViews;
- (void)addContentViewIfNotExist;
- (void)refreshReadButton;
- (void)refresh;
- (_Bool)checkData;
- (void)refreshData:(id)arg1;
- (void)makeGesture;
- (void)makeComponents;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

