/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDSCore/IDSProfileMessage.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface IDSProfileLinkHandleMessage : IDSProfileMessage <NSCopying>
{
    NSString *_uri;
    NSDictionary *_authenticationData;
    NSNumber *_responseVettingStatus;
}

@property(copy) NSNumber *responseVettingStatus; // @synthesize responseVettingStatus=_responseVettingStatus;
@property(copy) NSDictionary *authenticationData; // @synthesize authenticationData=_authenticationData;
@property(copy, setter=setURI:) NSString *URI; // @synthesize URI=_uri;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (BOOL)wantsBodySignature;
- (BOOL)wantsSignature;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
