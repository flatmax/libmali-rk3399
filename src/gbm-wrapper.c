/*
 ============================================================================
 Name        : gbm-wrapper.c
 Author      : Heiher <r@hev.cc>
 Copyright   : Copyright (c) 2019 everyone.
 Description : GBM Wrapper
 ============================================================================
 */

#include <gbm.h>
#include <drm_fourcc.h>
#include <stdio.h>

union gbm_bo_handle
gbm_bo_get_handle_for_plane (struct gbm_bo *bo, int plane)
{
    printf("WARNING : dummy call to gbm_bo_get_handle_for_plane\n");
    return gbm_bo_get_handle (bo);
}

uint64_t
gbm_bo_get_modifier (struct gbm_bo *bo)
{
    printf("WARNING : dummy call to gbm_bo_get_modifier\n");
    return DRM_FORMAT_MOD_INVALID;
}

uint32_t
gbm_bo_get_offset (struct gbm_bo *bo, int plane)
{
    printf("WARNING : dummy call to gbm_bo_get_offset\n");
    return 0;
}

int
gbm_bo_get_plane_count (struct gbm_bo *bo)
{
    printf("WARNING : dummy call to gbm_bo_get_plane_count\n");
    return 1;
}

uint32_t
gbm_bo_get_stride_for_plane (struct gbm_bo *bo, int plane)
{
    printf("WARNING : dummy call to gbm_bo_get_stride_for_plane\n");
    return gbm_bo_get_stride (bo);
}

struct gbm_surface *
gbm_surface_create_with_modifiers (struct gbm_device *gbm, uint32_t width,
                                   uint32_t height, uint32_t format,
                                   const uint64_t *modifiers,
                                   const unsigned int count)
{
    printf("WARNING : dummy call to gbm_surface_create_with_modifiers\n");
    return gbm_surface_create (gbm, width, height, format, 0);
}
