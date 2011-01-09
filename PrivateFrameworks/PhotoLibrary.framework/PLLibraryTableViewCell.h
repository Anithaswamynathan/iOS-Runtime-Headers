/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel, UIImage;



@interface PLLibraryTableViewCell : UITableViewCell 
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _posterImageRect;
    UIImage *_posterImage;
    UILabel *_titleTextLabel;
    UILabel *_countLabel;
    BOOL _textNeedsLayout;
}

+ (id)photoCountFormatter;
+ (void)_initializeSafeCategory;

- (void)layoutTextInBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPosterImage:(id)arg1;
- (void)setText:(id)arg1 photoCount:(NSInteger)arg2;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 reuseIdentifier:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;

@end