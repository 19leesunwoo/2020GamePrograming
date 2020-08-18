#include "stdafx.h"
#include "GameScene.h"

GameScene::GameScene() {
	textNum = 0;

	background = new Sprite("Resources/Image/Background.png");
	AddObject(background);
	background->setPos(0, 0);

	/*choiceArea_1 = new Sprite("Resources/Image/Choice.png");
	AddObject(choiceArea_1);
	naration->setScale(0.875, 1);
	background->setPos(0, 447);
	naration->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));

	choiceArea_2 = new Sprite("Resources/Image/Choice.png");
	AddObject(choiceArea_2);
	naration->setScale(0.875, 1);
	background->setPos(0, 447);
	naration->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));


	choiceArea_3 = new Sprite("Resources/Image/Choice.png");
	AddObject(choiceArea_3);
	naration->setScale(0.875, 1);
	background->setPos(0, 447);
	naration->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));*/



	naration = new Sprite("Resources/Image/Naration.png");
	AddObject(naration);
	naration->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
	naration->setScale(0.875, 1);
	naration->setPos(0, 447);
	AddObject(naration);

	Chat = new Sprite("Resources/Image/대화창.png");
	Chat->setPos(0, 80);
	Chat->setColor(D3DCOLOR_ARGB(150, 255, 255, 255));
	Chat->setScale(0.875, 1);
	AddObject(Chat);
	
	
	/*background = new Sprite("Resources/Image/background.png");
	background->setPos(0, 0);
	AddObject(background);*/

	text = new Font();
	text->setText("안녕하세요 저는 C언어 입니다");
	text->setPos(60, 580);
	text->setWidth(15);
	text->setHeight(40);

	name = new Font();
	name->setText("C언어");
	name->setPos(70, 460);
	name->setWidth(12);
	name->setHeight(35);

	
	/*choice_1 = new Font();
	choice_1->setText("");*/

	isNaration = false;

}

GameScene::~GameScene() {

}

void GameScene::Render() {
	
	background->Render();


	naration->Render();
	/*background->Render();*/
	Chat->Render();
	if (text != nullptr || name != nullptr) {
		name->Render();
		text->Render();
	}
}

void GameScene::Update(float dTime) {

	if (!isNaration) {
		Chat->setColor(D3DCOLOR_ARGB(150, 255, 255, 255));
		naration->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
	}
	else
	{
		Chat->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
		naration->setColor(D3DCOLOR_ARGB(150, 255, 255, 255));
	}


	if (inputManager->GetKeyState('Z') == KEY_DOWN) {
		textNum++;
		switch (textNum)
		{
		case 1:
			text->setText("이수민은 병신새끼");
			name->setText("이선우");
			break;
		case 2:
			isNaration = true;
			name->setText("");
			break;
		}

		

	}


}

void GameScene::TimerSetting(float dTime) {
	
}

void GameScene::UISetting() {
	
}

void GameScene::OptimizationObject() {
	
}

void GameScene::CollisionCheck() {
	
}

void GameScene::InstantiateObject() {
	

	
}