/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMULinkedListEntry;

@interface VMULinkedList : NSObject  {
    VMULinkedListEntry *_head;
    VMULinkedListEntry *_tail;
}

+ (id)linkedList;

- (void)pushHead:(id)arg1;
- (id)popTail;
- (void)removeAllObjects;
- (id)init;
- (id)tail;
- (id)head;
- (void)remove:(id)arg1;

@end
