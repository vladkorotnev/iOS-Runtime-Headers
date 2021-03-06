/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSArray, NSString, NSDate, NSTimeZone;

@interface EKEventPredicate : NSPredicate  {
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_uid;
    NSArray *_calendars;
    NSTimeZone *_timeZone;
}

@property(readonly) NSDate * startDate;
@property(readonly) NSDate * endDate;
@property(readonly) NSString * eventIdentifier;
@property(readonly) NSArray * calendars;
@property(readonly) NSTimeZone * timeZone;

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventIdentifier:(id)arg4 calendars:(id)arg5;

- (id)timeZone;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)startDate;
- (id)calendars;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)eventIdentifier;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventIdentifier:(id)arg4 calendars:(id)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)endDate;

@end
