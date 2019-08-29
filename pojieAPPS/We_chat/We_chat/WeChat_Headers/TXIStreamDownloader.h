//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol TXDownloaderProxy, TXIDownloaderDelegate, TXINotifyDelegate, TXIRestartDelegate;

@interface TXIStreamDownloader : NSObject
{
    _Bool _isRunning;
    _Bool _quicChannel;
    _Bool _isPlayRtmpAccStream;
    _Bool _enableNearestIP;
    _Bool _enableMessage;
    int _connectCountQuic;
    int _connectCountTcp;
    unsigned int _startATS;
    id <TXIDownloaderDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    id <TXIRestartDelegate> _restartDelegate;
    long long _reconnectTimes;
    long long _reconnectLimit;
    double _reconnectInterval;
    long long _connectSussessTimestamp;
    long long _goodPullTime;
    NSString *_originUrl;
    NSString *_streamUrl;
    NSString *_userID;
    NSDictionary *_headers;
    id <TXDownloaderProxy> _proxy;
}

@property __weak id <TXDownloaderProxy> proxy; // @synthesize proxy=_proxy;
@property(retain) NSDictionary *headers; // @synthesize headers=_headers;
@property unsigned int startATS; // @synthesize startATS=_startATS;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool enableMessage; // @synthesize enableMessage=_enableMessage;
@property(nonatomic) int connectCountTcp; // @synthesize connectCountTcp=_connectCountTcp;
@property(nonatomic) int connectCountQuic; // @synthesize connectCountQuic=_connectCountQuic;
@property(nonatomic) _Bool enableNearestIP; // @synthesize enableNearestIP=_enableNearestIP;
@property(nonatomic) _Bool isPlayRtmpAccStream; // @synthesize isPlayRtmpAccStream=_isPlayRtmpAccStream;
@property(nonatomic) _Bool quicChannel; // @synthesize quicChannel=_quicChannel;
@property(retain, nonatomic) NSString *streamUrl; // @synthesize streamUrl=_streamUrl;
@property(retain, nonatomic) NSString *originUrl; // @synthesize originUrl=_originUrl;
@property(nonatomic) long long goodPullTime; // @synthesize goodPullTime=_goodPullTime;
@property(nonatomic) long long connectSussessTimestamp; // @synthesize connectSussessTimestamp=_connectSussessTimestamp;
@property(nonatomic) double reconnectInterval; // @synthesize reconnectInterval=_reconnectInterval;
@property(nonatomic) long long reconnectLimit; // @synthesize reconnectLimit=_reconnectLimit;
@property(nonatomic) long long reconnectTimes; // @synthesize reconnectTimes=_reconnectTimes;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <TXIRestartDelegate> restartDelegate; // @synthesize restartDelegate=_restartDelegate;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) __weak id <TXIDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)onRecvSEIData:(id)arg1;
- (int)onRecvVideoData:(struct tag_decode_data)arg1;
- (int)onRecvAudioData:(struct tag_aduio_data)arg1;
- (void)sendNotifyEvent:(int)arg1 msg:(id)arg2;
- (void)sendNotifyEvent:(int)arg1;
- (id)getDownloadStats;
- (void)stopDownload;
- (void)startDownload:(id)arg1;
- (id)init;

@end
