#include "SceneManager.h"
#include "Logo.h"
#include "Menu.h"
#include "Stage.h"

SceneManager* SceneManager::instance = nullptr;

void SceneManager::LoadScene(SCENE_ID id)
{
	if (currentScene != nullptr)
	{
		delete currentScene;
		currentScene = nullptr;
	}

	switch (id)
	{
	case SCENE_ID::LOGO:
		currentScene = new Logo;	
		break;
	case SCENE_ID::MENU:
		currentScene = new Menu;
		break;
	case SCENE_ID::STAGE:
		currentScene = new Stage;
		break;
	default:
		break;
	}

	currentScene->Init();

}

void SceneManager::Update()
{
	currentScene->Update();
}