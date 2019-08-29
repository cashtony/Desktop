//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ContriButionListModel, NSString, RACCommand, UIButton, UIImageView, UILabel, UIView;

@interface ZPContributionListVCTableViewOtherCell : UITableViewCell
{
    ContriButionListModel *_model;
    NSString *_number;
    RACCommand *_followCommand;
    UILabel *_rankingView;
    UIImageView *_userIconImageView;
    UILabel *_userNameLabel;
    UIImageView *_sexImageView;
    UIImageView *_levelImageView;
    UILabel *_contributionLabel;
    UIImageView *_peerageImageView;
    UIButton *_followButton;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIImageView *peerageImageView; // @synthesize peerageImageView=_peerageImageView;
@property(retain, nonatomic) UILabel *contributionLabel; // @synthesize contributionLabel=_contributionLabel;
@property(retain, nonatomic) UIImageView *levelImageView; // @synthesize levelImageView=_levelImageView;
@property(retain, nonatomic) UIImageView *sexImageView; // @synthesize sexImageView=_sexImageView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userIconImageView; // @synthesize userIconImageView=_userIconImageView;
@property(retain, nonatomic) UILabel *rankingView; // @synthesize rankingView=_rankingView;
@property(retain, nonatomic) RACCommand *followCommand; // @synthesize followCommand=_followCommand;
@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
@property(retain, nonatomic) ContriButionListModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)bindViewModel;
- (void)setUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
