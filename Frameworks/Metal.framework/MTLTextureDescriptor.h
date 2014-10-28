/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLTextureDescriptor : NSObject <NSCopying> {
    struct MTLTextureDescriptorPrivate { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; BOOL x9; unsigned int x10; unsigned int x11; BOOL x12; BOOL x13; } *_private;
}

@property unsigned int arrayLength;
@property unsigned int depth;
@property unsigned int height;
@property unsigned int mipmapLevelCount;
@property unsigned int pixelFormat;
@property unsigned int resourceOptions;
@property unsigned int sampleCount;
@property unsigned int textureType;
@property unsigned int width;

+ (id)texture2DDescriptorWithPixelFormat:(unsigned int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 mipmapped:(BOOL)arg4;
+ (id)textureCubeDescriptorWithPixelFormat:(unsigned int)arg1 size:(unsigned int)arg2 mipmapped:(BOOL)arg3;

- (unsigned int)arrayLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)depth;
- (id)description;
- (const struct MTLTextureDescriptorPrivate { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; BOOL x9; unsigned int x10; unsigned int x11; BOOL x12; BOOL x13; }*)descriptorPrivate;
- (BOOL)framebufferOnly;
- (unsigned int)height;
- (id)init;
- (BOOL)isDrawable;
- (unsigned int)mipmapLevelCount;
- (unsigned int)pixelFormat;
- (unsigned int)resourceOptions;
- (unsigned int)rotation;
- (unsigned int)sampleCount;
- (void)setArrayLength:(unsigned int)arg1;
- (void)setDepth:(unsigned int)arg1;
- (void)setFramebufferOnly:(BOOL)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setIsDrawable:(BOOL)arg1;
- (void)setMipmapLevelCount:(unsigned int)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setResourceOptions:(unsigned int)arg1;
- (void)setRotation:(unsigned int)arg1;
- (void)setSampleCount:(unsigned int)arg1;
- (void)setTextureType:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)textureType;
- (BOOL)validate;
- (unsigned int)width;

@end