//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, ECDHKey, NSString, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface NewRegRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUserName:1;
    unsigned int hasPwd:1;
    unsigned int hasNickName:1;
    unsigned int hasBindUin:1;
    unsigned int hasBindEmail:1;
    unsigned int hasBindMobile:1;
    unsigned int hasTicket:1;
    unsigned int hasBuiltinIpseq:1;
    unsigned int hasDlsrc:1;
    unsigned int hasRegMode:1;
    unsigned int hasTimeZone:1;
    unsigned int hasLanguage:1;
    unsigned int hasForceReg:1;
    unsigned int hasRealCountry:1;
    unsigned int hasRandomEncryKey:1;
    unsigned int hasAlias:1;
    unsigned int hasVerifySignature:1;
    unsigned int hasVerifyContent:1;
    unsigned int hasHasHeadImg:1;
    unsigned int hasSuggestRet:1;
    unsigned int hasClientSeqId:1;
    unsigned int hasAdSource:1;
    unsigned int hasAndroidId:1;
    unsigned int hasMacAddr:1;
    unsigned int hasAndroidInstallRef:1;
    unsigned int hasClientFingerprint:1;
    unsigned int hasCliPubEcdhkey:1;
    unsigned int hasGoogleAid:1;
    unsigned int hasBundleId:1;
    unsigned int bindUin;
    unsigned int builtinIpseq;
    unsigned int dlsrc;
    unsigned int regMode;
    unsigned int forceReg;
    unsigned int hasHeadImg;
    unsigned int suggestRet;
    BaseRequest *baseRequest;
    NSString *userName;
    NSString *pwd;
    NSString *nickName;
    NSString *bindEmail;
    NSString *bindMobile;
    NSString *ticket;
    NSString *timeZone;
    NSString *language;
    NSString *realCountry;
    SKBuiltinBuffer_t *randomEncryKey;
    NSString *alias;
    NSString *verifySignature;
    NSString *verifyContent;
    NSString *clientSeqId;
    NSString *adSource;
    NSString *androidId;
    NSString *macAddr;
    NSString *androidInstallRef;
    NSString *clientFingerprint;
    ECDHKey *cliPubEcdhkey;
    NSString *googleAid;
    NSString *bundleId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetBundleId:) NSString *bundleId; // @synthesize bundleId;
