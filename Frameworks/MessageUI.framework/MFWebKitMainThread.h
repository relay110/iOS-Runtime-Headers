/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSLock;

@interface MFWebKitMainThread : NSObject {
    struct __CFDictionary { } *_visibleDict;
    NSLock *_visibleDictLock;
}

+ (id)sharedInstance;

- (void)_mainThreadPopulateDictForMimeType:(id)arg1;
- (void)dealloc;
- (int)dictValueForMimeType:(id)arg1;
- (id)init;

@end