set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable (01 01.cpp)
add_executable (02 02.cpp)
add_executable (04 04.cpp)

# Link the executable to the Reverse library. Since the Reverse library has
# public include directories we will use those link directories when building.
#target_link_libraries (e LINK_PUBLIC libname)
