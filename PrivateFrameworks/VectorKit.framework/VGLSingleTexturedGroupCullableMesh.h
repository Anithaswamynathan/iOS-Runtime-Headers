/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLTexture;

@interface VGLSingleTexturedGroupCullableMesh : VGLGroupCullableMesh {
    VGLTexture *_texture;
}

@property(retain) VGLTexture * texture;

- (void)dealloc;
- (void)drawGroups:(const struct vector<unsigned int, vk_allocator<unsigned int> > { }*)arg1 context:(id)arg2;
- (void)drawInPreparedCulls:(id)arg1 excludeGroups:(const struct vector<unsigned int, vk_allocator<unsigned int> > { }*)arg2;
- (void)drawInPreparedCulls:(id)arg1;
- (void)drawInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 rectCount:(unsigned int)arg2 context:(id)arg3;
- (void)drawInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 rectCount:(unsigned int)arg2 excludeGroups:(const struct vector<unsigned int, vk_allocator<unsigned int> > { }*)arg3 context:(id)arg4;
- (void)setTexture:(id)arg1;
- (id)texture;

@end
