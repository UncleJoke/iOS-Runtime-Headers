/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPParagraphStyle;

@interface TSCHLegendCellMetrics : NSObject {
    float mBadgeSize;
    float mBaseline;
    struct __CTFont { } *mFont;
    float mLegendSymbolGap;
    float mLineGap;
    TSWPParagraphStyle *mParagraphStyle;
    float mTrueTitleHeight;
}

@property(readonly) float badgeSize;
@property(readonly) float baseline;
@property(readonly) struct __CTFont { }* font;
@property(readonly) float lineGap;
@property(readonly) TSWPParagraphStyle * paragraphStyle;
@property(readonly) float symbolGap;
@property(readonly) float titleHeight;

- (float)badgeSize;
- (float)baseline;
- (void)dealloc;
- (struct __CTFont { }*)font;
- (id)initWithParagraphStyle:(id)arg1;
- (float)lineGap;
- (id)paragraphStyle;
- (float)symbolGap;
- (float)titleHeight;

@end
