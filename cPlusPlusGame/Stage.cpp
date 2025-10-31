#include "Stage.h"
#include "Player.h"
#include "MapManager.h"

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
	player = new Player(10,10,COLOR::YELLOW, "��");
	player->Init();
}
void Stage::Update()
{
	player->Update();
	MapManager::Instance()->Update();

	
}