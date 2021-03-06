/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDKnobTracker.h>

// Not exported
@interface TSDButtonKnobTracker : TSDKnobTracker
{
    id mTarget;
    SEL mAction;
}

@property(nonatomic) SEL action; // @synthesize action=mAction;
@property(nonatomic) id target; // @synthesize target=mTarget;
- (void)endMovingKnob;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
- (_Bool)p_knobContainsCurrentPosition;
- (_Bool)shouldHideSelectionHighlight;
- (_Bool)shouldHideOtherKnobs;
- (_Bool)operationShouldBeDynamic;
- (_Bool)allowHUDToDisplay;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

@end

