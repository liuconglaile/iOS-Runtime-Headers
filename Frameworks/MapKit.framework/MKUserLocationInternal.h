/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, MKUserLocationSearchResult, NSString;



@interface MKUserLocationInternal : NSObject 
{
    CLLocation *location;
    CLLocation *fixedLocation;
    CLLocation *predictedLocation;
    NSString *title;
    NSString *subtitle;
    MKUserLocationSearchResult *searchResult;
    NSInteger source;
    double timestamp;
    BOOL updating;
}

@property(retain) NSString *subtitle;
@property(retain) NSString *title;
@property double timestamp;
@property NSInteger source;
@property(retain) MKUserLocationSearchResult *searchResult;
@property(retain) CLLocation *predictedLocation;
@property(retain) CLLocation *location;
@property(retain) CLLocation *fixedLocation;
@property(getter=isUpdating) BOOL updating;


- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (NSInteger)source;
- (void)setSource:(NSInteger)arg1;
- (id)searchResult;
- (void)setSearchResult:(id)arg1;
- (id)predictedLocation;
- (void)setPredictedLocation:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)fixedLocation;
- (void)setFixedLocation:(id)arg1;
- (BOOL)isUpdating;
- (void)setUpdating:(BOOL)arg1;

@end