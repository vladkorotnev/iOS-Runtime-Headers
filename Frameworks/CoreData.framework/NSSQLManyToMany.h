/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship  {
    NSString *_correlationTableName;
    NSString *_columnName;
}


- (void)dealloc;
- (id)correlationTableName;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (BOOL)isMaster;
- (void)_setCorrelationTableName:(id)arg1;
- (BOOL)isTableSchemaEqual:(id)arg1;
- (void)_setColumnName:(id)arg1;
- (void)_setInverseManyToMany:(id)arg1;
- (BOOL)isReflexive;
- (id)inverseManyToMany;
- (id)columnName;
- (id)inverseColumnName;

@end
