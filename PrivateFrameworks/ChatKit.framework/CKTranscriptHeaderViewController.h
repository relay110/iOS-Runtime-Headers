/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKConversation;

@interface CKTranscriptHeaderViewController : UIViewController {
    CKConversation *_conversation;
    BOOL _shouldInvalidateOnAddressBookChange;
}

@property(retain) CKConversation * conversation;
@property(readonly) BOOL shouldInvalidateOnAddressBookChange;

- (id)conversation;
- (void)dealloc;
- (id)initWithConversation:(id)arg1;
- (void)setConversation:(id)arg1;
- (BOOL)shouldInvalidateOnAddressBookChange;

@end