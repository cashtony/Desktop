//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImageSelectorHandle.h"

@interface PaintSelectorHandle : ImageSelectorHandle
{
    struct PaintSelection *paintSelector;
    int redoCount;
}

- (void)updateUndoMark;
- (_Bool)canUpdateUndoMark;
- (void)redo;
- (void)undo;
- (_Bool)canRedo;
- (_Bool)canUndo;
- (void)touchEnded;
- (void)touchMovedTo:(struct CGPoint)arg1 radius:(float)arg2 extend:(float)arg3;
- (void)touchBeganAt:(struct CGPoint)arg1;
- (struct CGRect)getSelectedRect;
- (void)setImage:(id)arg1;
- (_Bool)isRedImage;
- (void)setMode:(int)arg1;

@end

