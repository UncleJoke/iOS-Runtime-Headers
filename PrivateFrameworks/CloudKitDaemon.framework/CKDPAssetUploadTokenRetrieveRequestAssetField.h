/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying> {
    NSMutableArray *_assets;
    CKDPRecordFieldIdentifier *_field;
}

@property(retain) NSMutableArray * assets;
@property(retain) CKDPRecordFieldIdentifier * field;
@property(readonly) BOOL hasField;

- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (id)assets;
- (id)assetsAtIndex:(unsigned int)arg1;
- (unsigned int)assetsCount;
- (void)clearAssets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)field;
- (BOOL)hasField;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setField:(id)arg1;
- (void)writeTo:(id)arg1;

@end
