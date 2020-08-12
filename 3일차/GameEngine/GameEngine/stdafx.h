#pragma once

//프로그램 세팅
#define CONSOLE_OFF false
#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768
#define BG_COLOR D3DCOLOR_ARGB(255,255,255,255)
#define PROGRAM_NAME TEXT("Engine")
#define CONSOLE_NAME TEXT("Console")

//윈도우 헤더
#include <Windows.h>
#include <XAudio2.h>


//다이렉트 x 헤더
#include <d3dx9.h>
#include <d3d9.h>

//디버그헤더
#include <iostream>

//게임 메니저 헤더
#include "TextureManager.h"
#include "SceneManager.h"
#include "InputManager.h"


//상수
#define KEY_NONE 0
#define KEY_UP 1
#define KEY_DOWN 2
#define KEY_ON 3

#define SAFE_RELEASE(p){if(p){p->Release();(p)=NULL;}}
#define SAFE_DELETE(p){if(p){delete(p);(p)=nullptr;}}
#define SAFE_DELETE_ARRAY(p){if(p){delete[](p);(p)=nullptr;}}

//전역
extern LPDIRECT3D9 pd3d;
extern D3DPRESENT_PARAMETERS d3dpp;
extern LPDIRECT3DDEVICE9 pd3dDevice;
extern LPD3DXSPRITE pd3dSprite;
extern HWND hWnd;
extern SceneManager* sceneManager;
extern TextureManager* textureManager;
extern InputManager* inputManager;
