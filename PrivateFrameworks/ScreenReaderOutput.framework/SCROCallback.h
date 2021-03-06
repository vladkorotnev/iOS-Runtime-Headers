/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROCallback : NSObject <NSCoding> {
    int _key;
    id _object;
    BOOL _isAtomic;
}


- (int)key;
- (id)object;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1 object:(id)arg2;
- (void)setIsAtomic:(BOOL)arg1;
- (BOOL)isAtomic;
- (void)postToHandler:(id)arg1;

@end
