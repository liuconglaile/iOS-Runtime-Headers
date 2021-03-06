/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDProtobufMMCS.dylib
 */

@class NSMutableArray, NSString;

@interface AWDMMCSChunkingInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int byteCount : 1; 
        unsigned int chunkCount : 1; 
        unsigned int duration : 1; 
        unsigned int startTime : 1; 
        unsigned int errorCode : 1; 
        unsigned int cancelled : 1; 
    long long _byteCount;
    BOOL _cancelled;
    long long _chunkCount;
    NSMutableArray *_chunkingErrors;
    long long _duration;
    int _errorCode;
    NSString *_errorDomain;
    } _has;
    long long _startTime;
}

@property long long byteCount;
@property BOOL cancelled;
@property long long chunkCount;
@property(retain) NSMutableArray * chunkingErrors;
@property long long duration;
@property int errorCode;
@property(retain) NSString * errorDomain;
@property BOOL hasByteCount;
@property BOOL hasCancelled;
@property BOOL hasChunkCount;
@property BOOL hasDuration;
@property BOOL hasErrorCode;
@property(readonly) BOOL hasErrorDomain;
@property BOOL hasStartTime;
@property long long startTime;

- (void)addChunkingError:(id)arg1;
- (long long)byteCount;
- (BOOL)cancelled;
- (long long)chunkCount;
- (id)chunkingErrorAtIndex:(unsigned int)arg1;
- (id)chunkingErrors;
- (unsigned int)chunkingErrorsCount;
- (void)clearChunkingErrors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (int)errorCode;
- (id)errorDomain;
- (BOOL)hasByteCount;
- (BOOL)hasCancelled;
- (BOOL)hasChunkCount;
- (BOOL)hasDuration;
- (BOOL)hasErrorCode;
- (BOOL)hasErrorDomain;
- (BOOL)hasStartTime;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setByteCount:(long long)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setChunkCount:(long long)arg1;
- (void)setChunkingErrors:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasByteCount:(BOOL)arg1;
- (void)setHasCancelled:(BOOL)arg1;
- (void)setHasChunkCount:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setStartTime:(long long)arg1;
- (long long)startTime;
- (void)writeTo:(id)arg1;

@end
