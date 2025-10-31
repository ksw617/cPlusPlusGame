#include "MapManager.h"
#include "DoubleBuffer.h"

MapManager* MapManager::instance = nullptr;

void MapManager::Init()
{

}

void MapManager::Update()
{
	for (int y = 0; y < MAP_HEIGHT; y++)
	{
		for (int x = 0; x < MAP_WIDHT; x++)
		{
			switch (map[y][x])
			{
			case 0:
				break;
			case 1:
				DoubleBuffer::Instance()->WriteBuffer(x, y, "бс", COLOR::WHITE);
				break;
			default:
				break;
			}
		}
	}
}