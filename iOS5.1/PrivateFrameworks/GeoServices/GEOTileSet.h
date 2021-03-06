/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOTileSetVersion, NSMutableArray, NSString;

@interface GEOTileSet : PBCodable
{
    NSString *_baseURL;
    NSString *_multiTileURL;
    int _style;
    GEOTileSetVersion *_preferredVersion;
    NSMutableArray *_validVersions;
    int _scale;
    int _size;
    NSMutableArray *_providers;
}

@property(retain, nonatomic) NSMutableArray *providers; // @synthesize providers=_providers;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSMutableArray *validVersions; // @synthesize validVersions=_validVersions;
@property(retain, nonatomic) GEOTileSetVersion *preferredVersion; // @synthesize preferredVersion=_preferredVersion;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *multiTileURL; // @synthesize multiTileURL=_multiTileURL;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)providerAtIndex:(unsigned int)arg1;
- (unsigned int)providersCount;
- (void)addProvider:(id)arg1;
- (id)validVersionAtIndex:(unsigned int)arg1;
- (unsigned int)validVersionsCount;
- (void)addValidVersion:(id)arg1;
- (void)dealloc;

@end

