/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSDictionary, NSMutableArray, ABNamePropertyGroup, ABPersonTableTinyActionCell, ABPersonTableFooterView, <ABStyleProvider>, ABPersonTableHeaderView, UIDatePicker, ABPersonCellLayoutManager, NSString, UITableView, NSMutableDictionary, UILabel, <ABPersonTableViewDataSourceDelegate>, ABPersonTableActionDataSource, ABActionsController, ABLabelViewWithVariablePositioning, ABPersonImageView, UIFont, NSArray, UIResponder, ABMultiCellContentView, NSIndexPath, UITableViewCell, AccountsManager, UIView;

@interface ABPersonTableViewDataSource : NSObject <UITableViewDelegate, UITableViewDataSourcePrivate, UIActionSheetDelegate, ABPersonTableHeaderViewDelegate, ABPersonTableTinyActionDelegate, ABPickerViewControllerDelegate, ABDatePickerViewControllerDismissDelegate, ABDatePickerPresentationDelegate, ABTabOrderDelegate, ABMultiCellContentViewUpdateDelegate, ABPersonTableActionDelegate, ABPersonCellLayoutManagerDelegate, ABPersonImageDataDelegate, ABPrimaryValueDelegate> {
    AccountsManager *_accountsManager;
    ABActionsController *_actionsController;
    BOOL _allowsDeletion;
    BOOL _allowsEditing;
    BOOL _allowsActions;
    BOOL _allowsAddToFavorites;
    BOOL _allowsSendingTextMessage;
    BOOL _allowsSounds;
    BOOL _allowsSharing;
    BOOL _allowsConferencing;
    BOOL _shouldShowLinkingUI;
    BOOL _shouldShowAddLinkedContactCell;
    BOOL _shouldShowContactSourcesStringAsMessage;
    BOOL _updateShouldShowAddLinkedContactCell;
    struct __CFArray { } *_displayedProperties;
    struct __CFArray { } *_optionalProperties;
    struct __CFArray { } *_additionalProperties;
    NSMutableArray *_additionalLabels;
    struct __CFDictionary { } *_multiCellContentViewsByCustomCell;
    BOOL _attemptDelayedBecomeFirstResponder;
    NSIndexPath *_lastActiveMultiCellIndexPath;
    ABMultiCellContentView *_lastActiveMultiCellContentView;
    ABMultiCellContentView *_multiCellContentViewForWillEndEditing;
    ABMultiCellContentView *_pinningMultiCellContentViewAlternate;
    NSIndexPath *_pinningMultiCellIndexPath;
    NSIndexPath *_pinningMultiCellRelativeIndexPath;
    UIResponder *_pinningResponder;
    BOOL _isPinningLocked;
    void *_addressBook;
    NSArray *_people;
    NSMutableDictionary *_propertyGroupsStore;
    NSMutableDictionary *_unusedPropertyGroupsStore;
    NSMutableArray *_editablePropertyGroups;
    NSMutableArray *_propertyGroups;
    NSMutableArray *_linkedCardInfos;
    struct __CFSet { } *_addNewValuePropertiesStore;
    struct __CFSet { } *_addNewValueProperties;
    ABNamePropertyGroup *_namePropertyGroup;
    int _actionSheetType;
    ABPersonTableActionDataSource *_actionDataSource;
    UITableView *_tableView;
    ABPersonTableTinyActionCell *_tinyActionCell;
    UILabel *_noValueLabel;
    ABPersonTableHeaderView *_headerView;
    UIView *_customPersonTableHeaderView;
    UIView *_customPersonTableFooterView;
    BOOL _tableHeaderViewScrolls;
    UIView *_notesHeaderView;
    ABLabelViewWithVariablePositioning *_linkingHeaderView;
    UIDatePicker *_datePicker;
    ABPersonTableFooterView *_footerView;
    int _primaryProperty;
    int _highlightedValueProperty;
    int _highlightedValueIdentifier;
    void *_highlightedValuePerson;
    BOOL _highlightedValueIsImportant;
    BOOL _actionShouldPickHighlightedValue;
    int _insertionProperty;
    id _insertionValue;
    id _insertionLabel;
    <ABStyleProvider> *_styleProvider;
    <ABPersonTableViewDataSourceDelegate> *_delegate;
    UITableViewCell *_partiallySelectedCell;
    ABPersonCellLayoutManager *_cellLayoutManager;
    UIView *_currentTableHeaderView;
    UIView *_currentTableFooterView;
    UIView *_tableHeaderViewContainer;
    struct __CFDictionary { } *_currentImageData;
    void *_personForImageData;
    BOOL _hasImageChanges;
    BOOL _didChangePreferredPersonForImage;
    BOOL _isSettingFirstResponder;
    BOOL _isEndingEditingTransactions;
    float _lastAdjustment;
    BOOL _viewControllerWillSlideOut;
    int _customKeyboardOutDirection;
    NSDictionary *_cachedKeyboardInfo;
    BOOL _isEditing;
}

