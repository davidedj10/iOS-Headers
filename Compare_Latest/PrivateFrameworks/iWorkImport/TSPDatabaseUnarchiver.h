/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPUnarchiver.h>

// Not exported
@interface TSPDatabaseUnarchiver : TSPUnarchiver
{
    unsigned long long _databaseVersion;
}

@property(readonly, nonatomic) unsigned long long preUFFVersion; // @synthesize preUFFVersion=_databaseVersion;
- (set_6550bfbd *)filterIdentifiers:(const set_6550bfbd *)arg1;
- (id)initWithMessageType:(unsigned int)arg1 message:(auto_ptr_4370f086)arg2 identifier:(long long)arg3 strongReferences:(auto_ptr_2bf936f6)arg4 databaseVersion:(unsigned long long)arg5 objectDelegate:(id)arg6 lazyReferenceDelegate:(id)arg7 delegate:(id)arg8 error:(id *)arg9;
- (id)initWithMessageType:(unsigned int)arg1 message:(auto_ptr_4370f086)arg2 identifier:(long long)arg3 strongReferences:(auto_ptr_2bf936f6)arg4 fieldInfos:(auto_ptr_40e77785)arg5 version:(unsigned long long)arg6 unknownMessages:(id)arg7 ignoreVersionChecking:(_Bool)arg8 objectDelegate:(id)arg9 lazyReferenceDelegate:(id)arg10 delegate:(id)arg11 error:(id *)arg12;

@end

