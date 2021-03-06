/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSDownloadPhase, NSError;

@interface SSDownloadStatus : NSObject <NSCopying> {
    SSDownloadPhase *_activePhase;
    BOOL _contentRestricted;
    NSError *_error;
    BOOL _failed;
    BOOL _paused;
}

@property(getter=isFailedTransient,readonly) BOOL failedTransient;
@property(getter=isPausable,readonly) BOOL pausable;
@property(readonly) float percentComplete;
@property(getter=isPaused) BOOL paused;
@property(getter=isFailed) BOOL failed;
@property(retain) NSError * error;
@property(getter=isContentRestricted) BOOL contentRestricted;
@property(readonly) SSDownloadPhase * activePhase;


- (void)setPaused:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setFailed:(BOOL)arg1;
- (float)percentComplete;
- (BOOL)isFailedTransient;
- (BOOL)isPausable;
- (void)setOperationProgress:(id)arg1;
- (void)setContentRestricted:(BOOL)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)error;
- (BOOL)isContentRestricted;
- (BOOL)isPaused;
- (id)activePhase;
- (BOOL)isFailed;
- (void)setError:(id)arg1;

@end
