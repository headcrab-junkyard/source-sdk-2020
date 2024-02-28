project(srcsdk-game-shared)

# Shared client-side game code -> static lib (TODO: ideally there shouldn't be any conditional compilation blocks here)

add_library(${PROJECT_NAME}-client STATIC)

target_compile_definitions(${PROJECT_NAME}-client
	PRIVATE CLIENT_DLL
)

# Shared server-side game code -> static lib (TODO: ideally there shouldn't be any conditional compilation blocks here)

add_library(${PROJECT_NAME}-server STATIC)

target_compile_definitions(${PROJECT_NAME}-server
	PRIVATE GAME_DLL
)

#add_subdirectory(stub)
#add_subdirectory(hl2)
#add_subdirectory(hl2mp)
#add_subdirectory(swarm)
add_subdirectory(sdk)
#add_subdirectory(portal2)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES_CLIENT)

target_sources(${PROJECT_NAME}-client
	PRIVATE ${PROJECT_SOURCES_CLIENT}
)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES_SERVER)

target_sources(${PROJECT_NAME}-server
	PRIVATE ${PROJECT_SOURCES_SERVER}
)