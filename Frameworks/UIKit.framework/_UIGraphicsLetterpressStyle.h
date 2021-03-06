/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    UIColor *bottomGradientColor;
    UIColor *embossHighlightColor;
    UIColor *embossShadowColor;
    float embossSize;
    float innerOpacity;
    int innerShadowBlendMode;
    float innerShadowBlur;
    UIColor *innerShadowColor;
    } innerShadowOffset;
    int outerShadowBlendMode;
    float outerShadowBlur;
    UIColor *outerShadowColor;
    } outerShadowOffset;
    UIColor *topGradientColor;
}

@property(retain) UIColor * bottomGradientColor;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property(retain) UIColor * embossHighlightColor;
@property(retain) UIColor * embossShadowColor;
@property float embossSize;
@property float innerOpacity;
@property int innerShadowBlendMode;
@property float innerShadowBlur;
@property(retain) UIColor * innerShadowColor;
@property struct CGPoint { float x1; float x2; } innerShadowOffset;
@property int outerShadowBlendMode;
@property float outerShadowBlur;
@property(retain) UIColor * outerShadowColor;
@property struct CGPoint { float x1; float x2; } outerShadowOffset;
@property(retain) UIColor * topGradientColor;

+ (id)defaultLetterpressStyle;
+ (id)old2xLetterpressStyle;

- (id)bottomGradientColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)embossHighlightColor;
- (id)embossShadowColor;
- (float)embossSize;
- (float)innerOpacity;
- (int)innerShadowBlendMode;
- (float)innerShadowBlur;
- (id)innerShadowColor;
- (struct CGPoint { float x1; float x2; })innerShadowOffset;
- (BOOL)isEqual:(id)arg1;
- (int)outerShadowBlendMode;
- (float)outerShadowBlur;
- (id)outerShadowColor;
- (struct CGPoint { float x1; float x2; })outerShadowOffset;
- (void)setBottomGradientColor:(id)arg1;
- (void)setEmbossHighlightColor:(id)arg1;
- (void)setEmbossShadowColor:(id)arg1;
- (void)setEmbossSize:(float)arg1;
- (void)setInnerOpacity:(float)arg1;
- (void)setInnerShadowBlendMode:(int)arg1;
- (void)setInnerShadowBlur:(float)arg1;
- (void)setInnerShadowColor:(id)arg1;
- (void)setInnerShadowOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setOuterShadowBlendMode:(int)arg1;
- (void)setOuterShadowBlur:(float)arg1;
- (void)setOuterShadowColor:(id)arg1;
- (void)setOuterShadowOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTopGradientColor:(id)arg1;
- (id)topGradientColor;

@end
