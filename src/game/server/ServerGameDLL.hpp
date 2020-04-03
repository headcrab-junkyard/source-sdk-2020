//===== Copyright © 1996-2005, Valve Corporation, All rights reserved. ======//
//===== Copyright © 2020, BlackPhrase, All rights reserved.            ======//
//===========================================================================//

/// @file

#pragma once

class CServerGameDLL : public IServerGameDLL
{
public:
	virtual bool DLLInit(CreateInterfaceFn engineFactory, CreateInterfaceFn physicsFactory, CreateInterfaceFn fileSystemFactory, CGlobalVars *pGlobals) override;
	virtual void DLLShutdown() override;

	virtual bool GameInit() override;
	virtual void GameShutdown() override;

	virtual bool LevelInit(char const *pMapName, char const *pMapEntities, char const *pOldLevel, char const *pLandmarkName, bool loadGame, bool background) override;
	virtual void LevelShutdown() override;

	virtual void PostInit() override;
	virtual void PostToolsInit() override;

	virtual void ServerActivate(edict_t *pEdictList, int edictCount, int clientMax) override;

	virtual void GameFrame(bool simulating) override;

	virtual void Think(bool finalTick) override;
	
	virtual void PreClientUpdate(bool simulating) override;

	virtual void ServerHibernationUpdate(bool bHibernating) override;

	virtual float GetTickInterval() const override;

	virtual ServerClass *GetAllServerClasses() override;

	virtual const char *GetGameDescription() override;      
	
	virtual void CreateNetworkStringTables() override;
	
	virtual CSaveRestoreData *SaveInit( int size ) override;
	virtual void SaveWriteFields( CSaveRestoreData *, const char *, void *, datamap_t *, typedescription_t *, int ) override;
	virtual void SaveReadFields( CSaveRestoreData *, const char *, void *, datamap_t *, typedescription_t *, int ) override;
	virtual void SaveGlobalState( CSaveRestoreData * ) override;
	virtual void RestoreGlobalState( CSaveRestoreData * ) override;
	virtual void PreSave( CSaveRestoreData * ) override;
	virtual void Save( CSaveRestoreData * ) override;
	virtual void GetSaveComment( char *comment, int maxlength, float flMinutes, float flSeconds, bool bNoTime = false ) override;
	virtual void WriteSaveHeaders( CSaveRestoreData * ) override;
	virtual void ReadRestoreHeaders( CSaveRestoreData * ) override;
	virtual void Restore( CSaveRestoreData *, bool ) override;
	virtual bool IsRestoring() override;
	virtual bool SupportsSaveRestore() override;

	virtual int CreateEntityTransitionList(CSaveRestoreData *, int) override;

	virtual void BuildAdjacentMapList() override;

	virtual bool GetUserMessageInfo(int msg_type, char *name, int maxnamelength, int& size) override;

	virtual CStandardSendProxies *GetStandardSendProxies() override;

#ifdef _XBOX
	virtual void GetTitleName(const char *pMapName, char* pTitleBuff, int titleBuffSize) override;
#endif

	virtual void PreSaveGameLoaded(char const *pSaveName, bool bCurrentlyInGame) override;

	virtual void InvalidateMdlCache() override;

	virtual void OnQueryCvarValueFinished(QueryCvarCookie_t iCookie, edict_t *pPlayerEntity, EQueryCvarValueStatus eStatus, const char *pCvarName, const char *pCvarValue ) override;

	virtual void GameServerSteamAPIActivated() override;

	virtual void ApplyGameSettings(KeyValues *pKV) override;

	virtual void GetMatchmakingTags(char *buf, size_t bufSize) override;
	virtual void GetMatchmakingGameData(char *buf, size_t bufSize) override;

	virtual bool SupportsRandomMaps() override;

	virtual bool ShouldHideServer() override;
	virtual bool ShouldPreferSteamAuth() override;
	virtual bool ShouldTimeoutClient(int nUserID, float flTimeSinceLastReceived) override;
};