/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIImageView, UILabel, UIView;

@interface SKUIGiftDateTableViewCell : UITableViewCell {
    UIView *_bottomBorderView;
    BOOL _checked;
    UIImageView *_checkmarkView;
    UILabel *_dateLabel;
    UILabel *_labelLabel;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
}

@property(getter=isChecked) BOOL checked;
@property(copy) NSString * dateString;
@property(copy) NSString * label;
@property(copy) NSString * placeholder;

- (void).cxx_destruct;
- (id)_labelColor;
- (id)_newLabel;
- (id)dateString;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isChecked;
- (id)label;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setChecked:(BOOL)arg1;
- (void)setDateString:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPlaceholder:(id)arg1;

@end