@property(readonly) BOOL canSave;
@property(readonly) BOOL hasChanges;
@property(readonly) BOOL hasNameChanges;
@property(copy) NSString * alternateName;
@property(copy) NSString * message;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIView * customMessageView;
@property(readonly) ABPersonImageView * personImageView;
@property(retain) UIView * personHeaderView;
@property(retain) UIView * customPersonTableHeaderView;
@property(retain) UIView * customPersonTableFooterView;
@property(readonly) ABPersonTableHeaderView * tableHeaderView;
@property(getter=isEditing) BOOL editing;
@property(readonly) int primaryProperty;
@property(readonly) NSString * attribution;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property(readonly) BOOL isPinning;
@property int customKeyboardOutDirection;
@property BOOL viewControllerWillSlideOut;
@property(retain) UIResponder * pinningResponder;
@property(retain) NSIndexPath * pinningMultiCellRelativeIndexPath;
@property(retain) NSIndexPath * pinningMultiCellIndexPath;
@property(retain) ABMultiCellContentView * pinningMultiCellContentViewAlternate;
@property(retain) ABMultiCellContentView * multiCellContentViewForWillEndEditing;
@property(retain) ABMultiCellContentView * lastActiveMultiCellContentView;
@property(retain) NSIndexPath * lastActiveMultiCellIndexPath;
@property(retain) UITableViewCell * partiallySelectedCell;
@property BOOL tableHeaderViewScrolls;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) id insertionLabel;
@property(readonly) id insertionValue;
@property(readonly) int insertionProperty;
@property BOOL actionShouldPickHighlightedValue;
@property BOOL highlightedValueIsImportant;
@property void* highlightedValuePerson;
@property int highlightedValueIdentifier;
@property int highlightedValueProperty;
@property struct __CFArray { }* displayedProperties;
@property BOOL shouldShowContactSourcesStringAsMessage;
@property BOOL shouldShowLinkingUI;
@property BOOL allowsSounds;
@property BOOL allowsDeletion;
@property BOOL allowsConferencing;
@property BOOL allowsSharing;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsAddToFavorites;
@property BOOL allowsEditing;
@property BOOL allowsActions;
@property(retain) UITableView * tableView;
@property <ABPersonTableViewDataSourceDelegate> * delegate;
@property(retain) UIView * currentTableFooterView;
@property(retain) UIView * currentTableHeaderView;
@property void* addressBook;
@property(retain) NSArray * people;


