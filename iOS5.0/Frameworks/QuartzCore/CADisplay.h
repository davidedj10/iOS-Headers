/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CADisplayMode, NSArray, NSString;

@interface CADisplay : NSObject
{
    void *_impl;
}

+ (id)displays;
+ (id)mainDisplay;
+ (id)TVOutDisplay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)_initWithDisplay:(struct Display *)arg1;
- (void)_invalidate;
- (void)update;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly) unsigned int displayId;
@property(readonly) NSString *uniqueId;
@property(readonly, nonatomic) NSArray *availableModes;
@property(retain, nonatomic) CADisplayMode *currentMode;
@property(readonly, nonatomic) CADisplayMode *preferredMode;
@property(copy, nonatomic) NSString *colorMode;
@property BOOL allowsVirtualModes;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly) int tag;
@property(readonly, getter=isSupported) BOOL supported;
@property(readonly, getter=isExternal) BOOL external;
@property(readonly) double refreshRate;
@property(readonly, getter=isOverscanned) BOOL overscanned;
@property(readonly) float overscanAmount;
@property(copy, nonatomic) NSString *overscanAdjustment;
@property(readonly, getter=isCloned) BOOL cloned;
@property(readonly, getter=isCloningSupported) BOOL cloningSupported;
- (id)description;

@end

