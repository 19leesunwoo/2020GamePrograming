#include "stdafx.h"
#include "GameScene.h"

GameScene::GameScene() {
	textNum = 0;

	background = new Sprite("Resources/Image/Background.png");
	AddObject(background);
	background->setPos(0, 0);

	choiceArea_1 = new Sprite("Resources/Image/Choice.png");
	AddObject(choiceArea_1);
	choiceArea_1->setScale(1, 1);
	choiceArea_1->setPos(270, 100);
	choiceArea_1->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));

	choiceArea_2 = new Sprite("Resources/Image/Choice.png");
	AddObject(choiceArea_2);
	choiceArea_2->setScale(1, 1);
	choiceArea_2->setPos(270, 300);
	choiceArea_2->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));


	choiceArea_3 = new Sprite("Resources/Image/Choice.png");
	AddObject(choiceArea_3);
	choiceArea_3->setScale(1, 1);
	choiceArea_3->setPos(270, 500);
	choiceArea_3->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));


	C = new Sprite("Resources/Image/C쨩.png");
	AddObject(C);
	C->setScale(0.45, 0.45);
	C->setPos(70, 130);
	C->setColor(D3DCOLOR_ARGB(255, 255, 255, 255));

	C_s = new Sprite("Resources/Image/C#쨩.png");
	AddObject(C);
	C_s->setScale(0.45, 0.45);
	C_s->setPos(-250, 130);
	C_s->setColor(D3DCOLOR_ARGB(255, 255, 255, 255));

	C_p = new Sprite("Resources/Image/C++쨩.png");
	AddObject(C_p);
	C_p->setScale(0.45, 0.45);
	C_p->setPos(400, 130);
	C_p->setColor(D3DCOLOR_ARGB(255, 255, 255, 255));

	

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

	
	choice_1 = new Font();
	choice_1->setText("");
	choice_1->setPos(390, 125);
	choice_1->setWidth(15);
	choice_1->setHeight(40);

	choice_2 = new Font();
	choice_2->setText("");
	choice_2->setPos(390, 325);
	choice_2->setWidth(15);
	choice_2->setHeight(40);

	choice_3 = new Font();
	choice_3->setText("");
	choice_3->setPos(390, 525);
	choice_3->setWidth(15);
	choice_3->setHeight(40);

	isNaration = false;
	choice = false;
	choicePart = false;

}

GameScene::~GameScene() {

}

void GameScene::Render() {
	
	background->Render();

	C->Render();
	C_s->Render();
	C_p->Render();
	naration->Render();
	Chat->Render();

	choiceArea_1->Render();
	choiceArea_2->Render();
	choiceArea_3->Render();
	if (text != nullptr || name != nullptr) {
		name->Render();
		text->Render();
		choice_1->Render();
		choice_2->Render();
		choice_3->Render();
	}
}

void GameScene::Update(float dTime) {
	std::cout << textNum;

	Check();



	if (inputManager->GetKeyState('Z') == KEY_DOWN) {
		textNum++;
	}


	switch (textNum)
	{
	case 1:
		text->setText("이수민은 병신새끼");
		name->setText("이선우");
		break;
	case 2:
		isNaration = true;

		break;
	case 3:
		choice = true;
		choice_1->setText("C와 밥을 먹는다");
		choice_2->setText("C#과 밥을 먹는다");
		choice_3->setText("C++과 밥을 먹는다");

		break;
	
	}

	switch (textNum)
	{
	case 3:
		if (inputManager->GetKeyState(VK_LBUTTON) == KEY_DOWN) {

				if (choiceArea_1->IsPointInRect(inputManager->GetMousePos())) {
					isNaration = false;
					choice = false;
					ChoiceEmpty();
					text->setText("좋아!");
					name->setText("C");
					return;
				}

				if (choiceArea_2->IsPointInRect(inputManager->GetMousePos())) {
					isNaration = false;
					choice = false;
					ChoiceEmpty();
					text->setText("그래, 그러지 뭐.");
					name->setText("C#");
					textNum = 301;
					return;
				}

				if (choiceArea_3->IsPointInRect(inputManager->GetMousePos())) {
					isNaration = false;
					choice = false;
					ChoiceEmpty();
					
					text->setText("내가 왜 너랑 밥을 먹어야 하는데 병신아.");
					name->setText("C++");
					textNum = 300;
					return;
				}

			}
		break;

	case 300:
		isNaration = false;
		choice = false;
		ChoiceEmpty();

		text->setText("내가 왜 너랑 밥을 먹어야 하는데 병신아.");
		name->setText("C++");
		break;

	case 301:
		isNaration = true;
		choice = false;
		ChoiceEmpty();
		text->setText("당신은 C++에게 식사를 권유할 만큼 그녀와 친하지 않다.");
	}


}

void GameScene::TimerSetting(float dTime) {
	
}

void GameScene::UISetting() {
	
}

void GameScene::Check()
{
	if (!isNaration) {

		Chat->setColor(D3DCOLOR_ARGB(150, 255, 255, 255));
		naration->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
		choiceArea_1->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
		choiceArea_2->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
		choiceArea_3->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
	}
	else if (isNaration == true)
	{
		name->setText("");
		Chat->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
		naration->setColor(D3DCOLOR_ARGB(150, 255, 255, 255));
		choiceArea_1->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
		choiceArea_2->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
		choiceArea_3->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
	}

	if (choice == true) {
		name->setText("");
		text->setText("");
		Chat->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
		naration->setColor(D3DCOLOR_ARGB(0, 255, 255, 255));
		choiceArea_1->setColor(D3DCOLOR_ARGB(150, 255, 255, 255));
		choiceArea_2->setColor(D3DCOLOR_ARGB(150, 255, 255, 255));
		choiceArea_3->setColor(D3DCOLOR_ARGB(150, 255, 255, 255));


	}


}

void GameScene::ChoiceEmpty()
{
	choice_1->setText("");
	choice_2->setText("");
	choice_3->setText("");
}

void GameScene::OptimizationObject() {
	
}

void GameScene::CollisionCheck() {
	
}

void GameScene::InstantiateObject() {
	

	
}