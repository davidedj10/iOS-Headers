/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartAnimationClip.h>

// Not exported
@interface TSCH3DChartGrowAnimationClip : TSCH3DChartAnimationClip
{
}

- (_Bool)willRenderElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2 context:(id)arg3;
- (_Bool)willUpdateElementEffectsStatesForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2 context:(id)arg3;
- (_Bool)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 context:(id)arg4;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 *)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4 context:(id)arg5;
- (void)didAddToAnimationClipsWithSceneObject:(id)arg1 scene:(id)arg2 animation:(id)arg3;
- (void)p_compileGeometryForSceneObject:(id)arg1 scene:(id)arg2 animation:(id)arg3;
- (Class)animationDataClass;
- (void)p_applyRepresentativeVertexForInfo:(const struct RenderElementInfo *)arg1;
- (void)enableBlendingForProcessor:(id)arg1 enableDepth:(_Bool)arg2;
- (int)renderMethodPoint;

@end

