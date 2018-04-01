add_executable(Item12 Item12.cpp)
target_compile_features(Item12 PUBLIC cxx_std_11)

add_library(pointer_example pointer_example.cpp)
target_compile_features(pointer_example PUBLIC cxx_std_11)

add_library(Widget Widget.cpp)
target_compile_features(Widget PUBLIC cxx_std_11)
