/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

// Not exported
@interface KNAnimationAttributes : NSObject <NSCopying>
{
    NSString *mEffect;
    NSDictionary *mAttributes;
}

+ (_Bool)customAttributeKeyIsValid:(id)arg1;
+ (id)supportedCustomAttributes;
+ (id)attributesWithEffect:(id)arg1 attributes:(id)arg2;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=mAttributes;
@property(readonly, nonatomic) NSString *effect; // @synthesize effect=mEffect;
- (id)description;
- (id)valueForAttributeKey:(id)arg1;
- (_Bool)containsAttributeForKey:(id)arg1;
- (id)attributesByAddingMissingAttributesFromDictionary:(id)arg1;
- (id)attributesByAddingAttributesFromDictionary:(id)arg1;
- (id)attributesByChangingEffectToEffect:(id)arg1;
- (id)attributesBySettingValue:(id)arg1 forAttributeKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEffect:(id)arg1 attributes:(id)arg2;
- (void)dealloc;

@end

