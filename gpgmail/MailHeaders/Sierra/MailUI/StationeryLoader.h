//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, _StationeryThumbnailCreator;

@interface StationeryLoader : NSObject
{
    NSMutableDictionary *_categoriesByDisplayName;	// 8 = 0x8
    NSMutableArray *_orderedCategoryDisplayNames;	// 16 = 0x10
    NSMutableDictionary *_orderedStationeryByCategoryDisplayName;	// 24 = 0x18
    _StationeryThumbnailCreator *_thumbnailCreator;	// 32 = 0x20
}

+ (void)purgeDeletedCustomStationery;	// IMP=0x0000000100005511
+ (id)pathForCustomCategoryResources;	// IMP=0x00000001000057f7
+ (id)pathForCustomCategory;	// IMP=0x000000010000584e
+ (id)sharedInstance;	// IMP=0x00000001002c6ccc
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002c6c12
@property(retain) _StationeryThumbnailCreator *thumbnailCreator; // @synthesize thumbnailCreator=_thumbnailCreator;
- (void).cxx_destruct;	// IMP=0x00000001002cff37
- (void)_synchronouslyPurgeDeletedCustomStationery:(id)arg1;	// IMP=0x00000001002cfca1
- (void)purgeDeletedCustomStationery:(id)arg1;	// IMP=0x00000001002cfc47
- (void)_reinsertStationeryWithInformation:(id)arg1;	// IMP=0x00000001002cf432
- (void)deleteStationeryWithDictionary:(id)arg1 fromCategoryWithDisplayName:(id)arg2 undoManager:(id)arg3;	// IMP=0x00000001002ced57
- (BOOL)installStationery:(id)arg1;	// IMP=0x00000001002ce914
- (BOOL)_saveCustomStationery:(id)arg1 byMovingFromPath:(id)arg2 error:(id *)arg3;	// IMP=0x00000001002cdde7
- (BOOL)saveCustomStationery:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002cdd79
- (BOOL)_recursivelyCreateDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002cdadc
- (void)_addToFavoritesInPosition:(unsigned long long)arg1 stationeryWithPath:(id)arg2 inCategoryWithDisplayName:(id)arg3;	// IMP=0x00000001002cd7e5
- (void)addToFavoritesStationeryWithPath:(id)arg1 inCategoryWithDisplayName:(id)arg2;	// IMP=0x00000001002cd796
- (BOOL)customStationeryWithNameExists:(id)arg1 index:(unsigned long long *)arg2;	// IMP=0x00000001002cd5cc
- (BOOL)stationery:(id)arg1 isInCategoryWithDisplayName:(id)arg2;	// IMP=0x00000001002cd37f
- (void)thumbnailCreator:(id)arg1 didCreateThumbnail:(id)arg2 forCustomStationeryWithPath:(id)arg3;	// IMP=0x00000001002ccf8f
- (void)thumbnailCreatorDidCreateThumbnailForCustomStationery:(id)arg1;	// IMP=0x00000001002ccec1
- (void)thumbnailCreatorDidCompletelyFinish:(id)arg1;	// IMP=0x00000001002ccead
- (id)_categoryTOCForCategoryFolderName:(id)arg1 company:(id)arg2 type:(long long)arg3 categoryDisplayName:(id)arg4;	// IMP=0x00000001002cc275
- (void)_updateStationeryInCategoryWithDisplayName:(id)arg1;	// IMP=0x00000001002cb9a5
- (id)_validatedStationeryDictionary:(id)arg1 withName:(id)arg2 categoryBundle:(id)arg3 needsThumbnail:(char *)arg4;	// IMP=0x00000001002cb44c
- (id)_validatedCompanyCategoryDictionary:(id)arg1 categoryFolderName:(id)arg2 companyBundle:(id)arg3 type:(long long)arg4;	// IMP=0x00000001002cacdf
- (id)_dictionaryForCustomCategoryForCompany:(BOOL)arg1;	// IMP=0x00000001002ca9eb
- (void)_combinePartialTOCs:(id)arg1;	// IMP=0x00000001002c9f89
- (id)_companyTOCWithName:(id)arg1 type:(long long)arg2 isFromCache:(char *)arg3;	// IMP=0x00000001002c9568
- (void)_updateCategories;	// IMP=0x00000001002c89f2
- (id)_cacheNameForCompany:(id)arg1 categoryDisplayName:(id)arg2 type:(long long)arg3;	// IMP=0x00000001002c8875
- (void)_cacheTOC:(id)arg1 withName:(id)arg2;	// IMP=0x00000001002c8590
- (id)_cachedTOCWithName:(id)arg1;	// IMP=0x00000001002c8335
- (id)_pathForStationeryNamed:(id)arg1 inCategoryWithDisplayName:(id)arg2;	// IMP=0x00000001002c80f9
- (id)_bundlePathForCategoryWithFolderName:(id)arg1 company:(id)arg2 type:(long long)arg3;	// IMP=0x00000001002c7e85
- (void)createAppleUserCompanyBundleIfNecessary;	// IMP=0x00000001002c7d74
- (id)pathForFavoritesList;	// IMP=0x00000001002c7c34
- (id)orderedStationeryDictionariesForCategoryWithDisplayName:(id)arg1;	// IMP=0x00000001002c7bb1
@property(readonly, copy, nonatomic) NSArray *orderedCategoryDictionaries;
@property(readonly, copy, nonatomic) NSArray *orderedCategoryDisplayNamesIncludingFavorites;
- (void)updateStationery;	// IMP=0x00000001002c76c0
- (id)_dictionaryForStationeryWithPath:(id)arg1 inCategoryWithDisplayName:(id)arg2 position:(unsigned long long *)arg3;	// IMP=0x00000001002c737d
- (id)_dictionaryForStationeryWithPath:(id)arg1 inCategoryWithDisplayName:(id)arg2;	// IMP=0x00000001002c7322
- (id)pathForStationeryWithID:(id)arg1;	// IMP=0x00000001002c6f42
- (id)stationeryWithPath:(id)arg1;	// IMP=0x00000001002c6ee1
- (id)stationeryWithID:(id)arg1;	// IMP=0x00000001002c6e7d
- (void)dealloc;	// IMP=0x00000001002c6dac

@end

