//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface SYUserHelper : NSObject
{
    long long _today_period_type;
    _Bool _bMarry;
    _Bool _isBindQQZone;
    _Bool _isBindSina;
    _Bool _isBindMobile;
    _Bool _isSetUserModel;
    _Bool _pars_is_sync;
    _Bool _isNeedSyncHospitalInfo;
    _Bool _is_friend_version;
    _Bool _isPregnantCreateBaby;
    int _userModelType;
    int _loginType;
    float _heigth;
    NSString *_userid;
    long long _pars_interval;
    long long _pars_menses_day;
    NSString *_lastTimeMenses;
    NSString *_pregnancy;
    NSString *_babyBirthday;
    NSString *_baby_nick;
    NSString *_baby_weight;
    NSString *_greetings;
    NSMutableDictionary *_updateInfoDic;
    NSString *_headImageURL;
    NSDictionary *_sinaWeiboLoginInfo;
    NSDictionary *_qqSpaceLoginInfo;
    NSDictionary *_emailLoginInfo;
    NSString *_brithday;
    NSString *_accountName;
    NSString *_headImageFileName;
    NSString *_screen_name;
    NSString *_consigneeID;
    NSString *_consigneeName;
    NSString *_consigneeAddress;
    NSString *_consigneePhone;
    NSString *_consigneePostCode;
    long long _consigneeProvinceID;
    long long _consigneeCityID;
    long long _consigneeAreaID;
    NSString *_bindQQZone;
    NSString *_bindSina;
    NSString *_bindMobile;
    NSString *_hospital;
    long long _hospitalCityId;
    long long _hospitalId;
    NSString *_city;
    long long _userRank;
    long long _activeDays;
    NSString *_contactQQ;
    NSString *_contactEmail;
    long long _isShowVip;
    NSURL *_myAvatarURL;
    long long _mainAccountLogin;
    NSDate *_syncmlSuccessDate;
    NSString *_dayRecordTimestamp;
    NSDate *_uploadABDate;
    long long _baby_sex;
    long long _is_eutocia;
    unsigned long long _gravidity_value;
    long long _daysOfUseYunQi;
    long long _daysOfPregnancy;
    long long _daysOfBabyBirth;
    long long _daysOfForPregnancy;
}

