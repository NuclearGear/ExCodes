//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

@interface SwipeDeleteView : NSView
{
    int _state;
    CDUnknownBlockType _onSwipeDetected;
    CDUnknownBlockType _onSwipeCanceled;
    NSColor *_backgroundColor;
}

@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) CDUnknownBlockType onSwipeCanceled; // @synthesize onSwipeCanceled=_onSwipeCanceled;
@property(copy, nonatomic) CDUnknownBlockType onSwipeDetected; // @synthesize onSwipeDetected=_onSwipeDetected;
- (void).cxx_destruct;
- (void)fireWithDirection:(int)arg1;
- (void)superScrollWheel:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)updateWithEvent:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillStartLiveResize;
- (id)init;

@end
