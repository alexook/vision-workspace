project(lrcv)
message( STATUS "CMAKE_PROJECT_NAME = ${CMAKE_PROJECT_NAME}" )
message( STATUS "PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}" )
set(CMAKE_BUILD_TYPE "Release")
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../bin/${PROJECT_NAME})


set( STATIC_LIB_SOURCES)
list( APPEND STATIC_LIB_SOURCES src/test.cpp )


set( EXE_SOURCES )
list( APPEND EXE_SOURCES src/main.cpp )

set( RUNTIME_NAME ${PROJECT_NAME}.out)

message(STATUS "${STATIC_LIB_SOURCES}")
message(STATUS "${EXE_SOURCES}")

add_library( test_static_library STATIC
		${STATIC_LIB_SOURCES}
		)

# Rename from libtest_static_library.a to libtest.a
set_target_properties( test_static_library PROPERTIES OUTPUT_NAME "test")


add_library( test_shared_library SHARED
${STATIC_LIB_SOURCES}
)

# Rename from libtest_shared_library.so to libtest.so
set_target_properties( test_shared_library PROPERTIES OUTPUT_NAME "test")

target_include_directories( test_static_library
		PUBLIC
		${PROJECT_SOURCE_DIR}/include
)

target_include_directories( test_shared_library
		PUBLIC
		${PROJECT_SOURCE_DIR}/include
)


add_executable(${RUNTIME_NAME} ${EXE_SOURCES})

target_include_directories(${RUNTIME_NAME}
		PRIVATE
		${PROJECT_SOURCE_DIR}/include
)

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src DIR_SRCS)
#message(STATUS "DIRSRCS: ${DIR_SRCS}")

#target_link_libraries(main PRIVATE ${test_static_library} ${OpenCV_LIBS})	ERROR ! NO${}	
#target_link_libraries(${PROJECT_NAME} test_shared_library ${OpenCV_LIBS})

target_link_libraries(${RUNTIME_NAME} test_shared_library ${OpenCV_LIBS})

#target_link_libraries(main ${OpenCV_LIBS})

#target_compile_definitions(main PUBLIC "IS_32_BIT_ARCH")

#message(STATUS "${OpenCV_LIBS}")

