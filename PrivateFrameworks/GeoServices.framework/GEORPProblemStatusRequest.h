/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORPUserCredentials, NSMutableArray, NSString;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {
    NSMutableArray *_problemIDs;
    NSString *_statusNotificationID;
    GEORPUserCredentials *_userCredentials;
}

@property(readonly) BOOL hasStatusNotificationID;
@property(readonly) BOOL hasUserCredentials;
@property(retain) NSMutableArray * problemIDs;
@property(retain) NSString * statusNotificationID;
@property(retain) GEORPUserCredentials * userCredentials;

- (void)addProblemID:(id)arg1;
- (void)clearProblemIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatusNotificationID;
- (BOOL)hasUserCredentials;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)problemIDAtIndex:(unsigned int)arg1;
- (id)problemIDs;
- (unsigned int)problemIDsCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setProblemIDs:(id)arg1;
- (void)setStatusNotificationID:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (id)statusNotificationID;
- (id)userCredentials;
- (void)writeTo:(id)arg1;

@end
