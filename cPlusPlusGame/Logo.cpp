#include "Logo.h"
#include "SceneManager.h"
#include "DoubleBuffer.h"

void Logo::Init()
{
}
void Logo::Update()
{
	DoubleBuffer::Instance()->WriteBuffer(10,10,"LOGO", COLOR::LIGHTMAGENTA);
	if (GetAsyncKeyState(VK_RETURN))
	{
		SceneManager::Instance()->LoadScene(SCENE_ID::MENU);
	}
}