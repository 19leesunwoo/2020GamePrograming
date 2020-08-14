#include "stdafx.h"
#include "Background.h"

Background::Background()
{
	background = new Sprite("Resources/Image/Background.png");
	AddChild(background);
}

Background::~Background()
{
}

void Background::Update(float dTime)
{
	Object::Update(dTime);
	setPos(getPosX() - 6, getPosY());
}

void Background::Render()
{
	Object::Render();
	background->Render();
}
