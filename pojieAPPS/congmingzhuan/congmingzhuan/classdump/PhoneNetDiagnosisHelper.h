//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PhoneNetDiagnosisHelper : NSObject
{
}

+ (_Bool)isEchoReplayPacket:(char *)arg1 len:(int)arg2;
+ (_Bool)isTimeoutPacket:(char *)arg1 len:(int)arg2;
+ (struct sockaddr *)createSockaddrWithAddress:(id)arg1;
+ (id)formatIPv4Address:(struct in_addr)arg1;
+ (id)resolveHost:(id)arg1;
+ (struct PICMPPacket_Tracert *)constructTracertICMPPacketWithSeq:(unsigned short)arg1 andIdentifier:(unsigned short)arg2;
+ (struct UICMPPacket *)constructPacketWithSeq:(unsigned short)arg1 andIdentifier:(unsigned short)arg2;
+ (char *)tracertICMPInPacket:(char *)arg1 andLen:(int)arg2;
+ (char *)icmpInpacket:(char *)arg1 andLen:(int)arg2;
+ (_Bool)isValidPingResponseWithBuffer:(char *)arg1 len:(int)arg2;
+ (_Bool)isValidPingResponseWithBuffer:(char *)arg1 len:(int)arg2 seq:(int)arg3 identifier:(int)arg4;
+ (unsigned short)in_cksumWithBuffer:(const void *)arg1 andSize:(unsigned long long)arg2;

@end
