/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class <GKRemoteUIAuxiliaryViewDelegate>, GKButton, NSArray, NSDictionary, NSString;

@interface GKRemoteUITableFooterView : UIView <RUIPageAccessory, RemoteUITableFooter> {
    NSDictionary *_attributes;
    GKButton *_button;
    float _buttonBaselineOffset;
    <GKRemoteUIAuxiliaryViewDelegate> *_delegate;
    int _layoutStyle;
    BOOL _pinToBottom;
    NSArray *_replaceableConstraints;
}

@property(retain) NSDictionary * attributes;
@property(retain) GKButton * button;
@property float buttonBaselineOffset;
@property(copy,readonly) NSString * debugDescription;
@property <GKRemoteUIAuxiliaryViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property int layoutStyle;
@property BOOL pinToBottom;
@property(retain) NSArray * replaceableConstraints;
@property(readonly) Class superclass;

- (void)adjustSizeToFillSuperview:(id)arg1;
- (id)attributes;
- (id)button;
- (float)buttonBaselineOffset;
- (void)buttonTapped:(id)arg1;
- (void)createButtonWithAttributes:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (int)layoutStyle;
- (void)layoutSubviews;
- (void)objectModelDidChange:(id)arg1;
- (BOOL)pinToBottom;
- (id)replaceableConstraints;
- (void)setAttributes:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonBaselineOffset:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setPinToBottom:(BOOL)arg1;
- (void)setReplaceableConstraints:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tableViewDidUpdateContentInset:(id)arg1;

@end
