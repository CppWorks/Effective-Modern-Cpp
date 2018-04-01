add_executable(auto auto.cpp)
target_compile_features(auto PUBLIC cxx_std_14)

add_library(simple_joys simple_joys.cpp)
target_compile_features(simple_joys PUBLIC cxx_std_11)
