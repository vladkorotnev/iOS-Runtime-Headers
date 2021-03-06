/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {
    id _listener;
    int (*_callback)();
    NSString *_name;
    void *_object;
}

+ (id)listenerKeyWithListener:(id)arg1 callback:(int (*)())arg2 name:(id)arg3 object:(const void*)arg4;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithListener:(id)arg1 callback:(int (*)())arg2 name:(id)arg3 object:(const void*)arg4;

@end
