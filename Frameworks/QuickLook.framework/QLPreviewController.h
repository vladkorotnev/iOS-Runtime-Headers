/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <QLPreviewControllerDataSource>, <QLPreviewItem>, QLPreviewControllerReserved;

@interface QLPreviewController : UIViewController  {
    QLPreviewControllerReserved *_reserved;
}

@property <QLPreviewControllerDataSource> * dataSource;
@property int currentPreviewItemIndex;
@property(readonly) <QLPreviewItem> * currentPreviewItem;
@property id delegate;

+ (BOOL)canPreviewItem:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)loadView;
- (void)_viewWillStartPresentWithTransition;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_startPresentCustomTransitionWithDuration:(double)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)reloadData;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)hidesBottomBarWhenPushed;
- (int)modalPresentationStyle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (int)modalTransitionStyle;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)dataSource;
- (void)_commonInit;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_showOverlayAnimated:(BOOL)arg1;
- (void)_hideOverlayAnimated:(BOOL)arg1;
- (void)_fireOverlayIdleTimer:(id)arg1;
- (void)_resetOverlayIdleTimer;
- (BOOL)canPrint;
- (int)currentPreviewItemIndex;
- (BOOL)_isInNavigationController;
- (id)_currentNavigationController;
- (void)setPreviewItem:(id)arg1;
- (id)previewItem;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (BOOL)blockRemoteImages;
- (void)setActionMenuEnabled:(BOOL)arg1;
- (BOOL)actionMenuEnabled;
- (id)currentPreviewItem;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)refreshCurrentPreviewItem;
- (void)previewView:(id)arg1 willRemoveDisplayBundle:(id)arg2;
- (void)previewView:(id)arg1 willAddDisplayBundle:(id)arg2;
- (id)_titleForPreviewItem:(id)arg1;
- (void)_loadToolbarItems;
- (void)_loadInternalViews;
- (void)_removeOverlayIdleTimer;
- (void)_updateArrows;
- (void)_updateNavigationBarWithPreviewItem:(id)arg1;
- (void)previewView:(id)arg1 didLoadItem:(id)arg2 withError:(id)arg3;
- (id)previewView:(id)arg1 willSendRequest:(id)arg2;
- (BOOL)previewView:(id)arg1 decidePolicyForNavigationType:(int)arg2 request:(id)arg3;
- (id)_documentProxy;
- (void)_openURL:(id)arg1 withApplicationProxy:(id)arg2;
- (id)interactionController;
- (void)actionButtonTapped:(id)arg1;
- (void)openButtonTapped:(id)arg1;
- (void)printButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)leftArrowAction:(id)arg1;
- (void)rightArrowAction:(id)arg1;
- (void)prepareForPrinting;
- (void)popOverStateWillPresentDocumentMenu:(id)arg1;
- (void)popOverStateWillPresentPrintMenu:(id)arg1;
- (void)popOverStateDidDismissMenu:(id)arg1;
- (void)popOverStatePrintButtonTapped:(id)arg1;
- (id)_popOverState;
- (void)_showOverlayDidEnd:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_hideOverlayDidEnd:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_setControlsOverlayVisible:(BOOL)arg1 withStatusBar:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_addFadeAnimationToView:(id)arg1 fromAlpha:(float)arg2 toAlpha:(float)arg3 duration:(double)arg4 withCurve:(int)arg5;
- (void)_prepareTransitionImageForZoomingIn:(BOOL)arg1;
- (void)_setClippingViewActive:(BOOL)arg1;
- (void)_prepareForFullScreenZoomIn;
- (void)_zoomToFullScreenWithDuration:(double)arg1;
- (void)_prepareForFullScreenZoomOut;
- (void)_dismissFromFullScreenWithDuration:(double)arg1;
- (void)previewViewWasTapped:(id)arg1;

@end
