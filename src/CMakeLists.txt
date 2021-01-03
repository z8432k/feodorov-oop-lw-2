set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)

include_directories(include)


add_library(worker OBJECT Worker.cpp)

add_executable(lab1 lab2.cc)
target_link_libraries(lab1 worker)
