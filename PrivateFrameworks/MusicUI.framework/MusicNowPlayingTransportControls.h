/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicNowPlayingTransportControls : MPTransportControls {
}

+ (BOOL)buttonImagesUseBackgroundImage;
+ (int)buttonType;
+ (unsigned long long)defaultVisibleParts;

- (void)_avItemStoreIDDidChangeNotification:(id)arg1;
- (void)_registerForAVItemNotifications;
- (void)_unregisterForAVItemNotifications;
- (void)_updateItemRelatedParts;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)newButtonForPart:(unsigned long long)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (void)setItem:(id)arg1;
- (id)tintColorForPart:(unsigned long long)arg1;
- (BOOL)usesTintColorForControls;

@end
