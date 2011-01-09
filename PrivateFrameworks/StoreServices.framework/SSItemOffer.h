/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSDictionary, SSItem;



@interface SSItemOffer : NSObject <NSCopying>
{
    SSItem *_item;
    NSDictionary *_offerDictionary;
    NSString *_offerIdentifier;
    NSArray *_supportedDevices;
}

@property(readonly) NSString *buyParameters;
@property(readonly) NSString *priceDisplay;
@property(readonly) NSString *actionDisplayName;
@property(getter=isPreorder,readonly) BOOL preorder;
@property(readonly) SSItemMedia *offerMedia;
@property(readonly) NSSet *accountIdentifiers;
@property(readonly) long long estimatedDiskSpaceNeeded;
@property(readonly) id requiredSoftwareCapabilities;
@property(readonly) BOOL shouldShowPlusIcon;
@property(readonly) NSArray *supportedDevices;
@property(getter=_offerItem) SSItem *_offerItem; /* unknown property attribute: S_setOfferItem: */
@property(readonly) NSString *offerIdentifier;

+ (id)_preferredOfferIdentifiers;

- (id)requiredSoftwareCapabilities;
- (id)offerMedia;
- (id)offerIdentifier;
- (id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2;
- (id)buyParameters;
- (BOOL)isPreorder;
- (id)playableMedia;
- (id)priceDisplay;
- (BOOL)shouldShowPlusIcon;
- (id)actionDisplayName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)valueForProperty:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)_offerItem;
- (id)accountIdentifiers;
- (long long)estimatedDiskSpaceNeeded;
- (id)supportedDevices;
- (void)_setOfferItem:(id)arg1;

@end