/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFCharacterSet : __NSCFType  {
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)invert;
- (id)invertedSet;
- (Class)classForCoder;
- (void)finalize;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (void)addCharactersInString:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (oneway void)release;
- (void)encodeWithCoder:(id)arg1;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (void)addCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)removeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (id)bitmapRepresentation;

@end
