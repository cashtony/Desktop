//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, NSArray, NSBundle, NSString;

@interface ZOAUSecurityUtils : NSObject
{
    JSContext *jscontext;
    NSBundle *nsbundle;
    NSString *aesFilePath;
    NSString *md5FilePath;
    NSArray *param;
}

- (void).cxx_destruct;
- (id)getDecryptResultWithBase64:(id)arg1;
- (id)decryptWithBase64:(id)arg1;
- (id)encryptWithBase64:(id)arg1;
- (id)sign:(id)arg1 params:(id)arg2;
- (id)encryptWithMD5:(id)arg1;
- (id)decryptWithAES:(id)arg1 secretKey:(id)arg2;
- (id)encryptWithAES:(id)arg1 secretKey:(id)arg2;
- (id)decryptWithRSA:(id)arg1 key:(id)arg2;
- (id)encryptWithRSA:(id)arg1 key:(id)arg2;
- (id)getBundle;
- (id)init;

@end
