#include <memory>
#include <vector>

#include <ATen/native/vulkan/VulkanGL.h>

namespace at {
namespace native {
namespace vulkan {

// IKTODO: Think about proper design of split for Vulkan/GL
using VulkanTensor = at::native::vulkan::gl::VulkanGLTensor;

void ensureContextOrFail();

} // namespace vulkan
} // namespace native
} // namespace at
