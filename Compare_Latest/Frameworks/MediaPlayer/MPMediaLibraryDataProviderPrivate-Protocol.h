/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPMediaLibraryDataProvider-Protocol.h"

@class NSArray, NSString;

@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>

@optional
@property(copy, nonatomic) NSString *ubiquitousBookmarkDomainVersionAnchorToken;
@property(nonatomic) unsigned long long ubiquitousBookmarkEntityRevisionAnchor;
@property(readonly, nonatomic) NSArray *preferredSubtitleLanguages;
@property(readonly, nonatomic) NSArray *preferredAudioLanguages;
@property(readonly, nonatomic) BOOL isGeniusEnabled;
- (void)updateEntitesToCurrentRevision;
- (BOOL)supportsEntityChangeTracking;
- (void)updateUbiquitousValuesForTrackWithKey:(id)arg1 mediaPropertyValues:(id)arg2 timestamp:(double)arg3;
- (void)performUbiquitousDatabaseUpdateTransaction:(id)arg1;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2;
- (void)downloadItemWithIdentifier:(long long)arg1 completionHandler:(id)arg2;
- (void)releaseGeniusClusterPlaylist:(void *)arg1;
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg1 count:(unsigned int *)arg2 error:(id *)arg3;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg1 count:(unsigned int)arg2 error:(id *)arg3;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)moveItemFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsWithIdentifiers:(long long *)arg1 atFilteredIndexes:(id)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (void)addItemsWithIdentifiers:(long long *)arg1 count:(unsigned int)arg2 toPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (BOOL)removePlaylistWithIdentifier:(long long)arg1;
- (BOOL)removeItemsWithIdentifiers:(long long *)arg1 count:(unsigned int)arg2;
- (long long)addPlaylistWithValuesForProperties:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(int)arg4;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3;
- (void)performReadTransactionWithBlock:(id)arg1;
- (BOOL)performTransactionWithBlock:(id)arg1;
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)arg1 otherItemWithIdentifier:(long long)arg2 compareRepresentativeItemArtwork:(BOOL)arg3 missingAlwaysComparesEqual:(BOOL)arg4;
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)arg1;
- (void)loadCoverFlowArtworkImageForSize:(struct CGSize)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadBestTimedArtworkImageForSize:(struct CGSize)arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;
- (void)loadBestArtworkImageForSize:(struct CGSize)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadArtworkImageForFormat:(int)arg1 ofItemWithArtworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3 completionBlock:(id)arg4;
- (void)loadArtworkImageForFormat:(int)arg1 ofItemWithArtworkCacheID:(id)arg2 completionBlock:(id)arg3;
- (void)loadArtworkImageForFormat:(int)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (BOOL)hasUniversalBookmarkableItems;
- (BOOL)hasGeniusMixes;
- (BOOL)hasMediaOfType:(int)arg1;
- (id)lastModifiedDate;
@end
