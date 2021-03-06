/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIPreferencesTableCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class UILabel, UITextField;

@interface UIPreferencesTextTableCell : UIPreferencesTableCell <UITextFieldDelegate>
{
    UITextField *_textField;
    UILabel *_valueSuffixLabel;
    float _textFieldOffset;
    SEL _returnAction;
}

- (void)layoutSubviews;
- (void)_updateSuffixFrame;
- (void)setPlaceHolderValue:(id)arg1;
- (id)textField;
- (void)textFieldClearButtonPressed:(id)arg1;
- (void)_textValueChanged:(id)arg1;
- (void)_textFieldEndEditingOnReturn:(id)arg1;
- (void)_textFieldEndEditing:(id)arg1;
- (void)_textFieldStartEditing:(id)arg1;
- (id)valueTextLabel;
- (id)value;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)setValue:(id)arg1;
- (BOOL)hasValueSuffix;
- (void)setValueSuffix:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)_disabledFontColor;
- (void)dealloc;
- (void)setReturnAction:(SEL)arg1;
- (float)textFieldOffset;
- (void)setTextFieldOffset:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

