/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, NSArray, AVWeakReference, AVPlayerItem, NSMutableSet, CALayer, NSMutableDictionary, AVPropertyStorage;

@interface AVPlayerInternal : NSObject  {
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer { } *figPlayer;
    AVPropertyStorage *propertyStorage;
    NSMutableDictionary *pendingFigPlayerProperties;
    AVPlayerItem *currentItem;
    AVPlayerItem *lastItem;
    NSMutableSet *items;
    CALayer *caLayer;
    int status;
    NSError *error;
    struct dispatch_queue_s { } *stateDispatchQueue;
    NSArray *displaysUsedForPlayback;
    int figPlayerType;
    BOOL waitsUntilItemsAreReadyForInspectionBeforeEnqueuingIntoFigPlayer;
    BOOL needsToCreateFigPlayer;
    BOOL logPerformanceData;
}



@end
