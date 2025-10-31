#include "Stage.h"
#include "Player.h"

Stage::~Stage()
{
	if (player != nullptr)
	{
		delete player;
		player = nullptr;
	}
}

void Stage::Init()
{
	player = new Player(10,10,COLOR::YELLOW, "¿Ê");
	player->Init();
}
void Stage::Update()
{
	player->Update();
}