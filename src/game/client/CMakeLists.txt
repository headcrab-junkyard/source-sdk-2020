project(srcsdk-game-client)

#add_subdirectory(gameui)

# Base/shared game code -> static lib (TODO: ideally there shouldn't be any conditional compilation blocks here)

add_library(${PROJECT_NAME}-base STATIC)

target_compile_definitions(${PROJECT_NAME}-base
	PRIVATE CLIENT_DLL
)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES)

target_sources(${PROJECT_NAME}-base
	PRIVATE ${PROJECT_SOURCES}
)

# Game-specific set of sources + the static lib above -> (shared) game dll/lib

add_library(${PROJECT_NAME} MODULE)

target_compile_definitions(${PROJECT_NAME}
	PRIVATE CLIENT_DLL
)

#add_subdirectory(stub)
#add_subdirectory(hl1)
#add_subdirectory(hl2)
#add_subdirectory(hl2mp)
#add_subdirectory(swarm)
add_subdirectory(sdk)
#add_subdirectory(portal2)
#add_subdirectory(cs)
#add_subdirectory(css)

set_target_properties(${PROJECT_NAME} PROPERTIES
	OUTPUT_NAME "client"
)

target_link_libraries(${PROJECT_NAME} srcsdk-tier1 srcsdk-game-shared-client ${PROJECT_NAME}-base)