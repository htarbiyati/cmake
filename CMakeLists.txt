cmake_minimum_required(VERSION 3.16.4)

project(OLAS VERSION 1.0)


if(USE_ADDER)
      add_subdirectory(Adder)
      list(APPEND EXTRA_LIBS Adder)
      list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/Adder")
endif()

configure_file(OLASConfig.h.in OLASConfig.h)

add_executable(${PROJECT_NAME} main.cpp)

# adder use logic
option(USE_ADDER "A simple library for adding 2 floats." ON)



add_subdirectory(external/glfw)

target_include_directories(${PROJECT_NAME} 

      PUBLIC external/glfw/include
      ${EXTRA_INCLUDES}
)

target_link_directories(${PROJECT_NAME} 

      PRIVATE external/glfw/src
      ${EXTRA_LIBS}
)

target_link_libraries(${PROJECT_NAME} adder glfw)
