add_executable(runtime_output01 runtime_output01.cpp)
target_compile_features(runtime_output01 PUBLIC cxx_std_11)
add_executable(runtime_output02 runtime_output02.cpp)
target_compile_features(runtime_output02 PUBLIC cxx_std_11)
add_executable(boost_type_index boost_type_index.cpp)
target_compile_features(boost_type_index PUBLIC cxx_std_11)

add_library(ide_editors ide_editors.cpp compiler_diagnostics.cpp)
target_compile_features(ide_editors PUBLIC cxx_std_11)

find_package(Boost 1.56 REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

target_link_libraries(boost_type_index ${Boost_LIBRARIES})
