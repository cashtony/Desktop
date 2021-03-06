//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YSF_NIMSystemNotification : NSObject
{
    _Bool _read;
    long long _type;
    double _timestamp;
    NSString *_sourceID;
    NSString *_targetID;
    NSString *_postscript;
    long long _handleStatus;
    long long _serial;
    long long _msgId;
    NSString *_attachString;
    long long _status;
    id _attachmentObject;
}

@property(retain, nonatomic) id attachmentObject; // @synthesize attachmentObject=_attachmentObject;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *attachString; // @synthesize attachString=_attachString;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
@property(nonatomic) long long serial; // @synthesize serial=_serial;
@property(nonatomic) long long handleStatus; // @synthesize handleStatus=_handleStatus;
@property(nonatomic) _Bool read; // @synthesize read=_read;
@property(copy, nonatomic) NSString *postscript; // @synthesize postscript=_postscript;
@property(copy, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)saveDataAfterReceiving:(_Bool)arg1;
- (_Bool)canSave;
- (void)parseAddUserAttachment;
@property(readonly, nonatomic) id attachment;
- (_Bool)isRead;
- (id)description;
- (id)initWithPorperty:(const struct Property *)arg1;

@end

