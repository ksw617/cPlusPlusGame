#pragma once
#include "Enum.h"
#include "Singleton.h"
class SceneManager : public Singleton<SceneManager>
{
private:
	class Scene* currentScene = nullptr;
public:
	void LoadScene(SCENE_ID id);
	void Update();
};

