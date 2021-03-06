/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKQuantity, HKQuantityType;

@interface _HKQuantityFilter : _HKFilter {
    HKQuantity *_comparisonQuantity;
    HKQuantityType *_dataType;
    unsigned int _operatorType;
}

@property(readonly) HKQuantity * comparisonQuantity;
@property(readonly) HKQuantityType * dataType;
@property(readonly) unsigned int operatorType;

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned int)arg1 comparisonQuantity:(id)arg2 dataType:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)comparisonQuantity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)operatorType;
- (id)predicateWithHealthDaemon:(id)arg1;

@end
