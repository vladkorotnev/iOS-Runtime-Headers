/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)lock;
- (void)finalize;
- (void)unlock;
- (void)setName:(id)arg1;
- (id)name;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)lockForReading;
- (BOOL)tryLockForReading;
- (BOOL)lockForReadingBeforeDate:(id)arg1;
- (void)lockForWriting;
- (BOOL)tryLockForWriting;
- (BOOL)lockForWritingBeforeDate:(id)arg1;

@end
