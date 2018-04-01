# TODO: complete this CMakeLists.txt

add_executable(expensive_int expensive_int.cpp)
target_compile_features(expensive_int PUBLIC cxx_std_11)

add_executable(undefined_behavior undefined_behavior.cpp)
target_compile_features(undefined_behavior PUBLIC cxx_std_11)

target_link_libraries(undefined_behavior ${CMAKE_THREAD_LIBS_INIT})

#add_library(roots Polynomial.cpp)
