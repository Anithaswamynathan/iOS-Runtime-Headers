/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, SFUCryptoKey, TSPBundle;

@interface TSPBundleDataStorage : TSPFileDataStorage {
    TSPBundle *_bundle;
    SFUCryptoKey *_decryptionKey;
    BOOL _gilligan_isRemote;
    unsigned char _packageIdentifier;
    NSString *_path;
}

- (void).cxx_destruct;
- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
- (BOOL)copyToTemporaryURL:(id)arg1;
- (BOOL)gilligan_isRemote;
- (id)initWithFilename:(id)arg1 decryptionKey:(id)arg2 bundle:(id)arg3;
- (BOOL)isInPackage:(id)arg1;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id)arg1;
- (void)performReadWithAccessor:(id)arg1;
- (void)setGilligan_isRemote:(BOOL)arg1;
- (BOOL)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id*)arg3 didCopyDataToBundle:(BOOL*)arg4;

@end
