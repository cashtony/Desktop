//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol FMApiManager, FMApiManagerCallBackDelegate, FMApiManagerParamSource, FMApiManagerValidator;

@interface FMBaseApiManager : NSObject
{
    _Bool _loading;
    id <FMApiManager> _child;
    id <FMApiManagerValidator> _validator;
    id <FMApiManagerParamSource> _paramSource;
    id <FMApiManagerCallBackDelegate> _delegate;
    NSMutableArray *_requestIDList;
}

@property(retain, nonatomic) NSMutableArray *requestIDList; // @synthesize requestIDList=_requestIDList;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <FMApiManagerCallBackDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FMApiManagerParamSource> paramSource; // @synthesize paramSource=_paramSource;
@property(nonatomic) __weak id <FMApiManagerValidator> validator; // @synthesize validator=_validator;
@property(nonatomic) __weak id <FMApiManager> child; // @synthesize child=_child;
- (void).cxx_destruct;
- (void)removeRequestIdWithRequestID:(long long)arg1;
- (void)failedOnCallingApi:(id)arg1 requestID:(long long)arg2 requestParams:(id)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void)successedOnCallingApi:(id)arg1 responseData:(id)arg2 requestID:(long long)arg3 requestParams:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (_Bool)hasCacheDataForParams:(id)arg1;
- (id)apiRunningQueue;
- (unsigned long long)apiCachePolicy;
- (id)apiResponseGenerator;
- (id)apiRequestGenerator;
- (id)preprocessParams:(id)arg1;
- (id)customHeaders;
- (unsigned long long)apiRequestType;
- (unsigned long long)apiProviderType;
- (long long)loadRequestWithParams:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)cancelRequestWithRequestID:(long long)arg1;
- (void)cancelAllRequests;
- (long long)loadRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (long long)loadRequest:(id)arg1;
- (id)init;
- (long long)loadRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3 loadingViewShown:(_Bool)arg4;

@end