+ (id)getLoginDataJSON:(id)arg1;
+ (id)setUserIDFromMain:(id)arg1;
+ (void)setUserID:(id)arg1;
+ (void)initWithUserIDWithSafe:(id)arg1;
+ (void)initWithUserID:(id)arg1;
+ (id)getPrimaryKey;
+ (id)getTableName;
+ (id)sharedHelper;
+ (void)initialize;
+ (void)sy_lock:(CDUnknownBlockType)arg1;
+ (_Bool)is430UpgradeVersion;
+ (void)setLastTimeMenses:(id)arg1;
+ (id)getLastTimeMenses;
+ (void)getUserUseDays;
+ (void)sendDeviceID;
+ (void)synYBBOldMensesData;
+ (void)synForPregnantInfo;
+ (void)sendUserIDChangedEvent;
+ (void)registerUserIDChangedEventWithObject:(id)arg1;
+ (void)registerUserIDChangedEventWithClass:(Class)arg1;
+ (void)setupRegistClassArray;
+ (long long)getServerUserMode;
+ (long long)getBabyMother;
+ (long long)getPregnanyCurWeek;
+ (long long)lamaDay;
+ (id)lamaStartDate;
+ (id)pregnantDate;
+ (id)pregnantStartDate;
+ (id)getLastMensesDay;
+ (long long)pregnantDay;
+ (void)currentPeriodType:(long long *)arg1 days:(long long *)arg2;
+ (id)currentHomePaiLuanString;
+ (long long)pregnantProbability;
@property(nonatomic) _Bool isPregnantCreateBaby; // @synthesize isPregnantCreateBaby=_isPregnantCreateBaby;
@property(nonatomic) _Bool is_friend_version; // @synthesize is_friend_version=_is_friend_version;
@property(nonatomic) long long daysOfForPregnancy; // @synthesize daysOfForPregnancy=_daysOfForPregnancy;
@property(nonatomic) long long daysOfBabyBirth; // @synthesize daysOfBabyBirth=_daysOfBabyBirth;
@property(nonatomic) long long daysOfPregnancy; // @synthesize daysOfPregnancy=_daysOfPregnancy;
@property(nonatomic) long long daysOfUseYunQi; // @synthesize daysOfUseYunQi=_daysOfUseYunQi;
@property(nonatomic) unsigned long long gravidity_value; // @synthesize gravidity_value=_gravidity_value;
@property(nonatomic) _Bool isNeedSyncHospitalInfo; // @synthesize isNeedSyncHospitalInfo=_isNeedSyncHospitalInfo;
@property _Bool pars_is_sync; // @synthesize pars_is_sync=_pars_is_sync;
@property(nonatomic) long long is_eutocia; // @synthesize is_eutocia=_is_eutocia;
@property(nonatomic) long long baby_sex; // @synthesize baby_sex=_baby_sex;
@property(retain, nonatomic) NSDate *uploadABDate; // @synthesize uploadABDate=_uploadABDate;
@property(nonatomic) _Bool isSetUserModel; // @synthesize isSetUserModel=_isSetUserModel;
@property(retain, nonatomic) NSString *dayRecordTimestamp; // @synthesize dayRecordTimestamp=_dayRecordTimestamp;
@property(copy, nonatomic) NSDate *syncmlSuccessDate; // @synthesize syncmlSuccessDate=_syncmlSuccessDate;
@property(nonatomic) long long mainAccountLogin; // @synthesize mainAccountLogin=_mainAccountLogin;
@property(copy, nonatomic) NSURL *myAvatarURL; // @synthesize myAvatarURL=_myAvatarURL;
@property(nonatomic) long long isShowVip; // @synthesize isShowVip=_isShowVip;
@property(retain, nonatomic) NSString *contactEmail; // @synthesize contactEmail=_contactEmail;
@property(retain, nonatomic) NSString *contactQQ; // @synthesize contactQQ=_contactQQ;
@property(nonatomic) long long activeDays; // @synthesize activeDays=_activeDays;
@property(nonatomic) long long userRank; // @synthesize userRank=_userRank;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) long long hospitalId; // @synthesize hospitalId=_hospitalId;
@property(nonatomic) long long hospitalCityId; // @synthesize hospitalCityId=_hospitalCityId;
@property(retain, nonatomic) NSString *hospital; // @synthesize hospital=_hospital;
@property(retain, nonatomic) NSString *bindMobile; // @synthesize bindMobile=_bindMobile;
@property(nonatomic) _Bool isBindMobile; // @synthesize isBindMobile=_isBindMobile;
@property(retain, nonatomic) NSString *bindSina; // @synthesize bindSina=_bindSina;
@property(nonatomic) _Bool isBindSina; // @synthesize isBindSina=_isBindSina;
@property(retain, nonatomic) NSString *bindQQZone; // @synthesize bindQQZone=_bindQQZone;
@property(nonatomic) _Bool isBindQQZone; // @synthesize isBindQQZone=_isBindQQZone;
@property(nonatomic) long long consigneeAreaID; // @synthesize consigneeAreaID=_consigneeAreaID;
@property(nonatomic) long long consigneeCityID; // @synthesize consigneeCityID=_consigneeCityID;
@property(nonatomic) long long consigneeProvinceID; // @synthesize consigneeProvinceID=_consigneeProvinceID;
@property(retain, nonatomic) NSString *consigneePostCode; // @synthesize consigneePostCode=_consigneePostCode;
@property(retain, nonatomic) NSString *consigneePhone; // @synthesize consigneePhone=_consigneePhone;
@property(retain, nonatomic) NSString *consigneeAddress; // @synthesize consigneeAddress=_consigneeAddress;
@property(retain, nonatomic) NSString *consigneeName; // @synthesize consigneeName=_consigneeName;
@property(retain, nonatomic) NSString *consigneeID; // @synthesize consigneeID=_consigneeID;
@property(copy, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(retain, nonatomic) NSString *headImageFileName; // @synthesize headImageFileName=_headImageFileName;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(nonatomic) _Bool bMarry; // @synthesize bMarry=_bMarry;
@property(nonatomic) float heigth; // @synthesize heigth=_heigth;
@property(retain, nonatomic) NSString *brithday; // @synthesize brithday=_brithday;
@property(retain, nonatomic) NSDictionary *emailLoginInfo; // @synthesize emailLoginInfo=_emailLoginInfo;
@property(retain, nonatomic) NSDictionary *qqSpaceLoginInfo; // @synthesize qqSpaceLoginInfo=_qqSpaceLoginInfo;
@property(retain, nonatomic) NSDictionary *sinaWeiboLoginInfo; // @synthesize sinaWeiboLoginInfo=_sinaWeiboLoginInfo;
@property int loginType; // @synthesize loginType=_loginType;
@property(copy, nonatomic) NSString *greetings; // @synthesize greetings=_greetings;
@property(retain, nonatomic) NSString *babyBirthday; // @synthesize babyBirthday=_babyBirthday;
@property(nonatomic) int userModelType; // @synthesize userModelType=_userModelType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *updateInfoDic; // @synthesize updateInfoDic=_updateInfoDic;
@property(copy, nonatomic) NSString *baby_weight; // @synthesize baby_weight=_baby_weight;
@property(copy, nonatomic) NSString *baby_nick; // @synthesize baby_nick=_baby_nick;
- (id)babyBirthDate;
- (id)babyBirthDateFormatter;
@property(retain, nonatomic) NSString *pregnancy; // @synthesize pregnancy=_pregnancy;
@property(retain, nonatomic) NSString *lastTimeMenses; // @synthesize lastTimeMenses=_lastTimeMenses;
@property(retain, nonatomic) NSString *headImageURL; // @synthesize headImageURL=_headImageURL;
@property(nonatomic) long long pars_menses_day; // @synthesize pars_menses_day=_pars_menses_day;
@property(nonatomic) long long pars_interval; // @synthesize pars_interval=_pars_interval;
- (long long)today_period_type;
- (void)userSetValueForModel:(id)arg1 value:(id)arg2;
- (id)userGetValueForModel:(id)arg1;
- (void)exit;
- (void)exit_only;
- (void)initOther;
- (void)setUserid:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
- (void)dealloc;
- (_Bool)hasSendLuckyBag;
@property(readonly) NSString *modeTypeStr;
@property(readonly) NSString *s_userModelTypeString;
@property(readonly) int s_user_ModelType;

@end
