cmake_minimum_required(VERSION 3.5)

project(calory_calc VERSION 0.1 LANGUAGES CXX)

# Enable automatic Qt processing of UI, MOC, and resource files
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find the required Qt packages
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# List of source files
set(PROJECT_SOURCES
    main.cpp
    widget.cpp
    widget.h
    widget.ui
    person.cpp
    person.h
)

# Define the executable based on the Qt version and platform
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(calory_calc
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(calory_calc SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(calory_calc
            ${PROJECT_SOURCES}
        )
    endif()
endif()

# Link the Qt Widgets library
target_link_libraries(calory_calc PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Set properties for macOS and Windows
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.calory_calc)
endif()
set_target_properties(calory_calc PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Install targets
include(GNUInstallDirs)
install(TARGETS calory_calc
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finalize the executable for Qt 6
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(calory_calc)
endif()
