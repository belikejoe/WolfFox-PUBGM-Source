//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShadowTrackerExtra/NSCopying-Protocol.h>

@interface FramebufferDescriptor : NSObject <NSCopying>
{
    unsigned long long _sampleCount;
    unsigned long long _colorPixelFormat;
    unsigned long long _depthPixelFormat;
    unsigned long long _stencilPixelFormat;
}

@property(nonatomic) unsigned long long stencilPixelFormat; // @synthesize stencilPixelFormat=_stencilPixelFormat;
@property(nonatomic) unsigned long long depthPixelFormat; // @synthesize depthPixelFormat=_depthPixelFormat;
@property(nonatomic) unsigned long long colorPixelFormat; // @synthesize colorPixelFormat=_colorPixelFormat;
@property(nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRenderPassDescriptor:(id)arg1;

@end

