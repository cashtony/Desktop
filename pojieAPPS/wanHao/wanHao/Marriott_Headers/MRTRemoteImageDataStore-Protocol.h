//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MRTRemoteImageDataStore <NSObject>
+ (_Bool)supportsRequestNeedingResizing:(_Bool)arg1;
+ (_Bool)supportsURLString:(NSString *)arg1;
- (void)fetchWImageWithBaseURLString:(NSString *)arg1 cropRect:(struct CGRect)arg2 fittingSize:(struct CGSize)arg3 completion:(void (^)(UIImage *, _Bool, NSError *))arg4;
@end
