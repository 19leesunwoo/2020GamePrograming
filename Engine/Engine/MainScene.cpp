#include "stdafx.h"
#include "MainScene.h"
#include <string.h>


MainScene::MainScene() {
	background = new Sprite("Resources/Image/blackGroundBlack.png");
	AddObject(background);
	background->setPos(-100, 80);

	

	startButton = new Sprite("Resources/Image/in.png");
	AddObject(startButton);
	startButton->setPos(SCREEN_WIDTH / 3, 450);

	exitButton = new Sprite("Resources/Image/out.png");
	AddObject(exitButton);
	exitButton->setPos(SCREEN_WIDTH / 3, 600);

	//soundManager->LoadWaveFile("Resources/Sound/bgm.wav", "Background");
	//soundManager->PlayWaveFile("Background");

	font = new Font();
	font->setText("¾È³çÇÏ¼¼¿ä");
	font->setPos(100, 100);
	font->setWidth(10);
	font->setHeight(20);
}

MainScene::~MainScene() {

}

void MainScene::Render() {
	background->Render();
	
	startButton->Render();
	exitButton->Render();
	if (font != nullptr) {
		font->Render();
	}

	
	
	
}

void MainScene::Update(float dTime) {
	Scene::Update(dTime);

	if (inputManager->GetKeyState(VK_LBUTTON) == KEY_DOWN) {

		if (startButton->IsPointInRect(inputManager->GetMousePos())) {
			sceneManager->ChangeScene(new GameScene());
			return;
		}

		if (exitButton->IsPointInRect(inputManager->GetMousePos())) {
			PostQuitMessage(0);
			return;
		}
		
	}
	if (inputManager->GetKeyState('Z') == KEY_DOWN) {
		SAFE_DELETE(font);
	}

	

}