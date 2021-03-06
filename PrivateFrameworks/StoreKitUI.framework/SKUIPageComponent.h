/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString;

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider> {
    int _metricsLocationPosition;
}

@property(readonly) int componentType;
@property(readonly) NSString * metricsElementName;
@property int metricsLocationPosition;
@property(getter=isMissingItemData,readonly) BOOL missingItemData;

- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(int)arg2 usingBlock:(id)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(int)arg2 usingBlock:(id)arg3;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(int)arg2 usingBlock:(id)arg3;
- (void)_setMetricsLocationPosition:(int)arg1;
- (int)componentType;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(id)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (BOOL)isMissingItemData;
- (id)metricsElementName;
- (int)metricsLocationPosition;
- (id)valueForMetricsField:(id)arg1;

@end
