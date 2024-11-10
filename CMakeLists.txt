cmake_minimum_required(VERSION 3.21.0)

project(ModelExample LANGUAGES C CXX)

# Указать путь до папки Qt
list(APPEND CMAKE_PREFIX_PATH "C:/Qt/Qt5.15.2/5.15.2/msvc2019_64/")

find_package(Qt5 REQUIRED COMPONENTS Widgets)

set (SOURCE
    Main.cpp
    MainWindow.cpp
    StudentsModel.cpp
)

set (HEADER 
    StudentsModel.h
    MainWindow.h
)

add_executable(${PROJECT_NAME} ${SOURCE} ${HEADER})

target_link_libraries(${PROJECT_NAME} 
    PRIVATE
    Qt5::Widgets
)

set_target_properties(${PROJECT_NAME} PROPERTIES AUTOMOC TRUE)