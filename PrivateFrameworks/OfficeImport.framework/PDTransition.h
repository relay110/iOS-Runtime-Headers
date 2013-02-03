/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDTransitionOptions;

@interface PDTransition : OADProperties {
    int mAdvanceAfterTime;
    BOOL mHasAdvanceAfterTime;
    BOOL mHasAdvanceOnClick;
    BOOL mHasSpeed;
    BOOL mHasType;
    BOOL mIsAdvanceOnClick;
    PDTransitionOptions *mOptions;
    int mSpeed;
    int mType;
}

- (int)advanceAfterTime;
- (void)dealloc;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasSpeed;
- (BOOL)hasTransitionOptions;
- (BOOL)hasType;
- (id)init;
- (BOOL)isAdvanceOnClick;
- (id)options;
- (void)setAdvanceAfterTime:(int)arg1;
- (void)setIsAdvanceOnClick:(BOOL)arg1;
- (void)setOptions:(id)arg1;
- (void)setSpeed:(int)arg1;
- (void)setType:(int)arg1;
- (int)speed;
- (int)type;

@end