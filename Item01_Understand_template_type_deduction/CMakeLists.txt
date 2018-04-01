add_executable(pinch_of_pseudocode pinch_of_pseudocode.cpp)
target_compile_features(pinch_of_pseudocode PUBLIC cxx_std_11)

add_executable(case1_const case1_const.cpp)
target_compile_features(case1_const PUBLIC cxx_std_11)

add_executable(case1_non_const case1_non_const.cpp)
target_compile_features(case1_non_const PUBLIC cxx_std_11)

add_executable(case1_pointer case1_pointer.cpp)
target_compile_features(case1_pointer PUBLIC cxx_std_11)

add_executable(case2_uref case2_uref.cpp)
target_compile_features(case2_uref PUBLIC cxx_std_11)

add_executable(case3_pass_by_value case3_pass_by_value.cpp)
target_compile_features(case3_pass_by_value PUBLIC cxx_std_11)

add_executable(array-to-pointer_decay_rule array-to-pointer_decay_rule.cpp)
target_compile_features(array-to-pointer_decay_rule PUBLIC cxx_std_11)

add_executable(arrays_by_value arrays_by_value.cpp)
target_compile_features(arrays_by_value PUBLIC cxx_std_11)

add_executable(arrays_by_reference arrays_by_reference.cpp)
target_compile_features(arrays_by_reference PUBLIC cxx_std_11)

add_executable(function-to-pointer_decay_rule function-to-pointer_decay_rule.cpp)
target_compile_features(function-to-pointer_decay_rule PUBLIC cxx_std_11)

add_library(item01 deduce_nb_array_elements.cpp
                   array_and_pointer_parameter_equivalence.cpp)
target_compile_features(item01 PUBLIC cxx_std_11)
