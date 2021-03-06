/* Generated by RuntimeBrowser.
 */

@protocol SubCalURLRequestDelegate <NSObject>

@required

- (void)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 forSubCalURLRequest:(SubCalURLRequest *)arg2;
- (void)subCalURLRequest:(SubCalURLRequest *)arg1 finishedWithData:(NSData *)arg2 error:(NSError *)arg3;

@optional

- (void)subCalURLRequest:(SubCalURLRequest *)arg1 didRedirectToURL:(NSURL *)arg2;
- (void)subCalURLRequest:(SubCalURLRequest *)arg1 updatedData:(NSData *)arg2;
- (void)subCalURLRequestNeedsUsernameAndPasswordForHost:(void *)arg1 continuation:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, void*

@end
