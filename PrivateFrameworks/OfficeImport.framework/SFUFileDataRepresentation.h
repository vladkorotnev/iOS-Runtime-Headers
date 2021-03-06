/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, SFUCryptoKey;

@interface SFUFileDataRepresentation : SFUDataRepresentation  {
    NSString *mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned int mFileType;
    BOOL mHasFileAttributes;
    long long mPlaintextDataLength;
    SFUCryptoKey *mCryptoKey;
}


- (id)initWithPath:(id)arg1;
- (id)path;
- (void)dealloc;
- (id)description;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;
- (void)setFileType:(unsigned long)arg1;
- (BOOL)isCryptoKeyIdenticalToKey:(id)arg1;
- (void)readFileAttributes;
- (BOOL)isEncrypted;
- (long long)encodedLength;
- (id)inputStream;
- (BOOL)isReadable;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2;
- (BOOL)hasSameLocationAs:(id)arg1;
- (unsigned long)fileType;
- (long long)dataLength;

@end
