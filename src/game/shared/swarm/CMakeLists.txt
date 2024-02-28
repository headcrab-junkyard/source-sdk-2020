target_compile_definitions(${PROJECT_NAME}-client
	PRIVATE INFESTED_CLIENT_DLL
)

target_compile_definitions(${PROJECT_NAME}-server
	PRIVATE INFESTED_DLL
)