include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/common
	${CMAKE_CURRENT_SOURCE_DIR}/engine
	${CMAKE_CURRENT_SOURCE_DIR}/public
	${CMAKE_CURRENT_SOURCE_DIR}/public/tier0
	${CMAKE_CURRENT_SOURCE_DIR}/public/tier1
)

add_subdirectory(tier1)

add_subdirectory(game)