/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UILabel;

@interface RemoteUIDetailHeader : UIView <RemoteUITableHeader> {
    UILabel *_detailHeaderLabel;
    UILabel *_headerLabel;
    BOOL _isFirstSection;
}

- (void)dealloc;
- (float)headerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)setSectionIsFirst:(BOOL)arg1;

@end
