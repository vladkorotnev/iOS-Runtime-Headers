/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSIndexSet, <PLAlbumViewDataSource>, UITableView, <PLAlbumViewDelegate>, PLImageCountCell, UIGestureRecognizer, NSMutableIndexSet, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface PLAlbumView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate> {
    unsigned int _photoCount;
    unsigned int _columnsPerRow;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousContentOffset;
    UITableView *_tableView;
    unsigned int _tableViewRowCount;
    <PLAlbumViewDataSource> *_dataSource;
    int _selectionStyle;
    UITapGestureRecognizer *_tapRecognizer;
    UIGestureRecognizer *_tapFailedRecognizer;
    unsigned int _photoIndexToBeSelected;
    BOOL _allowsSelectionGestures;
    PLImageCountCell *_imageCountCell;
    <PLAlbumViewDelegate> *_delegate;
    NSMutableIndexSet *_selectedPhotoIndexes;
    NSMutableIndexSet *_badgedPhotoIndexes;
    NSMutableIndexSet *_activityIndexes;
    UILongPressGestureRecognizer *_longPressRecognizer;
    unsigned int _calloutBarSelectionIndex;
    BOOL _swipeSelection;
    struct { 
        unsigned int displayTextBadges : 1; 
        unsigned int canShowCopyCallout : 1; 
        unsigned int delegateCanSelect : 1; 
        unsigned int delegateSelectionDidChange : 1; 
        unsigned int delegateDidTapPhoto : 1; 
        unsigned int delegatePreheatImageData : 1; 
        unsigned int delegateShouldShowPhotoCount : 1; 
    } _albumViewFlags;
}

@property int photoSelectionStyle;
@property(copy) NSIndexSet * selectedPhotoIndexes;
@property(copy) NSIndexSet * badgedPhotoIndexes;
@property(copy) NSIndexSet * activityIndexes;
@property BOOL displaysTextBadges;
@property BOOL canShowCopyCallout;
@property float bottomInset;
@property <PLAlbumViewDelegate> * delegate;
@property(readonly) unsigned int calloutPhotoIndex;
@property BOOL allowsSelectionGestures;
@property <PLAlbumViewDataSource> * dataSource;


- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)reloadData;
- (id)tableView;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)setDataSource:(id)arg1;
- (void)clearSelection;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)dataSource;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setBottomInset:(float)arg1;
- (float)bottomInset;
- (void)setBadgedPhotoIndexes:(id)arg1;
- (id)activityIndexes;
- (void)hideActivityOnPhotoAtIndex:(unsigned int)arg1;
- (void)showActivityOnPhotoAtIndex:(unsigned int)arg1;
- (void)selectPhotoAtIndex:(unsigned int)arg1;
- (void)insertPhotoAtIndex:(unsigned int)arg1;
- (void)deselectPhotoAtIndex:(unsigned int)arg1;
- (int)photoSelectionStyle;
- (unsigned int)calloutPhotoIndex;
- (id)badgedPhotoIndexes;
- (struct CGSize { float x1; float x2; })_cellSize;
- (BOOL)_shouldShowImageCountCell;
- (void)_updateColumnsPerRow;
- (void)_updatePhotoCount;
- (void)_updateImageCountCell;
- (void)_updateTableViewRowCount;
- (void)_setupTableView;
- (void)_preheatImageDataForDownwardScroll:(BOOL)arg1;
- (unsigned int)_tableRowForPhotoIndex:(unsigned int)arg1;
- (unsigned int)_cellPhotoIndexForPhotoIndex:(unsigned int)arg1;
- (void)_updateTableCell:(id)arg1 photoStartIndex:(unsigned int)arg2;
- (void)removePhotoAtIndex:(unsigned int)arg1;
- (BOOL)isPhotoVisibleAtIndex:(unsigned int)arg1;
- (void)scrollToPhotoAtIndex:(unsigned int)arg1 atScrollPosition:(int)arg2 animated:(BOOL)arg3;
- (void)_changeSelectionOfPhotoAtIndex:(unsigned int)arg1 notifyDelegate:(BOOL)arg2;
- (unsigned int)_photoIndexAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_changeSelectionOfPhotoAtPoint:(struct CGPoint { float x1; float x2; })arg1 notifyDelegate:(BOOL)arg2;
- (void)setPhotoSelectionStyle:(int)arg1;
- (unsigned int)selectedPhotoIndex;
- (id)selectedPhotoIndexes;
- (void)setSelectedPhotoIndexes:(id)arg1;
- (void)_changeBadgeStateOfPhotoAtIndex:(unsigned int)arg1;
- (void)badgePhotoAtIndex:(unsigned int)arg1;
- (void)debadgePhotoAtIndex:(unsigned int)arg1;
- (void)_changeActivityStateOfPhotoAtIndex:(unsigned int)arg1;
- (void)setActivityIndexes:(id)arg1;
- (void)setDisplaysTextBadges:(BOOL)arg1;
- (BOOL)displaysTextBadges;
- (void)setCanShowCopyCallout:(BOOL)arg1;
- (void)menuDidHideNotification:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (void)_tapFailedGesture:(id)arg1;
- (void)_longPressGesture:(id)arg1;
- (void)_updateAutoscrollTimerWithScrollDirection:(id)arg1;
- (void)_selectAfterDelay;
- (BOOL)allowsSelectionGestures;
- (void)setAllowsSelectionGestures:(BOOL)arg1;
- (void)scrollToBottom;
- (void)insertPhotosAtIndexes:(id)arg1;
- (void)removePhotosAtIndexes:(id)arg1;
- (void)reloadPhotoAtIndex:(unsigned int)arg1;
- (BOOL)canShowCopyCallout;

@end
