/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, ABHighlightingTextField;



@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate>
{
    ABHighlightingTextField *_textField;
    NSString *_previousValue;
}

@property(readonly) NSString *text;

+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;

- (BOOL)canHandleProperty:(NSInteger)arg1;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (BOOL)wantsLabelDivider;
- (id)viewForFirstResponder;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)setPropertyGroup:(id)arg1 andInfo:(id)arg2;
- (id)pickerView;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (void)reloadFromModel;
- (struct { id x1; NSUInteger x2; })suggestionsForString:(id)arg1 inputIndex:(NSUInteger)arg2;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (id)text;
- (void)dealloc;
- (void)reload;

@end