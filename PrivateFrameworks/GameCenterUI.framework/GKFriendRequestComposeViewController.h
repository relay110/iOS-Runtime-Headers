/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKFriendRequestComposeViewControllerDelegate>, GKComposeHostedViewController, NSString, UIAlertController;

@interface GKFriendRequestComposeViewController : UINavigationController {
    UIAlertController *_alertController;
    GKComposeHostedViewController *_composeController;
    <GKFriendRequestComposeViewControllerDelegate> *_composeViewDelegateWeak;
    NSString *_message;
    unsigned int _recipientCount;
}

@property(retain) UIAlertController * alertController;
@property(retain) GKComposeHostedViewController * composeController;
@property <GKFriendRequestComposeViewControllerDelegate> * composeViewDelegate;
@property(retain) NSString * message;
@property unsigned int recipientCount;
@property unsigned int rid;

+ (BOOL)_preventsAppearanceProxyCustomization;
+ (unsigned int)maxNumberOfRecipients;

- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (void)addRecipientPlayers:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (id)alertController;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)composeController;
- (id)composeViewDelegate;
- (void)dealloc;
- (id)init;
- (id)message;
- (BOOL)navigationBarHidden;
- (void)prepareForNewRecipients:(id)arg1;
- (unsigned int)recipientCount;
- (unsigned int)rid;
- (void)sendFinishedMessageToDelegateCancelled:(BOOL)arg1;
- (void)setAlertController:(id)arg1;
- (void)setComposeController:(id)arg1;
- (void)setComposeViewDelegate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRecipientCount:(unsigned int)arg1;
- (void)setRid:(unsigned int)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end