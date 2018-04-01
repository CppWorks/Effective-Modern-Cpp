include_directories(../)
add_library(widget_pimpl_raw_ptr widget.cpp)
target_compile_features(widget_pimpl_raw_ptr PUBLIC cxx_std_11)
