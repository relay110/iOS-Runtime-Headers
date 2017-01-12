/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSimpleDataEntryPlainTextCell : UITableViewCell <HKSimpleDataEntryCellType, UITextFieldDelegate> {
    NSNumber * _characterCountLimit;
    <HKSimpleDataEntryCellDelegate> * _delegate;
    BOOL  _editDisabled;
    UIView * _horizontalSeparator;
    HKCaretOptionalTextField * _inputTextField;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSimpleDataEntryCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editDisabled;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HKCaretOptionalTextField *inputTextField;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_setupFonts;
- (void)_setupInputTextFieldWithIntention:(int)arg1;
- (void)_setupLayoutConstraints;
- (id)delegate;
- (BOOL)editDisabled;
- (id)initWithIntention:(int)arg1 reuseIdentifier:(id)arg2;
- (id)inputTextField;
- (void)setDelegate:(id)arg1;
- (void)setEditDisabled:(BOOL)arg1;
- (void)setInputTextField:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChangeValue:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)titleLabel;
- (void)toggleMissingState:(BOOL)arg1 forKey:(id)arg2;

@end