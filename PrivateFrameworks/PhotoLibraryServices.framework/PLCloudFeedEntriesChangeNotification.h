/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSSet;

@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification {
    NSSet *_deletedEntries;
    NSSet *_insertedEntries;
    BOOL _shouldReload;
    NSSet *_updatedEntries;
}

@property(copy) NSSet * deletedEntries;
@property(copy) NSSet * insertedEntries;
@property BOOL shouldReload;
@property(copy) NSSet * updatedEntries;

+ (id)notificationWithFullReload;
+ (id)notificationWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;

- (id)_initWithFullReload;
- (id)_initWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;
- (void)dealloc;
- (id)deletedEntries;
- (id)insertedEntries;
- (id)name;
- (id)object;
- (void)setDeletedEntries:(id)arg1;
- (void)setInsertedEntries:(id)arg1;
- (void)setShouldReload:(BOOL)arg1;
- (void)setUpdatedEntries:(id)arg1;
- (BOOL)shouldReload;
- (id)updatedEntries;
- (id)userInfo;

@end
