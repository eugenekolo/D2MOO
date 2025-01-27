#pragma once

#include <Units/Units.h>

#pragma pack(1)

struct D2MercSaveDataStrc
{
	uint32_t nFlags;							//0x00		//0xAF of D2SaveHeaderStrc
	uint32_t nSeed;								//0x04		//0xB3
	uint16_t wName;								//0x08		//0xB7
	uint16_t nHirelingId;						//0x0A		//0xB9
	uint32_t nExperience;						//0x0C		//0xBB
	uint32_t unk0x10[4];						//0x10
};

struct D2SaveSkillKeyStrc
{
	uint16_t nSkill;							//0x00
	union
	{
		struct
		{
			uint8_t nKey;						//0x02
			uint8_t nKeyEx;					//0x03
		};

		uint16_t nItemSlot;						//0x02
	};
};

struct D2SaveHeaderStrc
{
	uint32_t dwHeaderMagic;					//0x000
	uint32_t dwVersion;						//0x004
	uint32_t dwSize;							//0x008
	uint32_t dwChecksum;						//0x00C
	uint32_t dwWeaponSet;						//0x010
	char szName[16];						//0x014
	uint32_t dwSaveFlags;						//0x024
	uint8_t nClass;							//0x028
	uint8_t nStats;							//0x029
	uint8_t nSkills;							//0x02A
	uint8_t nLevel;							//0x02B
	uint32_t dwCreateTime;						//0x02C
	uint32_t dwLasTime;						//0x030
	uint32_t dwPlayTime;						//0x034
	D2SaveSkillKeyStrc SkillKeys[16];		//0x038
	int16_t nLeftSkillId;					//0x78
	int16_t nLeftSkillItemIndex;			//0x7A
	int16_t nRightSkillId;					//0x7C
	int16_t nRightSkillItemIndex;			//0x7E
	int16_t nSwitchLeftSkillId;				//0x80
	int16_t nSwitchLeftSkillItemIndex;		//0x82
	int16_t nSwitchRightSkillId;			//0x84
	int16_t nSwitchRightSkillItemIndex;		//0x86
	uint8_t nComponent[16];					//0x088
	uint8_t nCompColor[16];					//0x098
	uint8_t nTown[3];							//0x0A8
	uint32_t dwMapSeed;						//0x0AB
	D2MercSaveDataStrc MercSaveData;		//0x0AF
	uint8_t nSaveField;						//0x0CF
	uint32_t dwLastLevel;						//0x0D0
	uint32_t dwLastTown;						//0x0D4
	uint8_t nLastDifficulty;					//0x0D8

	char unk0xD9[118];
};

#pragma pack()

