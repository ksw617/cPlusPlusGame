#pragma once
#include "Player.h"
class Bullet : public Object
{
public:
	Bullet(COLOR _color, const char* _shape)
		: Object(false, 0, 0, _color, _shape) {
	}
public:
	virtual void Init() override;
	virtual void Update() override;
};

