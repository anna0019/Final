//
//  MainMenu.cpp
//  GAM-1514 OSX Game
//
//  Created by Bradley Flood on 2013-10-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "Splash.h"
#include "../UI/UIButton.h"
#include "../Game/Game.h"
#include "../Game/Level.h"
#include "../Screen Manager/ScreenManager.h"


Splash::Splash() : Menu(NULL, NULL)
{
	m_Background = new OpenGLTexture("Splash");
	addButton(new UIButton("ButtonLoadLevel"));
}

Splash::~Splash()
{
	if(m_Background != NULL)
	{
		delete m_Background;
		m_Background = NULL;
	}
}

const char* Splash::getName()
{
	return SPLASH_SCREEN_NAME;
}

void Splash::buttonAction(UIButton* button)
{
	int index = getIndexForButton(button);
	if(index == 0)
	{
		ScreenManager::getInstance()->switchScreen(MAIN_MENU_SCREEN_NAME);
	}

}
