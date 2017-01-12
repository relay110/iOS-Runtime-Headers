/* Generated by RuntimeBrowser.
 */

@protocol WBSFormAutoFillFeedbackProcessor <NSObject>

@required

- (<WBSFormAutoFillFeedbackDomainPolicyProvider> *)domainPolicyProvider;
- (void)sendFeedbackWithCorrections:(NSDictionary *)arg1 forFingerprint:(NSString *)arg2 onDomain:(NSString *)arg3;
- (void)setDomainPolicyProvider:(id <WBSFormAutoFillFeedbackDomainPolicyProvider>)arg1;

@end