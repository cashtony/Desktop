//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiveRoomGuard, NSArray, NSDictionary, NSString, XFWkwebView;

@interface RoomRouter : NSObject
{
    NSString *_prompt_time;
    NSString *_rollmsg_time;
    NSDictionary *_room_ad;
    NSArray *_rollmsg_content;
    NSDictionary *_prompt_content;
    LiveRoomGuard *_roomTool;
    NSString *_roomNumber;
    XFWkwebView *_gameWebView;
}

+ (id)sharedManager;
+ (void)clearPreRoom;
+ (void)load;
@property(retain, nonatomic) XFWkwebView *gameWebView; // @synthesize gameWebView=_gameWebView;
@property(copy, nonatomic) NSString *roomNumber; // @synthesize roomNumber=_roomNumber;
@property(retain, nonatomic) LiveRoomGuard *roomTool; // @synthesize roomTool=_roomTool;
@property(copy, nonatomic) NSDictionary *prompt_content; // @synthesize prompt_content=_prompt_content;
@property(retain, nonatomic) NSArray *rollmsg_content; // @synthesize rollmsg_content=_rollmsg_content;
@property(retain, nonatomic) NSDictionary *room_ad; // @synthesize room_ad=_room_ad;
@property(copy, nonatomic) NSString *rollmsg_time; // @synthesize rollmsg_time=_rollmsg_time;
@property(copy, nonatomic) NSString *prompt_time; // @synthesize prompt_time=_prompt_time;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool inRoom;
- (void)scrollContainerScrollEnable:(_Bool)arg1;

@end
