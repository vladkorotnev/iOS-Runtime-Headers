/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIViewController, UIMoreListController, UINavigationController;

@interface UIMoreNavigationController : UINavigationController  {
    UIMoreListController *_moreListController;
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

@property(retain) NSArray * moreViewControllers;
@property BOOL allowsCustomizing;
@property UIViewController * displayedViewController;


- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)allowsCustomizing;
- (void)setAllowsCustomizing:(BOOL)arg1;
- (id)_preparedViewController:(id)arg1;
- (void)_restoreOriginalNavigationController;
- (void)setMoreViewControllers:(id)arg1;
- (id)displayedViewController;
- (id)moreViewControllers;
- (void)setDisplayedViewController:(id)arg1;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)init;
- (void)dealloc;

@end
