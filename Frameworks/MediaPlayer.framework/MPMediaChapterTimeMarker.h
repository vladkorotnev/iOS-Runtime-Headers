/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker  {
    unsigned int _chapterIndex;
    NSArray *_chapters;
    BOOL _triedToLoadThumbnail;
}

@property(retain) NSArray * chapters;
@property unsigned int chapterIndex;


- (void)dealloc;
- (void)setChapters:(id)arg1;
- (unsigned int)chapterIndex;
- (void)setChapterIndex:(unsigned int)arg1;
- (id)chapters;
- (id)thumbnail;

@end
