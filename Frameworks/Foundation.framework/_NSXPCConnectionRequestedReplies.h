/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionRequestedReplies : NSObject {
    int _lock;
    struct __CFDictionary { } *_replyTable;
}

- (void)addSequence:(unsigned long)arg1 withProgress:(id)arg2 cleanupBlock:(id)arg3;
- (void)cleanup;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)progressForSequence:(unsigned long)arg1;
- (BOOL)removeSequence:(unsigned long)arg1;

@end
