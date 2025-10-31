#include "Bullet.h"
#include "DoubleBuffer.h"

void Bullet::Init()
{
}

void Bullet::Update()
{
	x++;
	DoubleBuffer::Instance()->WriteBuffer(x, y, shape, color);
}
