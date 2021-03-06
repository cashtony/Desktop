//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, TTQThemeHeadModel;

@interface TTQCollectThemeViewModel : NSObject
{
    NSString *_sortWord;
    TTQThemeHeadModel *_headModel;
    NSNumber *_themeID;
    NSArray *_collectThemeItems;
}

@property(copy, nonatomic) NSArray *collectThemeItems; // @synthesize collectThemeItems=_collectThemeItems;
@property(copy, nonatomic) NSNumber *themeID; // @synthesize themeID=_themeID;
@property(retain, nonatomic) TTQThemeHeadModel *headModel; // @synthesize headModel=_headModel;
@property(copy, nonatomic) NSString *sortWord; // @synthesize sortWord=_sortWord;
- (void).cxx_destruct;
- (void)calculateThemeItemSizeInDatasource:(id)arg1;
- (id)tableCellModelAtIndexPath:(id)arg1;
- (id)tableSectionModel:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)httpBuilderWithLastID:(id)arg1 lastViews:(id)arg2 themeID:(id)arg3 andInput:(id)arg4;
- (id)requestRemoteDataWithThemeID:(id)arg1 LastID:(id)arg2 LastViews:(id)arg3 type:(long long)arg4 params:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;

@end

