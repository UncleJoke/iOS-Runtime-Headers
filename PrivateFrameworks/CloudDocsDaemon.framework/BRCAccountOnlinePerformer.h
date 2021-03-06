/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface BRCAccountOnlinePerformer : NSObject <BRCReachabilityDelegate> {
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (BOOL)addPerformer:(id)arg1;
+ (void)removePerformer:(id)arg1;

- (void).cxx_destruct;
- (void)_close;
- (id)_key;
- (id)initWithAccountID:(id)arg1;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (void)perform;
- (void)resumeAndAutoClose;

@end
