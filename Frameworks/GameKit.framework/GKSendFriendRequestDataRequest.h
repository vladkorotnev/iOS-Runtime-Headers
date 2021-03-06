/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKSendFriendRequestDataRequest : GKDataRequest  {
    int _recipientType;
    id _recipients;
    NSString *_message;
    id _results;
}

@property(retain) id results;
@property(copy) NSString * message;
@property(retain) id recipients;
@property int recipientType;


- (id)recipients;
- (void)processResults:(id)arg1 errorDict:(id)arg2 forKey:(id)arg3 recipients:(id)arg4;
- (void)setResults:(id)arg1;
- (int)recipientType;
- (id)errorForResponse:(id)arg1;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (void)setRecipientType:(int)arg1;
- (void)setRecipients:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (id)key;
- (id)request;
- (void)dealloc;
- (id)results;

@end
