/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSURL, NSString;

@interface EKParticipant : NSObject <NSCopying> {
    NSURL *_address;
    NSString *_commonName;
    NSString *_emailAddress;
    int _status;
    int _role;
    int _type;
    BOOL _isSelf;
    unsigned int _dirtyFlags;
}

@property(readonly) NSURL * URL;
@property(readonly) NSString * name;
@property(readonly) int participantStatus;
@property(readonly) int participantRole;
@property(readonly) int participantType;

+ (id)participantWithEmailAddress:(id)arg1 commonName:(id)arg2;

- (id)URL;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isDirty;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2 role:(int)arg3 status:(int)arg4 type:(int)arg5;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2 role:(int)arg3 status:(int)arg4 type:(int)arg5 isSelf:(BOOL)arg6;
- (id)initWithURL:(id)arg1 name:(id)arg2 isSelf:(BOOL)arg3;
- (id)initWithURL:(id)arg1 name:(id)arg2 role:(int)arg3 status:(int)arg4 type:(int)arg5 isSelf:(BOOL)arg6;
- (id)initWithURL:(id)arg1 name:(id)arg2 emailAddress:(id)arg3 role:(int)arg4 status:(int)arg5 type:(int)arg6 isSelf:(BOOL)arg7;
- (int)participantStatus;
- (int)participantRole;
- (int)participantType;
- (void*)ABRecordWithAddressBook:(void*)arg1;
- (BOOL)isCurrentUser;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2 isSelf:(BOOL)arg3;
- (id)emailAddress;
- (id)displayName;

@end
