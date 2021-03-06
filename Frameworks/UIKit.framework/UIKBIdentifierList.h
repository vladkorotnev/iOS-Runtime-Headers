/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, NSMutableArray;

@interface UIKBIdentifierList : NSObject <NSCoding, NSCopying> {
    NSString *m_name;
    NSMutableArray *m_list;
    BOOL m_explicit;
}

@property(readonly) unsigned int count;
@property BOOL explicit;
@property(readonly) NSArray * list;
@property(copy) NSString * name;


- (void)addIdentifier:(id)arg1;
- (id)list;
- (void)setExplicit:(BOOL)arg1;
- (BOOL)explicit;
- (void)setName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)name;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned int)count;

@end
