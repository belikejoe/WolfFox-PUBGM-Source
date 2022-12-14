//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface PUBGInfoStringTools : NSObject
{
    NSMutableArray *_numberArr;
    NSMutableArray *_discArr;
    NSMutableDictionary *_nameInfo;
}

+ (id)tools;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *nameInfo; // @synthesize nameInfo=_nameInfo;
@property(retain, nonatomic) NSMutableArray *discArr; // @synthesize discArr=_discArr;
@property(retain, nonatomic) NSMutableArray *numberArr; // @synthesize numberArr=_numberArr;
- (id)distanceStringWithDistance:(int)arg1;
- (id)nameWithName:(id)arg1;
- (id)nameWithAIName:(id)arg1;
- (id)nameStringForNumber:(unsigned long long)arg1;
- (id)init;

@end

