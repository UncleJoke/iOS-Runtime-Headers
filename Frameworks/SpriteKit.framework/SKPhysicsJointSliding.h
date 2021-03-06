/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJointSliding : SKPhysicsJoint {
    float _lowerDistanceLimit;
    BOOL _shouldEnableLimits;
    float _upperDistanceLimit;
}

@property float lowerDistanceLimit;
@property BOOL shouldEnableLimits;
@property float upperDistanceLimit;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { float x1; float x2; })arg3 axis:(struct CGVector { float x1; float x2; })arg4;

- (float)lowerDistanceLimit;
- (void)setLowerDistanceLimit:(float)arg1;
- (void)setShouldEnableLimits:(BOOL)arg1;
- (void)setUpperDistanceLimit:(float)arg1;
- (BOOL)shouldEnableLimits;
- (float)upperDistanceLimit;

@end
