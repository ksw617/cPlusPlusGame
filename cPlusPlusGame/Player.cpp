#include "Player.h"
#include "DoubleBuffer.h"


void Player::Init()
{

}

void Player::Update()
{
	DoubleBuffer::Instance()->WriteBuffer(x, y, shape, color);
}
