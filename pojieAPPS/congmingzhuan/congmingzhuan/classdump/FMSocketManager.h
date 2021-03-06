//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/GCDAsyncSocketDelegate-Protocol.h>

@class GCDAsyncSocket, NSString;
@protocol FMSocketDelegate;

@interface FMSocketManager : NSObject <GCDAsyncSocketDelegate>
{
    unsigned short _port;
    int _maxReconnectTime;
    int _reconnectTime;
    NSString *_host;
    id <FMSocketDelegate> _delegate;
    GCDAsyncSocket *_clientSocket;
}

@property(nonatomic) int reconnectTime; // @synthesize reconnectTime=_reconnectTime;
@property(retain, nonatomic) GCDAsyncSocket *clientSocket; // @synthesize clientSocket=_clientSocket;
@property(nonatomic) __weak id <FMSocketDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int maxReconnectTime; // @synthesize maxReconnectTime=_maxReconnectTime;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)connectSocket;
- (void)reconnect;
@property(readonly, nonatomic) _Bool isConnected;
- (void)disconnect;
- (void)sendMessage:(id)arg1;
- (void)sendData:(id)arg1;
- (void)connect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

