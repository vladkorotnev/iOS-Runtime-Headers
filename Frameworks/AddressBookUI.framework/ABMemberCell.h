/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray;



@interface ABMemberCell : UILabel 
{
    void *_member;
    NSArray *_namePieces;
    NSInteger _highlightIndex;
    BOOL _isGroup;
}


- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 member:(void*)arg2;
- (void)dealloc;
- (void)setNamePieces:(id)arg1;
- (void)setHighlightIndex:(long)arg1;
- (void*)member;
- (void)setMember:(void*)arg1;
- (void)setGroup:(BOOL)arg1;
- (id)groupName;
- (void)drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)description;
- (id)_automationID;

@end