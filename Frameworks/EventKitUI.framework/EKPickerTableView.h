/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIDatePicker, UITableView;

@interface EKPickerTableView : UIView  {
    UIDatePicker *_datePicker;
    UITableView *_tableView;
}

@property(readonly) UITableView * tableView;
@property(readonly) UIDatePicker * datePicker;


- (id)tableView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDatePicker;
- (id)datePicker;

@end
