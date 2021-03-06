/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;

@interface GKMatchRequest : NSObject  {
    unsigned int _minPlayers;
    unsigned int _maxPlayers;
    unsigned int _playerGroup;
    unsigned int _playerAttributes;
    BOOL _attributesSet;
    NSArray *_playersToInvite;
}

@property(retain) NSArray * playersToInvite;
@property BOOL attributesSet;
@property unsigned int playerAttributes;
@property unsigned int playerGroup;
@property unsigned int maxPlayers;
@property unsigned int minPlayers;


- (unsigned int)maxPlayers;
- (void)setMinPlayers:(unsigned int)arg1;
- (void)setPlayersToInvite:(id)arg1;
- (id)playersToInvite;
- (BOOL)attributesSet;
- (BOOL)isValidForHosted:(BOOL)arg1;
- (void)setPlayerAttributes:(unsigned int)arg1;
- (void)setAttributesSet:(BOOL)arg1;
- (unsigned int)playerAttributes;
- (unsigned int)playerGroup;
- (void)setPlayerGroup:(unsigned int)arg1;
- (void)setMaxPlayers:(unsigned int)arg1;
- (unsigned int)minPlayers;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
