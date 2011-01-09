/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */



@interface GKGameMatchFlowRateRequest : GKDataRequest 
{
    NSUInteger _activity;
}

@property NSUInteger activity;


- (id)key;
- (id)cacheKey;
- (void)setActivity:(NSUInteger)arg1;
- (NSInteger)cachePriority;
- (NSInteger)cacheType;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (NSUInteger)activity;

@end