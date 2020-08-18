#pragma once
#include "Scene.h"
#include "Sprite.h"
#include "Animation.h"
#include "MainScene.h"
#include <list>
//Object Headers
#include "Number.h"
#include "Player.h"
#include "Background.h"
#include "Bridge.h"
#include "Coin.h"
#include "Obstacle.h"
#include "Font.h"
#include <string>

class GameScene : public Scene
{
private :
	int textNum;

	Font* text;
	Font* name;

	Font* choice_1;
	Font* choice_2;
	Font* choice_3;
	
	Sprite* choiceArea_1;
	Sprite* choiceArea_2;
	Sprite* choiceArea_3;
	Sprite* background;
	Sprite* naration;
	Sprite* Chat;

	bool isNaration;
	bool choice;


	

public :
	GameScene();
	~GameScene();

	void Render();
	void Update(float dTime);

	void CollisionCheck();
	void OptimizationObject();
	void InstantiateObject();
	
	void TimerSetting(float dTime);
	void UISetting();
};