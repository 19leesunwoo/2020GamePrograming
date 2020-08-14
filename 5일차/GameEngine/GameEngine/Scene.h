#pragma once
#include "Object.h"

class Scene
{
private:
	list<Object*>objectList;
	list<Object*>uiList;
public:
	Scene();
	~Scene();

	virtual void Render();
	virtual void Update(float dTime);

	void AddObject(Object* object);
	void RemoveObject(Object* object);
};

