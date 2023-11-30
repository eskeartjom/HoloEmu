cmake_minimum_required(VERSION 3.1)
project(HoloEmu)

# Add extern libs
add_subdirectory(extern/SDL EXCLUDE_FROM_ALL)

add_executable(HoloEmu src/HoloEmu.cpp)
target_link_libraries(HoloEmu PRIVATE SDL3::SDL3)

add_custom_target(BUILD COMMAND)

IF (WIN32)
    add_custom_command(TARGET BUILD POST_BUILD
        COMMAND powershell.exe ../scripts/Copy.ps1
    )
ENDIF()