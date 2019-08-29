//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IMYRM80AttachmentContentProtocol;

@interface IMYRM80AttributedLabelAttachment : NSObject
{
    int _alignment;
    id <IMYRM80AttachmentContentProtocol> _content;
    double _fontAscent;
    double _fontDescent;
    unsigned long long _displayLineCount;
    unsigned long long _displayLine;
    unsigned long long _allLine;
    struct CGSize _maxSize;
    struct UIEdgeInsets _margin;
    struct CGRect _displayFrame;
    struct CGRect _allFrame;
}

+ (id)attachmentWith:(id)arg1 margin:(struct UIEdgeInsets)arg2 alignment:(int)arg3 maxSize:(struct CGSize)arg4;
@property(nonatomic) unsigned long long allLine; // @synthesize allLine=_allLine;
@property(nonatomic) struct CGRect allFrame; // @synthesize allFrame=_allFrame;
@property(nonatomic) unsigned long long displayLine; // @synthesize displayLine=_displayLine;
@property(nonatomic) struct CGRect displayFrame; // @synthesize displayFrame=_displayFrame;
@property(nonatomic) unsigned long long displayLineCount; // @synthesize displayLineCount=_displayLineCount;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) double fontDescent; // @synthesize fontDescent=_fontDescent;
@property(nonatomic) double fontAscent; // @synthesize fontAscent=_fontAscent;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(retain, nonatomic) id <IMYRM80AttachmentContentProtocol> content; // @synthesize content=_content;
- (void).cxx_destruct;
- (struct CGSize)attachmentSize;
- (struct CGSize)calculateContentSize;
- (struct CGSize)boxSize;

@end
