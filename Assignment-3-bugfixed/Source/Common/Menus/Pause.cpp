//
//  MainMenu.cpp
//  GAM-1514 OSX Game
//
//  Created by Bradley Flood on 2013-10-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "Pause.h"
#include "../UI/UIButton.h"
#include "../Game/Game.h"
#include "../Game/Level.h"
#include "../Screen Manager/ScreenManager.h"


Pause::Pause() : Menu(NULL, NULL)
{
	m_Background = new OpenGLTexture("Pause");
	addButton(new UIButton("ButtonResume"));
	addButton(new UIButton("ButtonExit"));
	addButton(new UIButton("ButtonMainMenu"));

}

Pause::~Pause()
{
	if(m_Background != NULL)
	{
		delete m_Background;
		m_Background = NULL;
	}
}

const char* Pause::getName()
{
	return PAUSE_SCREEN_NAME;
}

void Pause::buttonAction(UIButton* button)
{
	int index = getIndexForButton(button);
	if(index == 0)
	{
		ScreenManager::getInstance()->switchScreen(GAME_SCREEN_NAME);
	}
	else if (index == 1)
	{
		exit(1);
	}
	else if(index == 2)
	{
		ScreenManager::getInstance()->switchScreen(MAIN_MENU_SCREEN_NAME);
	}
}
