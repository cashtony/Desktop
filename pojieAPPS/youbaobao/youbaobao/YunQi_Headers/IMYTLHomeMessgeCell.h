//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYAvatarImageView, UIButton, UIImageView, UILabel, UIView;

@interface IMYTLHomeMessgeCell : UITableViewCell
{
    UIView *_messageView;
    IMYAvatarImageView *_headerImageView;
    UILabel *_contentLabel;
    UIImageView *_arrowImageView;
    UIButton *_button;
}

@property(nonatomic) __weak UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak IMYAvatarImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) __weak UIView *messageView; // @synthesize messageView=_messageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

