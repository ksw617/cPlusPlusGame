#include "DoubleBuffer.h"

void DoubleBuffer::InitBuffer()
{
	//���� ��ũ�� index���� 0
	screenIndex = 0;

	//size.x = 80, size.y = 40 : ȭ�� ũ��
	COORD size = { BufferWidth, BufferHeight };

	//â ũ�� ���� : 0, ���� : 0 ������ : 80 - 1, �Ʒ��� : 40 - 1
	SMALL_RECT rect = { 0,0,BufferWidth - 1, BufferHeight - 1 };

	//0�� ���� �����
	hBuffer[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	//0�� ȭ�� ���� ������ ����(���� ���� �ּ�, ũ��)
	SetConsoleScreenBufferSize(hBuffer[0], size);
	//0�� â ������ ����
	SetConsoleWindowInfo(hBuffer[0], TRUE, &rect);

	//1�� ���� �����
	hBuffer[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	//1�� ȭ�� ���� ������ ����(���� ���� �ּ�, ũ��)
	SetConsoleScreenBufferSize(hBuffer[1], size);
	//1�� â ������ ����
	SetConsoleWindowInfo(hBuffer[1], TRUE, &rect);

	CONSOLE_CURSOR_INFO info;	//�ܼ� Ŀ�� ���� ����ü
	info.dwSize = 1;			//Ŀ�� ũ��
	info.bVisible = FALSE;		//Ŀ�� �Ⱥ��̰�

	//0 & 1 ������ ���ۿ� Ŀ�� ���� ���
	SetConsoleCursorInfo(hBuffer[0], &info);
	SetConsoleCursorInfo(hBuffer[1], &info);

}

void DoubleBuffer::FlipBuffer()
{
	SetConsoleActiveScreenBuffer(hBuffer[screenIndex]);
	screenIndex = !screenIndex;

}

void DoubleBuffer::ClearBuffer()
{
	COORD pos = { 0,0 };
	DWORD dw;

	FillConsoleOutputCharacter(hBuffer[screenIndex], ' ', BufferWidth * BufferHeight, pos, &dw);

}

void DoubleBuffer::WriteBuffer(int x, int y, const char* shape, COLOR color)
{
	COORD pos = { x * 2, y };

	SetConsoleCursorPosition(hBuffer[screenIndex], pos);
	SetConsoleTextAttribute(hBuffer[screenIndex], (int)color);

	DWORD dw;

	WriteFile(hBuffer[screenIndex], shape, strlen(shape), &dw, NULL);

}

void DoubleBuffer::CloseBuffer()
{	   	//���� �ݱ�
	CloseHandle(hBuffer[0]);
	CloseHandle(hBuffer[1]);

}
