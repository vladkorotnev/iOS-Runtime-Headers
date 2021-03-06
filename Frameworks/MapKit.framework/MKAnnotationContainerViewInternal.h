/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UICalloutView, MKSearchResult, NSMapTable, MKMapTileView, NSMutableArray, MKUserLocation, MKUserLocationView, MKQuadTrie, NSMutableSet, NSMutableDictionary, MKAnnotationView;

@interface MKAnnotationContainerViewInternal : NSObject  {
    MKMapTileView *mapTileView;
    MKQuadTrie *annotationsTrie;
    NSMutableSet *pendingAnnotations;
    NSMutableArray *managedAnnotations;
    NSMutableArray *annotationViews;
    NSMapTable *annotationsToViews;
    NSMapTable *reusableAnnotationViews;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } visibleMapRect;
    NSMutableArray *searchResultPins;
    NSMutableArray *awaitingDropPins;
    NSMutableDictionary *transitCallouts;
    BOOL isShowingTransitCallouts;
    UICalloutView *bubble;
    UICalloutView *calculateBubble;
    BOOL isAnimatingCallout;
    BOOL calloutNeedsReset;
    BOOL registeredForAddressBookChanges;
    MKAnnotationView *bubbleAnnotationView;
    MKAnnotationView *selectedAnnotationView;
    MKSearchResult *searchResultToSelect;
    id delegate;
    MKAnnotationView *draggingAnnotationView;
    struct CGPoint { 
        float x; 
        float y; 
    } mouseDownPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } draggingAnnotationViewPosition;
    unsigned int mapType;
    BOOL clickedOnAnnotationView;
    BOOL didDragAnnotationView;
    BOOL animationsEnabled;
    MKUserLocation *userLocation;
    MKUserLocationView *userLocationView;
    BOOL didAddUserLocationView;
    int userLocationViewUpdateMode;
    int restoreUserLocationViewUpdateMode;
    struct { 
        double latitude; 
        double longitude; 
    } lastMetaDataCoordinate;
    double lastMetaDataUpdateTime;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mapTransform;
    Class calloutViewClass;
}



@end
