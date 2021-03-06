/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIView, UIWindow, UIViewController, UILayoutContainerView, UIActionSheet;

@interface UIPopoverView : UIView  {
    id _delegate;
    UIView *_contentView;
    UIView *_bgView;
    SEL _presentAnimationCompletedSelector;
    SEL _dismissAnimationCompletedSelector;
    UIViewController *_viewController;
    int _direction;
    int _backgroundStyle;
    NSArray *_passthroughViews;
    float _offset;
    float _sizeAdjustmentForKeyboard;
    float _slideAdjustmentForKeyboard;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _desiredPresentationRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _preferredFrame;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentOrigin;
    UIView *_toolbarShineImage;
    UIWindow *_popoverHostingWindow;
    BOOL _fastMode;
    UILayoutContainerView *_roundedLayoutContainerView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _popoverTargetRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _screenPreferredFrame;
    UIView *_topView;
    UIView *_bottomView;
    UIActionSheet *_presentedActionSheet;
    struct { 
        unsigned int hasResizedDownOnce : 1; 
        unsigned int useToolbarShine : 1; 
        unsigned int hideTopView : 1; 
        unsigned int hideBottomView : 1; 
        unsigned int preventFastMode : 1; 
    } _popoverFlags;
}

@property BOOL useToolbarShine;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } presentationRect;
@property(setter=_setPreventFastMode:) BOOL _preventFastMode;
@property UIActionSheet * presentedActionSheet;
@property(retain) UIView * bottomView;
@property(retain) UIView * topView;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } popoverTargetRect;
@property float offset;
@property UILayoutContainerView * roundedLayoutContainerView;
@property BOOL useFastMode;
@property int arrowDirections;
@property(retain) NSArray * passthroughViews;
@property(retain) UIViewController * viewController;
@property int backgroundStyle;
@property SEL dismissAnimationCompletedSelector;
@property SEL presentAnimationCompletedSelector;
@property(retain,readonly) UIView * contentView;
@property id delegate;

+ (struct CGSize { float x1; float x2; })_popoverViewSizeForContentSize:(struct CGSize { float x1; float x2; })arg1 arrowDirection:(int)arg2;
+ (id)_viewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentsImage:(struct CGImage { }*)arg2 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 center:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 antialiasingMask:(unsigned int)arg5;
+ (BOOL)_shouldClampHorizontallyToCornerForPopoverSize:(struct CGSize { float x1; float x2; })arg1 arrowOffset:(float)arg2;
+ (BOOL)_shouldClampVerticallyToTopCornerForPopoverSize:(struct CGSize { float x1; float x2; })arg1 arrowOffset:(float)arg2;
+ (BOOL)_shouldClampVerticallyToBottomCornerForPopoverSize:(struct CGSize { float x1; float x2; })arg1 arrowOffset:(float)arg2;
+ (id)_popoverBackgroundViewForContentSize:(struct CGSize { float x1; float x2; })arg1 offset:(float)arg2 direction:(int)arg3 background:(int)arg4 contentOrigin:(out struct CGPoint { float x1; float x2; }*)arg5;
+ (id)popoverViewContainingView:(id)arg1;
+ (void)_initializeSafeCategory;

- (void)dismissAnimated:(BOOL)arg1;
- (id)_viewForModalPresentationOfViewController:(id)arg1;
- (BOOL)_isIgnoringTapsInDimmingView;
- (void)_modalPresentationWillEndForViewController:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (id)initWithContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDismissAnimationCompletedSelector:(SEL)arg1;
- (void)setBackgroundStyle:(int)arg1;
- (void)_layoutDimmingViewForInterfaceOrientation:(int)arg1;
- (void)constrainFrameToPresentationRectAnimated:(BOOL)arg1;
- (void)_setDimmingViewIsDimmed:(BOOL)arg1;
- (void)_setPreventFastMode:(BOOL)arg1;
- (SEL)dismissAnimationCompletedSelector;
- (id)passthroughViews;
- (id)topView;
- (BOOL)useToolbarShine;
- (BOOL)_preventFastMode;
- (void)motionCancelled:(int)arg1 withEvent:(id)arg2;
- (void)_modalPresentationWillBeginForViewController:(id)arg1;
- (void)_modalPresentationDidBeginForViewController:(id)arg1;
- (void)_modalPresentationDidEndForViewController:(id)arg1;
- (void)_setBottomBarHidden:(BOOL)arg1;
- (void)setDesiredPresentationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })presentationRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedPresentationRect;
- (id)_nearestNavigationController;
- (void)constrainFrameToPresentationRectAnimated:(BOOL)arg1 duration:(double)arg2;
- (struct CGPath { }*)_shadowPathForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 direction:(int)arg2 andOffset:(float)arg3;
- (int)_positionFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)presentFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 contentSize:(struct CGSize { float x1; float x2; })arg3 backgroundStyle:(int)arg4 animated:(BOOL)arg5;
- (void)representFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 contentSize:(struct CGSize { float x1; float x2; })arg3 backgroundStyle:(int)arg4 animated:(BOOL)arg5;
- (void)cancelSheetView;
- (void)dismissAnimated:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)_resizeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_presentationAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_dismissalAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)adjustFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)_runAwayFromTheKeyboard:(id)arg1;
- (void)disableAutomaticKeyboard:(id)arg1;
- (void)adjustFrameForViewController:(id)arg1 fromViewController:(id)arg2 isPopoverView:(BOOL)arg3;
- (void)sheetViewShouldAnimateForNewContentSize:(id)arg1;
- (void)_backgroundStyleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_adjustContentsCentersForBackgroundImageCount:(int)arg1;
- (void)_setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
- (void)presentFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)representFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (id)presentedActionSheet;
- (void)setPresentedActionSheet:(id)arg1;
- (id)bottomView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })popoverTargetRect;
- (void)setPopoverTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)roundedLayoutContainerView;
- (int)arrowDirections;
- (void)setArrowDirections:(int)arg1;
- (int)backgroundStyle;
- (SEL)presentAnimationCompletedSelector;
- (void)setPresentAnimationCompletedSelector:(SEL)arg1;
- (id)contentView;
- (void)setPassthroughViews:(id)arg1;
- (BOOL)useFastMode;
- (void)setOffset:(float)arg1;
- (float)offset;
- (id)_popoverController;
- (void)setRoundedLayoutContainerView:(id)arg1;
- (void)setTopView:(id)arg1;
- (void)setBottomView:(id)arg1;
- (void)setUseToolbarShine:(BOOL)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (int)_style;
- (void)_setIgnoreTapsInDimmingView:(BOOL)arg1;
- (void)setUseFastMode:(BOOL)arg1;
- (void)motionBegan:(int)arg1 withEvent:(id)arg2;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)didMoveToWindow;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)_accessibilityServesAsContainingParentForOrdering;
- (unsigned long long)accessibilityTraits;

@end
