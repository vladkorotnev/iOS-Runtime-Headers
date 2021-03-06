/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDSheet, CHDDefaultTextProperties, NSMutableArray, CHDTitle, EDWorkbook, CHDPlotArea, CHDLegend, OADGraphicProperties, CHDView3D;

@interface CHDChart : OADGraphic <OADDrawableContainer> {
    EDSheet *mSheet;
    int mStyleId;
    boolmAutoTitleDeleted;
    boolmPlotVisibleCellsOnly;
    boolmMSGraph;
    boolmDirectionChanged;
    int mDisplayBlankCellsAs;
    CHDPlotArea *mPlotArea;
    CHDView3D *mView3D;
    CHDTitle *mTitle;
    CHDLegend *mLegend;
    EDWorkbook *mExternalData;
    OADGraphicProperties *mChartAreaGraphicProperties;
    OADGraphicProperties *mBackWallGraphicProperties;
    OADGraphicProperties *mSideWallGraphicProperties;
    OADGraphicProperties *mFloorGraphicProperties;
    CHDDefaultTextProperties *mDefaultTextProperties;
    int mChartDirection;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLogicalBounds;
    NSMutableArray *mDrawables;
}

+ (id)binaryEffects:(BOOL)arg1;

- (int)direction;
- (void)setDirection:(int)arg1;
- (unsigned int)childCount;
- (id)title;
- (id)init;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setExternalData:(id)arg1;
- (void)setStyleId:(int)arg1;
- (void)setPlotArea:(id)arg1;
- (void)setLegend:(id)arg1;
- (void)setDisplayBlankAs:(int)arg1;
- (id)defaultTextProperties;
- (void)setDefaultTextProperties:(id)arg1;
- (id)view3D;
- (bool)isMSGraph;
- (bool)isAutoTitleDeleted;
- (bool)isPlotVisibleCellsOnly;
- (int)displayBlankAs;
- (id)externalData;
- (id)chartAreaGraphicProperties;
- (id)backWallGraphicProperties;
- (id)sideWallGraphicProperties;
- (id)floorGraphicProperties;
- (id)defaultThemeFont;
- (id)defaultTextFont;
- (id)defaultDataLabelFont;
- (id)defaultSeriesTitleFont;
- (id)defaultContentFormat;
- (id)defaultFontWithResources:(id)arg1;
- (int)defaultLabelPosition;
- (id)mainType;
- (bool)is3D;
- (bool)isBinary;
- (unsigned int)seriesCount;
- (bool)isDirectionChanged;
- (void)setDirectionChanged:(bool)arg1;
- (id)plotArea;
- (unsigned int)defaultFontIndex;
- (void)setView3D:(id)arg1;
- (void)setMSGraph:(bool)arg1;
- (void)setChartAreaGraphicProperties:(id)arg1;
- (void)setPlotVisibleCellsOnly:(bool)arg1;
- (void)setAutoTitleDeleted:(bool)arg1;
- (void)setSideWallGraphicProperties:(id)arg1;
- (void)setBackWallGraphicProperties:(id)arg1;
- (void)setFloorGraphicProperties:(id)arg1;
- (id)processors;
- (id)sheet;
- (id)workbook;
- (void)setSheet:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })logicalBounds;
- (int)styleId;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)addChildren:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)childAtIndex:(unsigned int)arg1;
- (id)legend;
- (id)styleMatrix;
- (id)children;
- (void)addChild:(id)arg1;

@end
