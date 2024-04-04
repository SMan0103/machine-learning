cmake_minimum_required(VERSION 3.27)
project(NumberLearner)

set(CMAKE_CXX_STANDARD 17)

#add_subdirectory(src)
#add_executable(out main.cpp)

file (GLOB_RECURSE NumberLearner_SOURCES CONFIGURE_DEPENDS "src/*.cpp")
file (GLOB_RECURSE NumberLearner_HEADERS CONFIGURE_DEPENDS "src/*.h")

set (NumberLearner_INCLUDE_DIRS "")
foreach (_headerFile ${NumberLearner_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND NumberLearner_INCLUDE_DIRS ${_dir})
endforeach()
list (REMOVE_DUPLICATES NumberLearner_INCLUDE_DIRS)

add_executable(NumberLearnerExe ${NumberLearner_SOURCES})
target_include_directories(NumberLearnerExe PRIVATE ${NumberLearner_INCLUDE_DIRS})