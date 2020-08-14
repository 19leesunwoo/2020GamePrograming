#pragma once
#include "Scene.h"
#include "Sprite.h"
#include <list>
#include "Animation.h"
#include "MainScene.h"
#include "Number.h"
#include "Player.h"
#include "Background.h"

class GameScene :
	public Scene
{
private:
	list<Background*> backgroundList;
	list<Sprite*>bridgeList;
	list<Sprite*>obsstacleList;
	list<Sprite*>coinList;
	int score;
	bool backgroundInstantiate;

	Number numArray[4];
	Player* player;
	

public:
	GameScene();
	~GameScene();

	void Render();
	void Update(float dTime);

};

