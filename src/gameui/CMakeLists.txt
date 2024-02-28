project(srcsdk-gameui)

add_library(${PROJECT_NAME} MODULE)

target_compile_definitions(${PROJECT_NAME}
	PRIVATE VERSION_SAFE_STEAM_API_INTERFACES
)

if(${SRCSDK_TARGET_MOD_SDK})
	target_compile_definitions(${PROJECT_NAME}
		PRIVATE SDK_CLIENT_DLL
		PRIVATE SDK_DLL
	)
endif()

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES)

target_sources(${PROJECT_NAME}
	PRIVATE ${PROJECT_SOURCES}
)

target_include_directories(${PROJECT_NAME}
	PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(sdk)
#add_subdirectory(swarm)

set_target_properties(${PROJECT_NAME} PROPERTIES
	OUTPUT_NAME "gameui"
)

target_link_libraries(${PROJECT_NAME} srcsdk-tier1)