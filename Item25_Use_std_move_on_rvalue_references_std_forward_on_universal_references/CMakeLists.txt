add_executable(dont_use_move_with_urefs dont_use_move_with_urefs.cpp)
target_compile_features(dont_use_move_with_urefs PUBLIC cxx_std_11)
add_executable(dont_use_move_with_urefs_solution dont_use_move_with_urefs_solution.cpp)
target_compile_features(dont_use_move_with_urefs_solution PUBLIC cxx_std_11)

add_library(item25 rrefs_are_moveable.cpp
                   urefs_maybe_moveable.cpp
# TODO             move_or_forward_only_on_final_use.cpp
                   reduce_and_copy.cpp
                   matrix.cpp
                   return_value_optimization.cpp
                   )
target_compile_features(item25 PUBLIC cxx_std_11)
