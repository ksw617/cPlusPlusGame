#include "Menu.h"
#include "SceneManager.h"
#include "DoubleBuffer.h"

void Menu::Init()
{
}
void Menu::Update()
{
	DoubleBuffer::Instance()->WriteBuffer(10, 10, "MENU", COLOR::YELLOW);
	if (GetAsyncKeyState(VK_RETURN))
	{
		SceneManager::Instance()->LoadScene(SCENE_ID::STAGE);
	}
}