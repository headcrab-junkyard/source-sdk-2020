project(srcsdk-game-server)

# Base/shared game code -> static lib (TODO: ideally there shouldn't be any conditional compilation blocks here)

add_library(${PROJECT_NAME}-base STATIC)

target_compile_definitions(${PROJECT_NAME}-base
	PRIVATE GAME_DLL
)

target_include_directories(${PROJECT_NAME}-base
	PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../shared
)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} PROJECT_SOURCES)

target_sources(${PROJECT_NAME}-base
	PRIVATE ${PROJECT_SOURCES}
)

# Game-specific set of sources + the static lib above -> (shared) game dll/lib

add_library(${PROJECT_NAME} MODULE)

target_compile_definitions(${PROJECT_NAME}
	PRIVATE GAME_DLL
)

#add_subdirectory(stub)
#add_subdirectory(hl2)
#add_subdirectory(hl2mp)
#add_subdirectory(swarm)
add_subdirectory(sdk)
#add_subdirectory(portal2)

set_target_properties(${PROJECT_NAME} PROPERTIES
	OUTPUT_NAME "server"
)

target_link_libraries(${PROJECT_NAME} srcsdk-tier1 srcsdk-game-shared-server ${PROJECT_NAME}-base)