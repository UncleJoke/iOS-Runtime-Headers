/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SKTexture;

@interface SKVelocityFieldNode : SKFieldNode {
    SKTexture *_velocityTexture;
}

@property /* Warning: Unrecognized filer type: '' using 'void*' */ void* velocity;
@property(retain) SKTexture * velocityTexture;

- (void).cxx_destruct;
- (id)_descriptionClassName;
- (void)_initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setVelocity:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v24@0:48 */

- (void)setVelocityTexture:(id)arg1;
- (/* Warning: Unrecognized filer type: '8' using 'void*' */ void*)velocity;
     /* Encoded args for previous method: 8@0:4 */

- (id)velocityTexture;

@end
