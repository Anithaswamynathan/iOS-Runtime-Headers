/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CATransition : CAAnimation 
{
}

@property NSUInteger transitionFlags;
@property(copy) NSString *type;
@property(copy) NSString *subtype;
@property float startProgress;
@property float endProgress;
@property(retain) id filter;


- (void)setSubtype:(id)arg1;
- (id)type;
- (id)subtype;
- (void)setType:(id)arg1;
- (void)setTransitionFlags:(NSUInteger)arg1;
- (void)setFilter:(id)arg1;
- (id)filter;
- (float)startProgress;
- (void)setStartProgress:(float)arg1;
- (float)endProgress;
- (void)setEndProgress:(float)arg1;
- (NSUInteger)transitionFlags;
- (struct Animation { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; NSUInteger x7; NSUInteger x8; }*)_copyRenderAnimationForLayer:(id)arg1;
- (NSUInteger)_propertyFlagsForLayer:(id)arg1;

@end