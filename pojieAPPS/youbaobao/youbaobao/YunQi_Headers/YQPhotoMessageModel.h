//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YQPhotoMessageModel : NSObject
{
    long long _msg_id;
    long long _event_id;
    long long _user_id;
    NSString *_username;
    NSString *_avatar;
    long long _type;
    NSString *_content;
    NSString *_pic_url;
    long long _created_at;
    long long _comment_id;
    long long _event_status;
    long long _comment_status;
    long long _baby_id;
    long long _event_type;
    NSString *_createdAtStr;
    double _cellHight;
}

@property(nonatomic) double cellHight; // @synthesize cellHight=_cellHight;
@property(copy, nonatomic) NSString *createdAtStr; // @synthesize createdAtStr=_createdAtStr;
@property(nonatomic) long long event_type; // @synthesize event_type=_event_type;
@property(nonatomic) long long baby_id; // @synthesize baby_id=_baby_id;
@property(nonatomic) long long comment_status; // @synthesize comment_status=_comment_status;
@property(nonatomic) long long event_status; // @synthesize event_status=_event_status;
@property(nonatomic) long long comment_id; // @synthesize comment_id=_comment_id;
@property(nonatomic) long long created_at; // @synthesize created_at=_created_at;
@property(copy, nonatomic) NSString *pic_url; // @synthesize pic_url=_pic_url;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long user_id; // @synthesize user_id=_user_id;
@property(nonatomic) long long event_id; // @synthesize event_id=_event_id;
@property(nonatomic) long long msg_id; // @synthesize msg_id=_msg_id;
- (void).cxx_destruct;
- (id)init;

@end

