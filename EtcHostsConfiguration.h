//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShadowTrackerExtra/EtcHostsConfiguration-Protocol.h>

@class NSMutableDictionary;

@interface EtcHostsConfiguration : NSObject <EtcHostsConfiguration>
{
    NSMutableDictionary *_mutableIPAddressesByHostName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mutableIPAddressesByHostName; // @synthesize mutableIPAddressesByHostName=_mutableIPAddressesByHostName;
- (void)resolveHostName:(id)arg1 toIPAddress:(id)arg2;
- (id)IPAddressForHostName:(id)arg1;
- (id)init;

@end

