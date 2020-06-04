project(fixfilt)
cmake_minimum_required(VERSION 3.12)
enable_testing()
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (WARNING_FLAGS           "-Wall -Wformat -pedantic")
set (CXX_COMMON_FLAGS        "-Woverloaded-virtual -fno-omit-frame-pointer")
set (CMAKE_CXX_FLAGS         "${WARNING_FLAGS} ${CXX_COMMON_FLAGS} -g")
set (CMAKE_CXX_FLAGS_RELEASE "${WARNING_FLAGS} ${CXX_COMMON_FLAGS} -O3")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ext)

add_library(fix STATIC 
  fix.cpp fixdb.cpp gen/fix40.cpp gen/fix41.cpp gen/fix42.cpp gen/fix43.cpp 
  gen/fix44.cpp gen/fix50.cpp)

add_executable (fixfilt fixfilt.cpp)
target_link_libraries(fixfilt fix)

add_executable (fix_test fix_test.cpp)
target_link_libraries(fix_test fix)
add_test(fix_test fix_test)

# FIXME: Broken...
find_package(PythonInterp 2.6 REQUIRED)
function (GenFixHeaders FixHeaders)
    if (NOT ARGN)
        message(SEND_ERROR "Error: gen_fix_hdrs called without spec files")
        return()
    endif (NOT ARGN)

    message("Argn: ${ARGN}")

    set (${FixHeaders})

    foreach(SPEC ${ARGN})

        get_filename_component(ABS_SPEC ${SPEC} ABSOLUTE)
        get_filename_component(SPEC_WE  ${SPEC} NAME_WE)

        set(HDR "${CMAKE_CURRENT_BINARY_DIR}/${SPEC_WE}.hpp")

        message("Processing ${ABS_SPEC} / ${SPEC_WE} -> ${HDR}")
        message ("${PYTHON_EXECUTABLE} ${PROJECT_SOURCE_DIR}/gen.py ${ABS_SPEC} ${HDR}")

        list(APPEND ${FixHeaders} "${HDR}")

        add_custom_command (
            OUTPUT ${HDR}
            COMMAND ${PYTHON_EXECUTABLE} ARGS ${PROJECT_SOURCE_DIR}/gen.py ${ABS_SPEC} ${HDR}
            COMMENT "Generating C++ code for ${SPEC_WE}"
            MAIN_DEPENDENCY ${ABS_SPEC}
            DEPENDS ${ABS_SPEC} ${PROJECT_SOURCE_DIR}/gen.py
        )

        message("Processing ${SPEC_WE} done")
    endforeach()

    set_source_files_properties (${${FixHeaders}} PROPERTIES GENERATED TRUE)
    set(${FixHeaders} ${${FixHeaders}} PARENT_SCOPE)
endfunction ()

# GenFixHeaders(FixHeaders
#     ${CMAKE_CURRENT_SOURCE_DIR}/ext/quickfix/spec/FIX40.xml
#     ${CMAKE_CURRENT_SOURCE_DIR}/ext/quickfix/spec/FIX41.xml)

# This must always be last or else packaging wont work.
include(CPack)