@property(readonly, nonatomic) BOOL hasBundleId; // @synthesize hasBundleId;
@property(retain, nonatomic, setter=SetGoogleAid:) NSString *googleAid; // @synthesize googleAid;
@property(readonly, nonatomic) BOOL hasGoogleAid; // @synthesize hasGoogleAid;
@property(retain, nonatomic, setter=SetCliPubEcdhkey:) ECDHKey *cliPubEcdhkey; // @synthesize cliPubEcdhkey;
@property(readonly, nonatomic) BOOL hasCliPubEcdhkey; // @synthesize hasCliPubEcdhkey;
@property(retain, nonatomic, setter=SetClientFingerprint:) NSString *clientFingerprint; // @synthesize clientFingerprint;
@property(readonly, nonatomic) BOOL hasClientFingerprint; // @synthesize hasClientFingerprint;
@property(retain, nonatomic, setter=SetAndroidInstallRef:) NSString *androidInstallRef; // @synthesize androidInstallRef;
@property(readonly, nonatomic) BOOL hasAndroidInstallRef; // @synthesize hasAndroidInstallRef;
@property(retain, nonatomic, setter=SetMacAddr:) NSString *macAddr; // @synthesize macAddr;
@property(readonly, nonatomic) BOOL hasMacAddr; // @synthesize hasMacAddr;
@property(retain, nonatomic, setter=SetAndroidId:) NSString *androidId; // @synthesize androidId;
@property(readonly, nonatomic) BOOL hasAndroidId; // @synthesize hasAndroidId;
@property(retain, nonatomic, setter=SetAdSource:) NSString *adSource; // @synthesize adSource;
@property(readonly, nonatomic) BOOL hasAdSource; // @synthesize hasAdSource;
@property(retain, nonatomic, setter=SetClientSeqId:) NSString *clientSeqId; // @synthesize clientSeqId;
@property(readonly, nonatomic) BOOL hasClientSeqId; // @synthesize hasClientSeqId;
@property(nonatomic, setter=SetSuggestRet:) unsigned int suggestRet; // @synthesize suggestRet;
@property(readonly, nonatomic) BOOL hasSuggestRet; // @synthesize hasSuggestRet;
@property(nonatomic, setter=SetHasHeadImg:) unsigned int hasHeadImg; // @synthesize hasHeadImg;
@property(readonly, nonatomic) BOOL hasHasHeadImg; // @synthesize hasHasHeadImg;
@property(retain, nonatomic, setter=SetVerifyContent:) NSString *verifyContent; // @synthesize verifyContent;
@property(readonly, nonatomic) BOOL hasVerifyContent; // @synthesize hasVerifyContent;
@property(retain, nonatomic, setter=SetVerifySignature:) NSString *verifySignature; // @synthesize verifySignature;
@property(readonly, nonatomic) BOOL hasVerifySignature; // @synthesize hasVerifySignature;
@property(retain, nonatomic, setter=SetAlias:) NSString *alias; // @synthesize alias;
@property(readonly, nonatomic) BOOL hasAlias; // @synthesize hasAlias;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(retain, nonatomic, setter=SetRealCountry:) NSString *realCountry; // @synthesize realCountry;
@property(readonly, nonatomic) BOOL hasRealCountry; // @synthesize hasRealCountry;
@property(nonatomic, setter=SetForceReg:) unsigned int forceReg; // @synthesize forceReg;
@property(readonly, nonatomic) BOOL hasForceReg; // @synthesize hasForceReg;
@property(retain, nonatomic, setter=SetLanguage:) NSString *language; // @synthesize language;
@property(readonly, nonatomic) BOOL hasLanguage; // @synthesize hasLanguage;
@property(retain, nonatomic, setter=SetTimeZone:) NSString *timeZone; // @synthesize timeZone;
@property(readonly, nonatomic) BOOL hasTimeZone; // @synthesize hasTimeZone;
@property(nonatomic, setter=SetRegMode:) unsigned int regMode; // @synthesize regMode;
@property(readonly, nonatomic) BOOL hasRegMode; // @synthesize hasRegMode;
@property(nonatomic, setter=SetDlsrc:) unsigned int dlsrc; // @synthesize dlsrc;
@property(readonly, nonatomic) BOOL hasDlsrc; // @synthesize hasDlsrc;
@property(nonatomic, setter=SetBuiltinIpseq:) unsigned int builtinIpseq; // @synthesize builtinIpseq;
@property(readonly, nonatomic) BOOL hasBuiltinIpseq; // @synthesize hasBuiltinIpseq;
@property(retain, nonatomic, setter=SetTicket:) NSString *ticket; // @synthesize ticket;
@property(readonly, nonatomic) BOOL hasTicket; // @synthesize hasTicket;
@property(retain, nonatomic, setter=SetBindMobile:) NSString *bindMobile; // @synthesize bindMobile;
@property(readonly, nonatomic) BOOL hasBindMobile; // @synthesize hasBindMobile;
@property(retain, nonatomic, setter=SetBindEmail:) NSString *bindEmail; // @synthesize bindEmail;
@property(readonly, nonatomic) BOOL hasBindEmail; // @synthesize hasBindEmail;
@property(nonatomic, setter=SetBindUin:) unsigned int bindUin; // @synthesize bindUin;
@property(readonly, nonatomic) BOOL hasBindUin; // @synthesize hasBindUin;
@property(retain, nonatomic, setter=SetNickName:) NSString *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetPwd:) NSString *pwd; // @synthesize pwd;
@property(readonly, nonatomic) BOOL hasPwd; // @synthesize hasPwd;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
