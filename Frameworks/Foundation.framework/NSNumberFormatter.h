/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary;

@interface NSNumberFormatter : NSFormatter  {
    NSMutableDictionary *_attributes;
    struct __CFNumberFormatter { } *_formatter;
    unsigned int _counter;
    void *_reserved[12];
}

+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned int)arg2;
+ (void)initialize;
+ (void)setDefaultFormatterBehavior:(unsigned int)arg1;
+ (unsigned int)defaultFormatterBehavior;
+ (id)mf_formatUnsignedInteger:(unsigned int)arg1 withGrouping:(BOOL)arg2;
+ (id)mf_formatInteger:(int)arg1 withGrouping:(BOOL)arg2;
+ (id)gkRankFormatter;
+ (id)gk_formatInteger:(int)arg1 withGrouping:(BOOL)arg2;
+ (id)gk_formatUnsignedInteger:(unsigned int)arg1 withGrouping:(BOOL)arg2;

- (void)_reset;
- (void)setLocale:(id)arg1;
- (id)locale;
- (void)finalize;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 error:(out id*)arg4;
- (void)setFormatterBehavior:(unsigned int)arg1;
- (void)setMaximumFractionDigits:(unsigned int)arg1;
- (void)setMinimumFractionDigits:(unsigned int)arg1;
- (void)setUsesGroupingSeparator:(BOOL)arg1;
- (id)stringForObjectValue:(id)arg1;
- (void)_regenerateFormatter;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (void)setTextAttributesForNegativeValues:(id)arg1;
- (id)positiveFormat;
- (void)setTextAttributesForPositiveValues:(id)arg1;
- (BOOL)allowsFloats;
- (void)setAllowsFloats:(BOOL)arg1;
- (void)setDecimalSeparator:(id)arg1;
- (void)setAlwaysShowsDecimalSeparator:(BOOL)arg1;
- (id)currencyDecimalSeparator;
- (void)setCurrencyDecimalSeparator:(id)arg1;
- (void)setGroupingSeparator:(id)arg1;
- (id)zeroSymbol;
- (void)setZeroSymbol:(id)arg1;
- (void)setTextAttributesForZero:(id)arg1;
- (void)setNilSymbol:(id)arg1;
- (id)textAttributesForNil;
- (void)setTextAttributesForNil:(id)arg1;
- (void)setNotANumberSymbol:(id)arg1;
- (void)setTextAttributesForNotANumber:(id)arg1;
- (void)setPositiveInfinitySymbol:(id)arg1;
- (void)setTextAttributesForPositiveInfinity:(id)arg1;
- (id)negativeInfinitySymbol;
- (void)setNegativeInfinitySymbol:(id)arg1;
- (void)setTextAttributesForNegativeInfinity:(id)arg1;
- (void)setPositivePrefix:(id)arg1;
- (id)positiveSuffix;
- (void)setPositiveSuffix:(id)arg1;
- (void)setNegativePrefix:(id)arg1;
- (id)negativeSuffix;
- (void)setNegativeSuffix:(id)arg1;
- (id)currencyCode;
- (void)setCurrencyCode:(id)arg1;
- (id)currencySymbol;
- (void)setCurrencySymbol:(id)arg1;
- (void)setInternationalCurrencySymbol:(id)arg1;
- (void)setPercentSymbol:(id)arg1;
- (void)setPerMillSymbol:(id)arg1;
- (void)setMinusSign:(id)arg1;
- (id)plusSign;
- (void)setPlusSign:(id)arg1;
- (id)exponentSymbol;
- (void)setExponentSymbol:(id)arg1;
- (unsigned int)groupingSize;
- (void)setGroupingSize:(unsigned int)arg1;
- (void)setSecondaryGroupingSize:(unsigned int)arg1;
- (void)setFormatWidth:(unsigned int)arg1;
- (id)multiplier;
- (void)setMultiplier:(id)arg1;
- (id)paddingCharacter;
- (void)setPaddingCharacter:(id)arg1;
- (void)setPaddingPosition:(unsigned int)arg1;
- (void)setRoundingMode:(unsigned int)arg1;
- (void)setRoundingIncrement:(id)arg1;
- (unsigned int)minimumIntegerDigits;
- (void)setMinimumIntegerDigits:(unsigned int)arg1;
- (void)setMaximumIntegerDigits:(unsigned int)arg1;
- (void)setMinimum:(id)arg1;
- (void)setMaximum:(id)arg1;
- (id)currencyGroupingSeparator;
- (void)setCurrencyGroupingSeparator:(id)arg1;
- (BOOL)isLenient;
- (void)setLenient:(BOOL)arg1;
- (BOOL)usesSignificantDigits;
- (void)setUsesSignificantDigits:(BOOL)arg1;
- (void)setMinimumSignificantDigits:(unsigned int)arg1;
- (void)setMaximumSignificantDigits:(unsigned int)arg1;
- (BOOL)isPartialStringValidationEnabled;
- (void)setPartialStringValidationEnabled:(BOOL)arg1;
- (id)textAttributesForNegativeInfinity;
- (id)textAttributesForPositiveInfinity;
- (id)positiveInfinitySymbol;
- (id)textAttributesForNotANumber;
- (id)nilSymbol;
- (id)textAttributesForZero;
- (BOOL)generatesDecimalNumbers;
- (unsigned int)maximumSignificantDigits;
- (unsigned int)minimumSignificantDigits;
- (unsigned int)maximumFractionDigits;
- (unsigned int)minimumFractionDigits;
- (unsigned int)maximumIntegerDigits;
- (id)roundingIncrement;
- (unsigned int)paddingPosition;
- (unsigned int)formatWidth;
- (unsigned int)secondaryGroupingSize;
- (id)minusSign;
- (id)perMillSymbol;
- (id)percentSymbol;
- (id)internationalCurrencySymbol;
- (id)negativePrefix;
- (id)positivePrefix;
- (id)groupingSeparator;
- (id)notANumberSymbol;
- (BOOL)usesGroupingSeparator;
- (id)decimalSeparator;
- (BOOL)alwaysShowsDecimalSeparator;
- (id)negativeFormat;
- (void)setPositiveFormat:(id)arg1;
- (void)setNegativeFormat:(id)arg1;
- (void*)__Keynote_NOOP;
- (unsigned int)formatterBehavior;
- (id)textAttributesForNegativeValues;
- (id)textAttributesForPositiveValues;
- (id)minimum;
- (id)maximum;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (unsigned int)roundingMode;
- (void)setGeneratesDecimalNumbers:(BOOL)arg1;
- (void)setNumberStyle:(unsigned int)arg1;
- (id)stringFromNumber:(id)arg1;
- (id)numberFromString:(id)arg1;
- (unsigned int)numberStyle;

@end
