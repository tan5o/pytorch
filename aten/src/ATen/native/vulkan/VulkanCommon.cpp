#include <cassert>
#include <iostream>

#include <ATen/native/vulkan/VulkanCommon.h>

#define VULKANGL true

#include <ATen/native/vulkan/VulkanGL.h>

namespace at {
namespace native {
namespace vulkan {

void ensureContextOrFail() {
  if (VULKANGL) {
    at::native::vulkan::gl::initGLContextOnce();
  } else {
    assert(false);
  }
}

} // namespace vulkan
} // namespace native
} // namespace at
