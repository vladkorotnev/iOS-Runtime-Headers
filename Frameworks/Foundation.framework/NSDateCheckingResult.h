/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDate, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSDate *_date;
    NSTimeZone *_timeZone;
    double _duration;
    NSDate *_referenceDate;
    id _underlyingResult;
}

@property(readonly) NSTimeZone * timeZone;
@property(readonly) double duration;
@property(readonly) NSDate * referenceDate;
@property(readonly) void* underlyingResult;


- (double)duration;
- (id)timeZone;
- (id)date;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)resultType;
- (id)referenceDate;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (void*)underlyingResult;

@end
