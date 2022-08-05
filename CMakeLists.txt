cmake_minimum_required(VERSION 3.10)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_VERBOSE 17)

project(Engine)

find_package(Threads REQUIRED)
find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(SDL2_mixer REQUIRED)
find_package(SDL2_image REQUIRED)
# find_package(OpenSSL)
# find_package(PkgConfig)
# pkg_check_modules(SERIAL libserial)

# if(${CMAKE_BUILD_TYPE} MATCHES Debug)
#     set(ENET_LIBRARY ${CMAKE_CURRENT_SOURCE_DIR}/libs/enet/debug/libenet.a)
# else()
#     set(ENET_LIBRARY ${CMAKE_CURRENT_SOURCE_DIR}/libs/enet/release/libenet.a)
# endif(${CMAKE_BUILD_TYPE} MATCHES Debug)

set(GAME_SOURCES
#    src/audio.cpp
#    src/audio.hh
    # src/background.cpp
    # src/background.hh
    # src/engine.cpp
    # src/engine.hh
    src/fonte.hh
    src/fonte.cpp
    src/inputs.cpp
    src/inputs.hh
    # src/main.hh
    src/main.cpp
    # src/mapa.cpp
    # src/mapa.hh
#    src/GameObject.hh
#    src/GameObject.cpp
    src/system.cpp
    src/system.hh
    # src/sprites.cpp
    # src/sprites.hh
#    src/window.hh
#    src/window.cpp
#    src/graphics.hh
#    src/graphics.cpp
#    src/textura.hh
#    src/textura.cpp
    # src/game.h
    # src/game.cpp
    src/texto.hh
    src/texto.cpp
    src/memoria.h
    src/math.hh
    src/time.hh
)
set(ENETPP_SRC "libs/")

include_directories(${LIBS_SOURCES} ${SDL2_INCLUDE_DIRS} ${ENET_INCLUDE_DIRS} ${ENETPP_SRC})
add_executable(${PROJECT_NAME} ${GAME_SOURCES})

#set(CMAKE_CXX_FLAGS "-fsanitize=address -fsanitize=undefined -fsanitize=bounds -fsanitize=leak -g")
#set(CMAKE_C_FLAGS "-fsanitize=address -fsanitize=undefined -fsanitize=bounds -fsanitize=leak -g")
#set(CMAKE_EXE_LINKER_FLAGS "-fsanitize=address -fsanitize=undefined -fsanitize=bounds -fsanitize=leak")
#set(CMAKE_MODULE_LINKER_FLAGS "-fsanitize=address -fsanitize=undefined -fsanitize=bounds -fsanitize=leak")

# set(CMAKE_CXX_FLAGS "-fsanitize=thread -fsanitize=undefined -fsanitize=bounds -g")
# set(CMAKE_C_FLAGS "-fsanitize=thread  -fsanitize=undefined -fsanitize=bounds  -g")
# set(CMAKE_EXE_LINKER_FLAGS "-fsanitize=thread  -fsanitize=undefined -fsanitize=bounds")
# set(CMAKE_MODULE_LINKER_FLAGS "-fsanitize=thread  -fsanitize=undefined -fsanitize=bounds")

target_link_libraries (
    ${PROJECT_NAME}
    ${CMAKE_DL_LIBS}
    ${CMAKE_THREAD_LIBS_INIT}
    ${SDL2_LIBRARY}
    ${SDL2MAIN_LIBRARY}
#    SDL2::SDL2_MIXER
#    SDL2::SDL2_TTF
#    SDL2::SDL2_IMAGE
    -lSDL2_image
    -lSDL2_ttf
    -lSDL2_mixer
    ${OPENGL_LIBRARY}
    ${ENET_LIBRARY}
    # ${SERIAL_LDFLAGS}
    # ${SERIAL_LIBRARY}
    # ${UDEV_LIBRARIES}
    # oatpp::oatpp
    # oatpp::oatpp-websocket
    # oatpp::oatpp-openssl
     ZLIB::ZLIB
)

