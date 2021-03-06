/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WebUIModalAlertSheet : UIModalView  {
    int _clickedButton;
}

+ (id)modalAlertSheetWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3;

- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3;
- (int)clickedButton;

@end
