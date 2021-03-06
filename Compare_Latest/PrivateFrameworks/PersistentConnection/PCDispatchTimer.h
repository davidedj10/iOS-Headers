/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CUTWeakReference, NSDate;

// Not exported
@interface PCDispatchTimer : NSObject
{
    struct dispatch_source_s *_timerSource;
    struct dispatch_queue_s *_queue;
    unsigned long long _fireTime;
    NSDate *_fireDate;
    CUTWeakReference *_target;
    SEL _selector;
    _Bool _isValid;
}

- (void)invalidate;
@property(retain, nonatomic) NSDate *fireDate;
- (void)start;
- (void)_cleanupTimer;
@property(readonly, nonatomic) _Bool isValid;
- (void)_callTarget;
- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4;

@end

