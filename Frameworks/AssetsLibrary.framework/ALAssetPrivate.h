/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsLibrary, MLPhoto;

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset> {
    MLPhoto *_photo;
    ALAssetsLibrary *_library;
    BOOL _isValid;
}

@property BOOL isValid;
@property ALAssetsLibrary * library;
@property(retain) MLPhoto * photo;


- (void)libraryWillDisappear;
- (void)libraryDidChange;
- (void)setIsValid:(BOOL)arg1;
- (id)initWithMLPhoto:(id)arg1 library:(id)arg2;
- (BOOL)isValid;
- (void)dealloc;
- (void)setLibrary:(id)arg1;
- (id)library;
- (void)setPhoto:(id)arg1;
- (id)photo;

@end
