//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPUImageInput-Protocol.h"

@class GLProgram, GPUImageFramebuffer, KSYGPUContext, NSString;
@protocol OS_dispatch_source;

@interface KSYGPUPicOutput : NSObject <GPUImageInput>
{
    KSYGPUContext *_gpuContext;
    struct __CVBuffer *_renderTarget;
    struct __CVBuffer *_renderTargetYUV;
    struct __CVBuffer *_renderTexture;
    CDStruct_1b6d18a9 _ptsDelta;
    long long _frameDuration;
    long long _lastPts;
    int _inputRotation;
    unsigned int movieFramebuffer;
    unsigned int movieRenderbuffer;
    GLProgram *colorSwizzlingProgram;
    int colorSwizzlingPositionAttribute;
    int colorSwizzlingTextureCoordinateAttribute;
    int colorSwizzlingInputTextureUniform;
    GPUImageFramebuffer *firstInputFramebuffer;
    float cropTextureCoordinates[8];
    NSObject<OS_dispatch_source> *_timer;
    _Bool _bAutoRepeat;
    _Bool _enabled;
    _Bool _bCustomOutputSize;
    int _targetFps;
    unsigned int _outputPixelFormat;
    CDUnknownBlockType _videoProcessingCallback;
    struct CGSize _outputSize;
    struct CGSize _inputSize;
    struct CGRect _cropRegion;
}

@property(copy, nonatomic) CDUnknownBlockType videoProcessingCallback; // @synthesize videoProcessingCallback=_videoProcessingCallback;
@property(readonly, nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(nonatomic) _Bool bCustomOutputSize; // @synthesize bCustomOutputSize=_bCustomOutputSize;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) unsigned int outputPixelFormat; // @synthesize outputPixelFormat=_outputPixelFormat;
@property(nonatomic) struct CGRect cropRegion; // @synthesize cropRegion=_cropRegion;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) int targetFps; // @synthesize targetFps=_targetFps;
@property(nonatomic) _Bool bAutoRepeat; // @synthesize bAutoRepeat=_bAutoRepeat;
- (void).cxx_destruct;
- (void)calculateCropTextureCoordinates;
- (void)renderAtInternalSizeUsingFramebuffer:(id)arg1;
- (void)setFilterFBO;
- (void)destroyDataFBO;
- (void)createDataFBO;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (int)getInputRotation;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)outputFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (void)outputFrame;
- (id)getFragemntShader;
- (void)dealloc;
- (id)initWithOutFmt:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

