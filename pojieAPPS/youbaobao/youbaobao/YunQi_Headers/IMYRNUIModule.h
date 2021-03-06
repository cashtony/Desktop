//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol IMYRNModuleProtocol, OS_dispatch_queue;

@interface IMYRNUIModule : NSObject <RCTBridgeModule>
{
    id <IMYRNModuleProtocol> _delegate;
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__2279;
+ (const struct RCTMethodInfo *)__rct_export__2128;
+ (const struct RCTMethodInfo *)__rct_export__1967;
+ (const struct RCTMethodInfo *)__rct_export__1796;
+ (const struct RCTMethodInfo *)__rct_export__1505;
+ (const struct RCTMethodInfo *)__rct_export__1274;
+ (const struct RCTMethodInfo *)__rct_export__1093;
+ (const struct RCTMethodInfo *)__rct_export__912;
+ (const struct RCTMethodInfo *)__rct_export__491;
+ (const struct RCTMethodInfo *)__rct_export__370;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)showToast:(id)arg1;
- (void)getLoadingState:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)setLoadingState:(id)arg1;
- (void)setRightButtonEnable:(_Bool)arg1;
- (void)setRightButtonTextColor:(id)arg1;
- (void)setRightButtonOnClickListener:(id)arg1;
- (void)setRightButtonImageUrl:(id)arg1;
- (void)setRightButtonText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)requestLayout;
- (_Bool)isVaildDelegate;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

