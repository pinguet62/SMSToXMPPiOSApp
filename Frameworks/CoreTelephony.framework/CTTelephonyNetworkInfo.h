/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class CTCarrier;

@interface CTTelephonyNetworkInfo : NSObject
{
    void *_internal;
    CTCarrier *_subscriberCellularProvider;
    id _subscriberCellularProviderDidUpdateNotifier;
}

- (BOOL)setUpServerConnection;
- (void)reestablishServerConnectionIfNeeded;
- (void)cleanUpServerConnectionNoLock;
- (void)cleanUpServerConnection;
- (id)init;
- (void)dealloc;
@property(copy, nonatomic) id subscriberCellularProviderDidUpdateNotifier;
- (BOOL)getCarrierName:(id)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;
- (BOOL)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 withCTError:(CDStruct_1ef3fb1f *)arg3;
- (BOOL)getMobileNetworkCode:(id)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;
- (BOOL)getAllowsVOIP:(char *)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;
- (BOOL)updateNetworkInfoAndShouldNotifyClient:(char *)arg1;
- (void)handleNotificationFromConnection:(void *)arg1 ofType:(const id)arg2 withInfo:(const id)arg3;
- (void)postUpdatesIfNecessary;
@property(retain) CTCarrier *subscriberCellularProvider; // @synthesize subscriberCellularProvider=_subscriberCellularProvider;

@end
