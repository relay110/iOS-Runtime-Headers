/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString, NSMutableDictionary;

@interface DKMessage : NSObject {
    NSMutableDictionary *_info;
    NSString *_name;
    NSMutableDictionary *_replyInfo;
    void *_x_reply;
    struct _xpc_connection_s { } *_x_reply_connection;
}

@property(readonly) NSString * name;

- (void).cxx_destruct;
- (void*)_createXPCMessage;
- (id)_initWithXPCMessage:(void*)arg1;
- (void)dealloc;
- (id)description;
- (id)errorFromInfo;
- (id)infoValueForKey:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)isErrorMessage;
- (id)name;
- (BOOL)needsReply;
- (void)sendReply;
- (void)setInfoValue:(id)arg1 forKey:(id)arg2;
- (void)setInfoWithError:(id)arg1;
- (void)setReplyValue:(id)arg1 forKey:(id)arg2;
- (void)setReplyWithError:(id)arg1;

@end