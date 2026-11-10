cmake_minimum_required(VERSION 3.19)
project(port_mate LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(port_mate
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    models/ram.h
    services/memoryservice.h services/memoryservice.cpp
    services/portservice.h services/portservice.cpp
    models/port.h
    models/process.h
)

target_link_libraries(port_mate
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS port_mate
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET port_mate
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
