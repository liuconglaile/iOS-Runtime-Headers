/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, UIView, UITextLabel;



@interface MPVideoBackgroundView : UIView 
{
    NSInteger _orientation;
    UIImageView *_imageView;
    UIImageView *_iconView;
    UIImageView *_customBackgroundImageView;
    UIImageView *_backgroundPlaceholderImageView;
    UITextLabel *_infoTitle;
    UITextLabel *_infoSubTitle;
    UIView *_hackView;
}

@property(retain) UIImage *backgroundPlaceholderImage;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setOrientation:(NSInteger)arg1;
- (void)setShowQTAudioOnlyUI:(BOOL)arg1;
- (void)_createInformationalTitleView:(id*)arg1 systemFont:(id)arg2 lineBreakMode:(NSInteger)arg3;
- (void)setInformationalTitle:(id)arg1 infoSubTitle:(id)arg2;
- (void)layoutForCurrentOrientation;
- (BOOL)shouldShowInformationalTextForOrientation:(NSInteger)arg1;
- (void)setInformationalTextShown:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setCustomBackgroundImage:(id)arg1;
- (void)setBackgroundPlaceholderImage:(id)arg1;
- (id)backgroundPlaceholderImage;

@end