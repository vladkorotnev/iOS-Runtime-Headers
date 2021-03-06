/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPWrappedBytes : NSObject  {
    unsigned long long _offset;
    unsigned long long _capacity;
    BOOL _allocatedBytes;
    char *_bytes;
    int _fd;
    BOOL _useByteBuffer;
    unsigned long long _excessDataLength;
}

+ (id)wrappedBytesWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2;
+ (id)wrappedBytesWithCapacity64:(unsigned long long)arg1;

- (id)initWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2;
- (id)initWithFileDescriptor:(int)arg1 capacity64:(unsigned long long)arg2;
- (unsigned long long)capacity64;
- (unsigned long long)setCapacity64:(unsigned long long)arg1;
- (BOOL)wasInitWithFD;
- (unsigned long long)excessDataLength;
- (void)setLength64:(unsigned long long)arg1;
- (id)initWithCapacity64:(unsigned long long)arg1;
- (unsigned long long)length64;
- (unsigned long long)appendBytes:(const void*)arg1 length64:(unsigned long long)arg2;
- (double)percentFull;
- (void*)mutableBytes;
- (unsigned long long)appendData:(id)arg1;
- (id)init;
- (void)dealloc;
- (const void*)bytes;
- (id)description;

@end
