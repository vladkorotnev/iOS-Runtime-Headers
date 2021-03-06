/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPageView, <UIPDFSelectionWidget>;

@interface UIPDFSelectionController : NSObject  {
    UIPDFPageView *_pageView;
    BOOL _rangeMode;
    <UIPDFSelectionWidget> *_selectionWidget;
    BOOL _resizingWidget;
    struct CGPoint { 
        float x; 
        float y; 
    } _selectionFixedPoint;
    BOOL _preceeds;
    BOOL _isTracking;
    struct CGPoint { 
        float x; 
        float y; 
    } _adjustedPoint;
}

@property(readonly) BOOL isVisibleSelection;
@property(readonly) struct CGPoint { float x; float y; } adjustedPoint;
@property(readonly) BOOL isTracking;
@property(readonly) <UIPDFSelectionWidget> * selectionWidget;
@property(readonly) BOOL rangeMode;
@property UIPDFPageView * pageView;


- (void)clearSelection;
- (BOOL)isTracking;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)pageView;
- (void)extendSelection:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelectionFor:(struct CGPoint { float x1; float x2; })arg1;
- (void)tracking:(struct CGPoint { float x1; float x2; })arg1;
- (id)selectionWidget;
- (void)setPageView:(id)arg1;
- (BOOL)isVisibleSelection;
- (BOOL)shouldTrackAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1;
- (void)endTracking:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })adjustedPoint;
- (BOOL)rangeMode;
- (void)extendSelectionToParagraph;
- (void)displaySelection;

@end
