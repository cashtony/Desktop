//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBBToolsSearchEventTrackClickItem : NSObject
{
    NSString *_keyword;
    NSString *_searchKey;
    unsigned long long _searchType;
    unsigned long long _contentType;
    NSString *_clickedId;
    unsigned long long _contentSubType;
    long long _pageSize;
    long long _pageNumber;
    long long _indexOfPage;
    long long _indexOfAll;
    id _moreInfo;
}

@property(retain, nonatomic) id moreInfo; // @synthesize moreInfo=_moreInfo;
@property(nonatomic) long long indexOfAll; // @synthesize indexOfAll=_indexOfAll;
@property(nonatomic) long long indexOfPage; // @synthesize indexOfPage=_indexOfPage;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) unsigned long long contentSubType; // @synthesize contentSubType=_contentSubType;
@property(copy, nonatomic) NSString *clickedId; // @synthesize clickedId=_clickedId;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;

@end

