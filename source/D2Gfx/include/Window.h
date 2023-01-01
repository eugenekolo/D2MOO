#pragma once

#include <cstdint>

#include <Windows.h>


#pragma pack(push, 1)
struct D2WindowPlacementStrc
{
	HWND hWnd;								//0x00
	WINDOWPLACEMENT windowPlacement;		//0x04
};
#pragma pack(pop)


//D2Gfx.0x6FA74450 (#10023)
int32_t __stdcall WINDOW_Create(int32_t bWindowed, int32_t nResolution);
//D2Gfx.0x6FA74820 (#10024)
int32_t __stdcall WINDOW_Destroy();
//D2Gfx.0x6FA748B0 (#10025)
void __stdcall WINDOW_SetPaused(int32_t bPaused);
//D2Gfx.0x6FA748C0 (#10026)
int32_t __stdcall WINDOW_GetState();
//D2Gfx.0x6FA749C0 (#10027)
HWND __stdcall WINDOW_GetWindow();
//D2Gfx.0x6FA749D0 (#10041)
int32_t __stdcall WINDOW_GetScreenSize(int32_t* pWidth, int32_t* pHeight);
//D2Gfx.0x6FA74A10 (#10029)
void __stdcall WINDOW_ShowCursor(int32_t bShow);
//D2Gfx.0x6FA74A80 (#10028)
int32_t __stdcall WINDOW_IsFullScreen();
//D2Gfx.0x6FA74AA0 (#10043)
int32_t __stdcall WINDOW_Activate(int32_t bActive);
//D2Gfx.0x6FA74AE0 (#10030)
int32_t __stdcall WINDOW_Resize(int32_t nResolution, int32_t bForceResize);
//D2Gfx.0x6FA74C60 (#10031)
void __stdcall WINDOW_ClearCaches();
//D2Gfx.0x6FA74C70 (#10032)
void __stdcall WINDOW_BeginCutScene();
//D2Gfx.0x6FA74CA0 (#10033)
void __stdcall WINDOW_EndCutScene(int32_t nResolution);
//D2Gfx.0x6FA74DE0 (#10034)
void __stdcall WINDOW_PlayCutScene(const char* szFile, int32_t nResolution, void(__cdecl* pfFrame)());
//D2Gfx.0x6FA74E20 (#10035)
int32_t __stdcall WINDOW_CheckCutScene();
//D2Gfx.0x6FA74E50 (#10036)
void __stdcall WINDOW_DecodeSmacker(const char* szSmacker, uint8_t* pBuffer, int32_t nVersion);
//D2Gfx.0x6FA74E90 (#10037)
void __stdcall WINDOW_PlaySmacker(void* pContext);
//D2Gfx.0x6FA74ED0 (#10038)
void __stdcall WINDOW_CloseSmacker(void* pContext);
//D2Gfx.0x6FA74F10 (#10039)
void __stdcall WINDOW_UpdatePlacement();
//D2Gfx.0x6FA74FA0 (#10040)
void __stdcall WINDOW_ShowAll();
