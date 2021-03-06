/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class Message;

@interface MessageBody : MFWeakObject  {
    Message *_message;
}


- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)htmlContentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)htmlContent;
- (BOOL)isHTML;
- (id)attachments;
- (id)textHtmlPart;
- (id)rawData;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)dealloc;
- (BOOL)isRich;
- (unsigned int)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3;

@end
