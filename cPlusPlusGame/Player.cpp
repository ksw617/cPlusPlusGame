#include "Player.h"
#include "DoubleBuffer.h"	 
#include "ObjectPoolManager.h"


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

	if (GetAsyncKeyState(VK_RETURN))
	{
		Object* bullet = ObjectPoolManager::Instance()->GetBullet();
		bullet->act = true;
		bullet->x = x;
		bullet->y = y;
	}

	DoubleBuffer::Instance()->WriteBuffer(x, y, shape, color);
}
