//
//  MainMenu.cpp
//  GAM-1514 OSX Game
//
//  Created by Bradley Flood on 2013-10-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "Win.h"
#include "../UI/UIButton.h"
#include "../Game/Game.h"
#include "../Game/Level.h"
#include "../Screen Manager/ScreenManager.h"


Win::Win() : Menu(NULL, NULL)
{
	m_Background = new OpenGLTexture("Win");
	addButton(new UIButton("ButtonLoadLevel"));
	addButton(new UIButton("ButtonExit"));
	addButton(new UIButton("ButtonMainMenu"));

}

Win::~Win()
{
	if(m_Background != NULL)
	{
		delete m_Background;
		m_Background = NULL;
	}
}

const char* Win::getName()
{
	return WIN_SCREEN_NAME;
}

void Win::buttonAction(UIButton* button)
{
	int index = getIndexForButton(button);
	if(index == 0)
	{
		ScreenManager::getInstance()->switchScreen(LOAD_MENU_SCREEN_NAME);
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
