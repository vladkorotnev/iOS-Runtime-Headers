/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString;

@interface ABActionsController : NSObject  {
    void *_person;
    int _property;
    int _recordID;
    int _multiValueIdentifier;
    id _value;
    NSString *_stringValue;
    void *_context;
    int _lastPropertyForActions;
    struct __CFArray { } *_actionsForProperty;
}

+ (int)defaultActionForProperty:(int)arg1;
+ (id)newActionsControllerForProperty:(int)arg1;

- (void)setContext:(void*)arg1;
- (id)value;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)setValue:(id)arg1;
- (void*)context;
- (id)init;
- (void)dealloc;
- (id)initWithProperty:(int)arg1;
- (int)_actionAtIndex:(int)arg1 forProperty:(int)arg2;
- (id)titleAtIndex:(int)arg1 forProperty:(int)arg2;
- (void)performAction:(int)arg1;
- (void*)person;
- (int)actionsCountForProperty:(int)arg1;
- (id)titleForAction:(int)arg1;
- (void)resetPrimaryPropertyActions;
- (id)urlForAction:(int)arg1 forProperty:(int)arg2;
- (int)defaultAction;
- (void)performDefaultAction;
- (void)performActionAtIndex:(int)arg1 forProperty:(int)arg2;
- (void)setPerson:(void*)arg1;
- (struct __CFArray { }*)_actionsForProperty:(int)arg1;
- (void)_performAction:(int)arg1 forProperty:(int)arg2;
- (void)setRecordID:(int)arg1;
- (void)setMultiValueIdentifier:(int)arg1;

@end
