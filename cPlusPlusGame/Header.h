#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;
using BYTE = unsigned char;

enum class SCENE_ID : BYTE
{
	 LOGO,
	 MENU,
	 STAGE,
};

enum class COLOR : BYTE
{
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	MAGENTA,
	BROWN,
	LIGHTGRAY,
	DARKGRAY,
	LIGHTBLUE,
	LIGHTGREEN,
	LIGHTCYAN,
	LIGHTRED,
	LIGHTMAGENTA,
	YELLOW,
	WHITE,
};
