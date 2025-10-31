#include "Player.h"
#include "DoubleBuffer.h"


void Player::Init()
{

}

void Player::Update()
{
	if (GetAsyncKeyState(VK_LEFT))
	{
		x--;
	}

	if (GetAsyncKeyState(VK_RIGHT))
	{
		x++;
	}

	if (GetAsyncKeyState(VK_UP))
	{
		y--;
	}

	if (GetAsyncKeyState(VK_DOWN))
	{
		y++;
	}

	DoubleBuffer::Instance()->WriteBuffer(x, y, shape, color);
}
