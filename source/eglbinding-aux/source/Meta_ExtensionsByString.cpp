
#include "Meta_Maps.h"

#include <eglbinding/egl/extension.h>


using namespace egl;


namespace eglbinding { namespace aux
{


const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_0{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_A =
{
    { "EGL_ANDROID_GLES_layers", EGLextension::EGL_ANDROID_GLES_layers },
    { "EGL_ANDROID_blob_cache", EGLextension::EGL_ANDROID_blob_cache },
    { "EGL_ANDROID_create_native_client_buffer", EGLextension::EGL_ANDROID_create_native_client_buffer },
    { "EGL_ANDROID_framebuffer_target", EGLextension::EGL_ANDROID_framebuffer_target },
    { "EGL_ANDROID_front_buffer_auto_refresh", EGLextension::EGL_ANDROID_front_buffer_auto_refresh },
    { "EGL_ANDROID_get_frame_timestamps", EGLextension::EGL_ANDROID_get_frame_timestamps },
    { "EGL_ANDROID_get_native_client_buffer", EGLextension::EGL_ANDROID_get_native_client_buffer },
    { "EGL_ANDROID_image_native_buffer", EGLextension::EGL_ANDROID_image_native_buffer },
    { "EGL_ANDROID_native_fence_sync", EGLextension::EGL_ANDROID_native_fence_sync },
    { "EGL_ANDROID_presentation_time", EGLextension::EGL_ANDROID_presentation_time },
    { "EGL_ANDROID_recordable", EGLextension::EGL_ANDROID_recordable },
    { "EGL_ANGLE_d3d_share_handle_client_buffer", EGLextension::EGL_ANGLE_d3d_share_handle_client_buffer },
    { "EGL_ANGLE_device_d3d", EGLextension::EGL_ANGLE_device_d3d },
    { "EGL_ANGLE_query_surface_pointer", EGLextension::EGL_ANGLE_query_surface_pointer },
    { "EGL_ANGLE_surface_d3d_texture_2d_share_handle", EGLextension::EGL_ANGLE_surface_d3d_texture_2d_share_handle },
    { "EGL_ANGLE_window_fixed_size", EGLextension::EGL_ANGLE_window_fixed_size },
    { "EGL_ARM_implicit_external_sync", EGLextension::EGL_ARM_implicit_external_sync },
    { "EGL_ARM_pixmap_multisample_discard", EGLextension::EGL_ARM_pixmap_multisample_discard }
};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_B{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_C{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_D{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_E =
{
    { "EGL_EXT_bind_to_front", EGLextension::EGL_EXT_bind_to_front },
    { "EGL_EXT_buffer_age", EGLextension::EGL_EXT_buffer_age },
    { "EGL_EXT_client_extensions", EGLextension::EGL_EXT_client_extensions },
    { "EGL_EXT_client_sync", EGLextension::EGL_EXT_client_sync },
    { "EGL_EXT_compositor", EGLextension::EGL_EXT_compositor },
    { "EGL_EXT_create_context_robustness", EGLextension::EGL_EXT_create_context_robustness },
    { "EGL_EXT_device_base", EGLextension::EGL_EXT_device_base },
    { "EGL_EXT_device_drm", EGLextension::EGL_EXT_device_drm },
    { "EGL_EXT_device_enumeration", EGLextension::EGL_EXT_device_enumeration },
    { "EGL_EXT_device_openwf", EGLextension::EGL_EXT_device_openwf },
    { "EGL_EXT_device_query", EGLextension::EGL_EXT_device_query },
    { "EGL_EXT_gl_colorspace_bt2020_linear", EGLextension::EGL_EXT_gl_colorspace_bt2020_linear },
    { "EGL_EXT_gl_colorspace_bt2020_pq", EGLextension::EGL_EXT_gl_colorspace_bt2020_pq },
    { "EGL_EXT_gl_colorspace_display_p3", EGLextension::EGL_EXT_gl_colorspace_display_p3 },
    { "EGL_EXT_gl_colorspace_display_p3_linear", EGLextension::EGL_EXT_gl_colorspace_display_p3_linear },
    { "EGL_EXT_gl_colorspace_display_p3_passthrough", EGLextension::EGL_EXT_gl_colorspace_display_p3_passthrough },
    { "EGL_EXT_gl_colorspace_scrgb", EGLextension::EGL_EXT_gl_colorspace_scrgb },
    { "EGL_EXT_gl_colorspace_scrgb_linear", EGLextension::EGL_EXT_gl_colorspace_scrgb_linear },
    { "EGL_EXT_image_dma_buf_import", EGLextension::EGL_EXT_image_dma_buf_import },
    { "EGL_EXT_image_dma_buf_import_modifiers", EGLextension::EGL_EXT_image_dma_buf_import_modifiers },
    { "EGL_EXT_image_gl_colorspace", EGLextension::EGL_EXT_image_gl_colorspace },
    { "EGL_EXT_image_implicit_sync_control", EGLextension::EGL_EXT_image_implicit_sync_control },
    { "EGL_EXT_multiview_window", EGLextension::EGL_EXT_multiview_window },
    { "EGL_EXT_output_base", EGLextension::EGL_EXT_output_base },
    { "EGL_EXT_output_drm", EGLextension::EGL_EXT_output_drm },
    { "EGL_EXT_output_openwf", EGLextension::EGL_EXT_output_openwf },
    { "EGL_EXT_pixel_format_float", EGLextension::EGL_EXT_pixel_format_float },
    { "EGL_EXT_platform_base", EGLextension::EGL_EXT_platform_base },
    { "EGL_EXT_platform_device", EGLextension::EGL_EXT_platform_device },
    { "EGL_EXT_platform_wayland", EGLextension::EGL_EXT_platform_wayland },
    { "EGL_EXT_platform_x11", EGLextension::EGL_EXT_platform_x11 },
    { "EGL_EXT_protected_content", EGLextension::EGL_EXT_protected_content },
    { "EGL_EXT_protected_surface", EGLextension::EGL_EXT_protected_surface },
    { "EGL_EXT_stream_consumer_egloutput", EGLextension::EGL_EXT_stream_consumer_egloutput },
    { "EGL_EXT_surface_CTA861_3_metadata", EGLextension::EGL_EXT_surface_CTA861_3_metadata },
    { "EGL_EXT_surface_SMPTE2086_metadata", EGLextension::EGL_EXT_surface_SMPTE2086_metadata },
    { "EGL_EXT_swap_buffers_with_damage", EGLextension::EGL_EXT_swap_buffers_with_damage },
    { "EGL_EXT_sync_reuse", EGLextension::EGL_EXT_sync_reuse },
    { "EGL_EXT_yuv_surface", EGLextension::EGL_EXT_yuv_surface }
};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_F{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_G{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_H =
{
    { "EGL_HI_clientpixmap", EGLextension::EGL_HI_clientpixmap },
    { "EGL_HI_colorformats", EGLextension::EGL_HI_colorformats }
};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_I =
{
    { "EGL_IMG_context_priority", EGLextension::EGL_IMG_context_priority },
    { "EGL_IMG_image_plane_attribs", EGLextension::EGL_IMG_image_plane_attribs }
};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_J{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_K =
{
    { "EGL_KHR_cl_event", EGLextension::EGL_KHR_cl_event },
    { "EGL_KHR_cl_event2", EGLextension::EGL_KHR_cl_event2 },
    { "EGL_KHR_client_get_all_proc_addresses", EGLextension::EGL_KHR_client_get_all_proc_addresses },
    { "EGL_KHR_config_attribs", EGLextension::EGL_KHR_config_attribs },
    { "EGL_KHR_context_flush_control", EGLextension::EGL_KHR_context_flush_control },
    { "EGL_KHR_create_context", EGLextension::EGL_KHR_create_context },
    { "EGL_KHR_create_context_no_error", EGLextension::EGL_KHR_create_context_no_error },
    { "EGL_KHR_debug", EGLextension::EGL_KHR_debug },
    { "EGL_KHR_display_reference", EGLextension::EGL_KHR_display_reference },
    { "EGL_KHR_fence_sync", EGLextension::EGL_KHR_fence_sync },
    { "EGL_KHR_get_all_proc_addresses", EGLextension::EGL_KHR_get_all_proc_addresses },
    { "EGL_KHR_gl_colorspace", EGLextension::EGL_KHR_gl_colorspace },
    { "EGL_KHR_gl_renderbuffer_image", EGLextension::EGL_KHR_gl_renderbuffer_image },
    { "EGL_KHR_gl_texture_2D_image", EGLextension::EGL_KHR_gl_texture_2D_image },
    { "EGL_KHR_gl_texture_3D_image", EGLextension::EGL_KHR_gl_texture_3D_image },
    { "EGL_KHR_gl_texture_cubemap_image", EGLextension::EGL_KHR_gl_texture_cubemap_image },
    { "EGL_KHR_image", EGLextension::EGL_KHR_image },
    { "EGL_KHR_image_base", EGLextension::EGL_KHR_image_base },
    { "EGL_KHR_image_pixmap", EGLextension::EGL_KHR_image_pixmap },
    { "EGL_KHR_lock_surface", EGLextension::EGL_KHR_lock_surface },
    { "EGL_KHR_lock_surface2", EGLextension::EGL_KHR_lock_surface2 },
    { "EGL_KHR_lock_surface3", EGLextension::EGL_KHR_lock_surface3 },
    { "EGL_KHR_mutable_render_buffer", EGLextension::EGL_KHR_mutable_render_buffer },
    { "EGL_KHR_no_config_context", EGLextension::EGL_KHR_no_config_context },
    { "EGL_KHR_partial_update", EGLextension::EGL_KHR_partial_update },
    { "EGL_KHR_platform_android", EGLextension::EGL_KHR_platform_android },
    { "EGL_KHR_platform_gbm", EGLextension::EGL_KHR_platform_gbm },
    { "EGL_KHR_platform_wayland", EGLextension::EGL_KHR_platform_wayland },
    { "EGL_KHR_platform_x11", EGLextension::EGL_KHR_platform_x11 },
    { "EGL_KHR_reusable_sync", EGLextension::EGL_KHR_reusable_sync },
    { "EGL_KHR_stream", EGLextension::EGL_KHR_stream },
    { "EGL_KHR_stream_attrib", EGLextension::EGL_KHR_stream_attrib },
    { "EGL_KHR_stream_consumer_gltexture", EGLextension::EGL_KHR_stream_consumer_gltexture },
    { "EGL_KHR_stream_cross_process_fd", EGLextension::EGL_KHR_stream_cross_process_fd },
    { "EGL_KHR_stream_fifo", EGLextension::EGL_KHR_stream_fifo },
    { "EGL_KHR_stream_producer_aldatalocator", EGLextension::EGL_KHR_stream_producer_aldatalocator },
    { "EGL_KHR_stream_producer_eglsurface", EGLextension::EGL_KHR_stream_producer_eglsurface },
    { "EGL_KHR_surfaceless_context", EGLextension::EGL_KHR_surfaceless_context },
    { "EGL_KHR_swap_buffers_with_damage", EGLextension::EGL_KHR_swap_buffers_with_damage },
    { "EGL_KHR_vg_parent_image", EGLextension::EGL_KHR_vg_parent_image },
    { "EGL_KHR_wait_sync", EGLextension::EGL_KHR_wait_sync }
};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_L{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_M =
{
    { "EGL_MESA_drm_image", EGLextension::EGL_MESA_drm_image },
    { "EGL_MESA_image_dma_buf_export", EGLextension::EGL_MESA_image_dma_buf_export },
    { "EGL_MESA_platform_gbm", EGLextension::EGL_MESA_platform_gbm },
    { "EGL_MESA_platform_surfaceless", EGLextension::EGL_MESA_platform_surfaceless },
    { "EGL_MESA_query_driver", EGLextension::EGL_MESA_query_driver }
};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_N =
{
    { "EGL_NOK_swap_region", EGLextension::EGL_NOK_swap_region },
    { "EGL_NOK_swap_region2", EGLextension::EGL_NOK_swap_region2 },
    { "EGL_NOK_texture_from_pixmap", EGLextension::EGL_NOK_texture_from_pixmap },
    { "EGL_NV_3dvision_surface", EGLextension::EGL_NV_3dvision_surface },
    { "EGL_NV_context_priority_realtime", EGLextension::EGL_NV_context_priority_realtime },
    { "EGL_NV_coverage_sample", EGLextension::EGL_NV_coverage_sample },
    { "EGL_NV_coverage_sample_resolve", EGLextension::EGL_NV_coverage_sample_resolve },
    { "EGL_NV_cuda_event", EGLextension::EGL_NV_cuda_event },
    { "EGL_NV_depth_nonlinear", EGLextension::EGL_NV_depth_nonlinear },
    { "EGL_NV_device_cuda", EGLextension::EGL_NV_device_cuda },
    { "EGL_NV_native_query", EGLextension::EGL_NV_native_query },
    { "EGL_NV_post_convert_rounding", EGLextension::EGL_NV_post_convert_rounding },
    { "EGL_NV_post_sub_buffer", EGLextension::EGL_NV_post_sub_buffer },
    { "EGL_NV_quadruple_buffer", EGLextension::EGL_NV_quadruple_buffer },
    { "EGL_NV_robustness_video_memory_purge", EGLextension::EGL_NV_robustness_video_memory_purge },
    { "EGL_NV_stream_consumer_gltexture_yuv", EGLextension::EGL_NV_stream_consumer_gltexture_yuv },
    { "EGL_NV_stream_cross_display", EGLextension::EGL_NV_stream_cross_display },
    { "EGL_NV_stream_cross_object", EGLextension::EGL_NV_stream_cross_object },
    { "EGL_NV_stream_cross_partition", EGLextension::EGL_NV_stream_cross_partition },
    { "EGL_NV_stream_cross_process", EGLextension::EGL_NV_stream_cross_process },
    { "EGL_NV_stream_cross_system", EGLextension::EGL_NV_stream_cross_system },
    { "EGL_NV_stream_fifo_next", EGLextension::EGL_NV_stream_fifo_next },
    { "EGL_NV_stream_fifo_synchronous", EGLextension::EGL_NV_stream_fifo_synchronous },
    { "EGL_NV_stream_flush", EGLextension::EGL_NV_stream_flush },
    { "EGL_NV_stream_frame_limits", EGLextension::EGL_NV_stream_frame_limits },
    { "EGL_NV_stream_metadata", EGLextension::EGL_NV_stream_metadata },
    { "EGL_NV_stream_remote", EGLextension::EGL_NV_stream_remote },
    { "EGL_NV_stream_reset", EGLextension::EGL_NV_stream_reset },
    { "EGL_NV_stream_socket", EGLextension::EGL_NV_stream_socket },
    { "EGL_NV_stream_socket_inet", EGLextension::EGL_NV_stream_socket_inet },
    { "EGL_NV_stream_socket_unix", EGLextension::EGL_NV_stream_socket_unix },
    { "EGL_NV_stream_sync", EGLextension::EGL_NV_stream_sync },
    { "EGL_NV_sync", EGLextension::EGL_NV_sync },
    { "EGL_NV_system_time", EGLextension::EGL_NV_system_time },
    { "EGL_NV_triple_buffer", EGLextension::EGL_NV_triple_buffer }
};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_O{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_P{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_Q{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_R{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_S{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_T =
{
    { "EGL_TIZEN_image_native_buffer", EGLextension::EGL_TIZEN_image_native_buffer },
    { "EGL_TIZEN_image_native_surface", EGLextension::EGL_TIZEN_image_native_surface }
};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_U{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_V{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_W{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_X{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_Y{};

const std::unordered_map<std::string, EGLextension> Meta_ExtensionsByString_Z{};

const std::array<std::unordered_map<std::string, egl::EGLextension>, 27> Meta_ExtensionsByStringMaps =
{ {
    Meta_ExtensionsByString_0,
    Meta_ExtensionsByString_A,
    Meta_ExtensionsByString_B,
    Meta_ExtensionsByString_C,
    Meta_ExtensionsByString_D,
    Meta_ExtensionsByString_E,
    Meta_ExtensionsByString_F,
    Meta_ExtensionsByString_G,
    Meta_ExtensionsByString_H,
    Meta_ExtensionsByString_I,
    Meta_ExtensionsByString_J,
    Meta_ExtensionsByString_K,
    Meta_ExtensionsByString_L,
    Meta_ExtensionsByString_M,
    Meta_ExtensionsByString_N,
    Meta_ExtensionsByString_O,
    Meta_ExtensionsByString_P,
    Meta_ExtensionsByString_Q,
    Meta_ExtensionsByString_R,
    Meta_ExtensionsByString_S,
    Meta_ExtensionsByString_T,
    Meta_ExtensionsByString_U,
    Meta_ExtensionsByString_V,
    Meta_ExtensionsByString_W,
    Meta_ExtensionsByString_X,
    Meta_ExtensionsByString_Y,
    Meta_ExtensionsByString_Z
} };


} } // namespace eglbinding::aux
