#pragma once
#include "Header.h"
class SceneManager
{
private:
	static SceneManager* instance;
public:
	static SceneManager* Instance()
	{
		if (instance == nullptr)
		{
			instance = new SceneManager;
		}

		return instance;
	}

private:
	class Scene* currentScene = nullptr;
public:
	void LoadScene(SCENE_ID id);
	void Update();
};

