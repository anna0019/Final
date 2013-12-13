//
//  MainMenu.cpp
//  GAM-1514 OSX Game
//
//  Created by Bradley Flood on 2013-10-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "MainMenu.h"
#include "../UI/UIButton.h"
#include "../Game/Game.h"
#include "../Game/Level.h"
#include "../Screen Manager/ScreenManager.h"


MainMenu::MainMenu() : Menu(NULL, NULL)

{

	m_Background = new OpenGLTexture("MainMenuBackground");
	addButton(new UIButton("ButtonLoadLevel"));
	addButton(new UIButton("ButtonHighscore"));
	addButton(new UIButton("ButtonExit"));
	addButton(new UIButton("MenuButtonSettings"));
	addButton(new UIButton("ButtonLevelEditor"));
}

MainMenu::~MainMenu()
{
	if(m_Background != NULL)
	{
		delete m_Background;
		m_Background = NULL;
	}
}

const char* MainMenu::getName()
{
	return MAIN_MENU_SCREEN_NAME;
}

void MainMenu::buttonAction(UIButton* button)
{
	int index = getIndexForButton(button);
	if(index == 0)
	{
		ScreenManager::getInstance()->switchScreen(LOAD_MENU_SCREEN_NAME);
	}
	else if(index == 1)
	{
		ScreenManager::getInstance()->switchScreen(HIGHSCORE_SCREEN_NAME);
	}
	else if (index == 2)
	{
		exit(1);
	}
	else if(index == 3)
	{
		ScreenManager::getInstance()->switchScreen(SETTINGS_SCREEN_NAME);
	}

	else if(index == 4)
	{
		ScreenManager::getInstance()->switchScreen(LEVEL_EDITOR_SCREEN_NAME);
	}
}
