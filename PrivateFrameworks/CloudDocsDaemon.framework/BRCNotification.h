/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCItemID, BRCLocalContainer, NSMutableSet, NSNumber, NSSet, NSString, NSURL;

@interface BRCNotification : BRQueryItem {
    NSString *_aliasContainerID;
    BRCLocalContainer *_container;
    NSMutableSet *_containerIDsWithReverseAliases;
    BRCItemID *_itemID;
    unsigned long long _oldParentFileID;
    unsigned long long _parentFileID;
    BRCItemID *_parentID;
    NSSet *_parentIDs;
    NSString *_unsaltedBookmarkData;
}

@property(readonly) NSString * aliasContainerID;
@property(readonly) BRCLocalContainer * container;
@property(retain) NSMutableSet * containerIDsWithReverseAliases;
@property(readonly) BRCItemID * itemID;
@property(readonly) unsigned long long oldParentFileID;
@property(readonly) NSNumber * oldParentFileObjectID;
@property(readonly) unsigned long long parentFileID;
@property(readonly) NSNumber * parentFileObjectID;
@property(readonly) BRCItemID * parentID;
@property(retain) NSSet * parentIDs;
@property(retain) NSString * unsaltedBookmarkData;
@property(readonly) NSURL * url;

+ (id)notificationGatheredFromItem:(id)arg1;
+ (id)notificationWithAliasItem:(id)arg1 targetItemNotification:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addAliasDecoration:(id)arg1;
- (id)aliasContainerID;
- (BOOL)canMerge:(id)arg1;
- (Class)classForCoder;
- (id)container;
- (id)containerIDsWithReverseAliases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)generateLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (id)initWithAliasItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (id)itemID;
- (void)merge:(id)arg1;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (unsigned long long)oldParentFileID;
- (id)oldParentFileObjectID;
- (unsigned long long)parentFileID;
- (id)parentFileObjectID;
- (id)parentID;
- (id)parentIDs;
- (void)setContainerIDsWithReverseAliases:(id)arg1;
- (void)setParentIDs:(id)arg1;
- (void)setUnsaltedBookmarkData:(id)arg1;
- (id)subclassDescription;
- (id)unsaltedBookmarkData;

@end
