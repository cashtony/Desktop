//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSMutableDictionary, NSString;

@interface CSettingExt : NSObject <NSCoding>
{
    unsigned int m_iPlayTipsCounter;
    NSString *m_nsMobile;
    _Bool m_bAllowSearchAddressBook;
    _Bool m_bHasConfirmSearchAddressBook;
    _Bool m_bHasClickBindPhoneView;
    _Bool m_bPitchShift;
    int m_iPitchShift;
    unsigned int m_iVideoCameraPos;
    unsigned int m_iMatteCameraPos;
    unsigned int m_iMatteFlashStatus;
    _Bool m_isLBSPromptNotShowAgain;
    _Bool m_isShakePromptNotShowAgain;
    _Bool m_isWXTalkPromptNotShowAgain;
    _Bool m_isEditImagePromptNotShowAgain;
    _Bool m_isTapToContactVeirfyBannerNotShowAgain;
    _Bool m_isEmoticonPanelNewNotCausedByUpdate;
    _Bool m_isExistNewBrandServiceTip;
    _Bool m_isExistNewBrandSubscriptionTip;
    _Bool m_bIsSyncPhoneContactsLogined;
    unsigned long long m_uiCloudContactsAmount;
    NSDate *m_LBSDataValidateTime;
    _Bool m_isForceEarpieceMode;
    _Bool m_hasShowQRCodeTip;
    unsigned int m_uiLastDownloadEmojiArtTime;
    unsigned int m_uiSyncAddressBookLocalMode;
    _Bool m_bSavePhotoWhenTake;
    _Bool m_bUploadHDImage;
    unsigned int m_uiImageSourceType;
    _Bool m_bReadMailShowDetail;
    unsigned int m_uiMatteHistoryOrder;
    _Bool m_bShowReaderSettingTip;
    _Bool m_bAlbumSyncMicroblog;
    unsigned int m_uiFontSize;
    _Bool m_bIsUsingSystemFont;
    unsigned int m_uiLbsOpCode;
    _Bool m_hideWCTimelineEventNotification;
    long long m_showIntroViewTimes;
    _Bool m_bOpenRemoteControl;
    _Bool m_bHasUseVideoVoip;
    _Bool m_bHasUseWXTalk;
    _Bool m_autoPlay;
    unsigned int m_uiLastAlertVoipTime;
    unsigned int m_uiLastAlertRemindTime;
    _Bool m_bNoShowPushTip;
    _Bool m_bMusicCyclePlay;
    _Bool m_bMusicListPlay;
    _Bool m_bMusicOrderPlay;
    _Bool m_bMonitorMemory;
    _Bool m_bFeatureLogViewInRealTime;
    long long m_cameraFlashMode;
    NSMutableDictionary *m_dicSetting;
    _Bool m_bHaveCheckedSetPassword;
    _Bool m_bHaveUploadWholeAddress;
    _Bool m_bShakeMusicOpen;
    _Bool m_bMultiFavAddOpen;
    NSString *m_nsTransFromLang;
    NSString *m_nsTransToLang;
    NSString *m_nsImagePickerAlbum;
    _Bool m_bImagePickerForcedOldVersion;
    unsigned int m_playVoiceTimes;
    unsigned int m_lastBrandMsgSvrID;
    long long m_n64LastBrandMsgSvrID;
    _Bool m_bOverseasCardIsNoOpenProtocal;
    _Bool m_bTitOfflinePayShow;
    _Bool m_bShowShareLocationTip;
    _Bool m_bShowKeepSharingLocationTip;
    _Bool m_bFirstDeleteChatRoomThatNotSaveToContact;
    _Bool m_bShowTranslateIntroTip;
    _Bool m_bShowReTranslateIntroTip;
    _Bool m_bOpenVoicePrintPwd;
    _Bool m_bMyPackageShow;
    unsigned int m_uiLastGetCardCountTime;
    _Bool m_hasEnterCardList;
    _Bool m_hasShowMemberTipsView;
    _Bool m_hasEnterCardDetail;
    _Bool m_hasShowCardNew;
    _Bool m_bShareCardShow;
    _Bool m_hasEnterShareCardList;
    _Bool m_hasShowShareCardNew;
    _Bool m_hasShowShareCardTipsBefore;
    unsigned int m_uiGetCardLayoutSceneBySvr;
    unsigned int m_uiLastClearShareCardTime;
    _Bool m_bShowAttatchmentTransferNew;
    _Bool m_bShowAttachmentRedEnvelopesNew;
    _Bool m_bShowAttatchmentServiceNew;
    _Bool m_bHasShowMuteTips;
    unsigned int m_uScrollTopTipShowCount;
    unsigned int m_curLockVersion;
    unsigned int m_patternLockLastBlockTime;
    unsigned int m_patternLockLastEnterTime;
    unsigned int m_patternLockVCLastEnterTime;
    unsigned int m_patternLockLeftInputTime;
    _Bool m_shakeToSight;
    int m_sendPhotoOpFlow;
    _Bool m_bHasNotifyTouchIDAuth;
    _Bool m_bTouchIDAuthSwitch;
    int m_mailUnreadCountCache;
    unsigned int m_uLastResourceUpdateTime;
    int m_tencentMapRecommendCount;
    NSDate *m_dontDisturbTillDate;
    int m_mulitSelectHeaderSwitch;
    unsigned int m_lastShareExtResourceCleanTime;
    _Bool m_hasShowMusicEasterEggTip;
    _Bool m_hasFollowArrayUpToShowSecondPage;
    unsigned int m_playAllTipShowCountForGlobalSearchScene;
    _Bool m_bShouldContactDBMigration;
    unsigned int m_uLastWeAppSweepPkgTime;
    unsigned int m_injectWXJSType;
    _Bool m_isShakeMusicOverseaPromptNotShowAgain;
    _Bool m_isShakeMusicOverseaPromptInShakeNotShowAgain;
    unsigned long long m_uiRecentLimitFeedId;
    NSString *searchWeAppPlaceHolder;
    NSString *searchWeAppWordId;
    _Bool m_isFaceRecogGuideVcNotShowAgain;
    _Bool m_isFaceRecogReflectGuideVcNotShowAgain;
    _Bool m_isCloseWeappTaskPreload;
    _Bool m_hasShowSwitchAccountTip;
    _Bool m_isOpenBrandTimelineAbtest;
    _Bool m_isOpenBrandHolderMassNum;
    _Bool m_isTimelineVideoSightAutoPlayEnable;
    _Bool m_hasNewYearShakeStatGPSInfo;
    _Bool _m_isScheduleTipsViewNotShowAgain;
    _Bool _m_bIsNewFavUI;
    _Bool _m_bHasNotifyWeSportEmptyCover;
    unsigned int m_nextADLogReportTime;
    int _m_mulitSelectHeaderSwitch;
    long long m_nMonitorResource;
    NSString *webviewTopSessionUrlStr;
    NSString *webviewTopSessionTitle;
    unsigned long long webViewSessionUrlRecordTimeStampInMs;
    NSString *webviewSessionId;
}

