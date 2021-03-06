/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class UIView<ADBannerControllerDelegate>, NSString, ADHostWindowController, ADBannerViewURLActionHandler, CPDistributedMessagingCenter, ADStatusBarAttributes;

@interface ADBannerController : NSObject <ADMessageProxyItem> {
    CPDistributedMessagingCenter *_remoteMessageCenter;
    UIView<ADBannerControllerDelegate> *_delegate;
    ADHostWindowController *_hostWindowController;
    BOOL _isOpen;
    BOOL _serverReachable;
    BOOL _bannerWillLeaveApplication;
    ADBannerViewURLActionHandler *_currentURLHandler;
    NSString *_proxyItemIdentifier;
    ADStatusBarAttributes *_statusBarAttributesBackup;
    struct dispatch_queue_s { } *_ipcReplyQueue;
    double _createdAt;
}

@property double createdAt;
@property struct dispatch_queue_s { }* ipcReplyQueue;
@property(retain) ADStatusBarAttributes * statusBarAttributesBackup;
@property(readonly) NSString * proxyItemIdentifier;
@property(retain) ADBannerViewURLActionHandler * currentURLHandler;
@property(readonly) BOOL bannerWillLeaveApplication;
@property(readonly) BOOL serverReachable;
@property(readonly) BOOL isOpen;
@property(retain) ADHostWindowController * hostWindowController;
@property UIView<ADBannerControllerDelegate> * delegate;
@property(retain) CPDistributedMessagingCenter * remoteMessageCenter;


- (id)proxyItemIdentifier;
- (double)createdAt;
- (void)setIpcReplyQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setCreatedAt:(double)arg1;
- (struct dispatch_queue_s { }*)ipcReplyQueue;
- (void)interstitialTouchedDismissAreaWithControlEvent:(unsigned int)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)sendMessageName:(id)arg1 userInfo:(id)arg2;
- (void)close;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)deferredDispatchToAdViewDelegate:(SEL)arg1 parameter:(id)arg2;
- (void)interstitialPresentedInView:(BOOL)arg1;
- (void)interstitialWasRemovedFromSuperview:(id)arg1;
- (void)refuseBannerViewAction;
- (id)hostWindowController;
- (BOOL)serverReachable;
- (id)currentURLHandler;
- (void)dismissHostWindowController;
- (void)handleBannerVisibilityHeartbeatNotification:(id)arg1;
- (void)updateSpecification;
- (void)bannerFrameDidChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2;
- (id)keysDidChangeMessageDictionary:(id)arg1;
- (void)bannerKeysDidChange:(id)arg1;
- (void)controllerKeysDidChange:(id)arg1;
- (void)unloadAndClose;
- (void)sessionDidOpenMesssage:(id)arg1 userInfo:(id)arg2;
- (void)storyboardDidTransitionOut:(id)arg1 userInfo:(id)arg2;
- (void)storyboardDidFinishFirstSignificantDraw:(id)arg1 userInfo:(id)arg2;
- (void)storyboardOpenURLMessage:(id)arg1 userInfo:(id)arg2;
- (void)storyboardStatusBarChangesEndMessage:(id)arg1 userInfo:(id)arg2;
- (void)storyboardStatusBarDidChangeMessage:(id)arg1 userInfo:(id)arg2;
- (void)checkForSessionOpenTimeout;
- (double)sessionOpenTimeoutInterval;
- (void)backupStatusBarUI;
- (void)restoreStatusBarUI;
- (id)statusBarAttributesBackup;
- (void)setStatusBarAttributesBackup:(id)arg1;
- (void)setCurrentURLHandler:(id)arg1;
- (void)setHostWindowController:(id)arg1;
- (id)remoteMessageCenter;
- (void)setRemoteMessageCenter:(id)arg1;
- (void)serverCenterDidTerminate;
- (void)bannerViewDidLoadAdMessage:(id)arg1 userInfo:(id)arg2;
- (void)bannerViewDidFailToReceiveAddWithErrorMessage:(id)arg1 userInfo:(id)arg2;
- (void)bannerViewUrlActionMessage:(id)arg1 userInfo:(id)arg2;
- (void)bannerViewReachbilityChanged:(id)arg1 userInfo:(id)arg2;
- (void)interstitialViewExpiredAndWasUnloaded:(id)arg1 userInfo:(id)arg2;
- (void)storyboardWillTransitionIn:(id)arg1 userInfo:(id)arg2;
- (void)storyboardDidTransitionIn:(id)arg1 userInfo:(id)arg2;
- (void)storyboardWillTransitionOut:(id)arg1 userInfo:(id)arg2;
- (void)storyboardDidChangeSupportedOrientations:(id)arg1 userInfo:(id)arg2;
- (void)storyboardStatusBarChangesStartMessage:(id)arg1 userInfo:(id)arg2;
- (void)deviceOrientationDidChangeNotification:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)executeBannerViewActionFrom:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withClickLocation:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)bannerWillLeaveApplication;
- (void)loadLocalAd:(id)arg1;
- (void)loadDebuggerFromPath:(id)arg1 portName:(id)arg2;
- (void)cancelBannerViewAction;
- (BOOL)isOpen;
- (void)open;
- (void)_close;

@end
