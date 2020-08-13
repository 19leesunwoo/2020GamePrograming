#pragma once
#include "Scene.h"
#include "Sprite.h"
#include <list>
#include "Animation.h"
class GameScene :
	public Scene
{
private:
	list<Sprite*> backgroundList;
	list<Sprite*>bridgeList;
	Animation* player;
	float gravity;
	bool doubleJump, isJump;
public:
	GameScene();
	~GameScene();

	void Render();
	void Update(float dTime);

};

