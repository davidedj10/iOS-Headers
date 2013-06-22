/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class GKRotatedIconView, GKUITheme, NSString, NSURL, UIImage;

@interface GKInviteHeaderView : UIView
{
    GKUITheme *_theme;
    UIImage *_outlineImage;
    NSURL *_fontURL;
    NSString *_title;
    GKRotatedIconView *_iconView;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *fontURL; // @synthesize fontURL=_fontURL;
@property(retain, nonatomic) UIImage *outlineImage; // @synthesize outlineImage=_outlineImage;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateTitle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
