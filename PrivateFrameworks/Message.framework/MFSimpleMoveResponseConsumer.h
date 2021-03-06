/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError, NSMutableArray, NSDictionary;

@interface MFSimpleMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {
    NSDictionary *messagesByMessageID;
    NSMutableArray *failedMessages;
    MFError *_error;
}

@property(retain) MFError * error;


- (void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)resultsForMessageMove:(id)arg1;
- (void)dealloc;
- (id)error;
- (void)setError:(id)arg1;

@end
