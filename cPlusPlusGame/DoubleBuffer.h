#pragma once
#include "Header.h"

#define BufferWidth 80	// 가로 버퍼 크기
#define BufferHeight 40 // 세로 버퍼 크기


class DoubleBuffer
{
private:
	static DoubleBuffer* instance;
public:
	static DoubleBuffer* Instance()
	{
		if (instance == nullptr)
		{
			instance = new DoubleBuffer;
		}

		return instance;
	}
private:
	HANDLE hBuffer[2];	//창 두게를 제어하는 핸들
	int screenIndex;	//hBuffer[screenIndex], screenIndex == 0 or 1
public:
	void InitBuffer();
	void FlipBuffer();
	void ClearBuffer();
	void WriteBuffer(int x, int y, const char* shape, COLOR color);
	void CloseBuffer();

};

