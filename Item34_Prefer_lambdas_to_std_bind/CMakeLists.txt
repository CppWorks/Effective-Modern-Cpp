add_executable(alarm_with_lambda_cpp11 alarm_with_lambda_cpp11.cpp)
target_compile_features(alarm_with_lambda_cpp11 PUBLIC cxx_std_11)

add_executable(alarm_with_lambda_cpp14 alarm_with_lambda_cpp14.cpp)
target_compile_features(alarm_with_lambda_cpp14 PUBLIC cxx_std_14)

add_executable(alarm_with_lambda_and_overload_cpp14 alarm_with_lambda_and_overload_cpp14.cpp)
target_compile_features(alarm_with_lambda_and_overload_cpp14 PUBLIC cxx_std_14)

add_executable(alarm_with_std_bind_incorrect alarm_with_std_bind_incorrect.cpp)
target_compile_features(alarm_with_std_bind_incorrect PUBLIC cxx_std_11)

add_executable(alarm_with_std_bind_cpp11 alarm_with_std_bind_cpp11.cpp)
target_compile_features(alarm_with_std_bind_cpp11 PUBLIC cxx_std_11)

add_executable(alarm_with_std_bind_cpp14 alarm_with_std_bind_cpp14.cpp)
target_compile_features(alarm_with_std_bind_cpp14 PUBLIC cxx_std_14)

add_executable(alarm_with_std_bind_and_overload_cpp14 alarm_with_std_bind_and_overload_cpp14.cpp)
target_compile_features(alarm_with_std_bind_and_overload_cpp14 PUBLIC cxx_std_14)

add_executable(between_with_lambda_cpp11 between_with_lambda_cpp11.cpp)
target_compile_features(between_with_lambda_cpp11 PUBLIC cxx_std_11)

add_executable(between_with_lambda_cpp14 between_with_lambda_cpp14.cpp)
target_compile_features(between_with_lambda_cpp14 PUBLIC cxx_std_14)

add_executable(between_with_std_bind_cpp11 between_with_std_bind_cpp11.cpp)
target_compile_features(between_with_std_bind_cpp11 PUBLIC cxx_std_11)

add_executable(between_with_std_bind_cpp14 between_with_std_bind_cpp14.cpp)
target_compile_features(between_with_std_bind_cpp14 PUBLIC cxx_std_14)

add_executable(compress_with_lambda compress_with_lambda.cpp)
target_compile_features(compress_with_lambda PUBLIC cxx_std_11)

add_executable(compress_with_std_bind compress_with_std_bind.cpp)
target_compile_features(compress_with_std_bind PUBLIC cxx_std_11)

add_executable(polymorphic_function_objects_with_lambda_cpp14 polymorphic_function_objects_with_lambda_cpp14.cpp)
target_compile_features(polymorphic_function_objects_with_lambda_cpp14 PUBLIC cxx_std_14)

add_executable(polymorphic_function_objects_with_std_bind polymorphic_function_objects_with_std_bind.cpp)
target_compile_features(polymorphic_function_objects_with_std_bind PUBLIC cxx_std_11)
