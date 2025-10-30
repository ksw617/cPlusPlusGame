#include "SceneManager.h"
#include "DoubleBuffer.h"

int main()
{
	DoubleBuffer::Instance()->InitBuffer();
	SceneManager::Instance()->LoadScene(SCENE_ID::LOGO);

	while (true)
	{	
		SceneManager::Instance()->Update();


		DoubleBuffer::Instance()->FlipBuffer();
		DoubleBuffer::Instance()->ClearBuffer();

		Sleep(50);
	}


	DoubleBuffer::Instance()->CloseBuffer();
	return 0;
}