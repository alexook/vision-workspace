project(lrcpp)

set(CMAKE_BUILD_TYPE "Release")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../bin/${PROJECT_NAME})


set( EXE_SOURCES )


add_executable(out1 src/1.cpp)
target_include_directories(out1 PUBLIC ${PROJECT_SOURCE_DIR}/include)


add_executable(out2 src/2.cpp)
target_include_directories(out2 PUBLIC ${PROJECT_SOURCE_DIR}/include)

