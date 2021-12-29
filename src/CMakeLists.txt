find_package(
        Qt5
        CONFIG
        REQUIRED
        Core
        Gui
        Widgets
)

add_executable(wayland_clipboard main.cpp)
target_link_libraries(
  wayland_clipboard
  PRIVATE project_options
          project_warnings
          Qt5::Widgets
)
