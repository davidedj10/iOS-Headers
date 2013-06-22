/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBScaleIconZoomAnimator.h"

@class SBCrossfadeZoomSettings, UIView;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator
{
    UIView *_crossfadeView;
    BOOL _performsTrueCrossfade;
    BOOL _masksCorners;
}

@property(nonatomic) BOOL masksCorners; // @synthesize masksCorners=_masksCorners;
@property(nonatomic) BOOL performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
- (struct CGPoint)_zoomedIconCenter;
- (struct CGRect)_zoomedFrame;
- (void)_animateToZoomFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned int)_numberOfSignificantAnimations;
- (void)_cleanupZoom;
- (void)_setZoomFraction:(float)arg1;
- (void)_prepareZoom;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3;

// Remaining properties
@property(retain, nonatomic) SBCrossfadeZoomSettings *zoomSettings;

@end
