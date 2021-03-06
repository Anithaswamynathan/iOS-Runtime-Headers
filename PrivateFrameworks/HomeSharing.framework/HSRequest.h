/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSData, NSDictionary, NSMutableArray, NSString;

@interface HSRequest : NSObject {
    NSString *_action;
    NSDictionary *_arguments;
    NSData *_bodyData;
    NSMutableArray *_cachedBodyDataBlocks;
    BOOL _concurrent;
    BOOL _excludeSessionIDFromURL;
    NSDictionary *_headers;
    struct __CFHTTPMessage { } *_message;
    int _method;
}

@property(readonly) NSString * action;
@property(copy) NSData * bodyData;
@property(getter=isConcurrent,readonly) BOOL concurrent;
@property BOOL excludeSessionIDFromURL;
@property int method;
@property(readonly) double timeoutInterval;

+ (id)request;

- (struct __CFHTTPMessage { }*)CFHTTPMessageForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (id)_defaultHeaderFields;
- (id)_methodStringForMethod:(int)arg1;
- (BOOL)acceptsGzipEncoding;
- (id)action;
- (void)appendCachedBodyDataBlocksIntoData:(id)arg1 clearCache:(BOOL)arg2;
- (id)bodyData;
- (void)cacheBodyDataBlock:(id)arg1;
- (unsigned int)cachedBodyDataBlocksLength;
- (id)canonicalResponseForResponse:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithoutHeaderFields;
- (BOOL)excludeSessionIDFromURL;
- (id)initWithAction:(id)arg1;
- (BOOL)isConcurrent;
- (int)method;
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (id)requestURLForConnection:(id)arg1;
- (void)setBodyData:(id)arg1;
- (void)setExcludeSessionIDFromURL:(BOOL)arg1;
- (void)setMethod:(int)arg1;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (double)timeoutInterval;

@end
