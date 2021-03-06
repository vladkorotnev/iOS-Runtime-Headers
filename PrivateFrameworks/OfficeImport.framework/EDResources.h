/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDStylesCollection, EDFontsCollection, EDTableStylesCollection, EDColorsCollection, EDLinksCollection, EDCollection, EDContentFormatsCollection;

@interface EDResources : NSObject  {
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}


- (id)names;
- (id)colors;
- (id)strings;
- (void)setColors:(id)arg1;
- (id)links;
- (void)dealloc;
- (id)borders;
- (id)fills;
- (id)fonts;
- (id)themes;
- (id)tableStyles;
- (id)contentFormats;
- (id)initWithStringOptimization:(bool)arg1;
- (id)alignmentInfos;
- (void)setThemes:(id)arg1;
- (id)differentialStyles;
- (id)styles;
- (id)border;

@end
