/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUPayloadEncryption : NSObject {
    BOOL  _haveKey;
    unsigned char  _key;
    BOOL  _keyInitialized;
}

+ (id)sharedInstance;

- (id)decryptData:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)init;
- (void)initializeKey;

@end
