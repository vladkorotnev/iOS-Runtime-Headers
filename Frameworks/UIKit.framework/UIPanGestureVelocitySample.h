/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPanGestureVelocitySample : NSObject  {
    struct CGPoint { 
        float x; 
        float y; 
    } start;
    struct CGPoint { 
        float x; 
        float y; 
    } end;
    double dt;
}

@property double dt;
@property struct CGPoint { float x; float y; } end;
@property struct CGPoint { float x; float y; } start;


- (void)setDt:(double)arg1;
- (void)setEnd:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStart:(struct CGPoint { float x1; float x2; })arg1;
- (double)dt;
- (struct CGPoint { float x1; float x2; })end;
- (struct CGPoint { float x1; float x2; })start;

@end
