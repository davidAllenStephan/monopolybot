project(MonopolyTests)
add_executable(MonopolyTests src/test.cpp)
target_link_libraries(MonopolyTests PRIVATE MonopolyCore)
add_test(NAME MonopolyTests COMMAND MonopolyTests)
