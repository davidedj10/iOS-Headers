/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSUndoManager;

@interface UIResponder : NSObject
{
}

@property(readonly, nonatomic) NSUndoManager *undoManager;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_clearBecomeFirstResponderWhenCapable;
- (id)firstResponder;
- (BOOL)isFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_finishResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)_containsResponder:(id)arg1;
- (id)_window;
- (BOOL)_containedInAbsoluteResponderChain;
- (id)_responderForEditing;
- (id)_editingDelegate;
- (BOOL)_isRootForKeyResponderCycle;
- (id)_previousKeyResponder;
- (id)_nextKeyResponder;
- (id)nextResponder;
- (void)gestureChanged:(struct __GSEvent *)arg1;
- (void)gestureEnded:(struct __GSEvent *)arg1;
- (void)gestureStarted:(struct __GSEvent *)arg1;
- (void)scrollWheel:(struct __GSEvent *)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)motionCancelled:(int)arg1 withEvent:(id)arg2;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)motionBegan:(int)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)mouseMoved:(struct __GSEvent *)arg1;
- (void)mouseExited:(struct __GSEvent *)arg1;
- (void)mouseEntered:(struct __GSEvent *)arg1;
- (void)mouseDragged:(struct __GSEvent *)arg1;
- (void)mouseUp:(struct __GSEvent *)arg1;
- (void)mouseDown:(struct __GSEvent *)arg1;

@end

