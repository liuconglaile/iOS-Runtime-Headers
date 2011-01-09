/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMPixelPoint : PBCodable 
{
    NSInteger _pixelX;
    NSInteger _pixelY;
    NSInteger _zoomLevel;
}

@property NSInteger zoomLevel;
@property NSInteger pixelY;
@property NSInteger pixelX;


- (id)init;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (NSInteger)zoomLevel;
- (void)setZoomLevel:(NSInteger)arg1;
- (NSInteger)pixelY;
- (void)setPixelY:(NSInteger)arg1;
- (NSInteger)pixelX;
- (void)setPixelX:(NSInteger)arg1;

@end