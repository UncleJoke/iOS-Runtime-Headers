/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSCHSelectionPathType : NSObject <NSCopying> {
    NSString *mName;
    NSString *mType;
}

@property(readonly) NSString * name;
@property(readonly) NSString * type;

+ (id)axisLabelsType;
+ (id)axisLineType;
+ (id)axisTitleType;
+ (id)categoryAxisType;
+ (id)chartBodyType;
+ (id)chartDataSetNameType;
+ (id)chartTitleType;
+ (id)errorBarType;
+ (id)gridLineType;
+ (id)legendSeriesNameType;
+ (id)legendTrendLineNameType;
+ (id)legendType;
+ (id)referenceLineLabelType;
+ (id)referenceLineType;
+ (id)referenceLineValueLabelType;
+ (id)selectionPathTypeWithType:(id)arg1 name:(id)arg2;
+ (id)seriesLabelType;
+ (id)seriesSymbolType;
+ (id)seriesType;
+ (id)seriesValueLabelType;
+ (id)trendLineEquationType;
+ (id)trendLineR2Type;
+ (id)trendLineType;
+ (id)valueAxisType;

- (BOOL)canApplyChartStyleWithDescription:(id)arg1;
- (BOOL)canApplyParagraphStyle;
- (BOOL)canApplyShapeStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct ChartSelectionPathTypeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; }*)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)saveToArchive:(struct ChartSelectionPathTypeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; }*)arg1;
- (id)type;

@end
