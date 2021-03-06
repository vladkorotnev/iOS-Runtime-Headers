/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, UILabel, GKUITheme, UIColor;

@interface GKInviteButton : UIControl  {
    GKUITheme *_theme;
    UILabel *_titleLabel;
    UIImage *_normalImage;
    UIColor *_normalTitleColor;
    UIColor *_normalShadowTitleColor;
    UIImage *_highlightImage;
    UIColor *_highlightTitleColor;
    UIColor *_highlightShadowTitleColor;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _titleEdgeInsets;
    float _leftCapWidth;
    float _mostlyInsideInset;
    BOOL _adjustsImageWhenHighlighted;
}

@property BOOL adjustsImageWhenHighlighted;
@property float mostlyInsideInset;
@property float leftCapWidth;
@property struct UIEdgeInsets { float top; float left; float bottom; float right; } titleEdgeInsets;
@property(retain) UIColor * highlightTitleShadowColor;
@property(retain) UIColor * highlightTitleColor;
@property(retain) UIImage * highlightImage;
@property(retain) UIColor * normalTitleShadowColor;
@property(retain) UIColor * normalTitleColor;
@property(retain) UIImage * normalImage;
@property(retain) UILabel * titleLabel;
@property(retain) GKUITheme * theme;


- (id)highlightImage;
- (void)setToInviteOrUninvite;
- (void)setToConfirm;
- (void)setNormalImage:(id)arg1;
- (void)setNormalTitleColor:(id)arg1;
- (void)setNormalShadowTitleColor:(id)arg1;
- (void)setHighlightImage:(id)arg1;
- (void)setHightlightTitleColor:(id)arg1;
- (void)setHightlightShadowTitleColor:(id)arg1;
- (void)setMostlyInsideInset:(float)arg1;
- (void)setLeftCapWidth:(float)arg1;
- (id)highlightTitleShadowColor;
- (void)setHighlightTitleShadowColor:(id)arg1;
- (id)highlightTitleColor;
- (void)setHighlightTitleColor:(id)arg1;
- (id)normalTitleShadowColor;
- (void)setNormalTitleShadowColor:(id)arg1;
- (id)normalTitleColor;
- (id)normalImage;
- (void)setTitleLabel:(id)arg1;
- (float)mostlyInsideInset;
- (void)setToInvite;
- (void)setToUninvite;
- (id)initWithTheme:(id)arg1;
- (id)titleLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })titleEdgeInsets;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)adjustsImageWhenHighlighted;
- (float)leftCapWidth;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
- (id)accessibilityLabel;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)theme;
- (void)setTheme:(id)arg1;

@end
