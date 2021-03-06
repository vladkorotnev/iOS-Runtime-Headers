/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, NSIndexSet, NSString, UIColor;

@interface EKDayOccurrenceView : UIControl  {
    NSString *_title;
    NSString *_location;
    UIColor *_color;
    UIColor *_textColor;
    float _visibleHeight;
    NSIndexSet *_titleMetrics;
    NSIndexSet *_locationMetrics;
    struct CGPoint { 
        float x; 
        float y; 
    } _titleEndPoint;
    float _textEndY;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _titleRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _locationRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _fullTextRect;
    EKEvent *_occurrence;
    id _delegate;
    unsigned int _tentative : 1;
    unsigned int _cancelled : 1;
    unsigned int _selected : 1;
    unsigned int _colorType : 2;
    unsigned int _darkensSelection : 1;
    unsigned int _dimmed : 1;
    unsigned int _touchKeptInsideOccurrence;
}

@property(retain) EKEvent * occurrence;
@property(getter=isSelected) BOOL selected;
@property BOOL darkensSelection;
@property BOOL dimmed;
@property(copy) UIColor * color;
@property(copy) NSString * title;
@property(copy) NSString * location;
@property(getter=isTentative) BOOL tentative;
@property(getter=isCancelled) BOOL cancelled;
@property id delegate;

+ (void)clearCaches;
+ (void)_clearViewCache;
+ (id)occurrenceViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (float)bottomShadowMargin;
+ (void)pushRoundedRectPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 withCornerRadius:(float)arg3;
+ (id)_imageForBackgroundColor:(id)arg1 foregroundColor:(id)arg2 height:(float)arg3;
+ (id)_cachedImageForBackgroundColor:(id)arg1 foregroundColor:(id)arg2 height:(float)arg3;
+ (id)_viewCache;
+ (unsigned int)_viewCacheSize;
+ (float)minimumHeight;
+ (void)_initializeSafeCategory;

- (void)setCancelled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setColor:(id)arg1;
- (id)color;
- (id)textColor;
- (BOOL)shouldTrack;
- (void)removeFromSuperview;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)title;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)location;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)isCancelled;
- (void)setDarkensSelection:(BOOL)arg1;
- (id)_tentativeOutline;
- (void)_prepareForReuse;
- (BOOL)darkensSelection;
- (void)setOccurrence:(id)arg1;
- (BOOL)isTentative;
- (void)setVisibleHeight:(float)arg1;
- (void)_invalidateMetrics;
- (void)_getTitleMetrics:(id*)arg1 endPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (id)_locationFont;
- (void)_drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)dimmed;
- (id)_locationMetrics;
- (void)setTentative:(BOOL)arg1;
- (id)_titleFont;
- (void)setDimmed:(BOOL)arg1;
- (id)occurrence;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;

@end
