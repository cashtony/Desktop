//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYTLPhotoPickerItem, IMYTLPhotoPickerModel, UITapGestureRecognizer;

@interface IMYTLPhotoPickerCell : UITableViewCell
{
    IMYTLPhotoPickerItem *_item0;
    IMYTLPhotoPickerItem *_item1;
    IMYTLPhotoPickerItem *_item2;
    IMYTLPhotoPickerItem *_item3;
    IMYTLPhotoPickerModel *_mode;
    CDUnknownBlockType _selectedBlock;
    CDUnknownBlockType _tapBlock;
    UITapGestureRecognizer *_item0Tap;
    UITapGestureRecognizer *_item1Tap;
    UITapGestureRecognizer *_item2Tap;
    UITapGestureRecognizer *_item3Tap;
}

@property(retain, nonatomic) UITapGestureRecognizer *item3Tap; // @synthesize item3Tap=_item3Tap;
@property(retain, nonatomic) UITapGestureRecognizer *item2Tap; // @synthesize item2Tap=_item2Tap;
@property(retain, nonatomic) UITapGestureRecognizer *item1Tap; // @synthesize item1Tap=_item1Tap;
@property(retain, nonatomic) UITapGestureRecognizer *item0Tap; // @synthesize item0Tap=_item0Tap;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(retain, nonatomic) IMYTLPhotoPickerModel *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) IMYTLPhotoPickerItem *item3; // @synthesize item3=_item3;
@property(retain, nonatomic) IMYTLPhotoPickerItem *item2; // @synthesize item2=_item2;
@property(retain, nonatomic) IMYTLPhotoPickerItem *item1; // @synthesize item1=_item1;
@property(retain, nonatomic) IMYTLPhotoPickerItem *item0; // @synthesize item0=_item0;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)update:(id)arg1 animation:(_Bool)arg2;
- (void)itemSelectedBtnAction:(id)arg1;
- (void)itemMaskTapAction:(id)arg1;
- (void)setupSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
