/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLResourceIdentity, NSDate;

@interface CPLFileStorageItem : NSObject <NSCopying> {
    CPLResourceIdentity *_identity;
    NSDate *_lastAccessDate;
    BOOL _markedForDelete;
    BOOL _original;
}

@property(readonly) CPLResourceIdentity * identity;
@property(readonly) NSDate * lastAccessDate;
@property(getter=isMarkedForDelete,readonly) BOOL markedForDelete;
@property(getter=isOriginal,readonly) BOOL original;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (unsigned int)hash;
- (id)identity;
- (id)initWithIdentity:(id)arg1 original:(BOOL)arg2 markedForDelete:(BOOL)arg3 lastAccessDate:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMarkedForDelete;
- (BOOL)isOriginal;
- (id)lastAccessDate;

@end
