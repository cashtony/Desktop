//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, YBBOldMotherLessonModel, YBBOldMotherLessonTextItem;

@interface YBBOldMotherLessonViewModel : NSObject
{
    _Bool _archive;
    _Bool _like;
    _Bool _needMoreBtn;
    _Bool _showAllContent;
    unsigned long long _lessonId;
    long long _archive_total;
    long long _like_total;
    NSString *_archiveString;
    NSString *_likeString;
    id _videoModel;
    long long _relatedCurrentIndex;
    unsigned long long _moreButtonState;
    double _headerImageHeight;
    NSArray *_relatedArray;
    YBBOldMotherLessonModel *_model;
    NSArray *_dataArray;
    YBBOldMotherLessonTextItem *_textItem;
}

@property(retain, nonatomic) YBBOldMotherLessonTextItem *textItem; // @synthesize textItem=_textItem;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) YBBOldMotherLessonModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *relatedArray; // @synthesize relatedArray=_relatedArray;
@property(nonatomic) double headerImageHeight; // @synthesize headerImageHeight=_headerImageHeight;
@property(nonatomic) unsigned long long moreButtonState; // @synthesize moreButtonState=_moreButtonState;
@property(nonatomic) _Bool showAllContent; // @synthesize showAllContent=_showAllContent;
@property(nonatomic) _Bool needMoreBtn; // @synthesize needMoreBtn=_needMoreBtn;
@property(nonatomic) long long relatedCurrentIndex; // @synthesize relatedCurrentIndex=_relatedCurrentIndex;
@property(retain, nonatomic) id videoModel; // @synthesize videoModel=_videoModel;
@property(copy, nonatomic) NSString *likeString; // @synthesize likeString=_likeString;
@property(copy, nonatomic) NSString *archiveString; // @synthesize archiveString=_archiveString;
@property(nonatomic) long long like_total; // @synthesize like_total=_like_total;
@property(nonatomic) long long archive_total; // @synthesize archive_total=_archive_total;
@property(nonatomic) _Bool like; // @synthesize like=_like;
@property(nonatomic) _Bool archive; // @synthesize archive=_archive;
@property(nonatomic) unsigned long long lessonId; // @synthesize lessonId=_lessonId;
- (void).cxx_destruct;
- (id)cellItemAtIndexPath:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (unsigned long long)numberOfRowsInSection:(unsigned long long)arg1;
- (id)dataWithModel:(id)arg1 relatedArray:(id)arg2;
- (void)caculateVideoHeightWithItem:(id)arg1;
- (id)videoModelWithModel:(id)arg1;
- (long long)relatedIndexWithArray:(id)arg1 modelId:(unsigned long long)arg2;
- (void)requestMotherLessonInfoWithLessonId:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestArchive:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestLikeWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long type;
- (_Bool)isVideoMode;
- (_Bool)isTextMode;
@property(readonly, nonatomic) _Bool isMediaType;
- (id)initWithLessonId:(unsigned long long)arg1;

@end

