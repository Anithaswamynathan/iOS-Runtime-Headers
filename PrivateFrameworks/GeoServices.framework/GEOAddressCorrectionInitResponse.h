/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation, NSString;

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    NSString *_addressID;
    GEOLocation *_addressLocation;
    } _has;
    int _statusCode;
}

@property(retain) NSString * addressID;
@property(retain) GEOLocation * addressLocation;
@property(readonly) BOOL hasAddressID;
@property(readonly) BOOL hasAddressLocation;
@property BOOL hasStatusCode;
@property int statusCode;

- (id)addressID;
- (id)addressLocation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddressID;
- (BOOL)hasAddressLocation;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAddressID:(id)arg1;
- (void)setAddressLocation:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end
