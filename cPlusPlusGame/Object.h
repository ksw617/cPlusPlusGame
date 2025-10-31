#pragma once
#include "Enum.h"

class Object
{
public:
	int x;
	int y;
	COLOR color;
	const char* shape;
public:
	Object() = default;
	Object(int _x, int _y, COLOR _color, const char* _shape) 
		: x(_x), y(_y), color(_color), shape(_shape) {}
public:
	virtual void Init() abstract;
	virtual	void Update() abstract;

};

