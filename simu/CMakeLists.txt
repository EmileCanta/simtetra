cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

project(SimulationTetra)

find_package(Geant4 REQUIRED ui_all vis_all)

include(${Geant4_USE_FILE})

include_directories(${PROJECT_SOURCE_DIR}/include 
                    ${Geant4_INCLUDE_DIR})

file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cc)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.hh)

file(GLOB MACRO_FILES
	"*.mac"
)

file(COPY ${MACRO_FILES} DESTINATION ${PROJECT_BINARY_DIR})

add_executable(simTetra simTetra.cc ${sources} ${headers})
target_link_libraries(simTetra ${Geant4_LIBRARIES})

add_custom_target(SimulationTetra DEPENDS simTetra)
