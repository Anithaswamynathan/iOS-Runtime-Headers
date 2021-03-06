/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderConfig : NSObject {
    float _blurRadius;
    float _blurSaturation;
    float _keyborderOpacity;
    float _keycapOpacity;
    BOOL _lightKeyboard;
}

@property(readonly) int backdropStyle;
@property float blurRadius;
@property float blurSaturation;
@property float keyborderOpacity;
@property float keycapOpacity;
@property BOOL lightKeyboard;
@property(readonly) BOOL whiteText;

+ (id)darkConfig;
+ (id)defaultConfig;
+ (id)passcodeConfig;

- (int)backdropStyle;
- (float)blurRadius;
- (float)blurSaturation;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (float)keyborderOpacity;
- (float)keycapOpacity;
- (BOOL)lightKeyboard;
- (void)setBlurRadius:(float)arg1;
- (void)setBlurSaturation:(float)arg1;
- (void)setKeyborderOpacity:(float)arg1;
- (void)setKeycapOpacity:(float)arg1;
- (void)setLightKeyboard:(BOOL)arg1;
- (BOOL)whiteText;

@end
