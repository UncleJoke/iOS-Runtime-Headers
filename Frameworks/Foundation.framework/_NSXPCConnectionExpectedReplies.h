/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionExpectedReplies : NSObject {
    int _lock;
    struct __CFDictionary { } *_replyTable;
    unsigned long long _sequence;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)progressForSequence:(unsigned long long)arg1;
- (void)removeSequence:(unsigned long long)arg1;
- (unsigned long long)sequenceWithProgress:(id)arg1;

@end
