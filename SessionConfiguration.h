//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SessionConfiguration : NSObject
{
    _Bool _isSwizzle;
}

+ (id)defaultConfiguration;
@property(nonatomic) _Bool isSwizzle; // @synthesize isSwizzle=_isSwizzle;
- (id)protocolClasses;
- (void)swizzleSelector:(SEL)arg1 fromClass:(Class)arg2 toClass:(Class)arg3;
- (void)unload;
- (void)load;
- (id)init;

@end

