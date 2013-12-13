//
//  MainMenu.cpp
//  GAM-1514 OSX Game
//
//  Created by Bradley Flood on 2013-10-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "Highscore.h"
#include "../UI/UIButton.h"
#include "../Game/Game.h"
#include "../Game/Level.h"
#include "../Screen Manager/ScreenManager.h"


Highscore::Highscore() : Menu(NULL, NULL)
{
	m_Background = new OpenGLTexture("Highscore");
	addButton(new UIButton("ButtonLoadLevel"));
}

Highscore::~Highscore()
{
	if(m_Background != NULL)
	{
		delete m_Background;
		m_Background = NULL;
	}
}

const char* Highscore::getName()
{
	return HIGHSCORE_SCREEN_NAME;
}

void Highscore::buttonAction(UIButton* button)
{
	int index = getIndexForButton(button);
	if(index == 0)
	{
		ScreenManager::getInstance()->switchScreen(MAIN_MENU_SCREEN_NAME);
	}

}
