#pragma once
#include "Header.h"
#include "Singleton.h"

#define BufferWidth 80	// ���� ���� ũ��
#define BufferHeight 40 // ���� ���� ũ��


class DoubleBuffer : public Singleton<DoubleBuffer>
{

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

