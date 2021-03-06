/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSLock, NSMutableDictionary, MLPhotoLibrary;

@interface PLBakedVideoFilesCacheCreator : NSObject <MLPhotoBakedThumbnailsDelegate, PLCachedFilesManagerPlugin> {
    MLPhotoLibrary *_photoLibrary;
    BOOL _cancelPostProcessing;
    NSLock *_cancellationLock;
    NSMutableDictionary *_optionsDictionary;
}


- (void)cancel;
- (void)dealloc;
- (void)_addBakedThumbnailsForVideo:(id)arg1 toCollection:(id)arg2 sourceFormat:(int)arg3 bakedFormats:(id)arg4;
- (void)createBakedThumbnailsForVideo:(id)arg1;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)_garbageCollectCachedFiles;
- (void)_createNewVideoCachedFiles;
- (id)_pathToVideosMetadataFile;
- (void)_removeOldAlbumVideosBakedThumbnails;
- (BOOL)recreateCachedFilesIfNecessary;
- (id)initWithPhotoLibrary:(id)arg1;

@end
