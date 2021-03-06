//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SYUserModeInputResult;

@interface SYUserModeInputContentVM : NSObject
{
    _Bool _isOpenCalculator;
    _Bool _isQuicklySetting;
    _Bool _isFPPeriodKeyboardJumped;
    _Bool _isPPeriodKeyboardJumped;
    _Bool _isLPeriodKeyboardJumped;
    CDUnknownBlockType _pickerConfirmBlock;
    CDUnknownBlockType _changeFirstResponderBlock;
    CDUnknownBlockType _openCalculatorBlock;
    NSArray *_tableViewDataArray;
    SYUserModeInputResult *_resultModel;
    unsigned long long _userMode;
    NSMutableArray *_cellModelsArray;
}

+ (id)getUserInfoWithUserMode:(unsigned long long)arg1;
@property(nonatomic) _Bool isLPeriodKeyboardJumped; // @synthesize isLPeriodKeyboardJumped=_isLPeriodKeyboardJumped;
@property(nonatomic) _Bool isPPeriodKeyboardJumped; // @synthesize isPPeriodKeyboardJumped=_isPPeriodKeyboardJumped;
@property(nonatomic) _Bool isFPPeriodKeyboardJumped; // @synthesize isFPPeriodKeyboardJumped=_isFPPeriodKeyboardJumped;
@property(retain, nonatomic) NSMutableArray *cellModelsArray; // @synthesize cellModelsArray=_cellModelsArray;
@property(nonatomic) unsigned long long userMode; // @synthesize userMode=_userMode;
@property(nonatomic) _Bool isQuicklySetting; // @synthesize isQuicklySetting=_isQuicklySetting;
@property(nonatomic) _Bool isOpenCalculator; // @synthesize isOpenCalculator=_isOpenCalculator;
@property(retain, nonatomic) SYUserModeInputResult *resultModel; // @synthesize resultModel=_resultModel;
@property(retain, nonatomic) NSArray *tableViewDataArray; // @synthesize tableViewDataArray=_tableViewDataArray;
@property(copy, nonatomic) CDUnknownBlockType openCalculatorBlock; // @synthesize openCalculatorBlock=_openCalculatorBlock;
@property(copy, nonatomic) CDUnknownBlockType changeFirstResponderBlock; // @synthesize changeFirstResponderBlock=_changeFirstResponderBlock;
@property(copy, nonatomic) CDUnknownBlockType pickerConfirmBlock; // @synthesize pickerConfirmBlock=_pickerConfirmBlock;
- (void).cxx_destruct;
- (id)dateFormatting:(id)arg1;
- (_Bool)judgePeriodContent:(_Bool)arg1;
- (_Bool)judgeDueDateContetnt;
- (_Bool)judgeContent;
- (void)editStateWithIsFinished:(_Bool)arg1;
- (long long)indexWithContentType:(unsigned long long)arg1;
- (_Bool)hasContentWithType:(unsigned long long)arg1;
- (_Bool)periodFirstResponderChangeWithCurrentContentType:(unsigned long long)arg1;
- (void)changeFirstResponderWithCellContentType:(unsigned long long)arg1;
- (id)dueDateWithLastPeriodDate:(id)arg1 andPeriodDays:(id)arg2 orDueDateString:(id)arg3;
- (id)openCalculateDueDate;
- (id)periodDaysCycleString;
- (id)periodDaysString;
- (_Bool)selectPeriodInfoWithData:(id)arg1 pickerView:(id)arg2 contentType:(unsigned long long)arg3;
- (_Bool)setDefaultSelectDataWithDataArray:(id)arg1 pickerView:(id)arg2 cellContentType:(unsigned long long)arg3;
- (id)miniumPregnantDate;
- (id)getPreganaEndDate;
- (id)pregnantPickerDate;
- (id)dataArrayWithCellContentType:(unsigned long long)arg1;
- (double)rowHeightAtIndexPath:(id)arg1;
- (id)calculateDueDate;
- (_Bool)date:(id)arg1 isBetweenDateData:(id)arg2;
- (id)cellModelWithContentType:(unsigned long long)arg1;
- (id)checkIsFinishEdit;
- (void)clickCalculateDueDateWithCellModel:(id)arg1;
- (id)getCalculateDueDateURL;
- (id)addCalCellModels;
- (void)setupLamaData;
- (void)setupPregnancyData;
- (void)setupForPregnantData;
- (void)setupData;
- (id)initVMWithResultModel:(id)arg1 isQuicklySetting:(_Bool)arg2;

@end

