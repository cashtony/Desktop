//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NIMCustomAttachment-Protocol.h"
#import "NTESCustomAttachmentInfo-Protocol.h"

@class NIMMessage, NSString;

@interface NTESRedPacketTipAttachment : NSObject <NIMCustomAttachment, NTESCustomAttachmentInfo>
{
    NSString *_sendPacketId;
    NSString *_openPacketId;
    NSString *_packetId;
    NSString *_isGetDone;
    NIMMessage *_message;
}

@property(nonatomic) __weak NIMMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *isGetDone; // @synthesize isGetDone=_isGetDone;
@property(retain, nonatomic) NSString *packetId; // @synthesize packetId=_packetId;
@property(retain, nonatomic) NSString *openPacketId; // @synthesize openPacketId=_openPacketId;
@property(retain, nonatomic) NSString *sendPacketId; // @synthesize sendPacketId=_sendPacketId;
- (void).cxx_destruct;
- (_Bool)canBeRevoked;
- (_Bool)canBeForwarded;
- (id)cellContent:(id)arg1;
- (struct UIEdgeInsets)contentViewInsets:(id)arg1;
- (id)formatedMessage;
- (struct CGSize)contentSize:(id)arg1 cellWidth:(double)arg2;
- (id)encodeAttachment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

