#pragma once
#include "Header.h"

#define BufferWidth 80	// ���� ���� ũ��
#define BufferHeight 40 // ���� ���� ũ��


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
	HANDLE hBuffer[2];	//â �ΰԸ� �����ϴ� �ڵ�
	int screenIndex;	//hBuffer[screenIndex], screenIndex == 0 or 1
public:
	void InitBuffer();
	void FlipBuffer();
	void ClearBuffer();
	void WriteBuffer(int x, int y, const char* shape, COLOR color);
	void CloseBuffer();

};

