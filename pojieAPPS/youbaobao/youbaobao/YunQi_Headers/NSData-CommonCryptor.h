//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (CommonCryptor)
- (id)decryptedCASTDataUsingKey:(id)arg1 error:(id *)arg2;
- (id)CASTEncryptedDataUsingKey:(id)arg1 error:(id *)arg2;
- (id)decryptedDESDataUsingKey:(id)arg1 error:(id *)arg2;
- (id)DESEncryptedDataUsingKey:(id)arg1 error:(id *)arg2;
- (id)decryptedAES256DataUsingKey:(id)arg1 error:(id *)arg2;
- (id)AES256EncryptedDataUsingKey:(id)arg1 error:(id *)arg2;
@end
