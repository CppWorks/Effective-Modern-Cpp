include_directories(../)

add_library(widget_pimpl_unique_ptr widget.cpp)
target_compile_features(widget PUBLIC cxx_std_14)

add_executable(client_pimpl_unique_ptr client.cpp)
target_link_libraries(client_pimpl_unique_ptr widget_pimpl_unique_ptr)
