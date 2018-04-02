/*

Key idea:

  The ability to declare references to arrays enables creation of a template
  to deduce the number of elements that an array contains.

*/

#include <array>
#include <cstddef>

// return size of an array as a compile-time constant. (The
// array parameter has no name, because we care only about
// the number of elements it contains.)
template <typename T, std::size_t N>
constexpr std::size_t arraySize(T (&)[N]) noexcept {
  return N;
}

// keyVals has 7 elements
int keyVals[] = {1, 3, 7, 9, 11, 22, 35};

// so does mappedVals
int mappedVals1[arraySize(keyVals)];

// mappedVals' size is 7
std::array<int, arraySize(keyVals)> mappedVals2;
