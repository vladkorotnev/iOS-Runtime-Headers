/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSNumber, NSString, NSMutableDictionary, CPExclusiveLock, NSManagedObjectContext, NoteAccountObject, NoteStoreObject, NSPersistentStoreCoordinator, NSPredicate, NSManagedObjectModel;

@interface NoteContext : NSObject  {
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPredicate *_searchPredicate;
    NoteStoreObject *_localStore;
    NoteAccountObject *_localAccount;
    struct __CXIndex { } *__SharedNoteStoreSearchIndex;
    CPExclusiveLock *__SharedNoteStoreSearchIndexLock;
    int __SharedNoteStoreSearchIndexCount;
    BOOL _isIndexing;
    NSManagedObjectContext *_nextIdContext;
    CPExclusiveLock *_nextIdLock;
    NSNumber *_nextId;
    CPExclusiveLock *_objectCreationLock;
    unsigned int _notificationCount;
    BOOL _logChanges;
    BOOL _indexInBatches;
    BOOL _hasPriorityInSaveConflicts;
    BOOL _inMigrator;
    NSString *_testingFilePrefix;
    NSString *_testingFilePath;
    NSMutableDictionary *_notePropertyObjectsRealized;
}

@property(retain,readonly) NSManagedObjectContext * managedObjectContext;
@property(readonly) BOOL isIndexing;

+ (BOOL)shouldLogIndexing;

- (id)newlyAddedStore;
- (BOOL)deleteStore:(id)arg1;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (id)allAccounts;
- (id)accountForAccountId:(id)arg1;
- (id)newlyAddedAccount;
- (void)enableChangeLogging:(BOOL)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)deleteChanges:(id)arg1;
- (BOOL)saveOutsideApp:(id*)arg1;
- (id)propertyValueForKey:(id)arg1;
- (id)allNotesInCollection:(id)arg1;
- (void)deleteNote:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (unsigned int)countOfNotesInCollection:(id)arg1;
- (id)newlyAddedNote;
- (id)localAccount;
- (BOOL)deleteAccount:(id)arg1;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (id)rootDirectory;
- (void)clearCaches;
- (BOOL)save:(id*)arg1;
- (id)managedObjectContext;
- (id)persistentStoreCoordinator;
- (id)managedObjectModel;
- (id)localStore;
- (void)_createLocalAccount:(id*)arg1 andStore:(id*)arg2;
- (BOOL)setUpLocalAccountAndStore;
- (BOOL)setUpLastIndexTid;
- (void)forceSetUpUniqueObjects;
- (void)setUpUniqueObjects;
- (void)removeSqliteAndIdxFiles;
- (void)removeConflictingSqliteAndIdxFiles;
- (void)setUpCoreDataStack;
- (void)tearDownCoreDataStack;
- (id)initWithTestingFilePrefix:(id)arg1 inMigrator:(BOOL)arg2;
- (id)initForMigrator;
- (id)initWithTestingFilePrefix:(id)arg1;
- (id)initWithTestingFilePrefix:(id)arg1 atPath:(id)arg2 inMigrator:(BOOL)arg3;
- (id)visibleNotesPredicate;
- (id)liveNotesNeedingBodiesPredicate;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (id)newFetchRequestForNotes;
- (void)sortNotes:(id)arg1;
- (id)collectionForObjectID:(id)arg1;
- (id)storeForObjectID:(id)arg1;
- (BOOL)handleSaveErrors:(id)arg1;
- (BOOL)saveSilently:(id*)arg1;
- (id)allVisibleNotes;
- (unsigned int)countOfVisibleNotes;
- (id)allVisibleNotesInCollection:(id)arg1;
- (unsigned int)countOfVisibleNotesInCollection:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (unsigned int)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (id)visibleNoteForObjectID:(id)arg1;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)allNotes;
- (unsigned int)countOfNotes;
- (id)allNotesMatchingPredicate:(id)arg1;
- (unsigned int)countOfNotesMatchingPredicate:(id)arg1;
- (id)noteForObjectID:(id)arg1;
- (id)collectionForInfo:(id)arg1;
- (id)allStores;
- (unsigned int)countOfStores;
- (id)defaultStoreForNewNote;
- (BOOL)forceDeleteAccount:(id)arg1;
- (BOOL)shouldDisableLocalStore;
- (BOOL)hasMultipleEnabledStores;
- (id)_notePropertyObjectForKey:(id)arg1;
- (void)handleMigration;
- (id)getNextIdObject;
- (id)nextIndex;
- (id)pathForPersistentStore;
- (id)pathForIndex;
- (id)urlForPersistentStore;
- (void)setHasPriorityInSaveConflicts:(BOOL)arg1;
- (void)saveNotesToResumeIndexing:(id)arg1;
- (BOOL)shouldResumeIndexing;
- (id)notesToResumeIndexing;
- (void)indexNotes:(id)arg1;
- (struct __CXIndex { }*)searchIndex:(char *)arg1;
- (void)destroySearchIndex;
- (void)wrapUpIndexing;
- (void)resumeIndexing;
- (void)indexInBatches:(BOOL)arg1;
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)arg1;
- (void)resetNotificationCount;
- (void)updateSearchIndex:(id)arg1;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (void)trackChanges:(id)arg1;
- (void*)newSearchContextWithText:(id)arg1;
- (id)copyNotesForSearch:(void*)arg1 complete:(char *)arg2;
- (id)copyNotesForSearch:(void*)arg1 predicate:(id)arg2 complete:(char *)arg3;
- (void)cleanUpLocks;
- (BOOL)noteIsSafeToAccess:(id)arg1;
- (BOOL)deleteIndexFile;
- (BOOL)isIndexing;

@end
