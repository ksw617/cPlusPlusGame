#include "ObjectPoolManager.h"
#include "Bullet.h"

void ObjectPoolManager::Init()
{
    bullets = new Object*[bulletCount];
	for (int i = 0; i < bulletCount; i++)
	{
		bullets[i] = new Bullet(COLOR::GREEN, "¡Ü");
	}
}

Object* ObjectPoolManager::GetBullet()
{
	for (int i = 0; i < bulletCount; i++)
	{
		if (bullets[i]->act == false)
		{
			return bullets[i];
		}
	}
	
	//Todo
    return nullptr;
}
