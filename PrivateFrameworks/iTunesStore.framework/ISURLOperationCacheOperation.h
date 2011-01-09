/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray, ISURLOperation, ISURLOperationCache;



@interface ISURLOperationCacheOperation : ISOperation <ISURLOperationDelegate>
{
    NSMutableArray *_additionalOperations;
    ISURLOperationCache *_cache;
    ISURLOperation *_operation;
}

@property(retain) ISURLOperation *operation;
@property ISURLOperationCache *cache;


- (void)dealloc;
- (void)addAdditionalOperation:(id)arg1;
- (void)run;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)operation;
- (void)setOperation:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;

@end