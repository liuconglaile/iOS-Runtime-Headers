/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NDBackgroundSessionProtocol>, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, __NSCFURLSession, __NSCFURLSessionConfiguration;

@interface __NSCFBackgroundSessionBridge : __NSCFSessionBridge <NDBackgroundSessionClient> {
    NSString *_appWakeUUID;
    __NSCFURLSessionConfiguration *_config;
    unsigned int _identSeed;
    id _invalidateCallback;
    NSObject<OS_dispatch_queue> *_invalidateQueue;
    <NDBackgroundSessionProtocol> *_remoteSession;
    __NSCFURLSession *_session;
    NSMutableDictionary *_tasks;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCConnection *_xpcConn;
}

@property(copy) NSString * appWakeUUID;

- (id)_onqueue_downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(id)arg3;
- (id)_onqueue_dummyTaskForClass:(Class)arg1 withError:(id)arg2;
- (void)_onqueue_invokeInvalidateCallback;
- (id)_onqueue_uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;
- (id)appWakeUUID;
- (void)backgroundDownloadTask:(unsigned int)arg1 didFinishDownloadingToURL:(id)arg2 reply:(id)arg3;
- (void)backgroundDownloadTask:(unsigned int)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(id)arg2;
- (void)backgroundSessionDidStartAppWake:(id)arg1 reply:(id)arg2;
- (void)backgroundTask:(unsigned int)arg1 didCompleteWithError:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned int)arg1 didReceiveChallenge:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned int)arg1 didReceiveResponse:(id)arg2;
- (void)backgroundTask:(unsigned int)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTaskDidResume:(unsigned int)arg1;
- (void)backgroundTaskDidSuspend:(unsigned int)arg1;
- (void)cameIntoForeground:(id)arg1;
- (void)cleanupConfig;
- (id)copyTasks;
- (void)credStorage_allCredentialsWithReply:(id)arg1;
- (void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(id)arg2;
- (void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(id)arg2;
- (void)credStorage_getInitialCredentialDictionariesWithReply:(id)arg1;
- (void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)dataTaskForRequest:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(id)arg3;
- (void)flushStorageWithCompletionHandler:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2 queue:(id)arg3;
- (void)invalidateSession:(BOOL)arg1 withQueue:(id)arg2 completion:(id)arg3;
- (void)recreateExistingTasks:(id)arg1;
- (id)requestWithCookiesApplied:(id)arg1;
- (void)resetStorageWithCompletionHandler:(id)arg1;
- (void)sendInvalidationRequest;
- (void)setAppWakeUUID:(id)arg1;
- (void)setCookiesFromResponse:(id)arg1 forOriginalRequest:(id)arg2;
- (void)setupBackgroundSession;
- (void)setupXPCConnection;
- (id)taskForIdentifier:(unsigned int)arg1;
- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;
- (void)wentToBackground:(id)arg1;

@end
