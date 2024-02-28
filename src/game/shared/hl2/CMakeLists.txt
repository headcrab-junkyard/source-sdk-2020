target_compile_definitions(${PROJECT_NAME}-client
	PRIVATE HL2_CLIENT_DLL
)

target_compile_definitions(${PROJECT_NAME}-server
	PRIVATE HL2_DLL
)