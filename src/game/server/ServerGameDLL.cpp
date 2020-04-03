//===== Copyright © 1996-2005, Valve Corporation, All rights reserved. ======//
//===== Copyright © 2020, BlackPhrase, All rights reserved.            ======//
//===========================================================================//

/// @file

#include "cbase.h"
#include "ServerGameDLL.hpp"

EXPOSE_SINGLE_INTERFACE(CServerGameDLL, IServerGameDLL, INTERFACEVERSION_SERVERGAMEDLL)

bool CServerGameDLL::DLLInit(CreateInterfaceFn engineFactory, CreateInterfaceFn physicsFactory, CreateInterfaceFn fileSystemFactory, CGlobalVars *pGlobals)
{
	return true;
};

void CServerGameDLL::DLLShutdown()
{
};

bool CServerGameDLL::GameInit()
{
	return true;
};

void CServerGameDLL::GameShutdown()
{
};

bool CServerGameDLL::LevelInit(char const *pMapName, char const *pMapEntities, char const *pOldLevel, char const *pLandmarkName, bool loadGame, bool background)
{
	return true;
};

void CServerGameDLL::LevelShutdown()
{
};

void CServerGameDLL::PostInit()
{
};

void CServerGameDLL::PostToolsInit()
{
};

void CServerGameDLL::ServerActivate(edict_t *pEdictList, int edictCount, int clientMax)
{
};

void CServerGameDLL::GameFrame(bool simulating)
{
};

void CServerGameDLL::Think(bool finalTick)
{
};

void CServerGameDLL::PreClientUpdate(bool simulating)
{
};

void CServerGameDLL::ServerHibernationUpdate(bool bHibernating)
{
};

float CServerGameDLL::GetTickInterval() const
{
	return 1.0/60.0f; // BP: Gotta go fast!
};

ServerClass *CServerGameDLL::GetAllServerClasses()
{
	return nullptr;
};

const char *CServerGameDLL::GetGameDescription()      
{
	return "Some Weird Shit";
};

void CServerGameDLL::CreateNetworkStringTables()
{
};

CSaveRestoreData *CServerGameDLL::SaveInit( int size )
{
	return nullptr;
};

void CServerGameDLL::SaveWriteFields( CSaveRestoreData *, const char *, void *, datamap_t *, typedescription_t *, int )
{
};

void CServerGameDLL::SaveReadFields( CSaveRestoreData *, const char *, void *, datamap_t *, typedescription_t *, int )
{
};

void CServerGameDLL::SaveGlobalState( CSaveRestoreData * )
{
};

void CServerGameDLL::RestoreGlobalState( CSaveRestoreData * )
{
};

void CServerGameDLL::PreSave( CSaveRestoreData * )
{
};

void CServerGameDLL::Save( CSaveRestoreData * )
{
};

void CServerGameDLL::GetSaveComment(char *comment, int maxlength, float flMinutes, float flSeconds, bool bNoTime)
{
};

void CServerGameDLL::WriteSaveHeaders( CSaveRestoreData * )
{
};

void CServerGameDLL::ReadRestoreHeaders( CSaveRestoreData * )
{
};

void CServerGameDLL::Restore( CSaveRestoreData *, bool )
{
};

bool CServerGameDLL::IsRestoring()
{
	return false;
};

bool CServerGameDLL::SupportsSaveRestore()
{
	return false;
};

int CServerGameDLL::CreateEntityTransitionList(CSaveRestoreData *, int)
{
	return -1;
};

void CServerGameDLL::BuildAdjacentMapList()
{
};

bool CServerGameDLL::GetUserMessageInfo(int msg_type, char *name, int maxnamelength, int& size)
{
	return false;
};

CStandardSendProxies *CServerGameDLL::GetStandardSendProxies()
{
	return nullptr;
};

#ifdef _XBOX
void CServerGameDLL::GetTitleName(const char *pMapName, char* pTitleBuff, int titleBuffSize)
{
};
#endif

void CServerGameDLL::PreSaveGameLoaded(char const *pSaveName, bool bCurrentlyInGame)
{
};

void CServerGameDLL::InvalidateMdlCache()
{
};

void CServerGameDLL::OnQueryCvarValueFinished(QueryCvarCookie_t iCookie, edict_t *pPlayerEntity, EQueryCvarValueStatus eStatus, const char *pCvarName, const char *pCvarValue )
{
};

void CServerGameDLL::GameServerSteamAPIActivated()
{
};

void CServerGameDLL::ApplyGameSettings(KeyValues *pKV)
{
};

void CServerGameDLL::GetMatchmakingTags(char *buf, size_t bufSize)
{
};

void CServerGameDLL::GetMatchmakingGameData(char *buf, size_t bufSize)
{
};

bool CServerGameDLL::SupportsRandomMaps()
{
	return false;
};

bool CServerGameDLL::ShouldHideServer()
{
	return true;
};

bool CServerGameDLL::ShouldPreferSteamAuth()
{
	return false;
};

bool CServerGameDLL::ShouldTimeoutClient(int nUserID, float flTimeSinceLastReceived)
{
	return false;
};