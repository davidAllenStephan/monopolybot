project(MonopolyCore)
add_library(MonopolyCore STATIC src/controllers/Property.cpp src/csv/CsvManager.cpp)
target_link_libraries(MonopolyCore PUBLIC)
target_include_directories(MonopolyCore
                           PUBLIC
                           $<INSTALL_INTERFACE:src>
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
                           )
