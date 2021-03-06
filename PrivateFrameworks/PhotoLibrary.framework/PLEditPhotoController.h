/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIToolbar, NSArray, <PLEditPhotoControllerDelegate>, MLPhoto;

@interface PLEditPhotoController : UIViewController <PLCropPhotoControllerDelegate> {
    MLPhoto *_editedPhoto;
    <PLEditPhotoControllerDelegate> *_delegate;
    UIToolbar *_toolbar;
    NSArray *_originalItems;
    unsigned int _didInitializeNavigationItem : 1;
    unsigned int _toolbarWasHidden : 1;
}

@property UIToolbar * toolbar;
@property(readonly) MLPhoto * editedPhoto;
@property <PLEditPhotoControllerDelegate> * delegate;


- (void)orderOut:(id)arg1;
- (void)setToolbar:(id)arg1;
- (id)toolbar;
- (id)navigationItem;
- (id)toolbarItems;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)editPhoto:(id)arg1 inParentController:(id)arg2;
- (void)rotatePhoto:(id)arg1;
- (void)displayCropOverlay:(id)arg1;
- (id)editedPhoto;
- (void)cropPhoto:(id)arg1;
- (void)cancelCropPhoto:(id)arg1;

@end
