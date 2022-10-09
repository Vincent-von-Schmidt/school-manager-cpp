add_executable(school-manager
    main.cpp
    window.cpp
)

target_link_libraries(school-manager PRIVATE Qt6::Widgets)

set_target_properties(school-manager PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)