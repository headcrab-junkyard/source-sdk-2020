option(SDK_USE_TEAMS "Enable teams support in your mod" OFF)
option(SDK_USE_STAMINA "Enable stamina support in your mod" OFF)
option(SDK_USE_SPRINTING "Enable sprinting functionality in your mod" OFF)
option(SDK_USE_PLAYERCLASSES "Enable player classes support in your mod" OFF)
option(SDK_USE_PRONE "Enable prone support in your mod" OFF)

if(SDK_USE_TEAMS)
	target_compile_definitions(${PROJECT_NAME}
		PRIVATE SDK_USE_TEAMS
	)
endif()

if(SDK_USE_STAMINA)
	target_compile_definitions(${PROJECT_NAME}
		PRIVATE SDK_USE_STAMINA
	)
endif()

if(SDK_USE_SPRINTING)
	target_compile_definitions(${PROJECT_NAME}
		PRIVATE SDK_USE_SPRINTING
	)
endif()

if(SDK_USE_PLAYERCLASSES)
	target_compile_definitions(${PROJECT_NAME}
		PRIVATE SDK_USE_PLAYERCLASSES
	)
endif()

if(SDK_USE_PRONE)
	target_compile_definitions(${PROJECT_NAME}
		PRIVATE SDK_USE_PRONE
	)
endif()