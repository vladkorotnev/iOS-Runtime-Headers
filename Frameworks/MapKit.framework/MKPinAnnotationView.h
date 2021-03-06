/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPinAnnotationViewInternal;

@interface MKPinAnnotationView : MKAnnotationView  {
    MKPinAnnotationViewInternal *_pinInternal;
}

@property unsigned int pinColor;
@property BOOL animatesDrop;

+ (id)_shadowImage;
+ (Class)layerClass;
+ (struct CGPoint { float x1; float x2; })_calloutOffset;
+ (struct CGSize { float x1; float x2; })_perceivedSize;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_desiredBounds;
+ (id)_shadowDropAnimation;
+ (id)_dropAnimation;
+ (id)_bounceAnimation;
+ (id)_dropBounceAnimation;
+ (id)_pinsWithType:(int)arg1;
+ (struct CGPoint { float x1; float x2; })_perceivedAnchorPoint;
+ (struct CGPoint { float x1; float x2; })_shadowAnchorPoint;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pinFrameForPosition:(struct CGPoint { float x1; float x2; })arg1;
+ (id)_reuseIdentifier;
+ (void)_initializeSafeCategory;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAnnotation:(id)arg1;
- (void)_reset;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)animationDidStart:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)_floatingImage;
- (void)setPinColor:(unsigned int)arg1;
- (unsigned int)pinColor;
- (BOOL)animatesDrop;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (id)_pins;
- (id)_highlightedImage;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (void)_setPinType:(int)arg1;
- (int)_pinType;
- (void)_removeAllAnimations;
- (void)_stopDrop;
- (void)_cleanupAfterPinDropAnimation;
- (id)_bounceAnimation:(BOOL)arg1 withBeginTime:(double)arg2 addToLayer:(BOOL)arg3;
- (void)_liftForDraggingAnimated:(BOOL)arg1;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_dropAfterDraggingDidEnd:(id)arg1;
- (void)_liftBeforeDropDidEnd:(id)arg1;
- (void)_liftDidEnd:(id)arg1;
- (int)_state;
- (void)_setMapType:(unsigned int)arg1;
- (id)_image;
- (int)_annotationViewType;
- (void)setDragState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setDragState:(unsigned int)arg1;
- (void)setAnimatesDrop:(BOOL)arg1;
- (id)_initWithSearchResult:(id)arg1;
- (void)_updatePinType;
- (void)_dropInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withDelay:(double)arg2;
- (void)_stopDropAnimationAndDropToPosition;
- (BOOL)isDraggable;
- (void)_setDelegate:(id)arg1;
- (id)_delegate;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end
