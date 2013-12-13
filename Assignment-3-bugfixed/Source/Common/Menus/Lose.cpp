//
//  MainMenu.cpp
//  GAM-1514 OSX Game
//
//  Created by Bradley Flood on 2013-10-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "Lose.h"
#include "../UI/UIButton.h"
#include "../Game/Game.h"
#include "../Game/Level.h"
#include "../Screen Manager/ScreenManager.h"


Lose::Lose() : Menu(NULL, NULL)
{
	m_Background = new OpenGLTexture("GameOver");
	addButton(new UIButton("ButtonMainMenu"));
	addButton(new UIButton("ButtonExit"));

}

Lose::~Lose()
{
	if(m_Background != NULL)
	{
		delete m_Background;
		m_Background = NULL;
	}
}

const char* Lose::getName()
{
	return LOSE_SCREEN_NAME;
}

void Lose::buttonAction(UIButton* button)
{
	int index = getIndexForButton(button);
	if(index == 0)
	{
		ScreenManager::getInstance()->switchScreen(MAIN_MENU_SCREEN_NAME);
	}
	else if (index == 1)
	{
		exit(1);
	}

}
