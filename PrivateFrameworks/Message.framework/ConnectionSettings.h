/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData, NSString;



@interface ConnectionSettings : NSObject 
{
    NSString *_hostname;
    NSString *_serviceName;
    NSUInteger _portNumber;
    NSData *_serverCertificateDigest;
    struct __CFString { } *_connectionServiceType;
    unsigned int _usesSSL : 1;
    unsigned int _tryDirectSSLConnection : 1;
}


- (void)dealloc;
- (id)hostname;
- (void)setHostname:(id)arg1;
- (id)serviceName;
- (void)setServiceName:(id)arg1;
- (NSUInteger)portNumber;
- (void)setPortNumber:(NSUInteger)arg1;
- (BOOL)usesSSL;
- (void)setUsesSSL:(BOOL)arg1;
- (BOOL)tryDirectSSL;
- (void)setTryDirectSSL:(BOOL)arg1;
- (struct __CFString { }*)connectionServiceType;
- (void)setConnectionServiceType:(struct __CFString { }*)arg1;
- (id)serverCertificateDigest;
- (void)setServerCertificateDigest:(id)arg1;
- (id)description;

@end