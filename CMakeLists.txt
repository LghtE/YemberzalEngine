cmake_minimum_required(VERSION 3.15)
project(YemberzalEngine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# SFML setup
set(SFML_DIR "C:/SFML-3.0.0/lib/cmake/SFML")
find_package(SFML 3 REQUIRED COMPONENTS Graphics Window System)

# === Helper function to recursively collect .cpp files excluding certain folders ===
function(collect_sources out_var root_dir)
    file(GLOB_RECURSE tmp_sources CONFIGURE_DEPENDS "${root_dir}/*.cpp")
    set(filtered_sources "")
    foreach(file ${tmp_sources})
        if(NOT file MATCHES "/build/" AND NOT file MATCHES "/\\.")
            list(APPEND filtered_sources ${file})
        endif()
    endforeach()
    set(${out_var} ${filtered_sources} PARENT_SCOPE)
endfunction()

# Collect all cpp files
collect_sources(SOURCES ${CMAKE_SOURCE_DIR})

# === Collect all header directories, including parent directories ===
file(GLOB_RECURSE HEADER_FILES
    "${CMAKE_SOURCE_DIR}/*.h"
    "${CMAKE_SOURCE_DIR}/*.hpp"
)

set(INCLUDE_DIRS "")
foreach(header ${HEADER_FILES})
    get_filename_component(dir ${header} DIRECTORY)
    if(NOT dir MATCHES "/build/" AND NOT dir MATCHES "/\\.")
        # Add folder containing header
        list(APPEND INCLUDE_DIRS ${dir})
        # Add all parent folders up to source dir
        get_filename_component(parent_dir ${dir} DIRECTORY)
        while(NOT parent_dir STREQUAL "${CMAKE_SOURCE_DIR}")
            list(APPEND INCLUDE_DIRS ${parent_dir})
            get_filename_component(parent_dir ${parent_dir} DIRECTORY)
        endwhile()
    endif()
endforeach()
list(REMOVE_DUPLICATES INCLUDE_DIRS)

# === Create executable ===
add_executable(${PROJECT_NAME} ${SOURCES})

# Link SFML
target_link_libraries(${PROJECT_NAME} PRIVATE SFML::Graphics SFML::Window SFML::System)

# Include all relevant directories
target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_DIRS})
