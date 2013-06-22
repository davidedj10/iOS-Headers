/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSCachedURLResponseInternal;

@interface NSCachedURLResponse : NSObject <NSCoding, NSCopying>
{
    NSCachedURLResponseInternal *_internal;
}

- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;
- (void)_deallocInternalCFCachedURLResponse;
- (struct _CFCachedURLResponse *)_CFCachedURLResponse;
- (void)dealloc;
- (unsigned int)storagePolicy;
- (id)userInfo;
- (id)dataArray;
- (id)data;
- (id)response;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;
- (id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned int)arg4;
- (id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned int)arg4;
- (id)initWithResponse:(id)arg1 data:(id)arg2;

@end
