//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol IOpenStaticKeyEncryptComponent <NSObject>
- (NSData *)encryptSecretData:(long long)arg1 key:(NSString *)arg2 dataKey:(NSString *)arg3;
- (NSData *)decrypt:(long long)arg1 key:(NSString *)arg2 data:(NSData *)arg3;
- (NSData *)encrypt:(long long)arg1 key:(NSString *)arg2 data:(NSData *)arg3;
- (int)removeSecret:(NSString *)arg1;
- (_Bool)isSecretExist:(NSString *)arg1;
- (int)saveSecret:(NSString *)arg1 value:(NSData *)arg2;
@end