- (void)setAllowsSounds:(BOOL)arg1;
- (void)setAddressBook:(void*)arg1;
- (id)messageFont;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)setMessage:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (id)message;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)isEditing;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)reloadData;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_keyboardWillShow:(id)arg1;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(int)arg2;
- (float)marginForTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (float)heightForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (id)viewForFooterInTableView:(id)arg1;
- (id)tableHeaderView;
- (void)setEditing:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sizeToFit;
- (id)init;
- (void)dealloc;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)hasChanges;
- (void)multiCellContentView:(id)arg1 didResizeAnimated:(BOOL)arg2;
- (void)multiCellContentView:(id)arg1 entryField:(id)arg2 didUpdateValue:(id)arg3 forKey:(id)arg4;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (BOOL)ABTabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (BOOL)isInFullEditingMode;
- (void)dateField:(id)arg1 delegatePresentDatePicker:(id)arg2;
- (void)dateField:(id)arg1 delegatePrepareToPresentDatePicker:(id)arg2;
- (id)alternateName;
- (id)namePropertyGroup;
- (id)customMessageView;
- (id)messageDetailFont;
- (void)presentDifferentiationSheetForAction:(id)arg1;
- (void)action:(id)arg1 willShowButton:(id)arg2 forValueAtIndex:(int)arg3 inPropertyGroup:(id)arg4;
- (id)currentTableHeaderView;
- (BOOL)allowsSharing;
- (void*)highlightedValuePerson;
- (BOOL)actionShouldPickHighlightedValue;
- (id)insertionValue;
- (BOOL)tableHeaderViewScrolls;
- (id)partiallySelectedCell;
- (id)lastActiveMultiCellIndexPath;
- (id)multiCellContentViewForWillEndEditing;
- (id)_indexPathForPropertyGroup:(id)arg1 index:(int)arg2 editableFlag:(BOOL)arg3;
- (unsigned int)sectionForAction:(id)arg1;
- (void)_getPropertyGroup:(id*)arg1 index:(int*)arg2 editableFlag:(BOOL*)arg3 atIndexPath:(id)arg4;
- (BOOL)_isReadonlyAtIndexPath:(id)arg1;
- (BOOL)_isFavoriteOfType:(int)arg1 inPropertyGroup:(id)arg2 atIndex:(int)arg3;
- (void)_getFirstRows:(id*)arg1 andOtherRows:(id*)arg2 fromIndexPaths:(id)arg3;
- (id)linkedCardInfos;
- (BOOL)_shouldIncludeLinkingUISectionWhenEditing:(BOOL)arg1;
- (void)showLinkedCardAtRow:(int)arg1;
- (id)secondarySourceNameForPerson:(void*)arg1;
- (id)_contactSourcesString;
- (void)updateContactSourcesStringIfNeeded;
- (void)updateSectionHeaderAndFooterHeightsForEditing:(BOOL)arg1;
- (BOOL)hasNameChanges;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_footerViewFrame;
- (void)_updateDeleteButtonIfNeededForFooterView:(id)arg1;
- (id)titleForNoValueWithProperty:(int)arg1;
- (void)reloadDataIncludingHeaderView:(BOOL)arg1 invalidatePropertyData:(BOOL)arg2;
- (void)reloadDataIncludingHeaderView:(BOOL)arg1;
- (void)setTableHeaderViewScrolls:(BOOL)arg1;
- (void)notifyHeaderViewHeightDidChange;
- (id)controllerMainView;
- (void)updateTableHeaderViewAnimated:(BOOL)arg1;
- (void)updateTableHeaderView;
- (void)_endTableViewUpdatesWithoutScroll;
- (id)customPersonTableHeaderView;
- (void)setCustomPersonTableHeaderView:(id)arg1;
- (id)customPersonTableFooterView;
- (void)setCustomPersonTableFooterView:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)newFooterView;
- (void)updateTableFooterView;
- (void)updateTableFooterViewAnimated:(BOOL)arg1;
- (int)_sectionIndexForPropertyGroup:(id)arg1 orProperty:(int)arg2 withPropertyGroups:(id)arg3 whenEditing:(BOOL)arg4;
- (int)sectionIndexForPropertyGroup:(id)arg1 withPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3;
- (int)sectionIndexForProperty:(int)arg1 withPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3;
- (id)sectionAnimationsDictionaryForSwipeToDeleteAtIndexPath:(id)arg1;
- (id)sectionAnimationsDictionaryForOriginalPropertyGroups:(id)arg1 newPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3;
- (id)sectionAnimationsDictionaryForEditing:(BOOL)arg1;
- (void)headerFooterAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)containerView:(id)arg1 setContentView:(id)arg2 animated:(BOOL)arg3;
- (void)setCurrentTableHeaderView:(id)arg1;
- (void)setCurrentTableHeaderView:(id)arg1 animated:(BOOL)arg2;
- (void)setCurrentTableFooterView:(id)arg1;
- (void)setCurrentTableFooterView:(id)arg1 animated:(BOOL)arg2;
- (void)updateHeadersAndFootersForEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareView;
- (struct __CFDictionary { }*)currentImageData;
- (void)setCurrentImageData:(struct __CFDictionary { }*)arg1;
- (void)markImagesWith:(id)arg1 forPerson:(void*)arg2;
- (void)resetImageData;
- (void)updateRecordImages;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(void*)arg3 isRemoved:(BOOL*)arg4;
- (void*)personForImageDataExcludingPeople:(id)arg1;
- (BOOL)didChangePreferredPersonForImage;
- (void)presentDifferentiationSheetIfNeededForAction:(id)arg1 withPropertyGroup:(id)arg2;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 property:(int)arg3 actionGrouping:(int)arg4 ordering:(int)arg5 animated:(BOOL)arg6;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 property:(int)arg3 actionGrouping:(int)arg4 ordering:(int)arg5;
- (void)propertyGroup:(id*)arg1 orActions:(id*)arg2 forSection:(int)arg3 whenEditing:(BOOL)arg4;
- (BOOL)shouldShowActionForProperty:(int)arg1 assumeThatPropertyHasSection:(BOOL)arg2;
- (BOOL)shouldShowActionForProperty:(int)arg1;
- (BOOL)shouldShowAction:(id)arg1 excludingProperty:(int)arg2;
- (int)actionCountForGrouping:(int)arg1 inSection:(int)arg2 excludingProperty:(int)arg3 outExcludedIndexPaths:(id*)arg4;
- (int)actionCountForBottomGroupingExcludingProperty:(int)arg1;
- (int)actionCountForTopGroupingInSection:(int)arg1 excludingProperty:(int)arg2 outExcludedIndexPaths:(id*)arg3;
- (int)actionGroupingCountForPropertyGroup:(id)arg1 whenEditing:(BOOL)arg2 assumeThatPropertyHasSection:(BOOL)arg3;
- (int)actionGroupingCountForPropertyGroup:(id)arg1 whenEditing:(BOOL)arg2;
- (BOOL)isPropertyDisplayed:(int)arg1;
- (BOOL)hasPhoneValue;
- (BOOL)allowsFaceTimeFavorite;
- (BOOL)allowsVoiceFavorite;
- (BOOL)shouldShowAddToFavoritesAction;
- (void)sendTextMessage:(id)arg1 person:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)shareContactButtonClicked:(id)arg1;
- (void)conference:(id)arg1 person:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)addToFavoritesButtonClicked:(id)arg1;
- (void)reloadBottomActionCellAnimated:(BOOL)arg1;
- (void)reloadBottomActionDataForFavorites:(BOOL)arg1 texting:(BOOL)arg2 sharing:(BOOL)arg3 conferencing:(BOOL)arg4;
- (void)reloadBottomActionsAnimated:(BOOL)arg1;
- (void)reloadBottomActions;
- (void)tellDelegateAddToFavoriteWasSelectedForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2 entryType:(int)arg3;
- (void)reloadPrimaryPropertyActionsSection;
- (void)setAllowsAddToFavorites:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsSendingTextMessage:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsSharing:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)reloadConferencing;
- (void)setAllowsConferencing:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)_conferenceHistoryChanged:(id)arg1;
- (id)tinyActionCell;
- (void)deleteButtonClicked:(id)arg1;
- (void)valueAtIndex:(int)arg1 selectedForPropertyGroup:(id)arg2 withMemberCell:(id)arg3 forEditing:(BOOL)arg4;
- (void)setInsertionLabel:(id)arg1;
- (void)setInsertionValue:(id)arg1;
- (void)_resetAddNewValueCells;
- (BOOL)usesAddNewValueCellForProperty:(int)arg1;
- (BOOL)shouldUseAddNewValueCellForProperty:(int)arg1;
- (void)setShouldUseAddNewValueCell:(BOOL)arg1 forProperty:(int)arg2;
- (void)swapAddNewValueCellForProperty:(int)arg1 atIndexPath:(id)arg2;
- (void)addFieldCellWillSelect:(id)arg1;
- (void)addFieldCellSelected:(id)arg1;
- (id)_indexPathForHeaderViewRow:(unsigned int)arg1;
- (void)tableViewAddFieldUpdateAnimationsDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)updateByAddingFieldForProperty:(int)arg1 whenEditing:(BOOL)arg2;
- (void)addToContactsButtonClicked:(id)arg1;
- (void)addFieldAction:(id)arg1;
- (void)addFieldTouchDown:(id)arg1;
- (void)addFieldTouchCancel:(id)arg1;
- (int)tableViewRowAnimationForUpdateAction:(unsigned int)arg1 isFirstRow:(BOOL)arg2;
- (void)updateCellEditingStyleAtIndexPath:(id)arg1;
- (void*)policyForPerson:(void*)arg1;
- (BOOL)isPropertyOptional:(int)arg1;
- (struct __CFArray { }*)newAdditionalProperties;
- (struct __CFArray { }*)additionalProperties;
- (void)invalidateAdditionalProperties;
- (void)invalidateLinkedCardInfos;
- (void)resetPropertyGroupStores;
- (id)propertyGroupForProperty:(int)arg1 createIfEmpty:(BOOL)arg2;
- (id)propertyGroupForProperty:(int)arg1;
- (id)displayedPropertyGroupForProperty:(int)arg1 whenEditing:(BOOL)arg2;
- (id)newPropertyGroupsForEditing:(BOOL)arg1 withDisplayedProperties:(struct __CFArray { }*)arg2;
- (id)newPropertyGroupsForEditing:(BOOL)arg1;
- (id)propertyGroupsForEditing:(BOOL)arg1;
- (void)invalidateAllPropertyGroups;
- (void)invalidatePropertyGroupsForEditing:(BOOL)arg1;
- (id)actionsController;
- (BOOL)isPinning;
- (void)beginPinning;
- (void)cancelPinning;
- (void)setLastActiveMultiCellIndexPath:(id)arg1;
- (void)setLastActiveMultiCellContentView:(id)arg1;
- (BOOL)abTableView:(id)arg1 isValidIndexPath:(id)arg2;
- (void)scrollToLastActiveEntryFieldAnimated:(BOOL)arg1 becomeFirstResponder:(BOOL)arg2;
- (int)editingSectionForNonEditingSection:(int)arg1;
- (void)indexOfFirstPropertyGroupSection:(int*)arg1 lastPropertyGroupSection:(int*)arg2 addFieldSection:(int*)arg3 linkingUISection:(int*)arg4 primaryPropertyActionsSection:(int*)arg5 topGroupingActionSection:(int*)arg6 bottomGroupingActionSection:(int*)arg7 cardActionsSection:(int*)arg8 cardActionsSectionCount:(int*)arg9 totalSectionCount:(int*)arg10 whenEditing:(BOOL)arg11;
- (int)indexOfLinkingUISectionWhenEditing:(BOOL)arg1;
- (int)numberOfSectionsWhenEditing:(BOOL)arg1;
- (int)numberOfRowsInSection:(int)arg1 whenEditing:(BOOL)arg2;
- (id)linkedCardCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)addValueCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)actionCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2 isConference:(BOOL)arg3;
- (void)_getDataProvider:(id*)arg1 andInfo:(id*)arg2 forIndexPath:(id)arg3;
- (void)_updateCellsForDataProvider:(id)arg1 afterDeleteAtIndex:(int)arg2 isInsertionIndex:(BOOL)arg3 inTableView:(id)arg4;
- (id)cellLayoutManager;
- (id)newAccessoryViewWhenEditing:(BOOL)arg1 forDataProvider:(id)arg2 index:(int)arg3 editableFlag:(BOOL)arg4;
- (void)_setMultiCellContentView:(id)arg1 forCustomPropertyCell:(id)arg2;
- (id)_multiCellContentViewForCustomPropertyCell:(id)arg1;
- (id)ieTableViewCellForPropertyGroup:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(int*)arg6;
- (id)tableViewCellForActions:(id)arg1 tableView:(id)arg2 row:(int)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(int*)arg6;
- (void)tableView:(id)arg1 cell:(id*)arg2 orTag:(int*)arg3 forRowAtIndexPath:(id)arg4 allowDequeing:(BOOL)arg5;
- (void)performPersonTableActionWithSection:(int)arg1 row:(int)arg2;
- (BOOL)canSelectLabelForPropertyGroup:(id)arg1 info:(id)arg2;
- (void)adjustTableViewForKeyboardInfo:(id)arg1 animated:(BOOL)arg2;
- (void)_delayedKeyboardWillShow:(id)arg1;
- (void)_delayedKeyboardWillHide:(id)arg1;
- (void)_registerForKeyboardNotifications;
- (void)_unregisterForKeyboardNotifications;
- (void)_updateBackgroundForCell:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)personTableTinyActionCell:(id)arg1 shouldShowAction:(id)arg2;
- (void)personTableHeaderView:(id)arg1 imageViewWasSelected:(id)arg2;
- (BOOL)labelPickerViewController:(id)arg1 shouldDismissAfterSelectingLabel:(id)arg2;
- (BOOL)pickerViewController:(id)arg1 shouldDismissAfterSelectingItem:(id)arg2;
- (id)capitalizedTitleForContentView:(id)arg1;
- (id)datePickerForDateField:(id)arg1;
- (BOOL)dateField:(id)arg1 shouldPresentDatePicker:(id)arg2;
- (void)dateField:(id)arg1 delegateDismissDatePicker:(id)arg2;
- (void)datePickerViewControllerWillDisappear:(id)arg1;
- (void)selectLabelPartForCell:(id)arg1;
- (void)selectValuePartForCell:(id)arg1;
- (void)selectWholePartForCell:(id)arg1;
- (void)selectCustomPartWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 occupiedCorners:(unsigned int)arg2 forCell:(id)arg3;
- (void)_multiCellContentView:(id)arg1 selectedLabel:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedCountry:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedService:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedRingtone:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesBeganForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesEndedForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesCancelledForView:(id)arg2;
- (BOOL)multiCellContentView:(id)arg1 entryFieldShouldBeginEditing:(id)arg2;
- (void)multiCellContentView:(id)arg1 entryFieldDidBeginEditing:(id)arg2;
- (void)multiCellContentView:(id)arg1 entryFieldDidEndEditing:(id)arg2;
- (void)multiCellContentViewDidEndEditing:(id)arg1;
- (void)multiCellContentView:(id)arg1 willResizeAnimated:(BOOL)arg2;
- (void)multiCellContentViewWillShowDeleteConfirmation:(id)arg1;
- (void)multiCellContentViewWillHideDeleteConfirmation:(id)arg1;
- (BOOL)personCellLayoutManager:(id)arg1 isCellInFullEditMode:(id)arg2;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(void*)arg3;
- (id)namePropertyGroup:(id)arg1 primaryValueForProperty:(int)arg2;
- (int)customKeyboardOutDirection;
- (BOOL)viewControllerWillSlideOut;
- (id)pinningResponder;
- (void)setPinningResponder:(id)arg1;
- (id)pinningMultiCellRelativeIndexPath;
- (void)setPinningMultiCellRelativeIndexPath:(id)arg1;
- (id)pinningMultiCellIndexPath;
- (void)setPinningMultiCellIndexPath:(id)arg1;
- (id)pinningMultiCellContentViewAlternate;
- (void)setPinningMultiCellContentViewAlternate:(id)arg1;
- (void)setMultiCellContentViewForWillEndEditing:(id)arg1;
- (id)lastActiveMultiCellContentView;
- (void)setPartiallySelectedCell:(id)arg1;
- (id)insertionLabel;
- (int)insertionProperty;
- (void)setActionShouldPickHighlightedValue:(BOOL)arg1;
- (BOOL)highlightedValueIsImportant;
- (void)setHighlightedValueIsImportant:(BOOL)arg1;
- (void)setHighlightedValuePerson:(void*)arg1;
- (int)highlightedValueIdentifier;
- (void)setHighlightedValueIdentifier:(int)arg1;
- (int)highlightedValueProperty;
- (void)setHighlightedValueProperty:(int)arg1;
- (BOOL)shouldShowContactSourcesStringAsMessage;
- (BOOL)allowsSounds;
- (id)currentTableFooterView;
- (id)_linkingHeaderView;
- (id)_notesHeaderView;
- (id)_headerView;
- (BOOL)_shouldShowAddLinkedContactCell;
- (id)accountsManager;
- (void)setPeople:(id)arg1;
- (void)setShouldShowContactSourcesStringAsMessage:(BOOL)arg1;
- (void)reloadFavoritesData;
- (void)updateForConferencingAvailabilityChange;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(int)arg5 actionGrouping:(int)arg6 ordering:(int)arg7;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7 actionGrouping:(int)arg8 ordering:(int)arg9;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(int)arg5 ordering:(int)arg6 outActions:(id*)arg7 outIndex:(int*)arg8;
- (void)setDisplayedProperties:(struct __CFArray { }*)arg1 andRefreshUI:(BOOL)arg2;
- (void)setInsertionProperty:(int)arg1 value:(id)arg2 label:(id)arg3;
- (void)endPinning;
- (void)reloadNoValueLabelAnimated:(BOOL)arg1;
- (void)scrollToLastActiveEntryFieldAnimated:(BOOL)arg1;
- (void)setViewControllerWillSlideOut:(BOOL)arg1;
- (void)setCustomKeyboardOutDirection:(int)arg1;
- (id)noValueLabel;
- (int)primaryProperty;
- (void)unselectAllCellParts;
- (BOOL)hasImageChanges;
- (BOOL)shouldShowLinkingUI;
- (void)setAlternateName:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (id)messageDetail;
- (void)setMessageDetailFont:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setShouldShowLinkingUI:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)reloadNameData;
- (void)reloadLinkingUISection;
- (void)reloadDeleteButton;
- (void)reloadPropertyGroups;
- (BOOL)isAttributionEnabled;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (BOOL)allowsSendingTextMessage;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (id)attribution;
- (void)endEditingTransactions;
- (id)personHeaderView;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsDeletion;
- (void)setAllowsSharing:(BOOL)arg1;
- (BOOL)allowsConferencing;
- (void)setPersonHeaderView:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)updateRecord;
- (BOOL)canSave;
- (void)labelPickerViewController:(id)arg1 didDeleteLabel:(id)arg2;
- (BOOL)pickerViewControllerShouldDismissKeyboard:(id)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)allowsActions;
- (id)writablePeople;
- (BOOL)hasImageDataForPerson:(void*)arg1;
- (void*)personForImageData;
- (id)primarySourceNameForPerson:(void*)arg1;
- (void)setPersonForImageData:(void*)arg1;
- (void)removeImageDataForPerson:(void*)arg1;
- (void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 forPerson:(void*)arg4;
- (id)personImageView;
- (void)imageWillSave;
- (void)refreshImageData;
- (id)people;
- (void)reloadImageData;
- (id)styleProvider;
- (void)setDisplayedProperties:(struct __CFArray { }*)arg1;
- (struct __CFArray { }*)displayedProperties;
- (id)footerView;
- (void*)addressBook;

@end
