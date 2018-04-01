add_library(alternatives_to_uref_overloading alternative_pass_by_value.cpp
                                             tag_dispatch01.cpp
                                             tag_dispatch02.cpp
                                             constraining_templates01.cpp
                                             constraining_templates02_cpp11.cpp
                                             constraining_templates02_cpp14.cpp
                                             constraining_templates03_cpp14.cpp
                                             constraining_templates04_cpp14.cpp)
target_compile_features(alternatives_to_uref_overloading PUBLIC cxx_std_14)
