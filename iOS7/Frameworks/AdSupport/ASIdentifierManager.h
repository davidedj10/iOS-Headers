/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSUUID;

@interface ASIdentifierManager : NSObject
{
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSUUID *advertisingIdentifier;
@property(readonly, nonatomic, getter=isAdvertisingTrackingEnabled) _Bool advertisingTrackingEnabled;

@end

