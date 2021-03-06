/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary;

@interface GKGetColorThemeDataRequest : GKDataRequest  {
    NSDictionary *_themesOnServer;
}

@property(readonly) NSDictionary * themesOnServer;


- (id)themesOnServer;
- (int)cachePriority;
- (int)cacheType;
- (BOOL)authenticationRequired;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)cacheKey;
- (id)key;
- (id)request;
- (void)dealloc;

@end
