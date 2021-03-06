/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVURLAssetInternal, AVAssetCache, NSURL;

@interface AVURLAsset : AVAsset  {
    AVURLAssetInternal *_asset;
}

@property(readonly) AVAssetCache * assetCache;
@property(readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly) NSString * cacheKey;
@property(copy,readonly) NSURL * URL;

+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;

- (id)cacheKey;
- (id)URL;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)lyrics;
- (id)tracks;
- (struct __CFURL { }*)_URL;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)_assetInspectorLoader;
- (void)_setAssetInspectorLoader:(id)arg1;
- (id)_assetInspector;
- (void)_tracksDidChange;
- (void)cancelLoading;
- (id)_chapterGroupInfo;
- (id)availableChapterLocales;
- (unsigned int)_addChapterMetadataItem:(id)arg1 withDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 toChapters:(id)arg4 fromIndex:(unsigned int)arg5;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)assetCache;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (id)initWithURL:(id)arg1 options:(id)arg2;

@end
