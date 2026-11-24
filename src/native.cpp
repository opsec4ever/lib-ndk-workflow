#include <cstdint>

extern "C" {

__attribute__((visibility("default")))
std::int32_t libforge_add(std::int32_t a, std::int32_t b) {
    return a + b;
}

}
