project(lrcpp)

set(CMAKE_BUILD_TYPE "Release")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../bin/${PROJECT_NAME})


set( EXE_SOURCES )
list( APPEND EXE_SOURCES src/main.cpp )

set( RUNTIME_NAME ${PROJECT_NAME}.out)


add_executable(${RUNTIME_NAME} ${EXE_SOURCES})

target_include_directories(${RUNTIME_NAME}
		PRIVATE
		${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(${RUNTIME_NAME})

