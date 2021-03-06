/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDictionary, NSMutableString;

@interface __NSLocalizedString : NSMutableString  {
    NSMutableString *original;
    NSDictionary *config;
}


- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 locale:(id)arg4;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)substringWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)appendFormat:(id)arg1;
- (id)substringToIndex:(unsigned int)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)substringFromIndex:(unsigned int)arg1;
- (void)setString:(id)arg1;
- (void)appendString:(id)arg1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)length;
- (BOOL)isEqualToString:(id)arg1;
- (void)insertString:(id)arg1 atIndex:(unsigned int)arg2;
- (id)initWithString:(id)arg1 withFormatConfiguration:(id)arg2;
- (id)baseString;
- (const unsigned short*)_fastCharacterContents;
- (id)formatConfiguration;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (void)appendCharacters:(const unsigned short*)arg1 length:(unsigned int)arg2;

@end
