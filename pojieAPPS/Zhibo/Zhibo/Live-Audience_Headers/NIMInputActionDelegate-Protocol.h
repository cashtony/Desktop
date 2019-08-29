//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NIMMediaItem, NSArray, NSString;

@protocol NIMInputActionDelegate <NSObject>

@optional
- (void)onTapVoiceBtn:(id)arg1;
- (void)onTapEmoticonBtn:(id)arg1;
- (void)onTapMoreBtn:(id)arg1;
- (void)onStartRecording;
- (void)onStopRecording;
- (void)onCancelRecording;
- (void)onSelectChartlet:(NSString *)arg1 catalog:(NSString *)arg2;
- (void)onSendText:(NSString *)arg1 atUsers:(NSArray *)arg2;
- (void)onTextChanged:(id)arg1;
- (_Bool)onTapMediaItem:(NIMMediaItem *)arg1;
@end
