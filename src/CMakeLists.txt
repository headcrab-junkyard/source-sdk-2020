include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/common
	${CMAKE_CURRENT_SOURCE_DIR}/engine
	${CMAKE_CURRENT_SOURCE_DIR}/public
	${CMAKE_CURRENT_SOURCE_DIR}/public/tier0
	${CMAKE_CURRENT_SOURCE_DIR}/public/tier1
)

option(SRCSDK_TARGET_MOD_SDK "Build ASW Scratch SDK" ON)

add_subdirectory(common)
add_subdirectory(public)
add_subdirectory(tier1)
add_subdirectory(mathlib)

add_subdirectory(vgui2)

add_subdirectory(responserules)

add_subdirectory(gameui)

add_subdirectory(game)