@property(nonatomic) _Bool m_bHasNotifyWeSportEmptyCover; // @synthesize m_bHasNotifyWeSportEmptyCover=_m_bHasNotifyWeSportEmptyCover;
@property(nonatomic) int m_mulitSelectHeaderSwitch; // @synthesize m_mulitSelectHeaderSwitch=_m_mulitSelectHeaderSwitch;
@property(nonatomic) _Bool m_bIsNewFavUI; // @synthesize m_bIsNewFavUI=_m_bIsNewFavUI;
@property(nonatomic) _Bool m_isScheduleTipsViewNotShowAgain; // @synthesize m_isScheduleTipsViewNotShowAgain=_m_isScheduleTipsViewNotShowAgain;
@property(nonatomic) _Bool m_isTimelineVideoSightAutoPlayEnable; // @synthesize m_isTimelineVideoSightAutoPlayEnable;
@property(nonatomic) _Bool m_isOpenBrandHolderMassNum; // @synthesize m_isOpenBrandHolderMassNum;
@property(nonatomic) _Bool m_isOpenBrandTimelineAbtest; // @synthesize m_isOpenBrandTimelineAbtest;
@property(copy, nonatomic) NSString *webviewSessionId; // @synthesize webviewSessionId;
@property(nonatomic) unsigned long long webViewSessionUrlRecordTimeStampInMs; // @synthesize webViewSessionUrlRecordTimeStampInMs;
@property(nonatomic) _Bool m_hasShowSwitchAccountTip; // @synthesize m_hasShowSwitchAccountTip;
@property(copy, nonatomic) NSString *webviewTopSessionTitle; // @synthesize webviewTopSessionTitle;
@property(retain, nonatomic) NSString *webviewTopSessionUrlStr; // @synthesize webviewTopSessionUrlStr;
@property(nonatomic) _Bool m_isCloseWeappTaskPreload; // @synthesize m_isCloseWeappTaskPreload;
@property(nonatomic) _Bool m_isFaceRecogReflectGuideVcNotShowAgain; // @synthesize m_isFaceRecogReflectGuideVcNotShowAgain;
@property(nonatomic) _Bool m_isFaceRecogGuideVcNotShowAgain; // @synthesize m_isFaceRecogGuideVcNotShowAgain;
@property(retain, nonatomic) NSString *searchWeAppWordId; // @synthesize searchWeAppWordId;
@property(retain, nonatomic) NSString *searchWeAppPlaceHolder; // @synthesize searchWeAppPlaceHolder;
@property(nonatomic) unsigned long long m_uiRecentLimitFeedId; // @synthesize m_uiRecentLimitFeedId;
@property(nonatomic) _Bool m_isShakeMusicOverseaPromptInShakeNotShowAgain; // @synthesize m_isShakeMusicOverseaPromptInShakeNotShowAgain;
@property(nonatomic) _Bool m_isShakeMusicOverseaPromptNotShowAgain; // @synthesize m_isShakeMusicOverseaPromptNotShowAgain;
@property(nonatomic) unsigned int m_injectWXJSType; // @synthesize m_injectWXJSType;
@property(nonatomic) _Bool m_bShouldContactDBMigration; // @synthesize m_bShouldContactDBMigration;
@property(nonatomic) _Bool m_hasNewYearShakeStatGPSInfo; // @synthesize m_hasNewYearShakeStatGPSInfo;
@property(nonatomic) unsigned int m_playAllTipShowCountForGlobalSearchScene; // @synthesize m_playAllTipShowCountForGlobalSearchScene;
@property(nonatomic) _Bool m_hasFollowArrayUpToShowSecondPage; // @synthesize m_hasFollowArrayUpToShowSecondPage;
@property(nonatomic) _Bool m_hasShowMusicEasterEggTip; // @synthesize m_hasShowMusicEasterEggTip;
@property(nonatomic) unsigned int m_lastShareExtResourceCleanTime; // @synthesize m_lastShareExtResourceCleanTime;
@property(nonatomic) unsigned int m_uLastWeAppSweepPkgTime; // @synthesize m_uLastWeAppSweepPkgTime;
@property(nonatomic) unsigned int m_uLastResourceUpdateTime; // @synthesize m_uLastResourceUpdateTime;
@property(retain, nonatomic) NSDate *m_dontDisturbTillDate; // @synthesize m_dontDisturbTillDate;
@property(nonatomic) int m_tencentMapRecommendCount; // @synthesize m_tencentMapRecommendCount;
@property(nonatomic) unsigned int m_nextADLogReportTime; // @synthesize m_nextADLogReportTime;
@property(nonatomic) int m_mailUnreadCountCache; // @synthesize m_mailUnreadCountCache;
@property(nonatomic) _Bool m_bTouchIDAuthSwitch; // @synthesize m_bTouchIDAuthSwitch;
@property(nonatomic) _Bool m_bHasNotifyTouchIDAuth; // @synthesize m_bHasNotifyTouchIDAuth;
@property(nonatomic) int m_sendPhotoOpFlow; // @synthesize m_sendPhotoOpFlow;
@property(nonatomic) _Bool m_shakeToSight; // @synthesize m_shakeToSight;
@property(nonatomic) unsigned int m_patternLockLeftInputTime; // @synthesize m_patternLockLeftInputTime;
@property(nonatomic) unsigned int m_patternLockVCLastEnterTime; // @synthesize m_patternLockVCLastEnterTime;
@property(nonatomic) unsigned int m_patternLockLastEnterTime; // @synthesize m_patternLockLastEnterTime;
@property(nonatomic) unsigned int m_patternLockLastBlockTime; // @synthesize m_patternLockLastBlockTime;
@property(nonatomic) unsigned int m_curLockVersion; // @synthesize m_curLockVersion;
@property(nonatomic) unsigned int m_uScrollTopTipShowCount; // @synthesize m_uScrollTopTipShowCount;
@property(nonatomic) _Bool m_bHasShowMuteTips; // @synthesize m_bHasShowMuteTips;
@property(nonatomic) _Bool m_bShowAttatchmentTransferNew; // @synthesize m_bShowAttatchmentTransferNew;
@property(nonatomic) _Bool m_bShowAttachmentRedEnvelopesNew; // @synthesize m_bShowAttachmentRedEnvelopesNew;
@property(nonatomic) _Bool m_bShowAttatchmentServiceNew; // @synthesize m_bShowAttatchmentServiceNew;
@property(nonatomic) unsigned int m_uiLastClearShareCardTime; // @synthesize m_uiLastClearShareCardTime;
@property(nonatomic) unsigned int m_uiGetCardLayoutSceneBySvr; // @synthesize m_uiGetCardLayoutSceneBySvr;
@property(nonatomic) _Bool m_hasShowShareCardTipsBefore; // @synthesize m_hasShowShareCardTipsBefore;
@property(nonatomic) _Bool m_hasShowShareCardNew; // @synthesize m_hasShowShareCardNew;
@property(nonatomic) _Bool m_hasEnterShareCardList; // @synthesize m_hasEnterShareCardList;
@property(nonatomic) _Bool m_bShareCardShow; // @synthesize m_bShareCardShow;
@property(nonatomic) _Bool m_hasShowCardNew; // @synthesize m_hasShowCardNew;
@property(nonatomic) _Bool m_hasEnterCardDetail; // @synthesize m_hasEnterCardDetail;
@property(nonatomic) _Bool m_hasShowMemberTipsView; // @synthesize m_hasShowMemberTipsView;
@property(nonatomic) _Bool m_hasEnterCardList; // @synthesize m_hasEnterCardList;
@property(nonatomic) unsigned int m_uiLastGetCardCountTime; // @synthesize m_uiLastGetCardCountTime;
@property(nonatomic) _Bool m_bMyPackageShow; // @synthesize m_bMyPackageShow;
@property(nonatomic) _Bool m_bOpenVoicePrintPwd; // @synthesize m_bOpenVoicePrintPwd;
@property(nonatomic) _Bool m_bShowReTranslateIntroTip; // @synthesize m_bShowReTranslateIntroTip;
@property(nonatomic) _Bool m_bShowTranslateIntroTip; // @synthesize m_bShowTranslateIntroTip;
@property(nonatomic) _Bool m_bFirstDeleteChatRoomThatNotSaveToContact; // @synthesize m_bFirstDeleteChatRoomThatNotSaveToContact;
@property(nonatomic) _Bool m_bShowKeepSharingLocationTip; // @synthesize m_bShowKeepSharingLocationTip;
@property(nonatomic) _Bool m_bShowShareLocationTip; // @synthesize m_bShowShareLocationTip;
@property(nonatomic) _Bool m_bTitOfflinePayShow; // @synthesize m_bTitOfflinePayShow;
@property(nonatomic) _Bool m_bOverseasCardIsNoOpenProtocal; // @synthesize m_bOverseasCardIsNoOpenProtocal;
@property(nonatomic) _Bool m_bFeatureLogViewInRealTime; // @synthesize m_bFeatureLogViewInRealTime;
@property(nonatomic) long long m_n64LastBrandMsgSvrID; // @synthesize m_n64LastBrandMsgSvrID;
@property(nonatomic) unsigned int m_playVoiceTimes; // @synthesize m_playVoiceTimes;
@property(nonatomic) long long m_nMonitorResource; // @synthesize m_nMonitorResource;
@property(nonatomic) _Bool m_bImagePickerForcedOldVersion; // @synthesize m_bImagePickerForcedOldVersion;
@property(retain, nonatomic) NSString *m_nsImagePickerAlbum; // @synthesize m_nsImagePickerAlbum;
@property(retain, nonatomic) NSString *m_nsTransToLang; // @synthesize m_nsTransToLang;
@property(retain, nonatomic) NSString *m_nsTransFromLang; // @synthesize m_nsTransFromLang;
@property(nonatomic) _Bool m_bMultiFavAddOpen; // @synthesize m_bMultiFavAddOpen;
@property(nonatomic) _Bool m_bShakeMusicOpen; // @synthesize m_bShakeMusicOpen;
@property(nonatomic) _Bool m_bHaveUploadWholeAddress; // @synthesize m_bHaveUploadWholeAddress;
@property(nonatomic) _Bool m_bHaveCheckedSetPassword; // @synthesize m_bHaveCheckedSetPassword;
@property(nonatomic) long long m_cameraFlashMode; // @synthesize m_cameraFlashMode;
@property(nonatomic) _Bool m_bMonitorMemory; // @synthesize m_bMonitorMemory;
@property(nonatomic) _Bool m_bMusicOrderPlay; // @synthesize m_bMusicOrderPlay;
@property(nonatomic) _Bool m_bMusicListPlay; // @synthesize m_bMusicListPlay;
@property(nonatomic) _Bool m_bMusicCyclePlay; // @synthesize m_bMusicCyclePlay;
@property(nonatomic) _Bool m_bNoShowPushTip; // @synthesize m_bNoShowPushTip;
@property(nonatomic) unsigned int m_uiLastAlertRemindTime; // @synthesize m_uiLastAlertRemindTime;
@property(nonatomic) unsigned int m_uiLastAlertVoipTime; // @synthesize m_uiLastAlertVoipTime;
@property(nonatomic) _Bool m_autoPlay; // @synthesize m_autoPlay;
@property(nonatomic) _Bool m_bHasUseWXTalk; // @synthesize m_bHasUseWXTalk;
@property(nonatomic) _Bool m_bHasUseVideoVoip; // @synthesize m_bHasUseVideoVoip;
@property(nonatomic) _Bool m_bOpenRemoteControl; // @synthesize m_bOpenRemoteControl;
@property(nonatomic) long long m_showIntroViewTimes; // @synthesize m_showIntroViewTimes;
@property(nonatomic) _Bool m_hideWCTimelineEventNotification; // @synthesize m_hideWCTimelineEventNotification;
@property(nonatomic) unsigned int m_uiLbsOpCode; // @synthesize m_uiLbsOpCode;
@property(nonatomic) _Bool m_bIsUsingSystemFont; // @synthesize m_bIsUsingSystemFont;
@property(nonatomic) unsigned int m_uiFontSize; // @synthesize m_uiFontSize;
@property(nonatomic) _Bool m_bAlbumSyncMicroblog; // @synthesize m_bAlbumSyncMicroblog;
@property(nonatomic) _Bool m_bShowReaderSettingTip; // @synthesize m_bShowReaderSettingTip;
@property(nonatomic) unsigned int m_uiMatteHistoryOrder; // @synthesize m_uiMatteHistoryOrder;
@property(nonatomic) _Bool m_bReadMailShowDetail; // @synthesize m_bReadMailShowDetail;
@property(nonatomic) unsigned int m_uiImageSourceType; // @synthesize m_uiImageSourceType;
@property(nonatomic) _Bool m_bUploadHDImage; // @synthesize m_bUploadHDImage;
@property(nonatomic) _Bool m_bSavePhotoWhenTake; // @synthesize m_bSavePhotoWhenTake;
@property(nonatomic) unsigned int m_uiSyncAddressBookLocalMode; // @synthesize m_uiSyncAddressBookLocalMode;
@property(nonatomic) unsigned int m_uiLastDownloadEmojiArtTime; // @synthesize m_uiLastDownloadEmojiArtTime;
@property(nonatomic) _Bool m_hasShowQRCodeTip; // @synthesize m_hasShowQRCodeTip;
@property(nonatomic) _Bool m_isForceEarpieceMode; // @synthesize m_isForceEarpieceMode;
@property(retain, nonatomic) NSDate *m_LBSDataValidateTime; // @synthesize m_LBSDataValidateTime;
@property(nonatomic) unsigned long long m_uiCloudContactsAmount; // @synthesize m_uiCloudContactsAmount;
@property(nonatomic) _Bool m_bIsSyncPhoneContactsLogined; // @synthesize m_bIsSyncPhoneContactsLogined;
@property(nonatomic) _Bool m_isExistNewBrandSubscriptionTip; // @synthesize m_isExistNewBrandSubscriptionTip;
@property(nonatomic) _Bool m_isExistNewBrandServiceTip; // @synthesize m_isExistNewBrandServiceTip;
@property(nonatomic) _Bool m_isEmoticonPanelNewNotCausedByUpdate; // @synthesize m_isEmoticonPanelNewNotCausedByUpdate;
@property(nonatomic) _Bool m_isTapToContactVeirfyBannerNotShowAgain; // @synthesize m_isTapToContactVeirfyBannerNotShowAgain;
@property(nonatomic) _Bool m_isEditImagePromptNotShowAgain; // @synthesize m_isEditImagePromptNotShowAgain;
@property(nonatomic) _Bool m_isWXTalkPromptNotShowAgain; // @synthesize m_isWXTalkPromptNotShowAgain;
@property(nonatomic) _Bool m_isShakePromptNotShowAgain; // @synthesize m_isShakePromptNotShowAgain;
@property(nonatomic) _Bool m_isLBSPromptNotShowAgain; // @synthesize m_isLBSPromptNotShowAgain;
@property(nonatomic) unsigned int m_iMatteFlashStatus; // @synthesize m_iMatteFlashStatus;
@property(nonatomic) unsigned int m_iMatteCameraPos; // @synthesize m_iMatteCameraPos;
@property(nonatomic) unsigned int m_iVideoCameraPos; // @synthesize m_iVideoCameraPos;
@property(nonatomic) int m_iPitchShift; // @synthesize m_iPitchShift;
@property(nonatomic) _Bool m_bPitchShift; // @synthesize m_bPitchShift;
@property(nonatomic) _Bool m_bHasClickBindPhoneView; // @synthesize m_bHasClickBindPhoneView;
@property(nonatomic) _Bool m_bHasConfirmSearchAddressBook; // @synthesize m_bHasConfirmSearchAddressBook;
@property(nonatomic) _Bool m_bAllowSearchAddressBook; // @synthesize m_bAllowSearchAddressBook;
@property(copy, nonatomic) NSString *m_nsMobile; // @synthesize m_nsMobile;
@property(nonatomic) unsigned int m_iPlayTipsCounter; // @synthesize m_iPlayTipsCounter;
- (void).cxx_destruct;
- (void)clearCardGetLayoutScene;
- (void)setCardGetLayOutSceneBySvr:(unsigned int)arg1;
- (void)setShareCardHasShowNew:(_Bool)arg1;
- (void)setShareCardShow:(_Bool)arg1;
- (void)setMyPackageHasShowNew:(_Bool)arg1;
- (void)setMyPackageShow:(_Bool)arg1;
- (id)getDicSetting;
- (void)theadSafeRemoveObjectForKey:(id)arg1;
- (void)theadSafeSetObject:(id)arg1 forKey:(id)arg2;
- (id)theadSafeGetObject:(id)arg1;
- (int)getInt32ForKey:(id)arg1;
- (void)setInt32:(int)arg1 forKey:(id)arg2;
- (unsigned int)getUInt32ForKey:(id)arg1;
- (void)setUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (_Bool)getBoolForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)updateLastAlertRemindTime:(unsigned int)arg1;
- (void)setLBSFootstepShow:(_Bool)arg1;
- (_Bool)isLBSFootstepShow;
- (void)copyFromSettingExt:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
