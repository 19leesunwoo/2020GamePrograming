#pragma once
#include "Object.h"
#include "Sprite.h"
#include <vector>

class Animation :
	public Object
{
private:
	int height;
	int width;
	int maxFrame;
	int currentFrame;
	int fps;

	D3DCOLOR color;
	float timeChecker;

	vector<Sprite*>spriteVector;

public:
	Animation(int fps);
	~Animation();
	void Render();
	void Update(float dTime);
	void AddFrame(char* path);
};

