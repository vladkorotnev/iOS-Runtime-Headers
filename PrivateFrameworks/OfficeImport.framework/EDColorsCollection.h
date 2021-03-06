/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDColorsCollection : EDCollection <OADColorPalette> {
    unsigned int mDefaultColorsCount;
}

+ (int)oadSchemeColorIdFromThemeIndex:(int)arg1;
+ (unsigned int)xlColorIndexFromCPSystemColorIDEnum:(int)arg1;
+ (bool)isSystemColorId:(unsigned int)arg1;
+ (int)systemColorIdFromIndex:(unsigned int)arg1;

- (id)colorWithIndex:(unsigned int)arg1;
- (id)initWithDefaultSetup:(bool)arg1;
- (void)setupDefaults;
- (unsigned int)defaultColorsCount;
- (void)addDefaultPalette;
- (void)addColors:(const unsigned int*)arg1 count:(unsigned long)arg2 defaultColors:(const unsigned int*)arg3 defaultCount:(unsigned int)arg4;
- (void)addPalette:(const unsigned int*)arg1 paletteSize:(unsigned long)arg2 paletteX:(const unsigned int*)arg3 paletteXSize:(unsigned int)arg4;
- (unsigned int)addOrEquivalentColorExcludingDefaults:(id)arg1;

@end
