//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCStickerBaseProvider.h"

@interface MCStickerInputTextureProvider : MCStickerBaseProvider
{
    float faceFeature[90][2];
    double _faceAngle;
}

@property(nonatomic) double faceAngle; // @synthesize faceAngle=_faceAngle;
- (void)customProviderWithParams:(id)arg1;
- (void)getFaceFeature:(float [90][2])arg1;
- (void)updateFaceFeature:(float [90][2])arg1;

@end

