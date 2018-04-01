# TODO: use Boost TypeIndex instead.
include_directories(../../3rd_party)

add_executable(urefs_initialization urefs_initialization.cpp)
target_compile_features(urefs_initialization PUBLIC cxx_std_11)

add_executable(urefs_form urefs_form.cpp)
target_compile_features(urefs_form PUBLIC cxx_std_11)

add_library(item24 rrefs_examples.cpp
                   urefs_contexts.cpp
                   no_type_deduction.cpp
                   record_time.cpp)
target_compile_features(item24 PUBLIC cxx_std_14)
