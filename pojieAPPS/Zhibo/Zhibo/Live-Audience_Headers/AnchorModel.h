//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface AnchorModel : NSObject
{
    _Bool _attention;
    _Bool _toy_status;
    _Bool _video_status;
    int _private;
    NSString *_avatar;
    NSString *_city;
    NSString *_curroomnum;
    NSString *_id;
    NSString *_nickname;
    NSString *_online;
    NSString *_snap;
    NSString *_avatartime;
    NSString *_bigpic;
    NSString *_broadcasting;
    NSString *_level;
    NSString *_intro;
    NSString *_offlinevideo;
    NSString *_sex;
    NSString *_ptit;
    NSString *_ptitStr;
    NSString *_pull_url;
    NSString *_drawer_id;
    NSDictionary *_limit;
    unsigned long long _type;
    NSString *_roomType;
    NSString *_roomTitle;
    NSArray *_roomTopic;
    NSString *_sid;
    NSString *_starttime;
    NSString *_onlinetype;
    NSString *_gameType;
}

@property(copy, nonatomic) NSString *gameType; // @synthesize gameType=_gameType;
@property(copy, nonatomic) NSString *onlinetype; // @synthesize onlinetype=_onlinetype;
@property(copy, nonatomic) NSString *starttime; // @synthesize starttime=_starttime;
@property(nonatomic) int private; // @synthesize private=_private;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSArray *roomTopic; // @synthesize roomTopic=_roomTopic;
@property(copy, nonatomic) NSString *roomTitle; // @synthesize roomTitle=_roomTitle;
@property(copy, nonatomic) NSString *roomType; // @synthesize roomType=_roomType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *limit; // @synthesize limit=_limit;
@property(nonatomic) _Bool video_status; // @synthesize video_status=_video_status;
@property(nonatomic) _Bool toy_status; // @synthesize toy_status=_toy_status;
@property(copy, nonatomic) NSString *drawer_id; // @synthesize drawer_id=_drawer_id;
@property(copy, nonatomic) NSString *pull_url; // @synthesize pull_url=_pull_url;
@property(copy, nonatomic) NSString *ptitStr; // @synthesize ptitStr=_ptitStr;
@property(copy, nonatomic) NSString *ptit; // @synthesize ptit=_ptit;
@property(copy, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *offlinevideo; // @synthesize offlinevideo=_offlinevideo;
@property(nonatomic) _Bool attention; // @synthesize attention=_attention;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *broadcasting; // @synthesize broadcasting=_broadcasting;
@property(copy, nonatomic) NSString *bigpic; // @synthesize bigpic=_bigpic;
@property(copy, nonatomic) NSString *avatartime; // @synthesize avatartime=_avatartime;
@property(copy, nonatomic) NSString *snap; // @synthesize snap=_snap;
@property(copy, nonatomic) NSString *online; // @synthesize online=_online;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *curroomnum; // @synthesize curroomnum=_curroomnum;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;

@end

