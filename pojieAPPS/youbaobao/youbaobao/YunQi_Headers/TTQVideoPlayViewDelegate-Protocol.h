//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TTQVideoPlayViewDelegate <NSObject>
- (void)TTQVideoPlayViewPlayViewTaped;
- (void)TTQVideoPlayViewShowKeyBoard;
- (void)TTQVideoPlayViewShowCommentView;
- (void)TTQVideoPlayViewDidFinishRequest;
- (void)TTQVideoPlayViewDismissVideoPlayView;
- (void)TTQVideoPlayViewScrollToIndex:(long long)arg1 callBack:(void (^)(struct CGRect, UIImage *))arg2;
@end

