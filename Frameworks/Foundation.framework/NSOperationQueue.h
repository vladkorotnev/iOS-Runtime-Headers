/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOperationQueue : NSObject  {
    id _private;
    void *_reserved;
}

+ (id)currentQueue;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)mainQueue;

- (void)setName:(id)arg1;
- (void)release;
- (id)name;
- (id)init;
- (id)retain;
- (void)dealloc;
- (unsigned int)retainCount;
- (BOOL)isSuspended;
- (void)addOperationWithBlock:(id)arg1;
- (int)maxConcurrentOperationCount;
- (void)waitUntilAllOperationsAreFinished;
- (id)operations;
- (unsigned int)operationCount;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)setMaxConcurrentOperationCount:(int)arg1;
- (void)addOperation:(id)arg1;
- (void)setSuspended:(BOOL)arg1;
- (void)cancelAllOperations;
- (void)executeAndWaitForBlock:(id)arg1;
- (void)addInvocation:(id)arg1;

@end
