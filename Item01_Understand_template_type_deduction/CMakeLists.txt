add_executable(01-pinch_of_pseudocode 01-pinch_of_pseudocode.cpp)
target_compile_features(01-pinch_of_pseudocode PUBLIC cxx_std_11)

add_executable(02-case1_const 02-case1_const.cpp)
target_compile_features(02-case1_const PUBLIC cxx_std_11)

add_executable(03-case1_non_const 03-case1_non_const.cpp)
target_compile_features(03-case1_non_const PUBLIC cxx_std_11)

add_executable(04-case1_pointer 04-case1_pointer.cpp)
target_compile_features(04-case1_pointer PUBLIC cxx_std_11)

add_executable(05-case2_uref 05-case2_uref.cpp)
target_compile_features(05-case2_uref PUBLIC cxx_std_11)

add_executable(06-case3_pass_by_value 06-case3_pass_by_value.cpp)
target_compile_features(06-case3_pass_by_value PUBLIC cxx_std_11)

add_executable(07-array-to-pointer_decay_rule 07-array-to-pointer_decay_rule.cpp)
target_compile_features(07-array-to-pointer_decay_rule PUBLIC cxx_std_11)

add_executable(08-arrays_by_value 08-arrays_by_value.cpp)
target_compile_features(08-arrays_by_value PUBLIC cxx_std_11)

add_executable(09-arrays_by_reference 09-arrays_by_reference.cpp)
target_compile_features(09-arrays_by_reference PUBLIC cxx_std_11)

add_executable(10-function-to-pointer_decay_rule 10-function-to-pointer_decay_rule.cpp)
target_compile_features(10-function-to-pointer_decay_rule PUBLIC cxx_std_11)

add_library(item01 11-deduce_nb_array_elements.cpp
                   12-array_and_pointer_parameter_equivalence.cpp)
target_compile_features(item01 PUBLIC cxx_std_11)
