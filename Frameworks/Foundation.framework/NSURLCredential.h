/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSCopying> {
    NSURLCredentialInternal *_internal;
}

+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned int)arg3;
+ (id)credentialWithIdentity:(struct __SecIdentity { }*)arg1 certificates:(id)arg2 persistence:(unsigned int)arg3;
+ (id)credentialForTrust:(struct __SecTrust { }*)arg1;

- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned int)arg3;
- (id)user;
- (id)password;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { }*)arg1;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 certificates:(id)arg2 persistence:(unsigned int)arg3;
- (BOOL)hasPassword;
- (unsigned int)persistence;
- (struct __SecIdentity { }*)identity;
- (id)certificates;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (struct _CFURLCredential { }*)_cfurlcredential;
- (id)_userName;
- (id)_userPassword;

@end
