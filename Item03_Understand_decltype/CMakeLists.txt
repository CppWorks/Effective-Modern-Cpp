add_executable(decltype_for_complicated_lvalues decltype_for_complicated_lvalues.cpp)
target_compile_features(decltype_for_complicated_lvalues PUBLIC cxx_std_14)

add_library(item02 problem.cpp
                   decltype_auto_for_function_return_types_cpp14.cpp
                   decltype_auto_for_normal_auto_variables_cpp14.cpp
                   typical_cases.cpp
                   string_deque.cpp
                   return_statements_cpp14.cpp)
target_compile_features(item02 PUBLIC cxx_std_14)
