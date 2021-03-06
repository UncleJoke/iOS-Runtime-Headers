/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryServicesConnectionMobile.framework/FactoryServicesConnectionMobile
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <FactoryServiceConnectionEndPointMessageHandlingProtocol>, NSString, NSXPCConnection, NSXPCListener;

@interface FactoryServiceConnectionEndPoint : NSObject <FactoryServiceXPCInterfaceCommon, NSXPCListenerDelegate> {
    NSXPCListener *_Listener;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _connectionInterruptionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _connectionInvalidationHandler;

    <FactoryServiceConnectionEndPointMessageHandlingProtocol> *_delegate;
    BOOL _isConnected;
    NSString *_name;
    NSString *_serviceName;
    NSXPCConnection *_xpcConnection;
}

@property(retain) NSXPCListener * Listener;
@property(copy) id connectionInterruptionHandler;
@property(copy) id connectionInvalidationHandler;
@property(copy,readonly) NSString * debugDescription;
@property(retain) <FactoryServiceConnectionEndPointMessageHandlingProtocol> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL isConnected;
@property(retain) NSString * name;
@property(retain) NSString * serviceName;
@property(readonly) Class superclass;
@property(retain) NSXPCConnection * xpcConnection;

- (void).cxx_destruct;
- (id)Listener;
- (void)cleanUp;
- (id)connectionInterruptionHandler;
- (id)connectionInvalidationHandler;
- (void)dealloc;
- (id)delegate;
- (void)handleMessageFromConnectedEndPoint:(id)arg1 replyBlock:(id)arg2;
- (id)init;
- (int)initConnectionWithService:(id)arg1;
- (BOOL)isConnected;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)name;
- (void)sendMessageToConnectedEndPoint:(id)arg1 replyBlock:(id)arg2;
- (id)serviceName;
- (void)setConnectionInterruptionHandler:(id)arg1;
- (void)setConnectionInvalidationHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsConnected:(BOOL)arg1;
- (void)setListener:(id)arg1;
- (void)setName:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (int)startServiceWithName:(id)arg1;
- (id)xpcConnection;

@end
