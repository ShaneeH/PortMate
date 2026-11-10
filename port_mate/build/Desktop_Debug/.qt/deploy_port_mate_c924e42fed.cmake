include("/home/shane/dev/qt_projects/port_mate/build/Desktop_Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/port_mate-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "/home/shane/dev/qt_projects/port_mate/build/Desktop_Debug/port_mate"
    GENERATE_QT_CONF
)
