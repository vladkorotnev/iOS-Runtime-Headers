/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSInvocation;

@interface CapturedInvocationTrampoline : InvocationTrampoline  {
    NSInvocation **_outInvocation;
    BOOL _shouldRetainArguments;
}


- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 outInvocation:(id*)arg2 shouldRetainArguments:(BOOL)arg3;

@end
