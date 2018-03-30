#ifndef UTILS_H
#define UTILS_H

#include <functional>
#include <vector>

using FilterContainer =                     // see Item 9 for
    std::vector<std::function<bool(int)>>;  // "using", Item 2
                                            // for std::function

extern FilterContainer filters;  // filtering funcs

#endif /* UTILS_H */
