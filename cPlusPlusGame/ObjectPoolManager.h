#pragma once
#include "Singleton.h"
class ObjectPoolManager : public Singleton<ObjectPoolManager>
{
private:
	int bulletCount = 10;
	class Object** bullets = nullptr;
public:
	void Init();
public:
	Object* GetBullet();

};

