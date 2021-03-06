/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject {
    NSHashTable *_listeners;
    NSMutableArray *_queuedEvents;
    BOOL _shouldQueue;
    NSMutableArray *_supportedProtocols;
}

@property(retain) NSHashTable * listeners;
@property(retain) NSMutableArray * queuedEvents;
@property BOOL shouldQueue;
@property(retain) NSMutableArray * supportedProtocols;

+ (id)eventEmitterForProtocols:(id)arg1;
+ (id)eventEmitterForProtocols:(id)arg1 shouldQueue:(BOOL)arg2;

- (void)dealloc;
- (void)dispatchQueuedEventsToListener:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithSupportedProtocols:(id)arg1 shouldQueue:(BOOL)arg2;
- (id)invocationForProtocol:(id)arg1 selector:(SEL)arg2;
- (BOOL)listenerRegisteredForSelector:(SEL)arg1;
- (id)listeners;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)queuedEvents;
- (void)registerListener:(id)arg1;
- (void)setListeners:(id)arg1;
- (void)setQueuedEvents:(id)arg1;
- (void)setShouldQueue:(BOOL)arg1;
- (void)setSupportedProtocols:(id)arg1;
- (BOOL)shouldQueue;
- (id)supportedProtocols;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;

@end
