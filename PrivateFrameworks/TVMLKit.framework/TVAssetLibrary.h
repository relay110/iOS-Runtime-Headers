/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVAssetLibrary : NSObject {
    NSString * _cachePath;
    NSMutableArray * _registeredGroups;
    NSObject<OS_dispatch_queue> * assetAccessQueue;
    NSObject<OS_dispatch_queue> * assetWriteQueue;
}

@property (nonatomic, copy) NSString *cachePath;
@property (nonatomic, retain) NSMutableArray *registeredGroups;

+ (void)_initializeAssetLibraryWithCachePath:(id)arg1 screensaverCache:(BOOL)arg2 purgeCacheOnLoad:(BOOL)arg3;
+ (void)initializeAssetLibraryWithCachePath:(id)arg1;
+ (void)initializeAssetLibraryWithCachePath:(id)arg1 purgeCacheOnLoad:(BOOL)arg2;
+ (void)intializeScreensaverSharedAssetLibrary;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)assetExpiryDateForKey:(id)arg1 inGroupOfType:(int)arg2;
- (id)assetForKey:(id)arg1 inGroupOfType:(int)arg2;
- (id)assetPathForKey:(id)arg1 inGroupOfType:(int)arg2;
- (id)assetPathsForGroupOfType:(int)arg1;
- (id)cachePath;
- (id)cachePathForGroupOfType:(int)arg1;
- (id)groupWithGroupType:(int)arg1;
- (id)initWithCachePath:(id)arg1 screensaverCache:(BOOL)arg2 purgeCacheOnLoad:(BOOL)arg3;
- (void)purgeAssetsInGroupOfType:(int)arg1;
- (void)registerGroup:(id)arg1;
- (id)registeredGroups;
- (void)removeAssetForKey:(id)arg1 inGroupOfType:(int)arg2;
- (void)setCachePath:(id)arg1;
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(int)arg3 expiryDate:(id)arg4;
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(int)arg3 expiryDate:(id)arg4 overWrite:(BOOL)arg5;
- (void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(int)arg3 expiryDate:(id)arg4;
- (void)setRegisteredGroups:(id)arg1;
- (void)unRegisterGroup:(int)arg1;
- (void)updateAssetsInGroupOfType:(int)arg1;

@end
