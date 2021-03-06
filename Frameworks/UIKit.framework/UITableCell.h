/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UITableCellTransientData, UIView;

@interface UITableCell : UIView  {
    _UITableCellTransientData *_transientData;
    float _rightMargin;
    struct { 
        unsigned int dontShowSelection : 1; 
        unsigned int showDisclosure : 1; 
        unsigned int showTopSeparator : 1; 
        unsigned int separatorStyle : 3; 
        unsigned int selectionStyle : 3; 
        unsigned int hideDisclosure : 1; 
        unsigned int isBeingDeleted : 1; 
        unsigned int disclosureClickable : 1; 
        unsigned int selectionFadeFraction : 11; 
        unsigned int disclosureStyle : 1; 
        unsigned int showingRemoveControl : 1; 
        unsigned int alignment : 3; 
        unsigned int showDisclosureWhenReordering : 1; 
        unsigned int fadeDisclosure : 1; 
        unsigned int reserved : 2; 
    } _tableCellFlags;
    UIView *_disclosureView;
}

+ (void)_initializeSafeCategory;

- (void)_grabberBeganReorder:(id)arg1;
- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2;
- (float)removeButtonAnimationDuration;
- (void)setSelectionStyle:(int)arg1;
- (void)_grabberReleased:(id)arg1;
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1;
- (void)removeControlWillHideRemoveConfirmation:(id)arg1;
- (void)drawSeparatorInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)showDisclosure;
- (void)_setDrawsTopSeparator:(BOOL)arg1;
- (BOOL)isAtLeastHalfSelected;
- (void)updateHighlightColors;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (BOOL)_isReordering;
- (void)removeControl:(id)arg1 willRemoveTarget:(id)arg2;
- (id)disclosureImage;
- (void)_setShowIndentSpacer:(BOOL)arg1 animated:(BOOL)arg2;
- (int)separatorStyle;
- (void)removeControlWillShowRemoveConfirmation:(id)arg1;
- (void)removeControl:(id)arg1 didRemoveTarget:(id)arg2;
- (BOOL)isSelected;
- (id)disclosurePressedImage;
- (id)removeControl;
- (void)setSelected:(BOOL)arg1 withFade:(BOOL)arg2;
- (float)selectionPercent;
- (void)_deselectWithFlashCount:(int)arg1 duration:(double)arg2;
- (void)setShowSelection:(BOOL)arg1;
- (void)setShowSelectionNoRedisplay:(BOOL)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setShowDisclosure:(BOOL)arg1;
- (void)setDisclosureStyle:(int)arg1;
- (void)setDisclosureStyleNoUpdate:(int)arg1;
- (int)disclosureStyle;
- (void)setSeparatorStyleOnly:(int)arg1;
- (BOOL)showSelection;
- (id)_grabberView;
- (void)_releaseGrabber;
- (void)_finishedFadingGrabber:(id)arg1 finished:(BOOL)arg2;
- (float)disclosureRightMargin;
- (BOOL)isReorderingEnabled;
- (void)setShowDisclosureWhenReordering:(BOOL)arg1;
- (BOOL)showDisclosureWhenReordering;
- (void)setEnableReordering:(BOOL)arg1 animated:(BOOL)arg2;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFade:(float)arg2;
- (void)_releaseRemoveControl;
- (void)setDisclosureClickable:(BOOL)arg1;
- (id)createRemoveControl;
- (id)createInsertControl;
- (void)_setDisclosureHidden:(BOOL)arg1;
- (void)_setGrabberHidden:(BOOL)arg1;
- (void)_setRightMargin:(float)arg1;
- (id)disclosureView;
- (void)setDisclosureView:(id)arg1;
- (void)_layoutSubviewsAnimated:(BOOL)arg1;
- (BOOL)isRemoveControlVisible;
- (void)_showDeleteOrInsertion:(BOOL)arg1 withDisclosure:(BOOL)arg2 animated:(BOOL)arg3 isDelete:(BOOL)arg4 andRemoveConfirmation:(BOOL)arg5;
- (void)_willBeDeleted;
- (BOOL)removeControl:(id)arg1 shouldRemoveTarget:(id)arg2;
- (void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2;
- (id)_createDisclosureView;
- (void)setShowDisclosure:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setRemoveCharge:(float)arg1;
- (void)_setSelectionFadeFraction:(float)arg1;
- (id)_disclosureView;
- (void)drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (BOOL)cancelTouchTracking;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)cancelMouseTracking;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAlpha:(float)arg1;
- (id)_accessibilityInternalData;
- (id)_accessibilityChildren;
- (void)_accessibilityUpdatePrimaryElement;
- (void)_accessibilityClearChildren;
- (void)_accessibilityUpdateRemoveControl;
- (void)_accessibilityHandleRemoveConfirm;
- (void)_accessibilityHandleRemoveSwitch;
- (BOOL)_accessibilityIsRemoveConfirmVisible;
- (void)unregisterMockChild:(id)arg1;
- (void)registerMockChild:(id)arg1;
- (void)unregisterAllChildren;
- (id)_accessibilityTextContent;
- (void)_accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2;
- (void)_setAccessibilityMockParent:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityTextElementFrame;
- (id)_accessibilityMockParent;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)accessibilityTableViewCellText;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;

@end
