#pragma once
#include "Scene.h"
class Stage : public Scene
{
private:
	class Object* player = nullptr;
public:
	~Stage();
public:
	virtual void Init();
	virtual void Update();

};

