set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)

include_directories(include)


add_library(rangechecker OBJECT Rangechecker.cpp)

add_executable(lab1 lab1.cc)
target_link_libraries(lab1 rangechecker)
