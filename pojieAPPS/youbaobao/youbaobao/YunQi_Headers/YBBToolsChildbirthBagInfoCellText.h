//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UITextField;

@interface YBBToolsChildbirthBagInfoCellText : UITableViewCell
{
    UILabel *_titleLabel;
    UITextField *_textField;
    UILabel *_caoLabel;
}

@property(nonatomic) __weak UILabel *caoLabel; // @synthesize caoLabel=_caoLabel;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setCellWithModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
