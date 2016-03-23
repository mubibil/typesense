#pragma once

#include <cstddef>
#include <stdint.h>

/* Different intersection routines adapted from:
 * https://github.com/lemire/SIMDCompressionAndIntersection/blob/master/src/intersection.cpp
 */
class Intersection {
public:
  // Fast scalar scheme designed by N. Kurz. Returns the size of out (intersected set)
  static size_t scalar(const uint32_t *A, const size_t lenA, const uint32_t *B, const size_t lenB, uint32_t *out);
};