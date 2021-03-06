/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface WDFont : NSObject <NSCopying> {
    int mCharacterSet;
    int mFontFamily;
    NSString *mName;
    int mPitch;
    NSString *mSecondName;
}

- (int)characterSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)fontFamily;
- (unsigned long)hash;
- (id)init;
- (id)initWithName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (int)pitch;
- (id)secondName;
- (void)setCharacterSet:(int)arg1;
- (void)setFontFamily:(int)arg1;
- (void)setName:(id)arg1;
- (void)setPitch:(int)arg1;
- (void)setSecondName:(id)arg1;

@end
