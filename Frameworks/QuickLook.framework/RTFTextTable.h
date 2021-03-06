/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface RTFTextTable : RTFTextBlock  {
    unsigned int _numCols;
    unsigned int _tableFlags;
    id _lcache;
    void *_tablePrimary;
    void *_tableSecondary;
}


- (id)init;
- (void)dealloc;
- (unsigned int)numberOfColumns;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (BOOL)collapsesBorders;
- (BOOL)hidesEmptyCells;
- (void)setHidesEmptyCells:(BOOL)arg1;
- (unsigned int)layoutAlgorithm;
- (void)setLayoutAlgorithm:(unsigned int)arg1;
- (unsigned int)_tableFlags;
- (void)_setTableFlags:(unsigned int)arg1;
- (void)setNumberOfColumns:(unsigned int)arg1;
- (void)setCollapsesBorders:(BOOL)arg1;

@end
