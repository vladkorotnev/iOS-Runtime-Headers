/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivityIndicatorView : UIView <NSCoding> {
    double _duration;
    BOOL _animating;
    int _activityIndicatorViewStyle;
    BOOL _hidesWhenStopped;
}

@property BOOL hidesWhenStopped;
@property int activityIndicatorViewStyle;

+ (void)_loadResourcesForStyle:(int)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForStyle:(int)arg1;
+ (struct CGSize { float x1; float x2; })size;
+ (void)_initializeSafeCategory;

- (BOOL)isAnimating;
- (id)initWithActivityIndicatorStyle:(int)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_setUpAnimation;
- (void)startAnimating;
- (void)_tearDownAnimation;
- (void)setHidesWhenStopped:(BOOL)arg1;
- (void)setAnimating:(BOOL)arg1;
- (BOOL)hidesWhenStopped;
- (int)activityIndicatorViewStyle;
- (void)setActivityIndicatorViewStyle:(int)arg1;
- (void)startAnimation;
- (void)stopAnimating;
- (void)setStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)stopAnimation;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;

@end
