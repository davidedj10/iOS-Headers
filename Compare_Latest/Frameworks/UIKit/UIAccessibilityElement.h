/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAccessibilityIdentification-Protocol.h"

@class NSString;

@interface UIAccessibilityElement : NSObject <UIAccessibilityIdentification>
{
}

- (id)initWithAccessibilityContainer:(id)arg1;

// Remaining properties
@property(nonatomic) id accessibilityContainer; // @dynamic accessibilityContainer;
@property(nonatomic) struct CGRect accessibilityFrame; // @dynamic accessibilityFrame;
@property(retain, nonatomic) NSString *accessibilityHint; // @dynamic accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @dynamic accessibilityIdentifier;
@property(retain, nonatomic) NSString *accessibilityLabel; // @dynamic accessibilityLabel;
@property(nonatomic) unsigned long long accessibilityTraits; // @dynamic accessibilityTraits;
@property(retain, nonatomic) NSString *accessibilityValue; // @dynamic accessibilityValue;
@property(nonatomic) _Bool isAccessibilityElement; // @dynamic isAccessibilityElement;

@end

