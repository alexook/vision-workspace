project( lrboost )

find_package(Boost REQUIRED REQUIRED COMPONENTS filesystem system)

if(Boost_FOUND)
	message( "boost found" )
else()
	message(FATAL_ERROR "Cannot find Boost" )
endif()


add_executable( ${PROJECT_NAME} src/main.cpp )

target_link_libraries( ${PROJECT_NAME} PRIVATE Boost::filesystem)
	
