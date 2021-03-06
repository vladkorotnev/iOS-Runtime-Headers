/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMGeometry, NSData;

@interface GMMOffsetPolyline : PBCodable  {
    GMMGeometry *_absolutePoint;
    NSData *_relativePoints;
}

@property(readonly) BOOL hasRelativePoints;
@property(retain) NSData * relativePoints;
@property(retain) GMMGeometry * absolutePoint;


- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)hasRelativePoints;
- (void)setRelativePoints:(id)arg1;
- (void)setAbsolutePoint:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)relativePoints;
- (id)absolutePoint;

@end
