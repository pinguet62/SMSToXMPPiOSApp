/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSSet;

@interface CTCallCenter : NSObject
{
    void *_internal;
    NSSet *_currentCalls;
    id _callEventHandler;
}

- (BOOL)setUpServerConnection;
- (void)reestablishServerConnectionIfNeeded;
- (void)cleanUpServerConnectionNoLock;
- (void)cleanUpServerConnection;
- (id)init;
- (void)dealloc;
@property(copy, nonatomic) id callEventHandler;
- (BOOL)getCurrentCallSetFromServer:(id)arg1;
- (BOOL)calculateCallStateChanges:(id)arg1;
@property(retain) NSSet *currentCalls; // @dynamic currentCalls;
- (void)handleNotificationFromConnection:(void *)arg1 ofType:(const id)arg2 withInfo:(const id)arg3;
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1;
- (id)description;

@end

