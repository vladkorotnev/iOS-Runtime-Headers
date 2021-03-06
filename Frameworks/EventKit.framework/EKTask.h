/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKTask : EKCalendarItem  {
    NSDate *_dueDate;
    unsigned int _priority;
    NSDate *_completedDate;
}

@property(copy) NSDate * dueDate;
@property unsigned int priority;
@property(getter=isCompleted) BOOL completed;
@property(copy) NSDate * completedDate;

+ (id)task;

- (void)setCompleted:(BOOL)arg1;
- (unsigned int)priority;
- (void)setPriority:(unsigned int)arg1;
- (BOOL)isCompleted;
- (void)setDueDate:(id)arg1;
- (id)dueDate;
- (void)setCompletedDate:(id)arg1;
- (id)completedDate;

@end
