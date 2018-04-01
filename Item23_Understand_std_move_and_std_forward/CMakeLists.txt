add_executable(typical_use_of_std_forward
               typical_use_of_std_forward.cpp)
target_compile_features(typical_use_of_std_forward PUBLIC cxx_std_11)

add_library(item23 std_move_in_cpp11.cpp
                   std_move_in_cpp14.cpp
                   annotation.cpp
                   move_constructor_with_move.cpp
                   move_constructor_with_forward.cpp)
target_compile_features(item23 PUBLIC cxx_std_14)
