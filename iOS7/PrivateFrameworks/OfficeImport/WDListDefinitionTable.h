/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, WDDocument, WDListDefinition;

@interface WDListDefinitionTable : NSObject
{
    NSMutableArray *mListDefinitions;
    struct __CFDictionary *mListDefinitionMap;
    unsigned int mNextIdIndex;
    WDDocument *mDocument;
    WDListDefinition *mLastKnownGoodListDefinition;
}

- (id)definitionWithId:(long)arg1;
- (id)addDefinition:(long)arg1;
- (id)addDefinition;
- (id)definitionAt:(unsigned int)arg1;
- (unsigned int)definitionCount;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (void)setLastKnowGoodListDefinition:(id)arg1;
- (int)nextId;

@end
