/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UIFlicker : NSObject  {
    UIView *_target;
    struct CGPoint { 
        float x; 
        float y; 
    } _startLocation;
    int _throwIterations;
    id _delegate;
    int _mouseUpCount;
    int _mouseDraggedCount;
    float _delay;
    struct CGPoint { 
        float x; 
        float y; 
    } _offset;
}


- (void)setStartLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDelay:(float)arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (void)_mouseDraggedMemberListTest;
- (void)_mouseUpMemberListTest;
- (void)_throwMemberListTest;
- (void)setIterations:(int)arg1;
- (void)run;
- (id)init;
- (void)setTarget:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
