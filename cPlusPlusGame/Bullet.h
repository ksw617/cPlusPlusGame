#pragma once
#include "Player.h"
class Bullet : public Object
{
public:
	Bullet(int _x, int _y, COLOR _color, const char* _shape)
		: Object(_x, _y, _color, _shape) {
	}
public:
	virtual void Init() override;
	virtual void Update() override;
};

