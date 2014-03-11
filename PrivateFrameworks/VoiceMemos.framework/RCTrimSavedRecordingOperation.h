/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class RCSavedRecording;

@interface RCTrimSavedRecordingOperation : RCTrimAudioFileOperation {
    RCSavedRecording *_destinationRecording;
    RCSavedRecording *_sourceRecording;
}

@property(readonly) RCSavedRecording * destinationRecording;
@property(readonly) RCSavedRecording * sourceRecording;

- (void).cxx_destruct;
- (id)destinationRecording;
- (id)initWithSourceRecording:(id)arg1 destinationRecording:(id)arg2 timeRangeToKeep:(struct { double x1; double x2; })arg3;
- (void)main;
- (id)sourceRecording;

@end