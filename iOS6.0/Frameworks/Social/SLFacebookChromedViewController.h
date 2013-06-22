/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class UINavigationBar, UIView;

@interface SLFacebookChromedViewController : UIViewController
{
    UINavigationBar *_navigationBar;
    UIView *_contentView;
    UIView *_backgroundChromeView;
    UIView *_innerShadowView;
    UIViewController *_presentedViewController;
    int _forcedInterfaceOrientation;
    BOOL _navigationBarHidden;
    BOOL _shouldForceInterfaceOrientation;
    BOOL _useNotificationCenterPresentationStyle;
}

@property BOOL useNotificationCenterPresentationStyle; // @synthesize useNotificationCenterPresentationStyle=_useNotificationCenterPresentationStyle;
- (void).cxx_destruct;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillLayoutSubviews;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (struct CGRect)_navBarFrame;
- (id)_backgroundImageForOrientation:(int)arg1;
- (int)_currentOrientation;
- (struct CGRect)_innerShadowFrame;
- (struct CGRect)_contentFrame;
- (void)setForcedInterfaceOrientation:(int)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_hideMenuBar;
- (void)_showMenuBar;
- (void)popViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
