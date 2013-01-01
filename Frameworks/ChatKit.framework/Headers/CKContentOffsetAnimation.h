/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIAnimation.h>
#import "ChatKit-Structs.h"


@interface CKContentOffsetAnimation : UIAnimation {
	CGPoint _startContentOffset;
	CGPoint _endContentOffset;
}
-(void)setProgress:(float)progress;
-(void)setStartContentOffset:(CGPoint)offset;
-(void)setEndContentOffset:(CGPoint)offset;
-(CGPoint)endContentOffset;
@end