//D2Game.0x6FC8CCD0
void __fastcall PLRSAVE2_WriteMercData(D2GameStrc* pGame, D2UnitStrc* pPlayer, D2SaveHeaderStrc* pMercData);
//D2Game.0x6FC8CD80
int32_t __fastcall PLRSAVE2_WriteSaveHeader(D2GameStrc* pGame, D2UnitStrc* pPlayer, uint8_t** ppSection, const uint8_t* pEnd);
//D2Game.0x6FC8D390
int32_t __fastcall PLRSAVE2_WriteWaypointData(D2GameStrc* pGame, D2UnitStrc* pUnit, uint8_t** ppSection, const uint8_t* pEnd);
//D2Game.0x6FC8D440
int32_t __fastcall PLRSAVE2_WritePlrIntroSection(D2GameStrc* pGame, D2UnitStrc* pUnit, uint8_t** ppSection, const uint8_t* pEnd);
//D2Game.0x6FC8D4F0
int32_t __fastcall PLRSAVE2_WritePlayerStats(D2GameStrc* pGame, D2UnitStrc* pPlayer, uint8_t** ppSection, const uint8_t* pEnd);
//D2Game.0x6FC8D710
int32_t __fastcall PLRSAVE2_WriteCorpsesSection(D2GameStrc* pGame, D2UnitStrc* pPlayer, uint8_t** ppSection, const uint8_t* pEnd, int32_t a5);
//D2Game.0x6FC8D880
int32_t __fastcall PLRSAVE2_WriteIronGolemSection(D2GameStrc* pGame, D2UnitStrc* pPlayer, uint8_t** ppSection, const uint8_t* pEnd, int32_t a5);
//D2Game.0x6FC8D940
int32_t __fastcall PLRSAVE2_CreateSaveFile(D2GameStrc* pGame, D2UnitStrc* pPlayer, uint8_t* pData, uint32_t* pSize, uint32_t nMaxSize, int32_t a6, int32_t a7);
//D2Game.0x6FC8DC20
int32_t __fastcall PLRSAVE2_ReadPlayerFlags(D2GameStrc* pGame, uint32_t dwFlags);
//D2Game.0x6FC8DD00
int32_t __fastcall PLRSAVE2_ReadSaveHeader(D2GameStrc* pGame, D2ClientStrc* pClient, uint8_t** ppSection, uint8_t* pEnd, D2UnitStrc** ppPlayer);
//D2Game.0x6FC8E070
int32_t __fastcall PLRSAVE2_LoadWaypointData(D2GameStrc* pGame, D2UnitStrc* pUnit, uint8_t** ppSection, uint8_t* pEnd, int32_t nUnused);
//D2Game.0x6FC8E0F0
int32_t __fastcall PLRSAVE2_LoadStatsEx(D2GameStrc* pGame, D2UnitStrc* pUnit, uint8_t** ppSection, uint8_t* pEnd, uint32_t nVersion);
//D2Game.0x6FC8E250
int32_t __fastcall PLRSAVE2_LoadStats(D2GameStrc* pGame, D2UnitStrc* pUnit, uint8_t** ppSection, uint8_t* pEnd, uint32_t nVersion, int32_t nStats);
//D2Game.0x6FC8E330
int32_t __fastcall PLRSAVE2_LoadSkills(D2GameStrc* pGame, D2UnitStrc* pPlayer, uint8_t** ppSection, uint8_t* pEnd, int32_t nUnused, int32_t nSkills);
//D2Game.0x6FC8E420
int32_t __fastcall PLRSAVE2_LoadCorpses(D2GameStrc* pGame, D2UnitStrc* pPlayer, uint8_t** ppSection, uint8_t* pEnd, uint32_t nVersion, int32_t* a6);
//D2Game.0x6FC8E670
D2UnitStrc* __fastcall PLRSAVE2_LoadMercData(D2GameStrc* pGame, D2UnitStrc* pPlayer, D2MercSaveDataStrc* pData, uint32_t dwVersion);
//D2Game.0x6FC8E850
int32_t __fastcall PLRSAVE2_ReadPetSection(D2GameStrc* pGame, D2UnitStrc* pPlayer, D2UnitStrc* pMerc, uint8_t** ppSection, uint8_t* pEnd, uint32_t dwVersion, int32_t* a6);
//D2Game.0x6FC8E920
int32_t __fastcall PLRSAVE2_CreateItem(D2GameStrc* pGame, D2UnitStrc* pPlayer, D2UnitStrc** ppItem, uint8_t** ppSection, uint8_t* pEnd, uint32_t dwVersion);
//D2Game.0x6FC8EAB0
int32_t __fastcall PLRSAVE2_ReadIronGolemSection(D2GameStrc* pGame, D2UnitStrc* pPlayer, uint8_t** ppSection, uint8_t* pEnd, uint32_t dwVersion);
//D2Game.0x6FC8EBA0
void __fastcall PLRSAVE2_InitializeStats(D2GameStrc* pGame, D2UnitStrc* pUnit, int32_t nHitpoints, int32_t nMana);
//D2Game.0x6FC8EF20
int32_t __fastcall PLRSAVE2_ProcessSaveFile(D2GameStrc* pGame, D2ClientStrc* pClient, uint8_t* pSaveFile, uint32_t nSize, D2UnitStrc** ppPlayer, int32_t nUnused1, int32_t nUnused2, int32_t nUnused3);
//D2Game.0x6FC8F3A0
D2CharStatsTxt* __fastcall PLRSAVE2_GetCharStatsTxtRecord(int32_t nClass);
