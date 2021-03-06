/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIKBAttributeList;

@interface UIKBKey : UIKBShape <NSCoding, NSCopying, UIKBCacheKey> {
    NSString *m_name;
    NSString *m_representedString;
    NSString *m_displayString;
    NSString *m_displayType;
    NSString *m_interactionType;
    NSString *m_variantType;
    UIKBAttributeList *m_attributes;
    unsigned int m_displayTypeHint;
    NSString *m_displayRowHint;
    NSArray *m_variantKeys;
    NSString *m_overrideDisplayString;
    NSString *m_clientVariantRepresentedString;
    NSString *m_clientVariantActionName;
    BOOL m_visible;
    BOOL m_ghost;
    int m_splitMode;
    NSArray *m_flicks;
}

@property(readonly) BOOL modifiesKeyplane;
@property(readonly) BOOL acceptsShiftLock;
@property(copy) NSString * tint;
@property(copy) NSString * rendering;
@property BOOL hidden;
@property BOOL disabled;
@property(readonly) BOOL isClientVariantOverride;
@property(readonly) NSString * cacheKey;
@property int splitMode;
@property(retain) NSArray * flicks;
@property(copy) NSString * clientVariantActionName;
@property(copy) NSString * clientVariantRepresentedString;
@property(copy) NSString * overrideDisplayString;
@property(copy) NSArray * variantKeys;
@property(retain) NSString * displayRowHint;
@property unsigned int displayTypeHint;
@property BOOL isGhost;
@property BOOL visible;
@property(copy) UIKBAttributeList * attributes;
@property(copy) NSString * variantType;
@property(copy) NSString * interactionType;
@property(copy) NSString * displayType;
@property(copy) NSString * displayString;
@property(copy) NSString * representedString;
@property(copy) NSString * name;

+ (id)key;
+ (id)keyWithKey:(id)arg1;

- (void)setDisplayRowHint:(id)arg1;
- (id)initWithName:(id)arg1 representedString:(id)arg2 displayString:(id)arg3 displayType:(id)arg4 interactionType:(id)arg5 variantType:(id)arg6 attributes:(id)arg7 geometry:(id)arg8 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg9 paddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg10;
- (id)initWithName:(id)arg1 representedString:(id)arg2 displayString:(id)arg3 displayType:(id)arg4 interactionType:(id)arg5 variantType:(id)arg6 attributes:(id)arg7 geometry:(id)arg8 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg9 paddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg10 ghost:(BOOL)arg11;
- (void)setDisabled:(BOOL)arg1;
- (void)setTint:(id)arg1;
- (void)setRendering:(id)arg1;
- (BOOL)behavesAsShiftKey;
- (int)splitMode;
- (void)setSplitMode:(int)arg1;
- (id)flicks;
- (void)setFlicks:(id)arg1;
- (id)clientVariantRepresentedString;
- (id)displayRowHint;
- (unsigned int)displayTypeHint;
- (void)setDisplayTypeHint:(unsigned int)arg1;
- (void)setIsGhost:(BOOL)arg1;
- (void)setInteractionType:(id)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setRepresentedString:(id)arg1;
- (id)interactionType;
- (id)displayString;
- (id)representedString;
- (void)mergeAttributes:(id)arg1;
- (id)cacheKey;
- (id)attributes;
- (id)variantType;
- (id)variantKeys;
- (void)setOverrideDisplayString:(id)arg1;
- (void)setClientVariantActionName:(id)arg1;
- (void)setClientVariantRepresentedString:(id)arg1;
- (void)removeClientVariantActionInfo;
- (BOOL)isClientVariantOverride;
- (void)setVariantKeys:(id)arg1;
- (id)variantDisplayString;
- (void)setVariantType:(id)arg1;
- (void)setVariantPopupBias:(id)arg1;
- (id)variantPopupBias;
- (id)clientVariantActionName;
- (void)setAttributes:(id)arg1;
- (BOOL)acceptsShiftLock;
- (BOOL)modifiesKeyplane;
- (void)setVisible:(BOOL)arg1;
- (BOOL)visible;
- (id)rendering;
- (id)displayType;
- (id)tint;
- (BOOL)isGhost;
- (id)overrideDisplayString;
- (BOOL)disabled;
- (void)setName:(id)arg1;
- (int)textAlignment;
- (BOOL)hidden;
- (void)setTextAlignment:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)name;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setHidden:(BOOL)arg1;

@end
