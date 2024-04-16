cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(monopoly)
add_library(sum_integers src/SumIntegers.cpp)
add_executable(Monopoly src/main.cpp src/controllers/Property.cpp src/csv/CsvManager.cpp)
add_executable(cpp_test test/test.cpp)
target_link_libraries(cpp_test PRIVATE sum_integers)
enable_testing()
add_test(
  NAME cpp_test
  COMMAND $<TARGET_FILE:cpp_test>
  )
